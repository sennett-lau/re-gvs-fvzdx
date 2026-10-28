#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0,
    0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001AC000;
    case 2u: goto L_001AC020;
    case 3u: goto L_001AC038;
    case 4u: goto L_001AC05C;
    case 5u: goto L_001AC070;
    case 6u: goto L_001AC098;
    case 7u: goto L_001AC09C;
    case 8u: goto L_001AC0A0;
    case 9u: goto L_001AC0F0;
    case 10u: goto L_001AC12C;
    case 11u: goto L_001AC170;
    case 12u: goto L_001AC188;
    case 13u: goto L_001AC19C;
    case 14u: goto L_001AC1D4;
    case 15u: goto L_001AC1E8;
    case 16u: goto L_001AC260;
    case 17u: goto L_001AC29C;
    case 18u: goto L_001AC2D8;
    case 19u: goto L_001AC2F4;
    case 20u: goto L_001AC30C;
    case 21u: goto L_001AC320;
    case 22u: goto L_001AC344;
    case 23u: goto L_001AC358;
    case 24u: goto L_001AC3D0;
    case 25u: goto L_001AC410;
    case 26u: goto L_001AC454;
    case 27u: goto L_001AC478;
    case 28u: goto L_001AC4CC;
    case 29u: goto L_001AC500;
    case 30u: goto L_001AC580;
    case 31u: goto L_001AC5C0;
    case 32u: goto L_001AC604;
    case 33u: goto L_001AC620;
    case 34u: goto L_001AC674;
    case 35u: goto L_001AC6A8;
    case 36u: goto L_001AC720;
    case 37u: goto L_001AC78C;
    case 38u: goto L_001AC79C;
    case 39u: goto L_001AC7B0;
    case 40u: goto L_001AC81C;
    case 41u: goto L_001AC82C;
    case 42u: goto L_001AC840;
    case 43u: goto L_001ACA20;
    case 44u: goto L_001ACC84;
    case 45u: goto L_001ACCAC;
    case 46u: goto L_001ACCC4;
    case 47u: goto L_001ACCD0;
    case 48u: goto L_001ACD28;
    case 49u: goto L_001ACDA0;
    case 50u: goto L_001ACDC4;
    case 51u: goto L_001ACE10;
    case 52u: goto L_001ACE60;
    case 53u: goto L_001ACE6C;
    case 54u: goto L_001ACE78;
    case 55u: goto L_001AD0B8;
    case 56u: goto L_001AD0E0;
    case 57u: goto L_001AD11C;
    case 58u: goto L_001AD138;
    case 59u: goto L_001AD150;
    case 60u: goto L_001AD174;
    case 61u: goto L_001AD18C;
    case 62u: goto L_001AD194;
    case 63u: goto L_001AD1A4;
    case 64u: goto L_001AD1B8;
    case 65u: goto L_001AD1D4;
    case 66u: goto L_001AD1DC;
    case 67u: goto L_001AD1EC;
    case 68u: goto L_001AD200;
    case 69u: goto L_001AD208;
    case 70u: goto L_001AD230;
    case 71u: goto L_001AD244;
    case 72u: goto L_001AD258;
    case 73u: goto L_001AD278;
    case 74u: goto L_001AD28C;
    case 75u: goto L_001AD2E4;
    case 76u: goto L_001AD318;
    case 77u: goto L_001AD330;
    case 78u: goto L_001AD338;
    case 79u: goto L_001AD364;
    case 80u: goto L_001AD370;
    case 81u: goto L_001AD3BC;
    case 82u: goto L_001AD3D4;
    case 83u: goto L_001AD3EC;
    case 84u: goto L_001AD404;
    case 85u: goto L_001AD40C;
    case 86u: goto L_001AD420;
    case 87u: goto L_001AD428;
    case 88u: goto L_001AD43C;
    case 89u: goto L_001AD460;
    case 90u: goto L_001AD474;
    case 91u: goto L_001AD490;
    case 92u: goto L_001AD4D0;
    case 93u: goto L_001AD4F8;
    case 94u: goto L_001AD640;
    case 95u: goto L_001AD6FC;
    case 96u: goto L_001AD77C;
    case 97u: goto L_001AD794;
    case 98u: goto L_001AD7BC;
    case 99u: goto L_001AD850;
    case 100u: goto L_001AD88C;
    case 101u: goto L_001AD894;
    case 102u: goto L_001AD89C;
    case 103u: goto L_001AD8AC;
    case 104u: goto L_001AD8B8;
    case 105u: goto L_001AD908;
    case 106u: goto L_001AD920;
    case 107u: goto L_001AD940;
    case 108u: goto L_001AD970;
    case 109u: goto L_001AD988;
    case 110u: goto L_001AD9B0;
    case 111u: goto L_001ADA1C;
    case 112u: goto L_001ADA64;
    case 113u: goto L_001ADA74;
    case 114u: goto L_001ADA8C;
    case 115u: goto L_001ADAC0;
    case 116u: goto L_001ADB30;
    case 117u: goto L_001ADB50;
    case 118u: goto L_001ADB90;
    case 119u: goto L_001ADBC4;
    case 120u: goto L_001ADBD4;
    case 121u: goto L_001ADBE8;
    case 122u: goto L_001ADC10;
    case 123u: goto L_001ADC20;
    case 124u: goto L_001ADC58;
    case 125u: goto L_001ADC68;
    case 126u: goto L_001ADD7C;
    case 127u: goto L_001ADDA8;
    case 128u: goto L_001ADDC0;
    case 129u: goto L_001ADDCC;
    case 130u: goto L_001ADE10;
    case 131u: goto L_001ADF2C;
    case 132u: goto L_001ADF44;
    case 133u: goto L_001ADF60;
    case 134u: goto L_001ADF74;
    case 135u: goto L_001ADF88;
    case 136u: goto L_001ADFF8;
    case 137u: goto L_001AE008;
    case 138u: goto L_001AE010;
    case 139u: goto L_001AE01C;
    case 140u: goto L_001AE02C;
    case 141u: goto L_001AE040;
    case 142u: goto L_001AE08C;
    case 143u: goto L_001AE140;
    case 144u: goto L_001AE178;
    case 145u: goto L_001AE188;
    case 146u: goto L_001AE194;
    case 147u: goto L_001AE1A0;
    case 148u: goto L_001AE1D4;
    case 149u: goto L_001AE1E4;
    case 150u: goto L_001AE1F4;
    case 151u: goto L_001AE238;
    case 152u: goto L_001AE24C;
    case 153u: goto L_001AE27C;
    case 154u: goto L_001AE2E4;
    case 155u: goto L_001AE2EC;
    case 156u: goto L_001AE300;
    case 157u: goto L_001AE30C;
    case 158u: goto L_001AE338;
    case 159u: goto L_001AE344;
    case 160u: goto L_001AE398;
    case 161u: goto L_001AE3A4;
    case 162u: goto L_001AE400;
    case 163u: goto L_001AE480;
    case 164u: goto L_001AE490;
    case 165u: goto L_001AE4A4;
    case 166u: goto L_001AE4E0;
    case 167u: goto L_001AE52C;
    case 168u: goto L_001AE53C;
    case 169u: goto L_001AE558;
    case 170u: goto L_001AE584;
    case 171u: goto L_001AE5AC;
    case 172u: goto L_001AE5B8;
    case 173u: goto L_001AE5E4;
    case 174u: goto L_001AE5F0;
    case 175u: goto L_001AE650;
    case 176u: goto L_001AE65C;
    case 177u: goto L_001AE6CC;
    case 178u: goto L_001AE6F8;
    case 179u: goto L_001AE708;
    case 180u: goto L_001AE71C;
    case 181u: goto L_001AE750;
    case 182u: goto L_001AE760;
    case 183u: goto L_001AE770;
    case 184u: goto L_001AE780;
    case 185u: goto L_001AE790;
    case 186u: goto L_001AE7D8;
    case 187u: goto L_001AE840;
    case 188u: goto L_001AE894;
    case 189u: goto L_001AE8A0;
    case 190u: goto L_001AE8D0;
    case 191u: goto L_001AE8DC;
    case 192u: goto L_001AE93C;
    case 193u: goto L_001AE948;
    case 194u: goto L_001AE980;
    case 195u: goto L_001AE9A4;
    case 196u: goto L_001AE9B4;
    case 197u: goto L_001AE9CC;
    case 198u: goto L_001AE9D8;
    case 199u: goto L_001AEA10;
    case 200u: goto L_001AEA34;
    case 201u: goto L_001AEA44;
    case 202u: goto L_001AEAC0;
    case 203u: goto L_001AEB08;
    case 204u: goto L_001AEB70;
    case 205u: goto L_001AEBC4;
    case 206u: goto L_001AEBD0;
    case 207u: goto L_001AEC00;
    case 208u: goto L_001AEC0C;
    case 209u: goto L_001AEC6C;
    case 210u: goto L_001AEC78;
    case 211u: goto L_001AECB0;
    case 212u: goto L_001AECD4;
    case 213u: goto L_001AECE4;
    case 214u: goto L_001AECFC;
    case 215u: goto L_001AED08;
    case 216u: goto L_001AED40;
    case 217u: goto L_001AED64;
    case 218u: goto L_001AED74;
    case 219u: goto L_001AEE4C;
    case 220u: goto L_001AEE64;
    case 221u: goto L_001AEF10;
    case 222u: goto L_001AEF5C;
    case 223u: goto L_001AF000;
    case 224u: goto L_001AF054;
    case 225u: goto L_001AF060;
    case 226u: goto L_001AF090;
    case 227u: goto L_001AF09C;
    case 228u: goto L_001AF118;
    case 229u: goto L_001AF124;
    case 230u: goto L_001AF160;
    case 231u: goto L_001AF184;
    case 232u: goto L_001AF194;
    case 233u: goto L_001AF1AC;
    case 234u: goto L_001AF1B8;
    case 235u: goto L_001AF1F0;
    case 236u: goto L_001AF214;
    case 237u: goto L_001AF224;
    case 238u: goto L_001AF288;
    case 239u: goto L_001AF2A4;
    case 240u: goto L_001AF2C0;
    case 241u: goto L_001AF2DC;
    case 242u: goto L_001AF320;
    case 243u: goto L_001AF37C;
    case 244u: goto L_001AF3AC;
    case 245u: goto L_001AF3B8;
    case 246u: goto L_001AF3C4;
    case 247u: goto L_001AF3D0;
    case 248u: goto L_001AF410;
    case 249u: goto L_001AF424;
    case 250u: goto L_001AF4E8;
    case 251u: goto L_001AF4F8;
    case 252u: goto L_001AF50C;
    case 253u: goto L_001AF51C;
    case 254u: goto L_001AF550;
    case 255u: goto L_001AF5B4;
    case 256u: goto L_001AF5CC;
    case 257u: goto L_001AF5D4;
    case 258u: goto L_001AF614;
    case 259u: goto L_001AF62C;
    case 260u: goto L_001AF634;
    case 261u: goto L_001AF684;
    case 262u: goto L_001AF69C;
    case 263u: goto L_001AF6D0;
    case 264u: goto L_001AF6F4;
    case 265u: goto L_001AF72C;
    case 266u: goto L_001AF73C;
    case 267u: goto L_001AF758;
    case 268u: goto L_001AF7A8;
    case 269u: goto L_001AF7B8;
    case 270u: goto L_001AF7CC;
    case 271u: goto L_001AF7DC;
    case 272u: goto L_001AF810;
    case 273u: goto L_001AF834;
    case 274u: goto L_001AF860;
    case 275u: goto L_001AF86C;
    case 276u: goto L_001AF878;
    case 277u: goto L_001AF888;
    case 278u: goto L_001AF894;
    case 279u: goto L_001AF8A4;
    case 280u: goto L_001AF8B0;
    case 281u: goto L_001AF8BC;
    case 282u: goto L_001AF908;
    case 283u: goto L_001AF914;
    case 284u: goto L_001AF920;
    case 285u: goto L_001AF974;
    case 286u: goto L_001AF9C4;
    case 287u: goto L_001AF9D4;
    case 288u: goto L_001AF9E8;
    case 289u: goto L_001AF9F8;
    case 290u: goto L_001AFA50;
    case 291u: goto L_001AFA90;
    case 292u: goto L_001AFAB0;
    case 293u: goto L_001AFB48;
    case 294u: goto L_001AFB5C;
    case 295u: goto L_001AFB74;
    case 296u: goto L_001AFBE8;
    case 297u: goto L_001AFBF4;
    case 298u: goto L_001AFCE0;
    case 299u: goto L_001AFD1C;
    case 300u: goto L_001AFD30;
    case 301u: goto L_001AFD48;
    case 302u: goto L_001AFD84;
    case 303u: goto L_001AFDE4;
    case 304u: goto L_001AFDF8;
    case 305u: goto L_001AFE28;
    case 306u: goto L_001AFE40;
    case 307u: goto L_001AFE74;
    case 308u: goto L_001AFE88;
    case 309u: goto L_001AFEB4;
    case 310u: goto L_001AFEDC;
    case 311u: goto L_001AFEEC;
    case 312u: goto L_001AFF30;
    case 313u: goto L_001AFF80;
    case 314u: goto L_001AFF90;
    case 315u: goto L_001AFFA4;
    default: bad_entry(c, 0x001AC000u); return;
    }
L_001AC000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC098; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 12064u);
    set32(c.r[4], c.r[5].w[0] << 10);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001AC078; } }
L_001AC020:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AC074; }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC038u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 5u, depth + 1u); else { c.pc = 0x001B4270u; return; } if (c.pc != 0x001AC038u) [[unlikely]] return; }
L_001AC038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC070; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC05Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002B(c, 36u, depth + 1u); else { c.pc = 0x001AC720u; return; } if (c.pc != 0x001AC05Cu) [[unlikely]] return; }
L_001AC05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC070; } }
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC070u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 42u, depth + 1u); else { c.pc = 0x001AC840u; return; } if (c.pc != 0x001AC070u) [[unlikely]] return; }
L_001AC070:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AC074:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001AC078:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26452u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC020u | kUnwind; return; } goto L_001AC020; } }
L_001AC098:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AC09C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AC0A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26440u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABFDCu | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 459u, depth); } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AC0F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 5920u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC218; } }
L_001AC12C:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001AC214; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC210; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 532u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC210; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14112u);
    set32(c.r[4], c.r[5].w[0] << 10);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001AC1F0; } }
L_001AC170:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AC1EC; }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC188u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 5u, depth + 1u); else { c.pc = 0x001B4270u; return; } if (c.pc != 0x001AC188u) [[unlikely]] return; }
L_001AC188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC1E8; } }
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC19Cu); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AC19Cu) [[unlikely]] return; }
L_001AC19C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AC1E8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1D4u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002B(c, 36u, depth + 1u); else { c.pc = 0x001AC720u; return; } if (c.pc != 0x001AC1D4u) [[unlikely]] return; }
L_001AC1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC1E8; } }
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1E8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 42u, depth + 1u); else { c.pc = 0x001AC840u; return; } if (c.pc != 0x001AC1E8u) [[unlikely]] return; }
L_001AC1E8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AC1EC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001AC1F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26456u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC170u | kUnwind; return; } goto L_001AC170; } }
L_001AC210:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AC214:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AC218:
    set32(c.r[5], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26440u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC12Cu | kUnwind; return; } goto L_001AC12C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AC260:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 5920u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC388; } }
L_001AC29C:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001AC384; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC380; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 532u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC380; } }
    set32(c.r[4], c.r[28].w[0] - 25552u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001AC2D8u) [[unlikely]] return; }
L_001AC2D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 7968u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC360; } }
L_001AC2F4:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AC35C; }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC30Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 5u, depth + 1u); else { c.pc = 0x001B4270u; return; } if (c.pc != 0x001AC30Cu) [[unlikely]] return; }
L_001AC30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC358; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC320u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 381u, depth + 1u); else { c.pc = 0x001B3DD0u; return; } if (c.pc != 0x001AC320u) [[unlikely]] return; }
L_001AC320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC358; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC344u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002B(c, 36u, depth + 1u); else { c.pc = 0x001AC720u; return; } if (c.pc != 0x001AC344u) [[unlikely]] return; }
L_001AC344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC358; } }
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC358u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 42u, depth + 1u); else { c.pc = 0x001AC840u; return; } if (c.pc != 0x001AC358u) [[unlikely]] return; }
L_001AC358:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AC35C:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001AC360:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26444u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC2F4u | kUnwind; return; } goto L_001AC2F4; } }
L_001AC380:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AC384:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AC388:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26440u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC29Cu | kUnwind; return; } goto L_001AC29C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AC3D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC530; } }
L_001AC410:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AC52C; }
    set32(c.r[20], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001AC528; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC528; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC528; } }
    set32(c.r[4], c.r[28].w[0] - 25552u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC454u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001AC454u) [[unlikely]] return; }
L_001AC454:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    set32(c.r[22], c.r[21].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[22].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC508; } }
L_001AC478:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001AC504; }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[5].d[0];  if (t) { goto L_001AC500; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AC500; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 64u);  if (t) { goto L_001AC4C4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC500; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_001AC4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4CCu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 381u, depth + 1u); else { c.pc = 0x001B3DD0u; return; } if (c.pc != 0x001AC4CCu) [[unlikely]] return; }
L_001AC4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC500; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC528; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC500u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002B(c, 39u, depth + 1u); else { c.pc = 0x001AC7B0u; return; } if (c.pc != 0x001AC500u) [[unlikely]] return; }
L_001AC500:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001AC504:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001AC508:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC478u | kUnwind; return; } goto L_001AC478; } }
L_001AC528:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AC52C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AC530:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC410u | kUnwind; return; } goto L_001AC410; } }
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
L_001AC580:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC6D8; } }
L_001AC5C0:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AC6D4; }
    set32(c.r[20], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001AC6D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AC6D0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC6D0; } }
    set32(c.r[4], c.r[28].w[0] - 25552u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC604u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001AC604u) [[unlikely]] return; }
L_001AC604:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14112u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001AC6B0; } }
L_001AC620:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001AC6AC; }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[5].d[0];  if (t) { goto L_001AC6A8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AC6A8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 64u);  if (t) { goto L_001AC66C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC6A8; } }
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_001AC66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC674u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 381u, depth + 1u); else { c.pc = 0x001B3DD0u; return; } if (c.pc != 0x001AC674u) [[unlikely]] return; }
L_001AC674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC6A8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AC6D0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6A8u); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002B(c, 39u, depth + 1u); else { c.pc = 0x001AC7B0u; return; } if (c.pc != 0x001AC6A8u) [[unlikely]] return; }
L_001AC6A8:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001AC6AC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_001AC6B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26456u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC620u | kUnwind; return; } goto L_001AC620; } }
L_001AC6D0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AC6D4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001AC6D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC5C0u | kUnwind; return; } goto L_001AC5C0; } }
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
L_001AC720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[6].sd[0] < 69ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[7], c.r[4], c.r[0]);  if (t) { goto L_001AC73C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AC79C; } }
L_001AC73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_001AC764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AC79C; } }
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 1;
L_001AC764:
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12032u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_001AC794; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC78Cu); mmi::paddub(c.r[5], c.r[7], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC78Cu) [[unlikely]] return; }
L_001AC78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC79C; } }
L_001AC794:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC79Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC79Cu) [[unlikely]] return; }
L_001AC79C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AC7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[6].sd[0] < 69ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[7], c.r[4], c.r[0]);  if (t) { goto L_001AC7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AC82C; } }
L_001AC7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 127ull;  if (t) { goto L_001AC7F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AC82C; } }
    c.r[2].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 1;
L_001AC7F4:
    set32(c.r[6], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 11888u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_001AC824; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC81Cu); mmi::paddub(c.r[5], c.r[7], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC81Cu) [[unlikely]] return; }
L_001AC81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC82C; } }
L_001AC824:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC82Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC82Cu) [[unlikely]] return; }
L_001AC82C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AC840:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    set32(c.r[17], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[30], ld32((c.r[5].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 4);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[22], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_001AC8CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1810ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_001AC8D0; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AC8CC:
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_001AC8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AC8E0; } }
    c.r[2].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.budget -= 2;
L_001AC8E0:
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 6u));
    st8((c.r[16].w[0] + 574u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 592u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    st32((c.r[16].w[0] + 600u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 608u), c.r[22].w[0]);
    c.r[21].d[0] = ld8((c.r[17].w[0] + 578u));
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[23].w[0] + 6u));
    st8((c.r[17].w[0] + 577u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 596u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    st32((c.r[17].w[0] + 604u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 612u), c.r[22].w[0]);
    c.r[2].d[0] = ld8((c.r[30].w[0] + 2u));
    st8((c.r[17].w[0] + 581u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 572u));  if (t) { goto L_001AC944; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 572u));
    c.budget -= 3;
L_001AC944:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 539u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 539u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[17].w[0] + 539u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACACC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC9A8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001AC9A8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC9EC; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AC9EC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001AC9EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACACC; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 18u);  if (t) { goto L_001ACACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001ACA20u) [[unlikely]] return; }
L_001ACA20:
    set32(c.r[2], 0u + 17u);
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 577u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 596u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 604u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 612u), c.r[22].w[0]);
    st8((c.r[16].w[0] + 581u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 572u));  if (t) { goto L_001ACA5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 572u));
    c.budget -= 3;
L_001ACA5C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 539u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[2].w[0] + 540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 539u)));
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[16].w[0] + 539u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[18].d[0];
    set32(c.r[2], 0u + 80u);
    st16((c.r[3].w[0] + 842u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 838u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 578u));
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[19].d[0];
    set32(c.r[2], 0u + 80u);
    st16((c.r[3].w[0] + 842u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 838u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 28;
L_001ACACC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACB2C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[19].d[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACC14; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACC14; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 844u)));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ACC14; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001ACC14; } }
L_001ACB2C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_001ACB40; } }
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 1;
L_001ACB40:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 1u);  goto L_001ACB54; }
L_001ACB54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ACC14; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 28672ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 4096ull;  if (t) { goto L_001ACBD8; } }
    c.f[1] = ld32((c.r[2].w[0] + 1244u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ACBA4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 842u)));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ACBBC; } }
L_001ACBA4:
    c.r[5].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 842u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st16((c.r[2].w[0] + 842u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 838u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ACBBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 842u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001ACC14; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001ACC14; } }
L_001ACBD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACC14; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 842u)));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ACC14; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st16((c.r[2].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 80u);
    st16((c.r[2].w[0] + 838u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001ACC14:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_001ACC3C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 97u);  if (t) { goto L_001ACC3C; } }
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 578u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001ACC3C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACCB4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    st32((c.r[29].w[0] + 172u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[17], c.r[0]);  if (t) { goto L_001ACC64; } }
    st32((c.r[29].w[0] + 172u), c.r[18].w[0]);
    c.budget -= 1;
L_001ACC64:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_001ACC78; } }
    mmi::paddub(c.r[21], c.r[19], c.r[0]);
    c.budget -= 1;
L_001ACC78:
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC84u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 94u, depth + 1u); else { c.pc = 0x001AD640u; return; } if (c.pc != 0x001ACC84u) [[unlikely]] return; }
L_001ACC84:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 1472u);
    set32(c.r[5], c.r[19].w[0] + 1472u);
    set32(c.r[2], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCACu); st16((c.r[2].w[0] + 586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001ACCACu) [[unlikely]] return; }
L_001ACCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001ACCC8; } }
L_001ACCB4:
    c.r[6].d[0] = ld8((c.r[22].w[0] + 14u));
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCC4u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 94u, depth + 1u); else { c.pc = 0x001AD640u; return; } if (c.pc != 0x001ACCC4u) [[unlikely]] return; }
L_001ACCC4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ACCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCD0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 359u, depth + 1u); else { c.pc = 0x002CB8C0u; return; } if (c.pc != 0x001ACCD0u) [[unlikely]] return; }
L_001ACCD0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[3].d[0] = c.r[3].d[0] & 48ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACCE4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ACCE4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACD28; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACD28; } }
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD28u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001ACD28u) [[unlikely]] return; }
L_001ACD28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ACD70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ACD70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ACD70; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ACD70; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1280u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 1280u), c.r[3].w[0]);
    c.budget -= 3;
L_001ACD70:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[20], c.r[17], c.r[0]);  if (t) { goto L_001ACD94; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_001ACD98; } }
    mmi::paddub(c.r[20], c.r[19], c.r[0]);
    c.budget -= 1;
L_001ACD94:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_001ACD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDA0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 4u, depth + 1u); else { c.pc = 0x002CC170u; return; } if (c.pc != 0x001ACDA0u) [[unlikely]] return; }
L_001ACDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001ACE70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001ACE08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 82u, depth + 1u); else { c.pc = 0x002DCB70u; return; } if (c.pc != 0x001ACDC4u) [[unlikely]] return; }
L_001ACDC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACDD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001ACE64; } }
L_001ACDD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 11616u);
    st32((c.r[4].w[0] + 580u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 584u), c.r[19].w[0]);
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 651u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ACE60; } }
L_001ACE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE10u);  if (depth < kMaxDepth) unit_0077(c, 82u, depth + 1u); else { c.pc = 0x002DCB70u; return; } if (c.pc != 0x001ACE10u) [[unlikely]] return; }
L_001ACE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACE60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[2].w[0] - 11616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11600u);
    st32((c.r[3].w[0] + 580u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 584u), c.r[19].w[0]);
    c.r[6].d[0] = ld8((c.r[22].w[0] + 8u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[3].w[0] + 651u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE60u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 79u, depth + 1u); else { c.pc = 0x002E5040u; return; } if (c.pc != 0x001ACE60u) [[unlikely]] return; }
L_001ACE60:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ACE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE6Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 182u, depth + 1u); else { c.pc = 0x002DDDA0u; return; } if (c.pc != 0x001ACE6Cu) [[unlikely]] return; }
L_001ACE6C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001ACE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE78u);  if (depth < kMaxDepth) unit_0013(c, 20u, depth + 1u); else { c.pc = 0x0014C8D0u; return; } if (c.pc != 0x001ACE78u) [[unlikely]] return; }
L_001ACE78:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACF18; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 574u));
    st8((c.r[18].w[0] + 574u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    st32((c.r[18].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 600u)));
    st32((c.r[18].w[0] + 600u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACF18; } }
    st8((c.r[18].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 577u));
    st8((c.r[18].w[0] + 577u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 596u)));
    st32((c.r[18].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    st32((c.r[18].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 612u)));
    st32((c.r[18].w[0] + 612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 572u));  if (t) { goto L_001ACEF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 572u));
    c.budget -= 3;
L_001ACEF8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 539u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st16((c.r[2].w[0] + 540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 539u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[18].w[0] + 539u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001ACF18:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACFA4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACF3C; } }
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_001ACF3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACFA4; } }
    st8((c.r[19].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 577u));
    st8((c.r[19].w[0] + 577u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 596u)));
    st32((c.r[19].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 604u)));
    st32((c.r[19].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 612u)));
    st32((c.r[19].w[0] + 612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 572u));  if (t) { goto L_001ACF84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 572u));
    c.budget -= 3;
L_001ACF84:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 539u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st16((c.r[2].w[0] + 540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 539u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[19].w[0] + 539u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001ACFA4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[17], c.r[0]);  if (t) { goto L_001ACFBC; } }
    mmi::paddub(c.r[20], c.r[18], c.r[0]);
    c.budget -= 1;
L_001ACFBC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACFD0; } }
    mmi::paddub(c.r[21], c.r[19], c.r[0]);
    c.budget -= 1;
L_001ACFD0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD02C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD02C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AD078; } }
L_001AD02C:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AD078; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 1u);  goto L_001AD050; }
L_001AD050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD078; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 842u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001AD078; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001AD078:
    c.f[3] = ld32((c.r[23].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] - 28688u);
    c.f[2] = ld32((c.r[23].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 28688u);
    c.f[1] = ld32((c.r[23].w[0] + 104u));
    c.f[0] = ld32((c.r[23].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[2].w[0] - 28704u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0B8u); st32((c.r[3].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD0B8u) [[unlikely]] return; }
L_001AD0B8:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 7u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_001AD490; } }
    set32(c.r[4], c.r[4].w[0] + 12992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AD0E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD124; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AD124; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD11Cu); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0050(c, 326u, depth + 1u); else { c.pc = 0x00242280u; return; } if (c.pc != 0x001AD11Cu) [[unlikely]] return; }
L_001AD11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 531u));  if (t) { goto L_001AD154; } }
L_001AD124:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 531u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD138u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0047(c, 264u, depth + 1u); else { c.pc = 0x0021FC70u; return; } if (c.pc != 0x001AD138u) [[unlikely]] return; }
L_001AD138:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD150u); set32(c.r[4], c.r[2].w[0] - 28704u);  if (depth < kMaxDepth) unit_0093(c, 142u, depth + 1u); else { c.pc = 0x0034E040u; return; } if (c.pc != 0x001AD150u) [[unlikely]] return; }
L_001AD150:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 531u));
    c.budget -= 1;
L_001AD154:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD17C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD174u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD174u) [[unlikely]] return; }
L_001AD174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));  if (t) { goto L_001AD494; } }
L_001AD17C:
    set32(c.r[4], c.r[2].w[0] - 28704u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD18Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD18Cu) [[unlikely]] return; }
L_001AD18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1A4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0048(c, 34u, depth + 1u); else { c.pc = 0x002208C0u; return; } if (c.pc != 0x001AD1A4u) [[unlikely]] return; }
L_001AD1A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1B8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD1B8u) [[unlikely]] return; }
L_001AD1B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AD490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1D4u); set32(c.r[4], c.r[2].w[0] - 28704u);  if (depth < kMaxDepth) unit_0093(c, 142u, depth + 1u); else { c.pc = 0x0034E040u; return; } if (c.pc != 0x001AD1D4u) [[unlikely]] return; }
L_001AD1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1ECu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_004A(c, 195u, depth + 1u); else { c.pc = 0x0022B080u; return; } if (c.pc != 0x001AD1ECu) [[unlikely]] return; }
L_001AD1EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD200u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD200u) [[unlikely]] return; }
L_001AD200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD208:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD260; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD230u); set32(c.r[4], c.r[2].w[0] - 28704u);  if (depth < kMaxDepth) unit_004F(c, 133u, depth + 1u); else { c.pc = 0x0023D2C0u; return; } if (c.pc != 0x001AD230u) [[unlikely]] return; }
L_001AD230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD244u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD244u) [[unlikely]] return; }
L_001AD244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD258u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD258u) [[unlikely]] return; }
L_001AD258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD278u); set32(c.r[4], c.r[2].w[0] - 28704u);  if (depth < kMaxDepth) unit_0093(c, 142u, depth + 1u); else { c.pc = 0x0034E040u; return; } if (c.pc != 0x001AD278u) [[unlikely]] return; }
L_001AD278:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD28Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_004E(c, 329u, depth + 1u); else { c.pc = 0x0023BC00u; return; } if (c.pc != 0x001AD28Cu) [[unlikely]] return; }
L_001AD28C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD2B4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 40u);  if (t) { goto L_001AD2B4; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD490; } }
L_001AD2B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AD2D0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001AD2EC; } }
L_001AD2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD2E4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD2E4u) [[unlikely]] return; }
L_001AD2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD2EC:
    set32(c.r[2], c.r[2].w[0] - 20112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD318u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD318u) [[unlikely]] return; }
L_001AD318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD320:
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD330u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD330u) [[unlikely]] return; }
L_001AD330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD338:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD354; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_001AD378; } }
L_001AD354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 28704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD364u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 75u, depth + 1u); else { c.pc = 0x002316A0u; return; } if (c.pc != 0x001AD364u) [[unlikely]] return; }
L_001AD364:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD370u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001AD370u) [[unlikely]] return; }
L_001AD370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD378:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  goto L_001AD3F4; }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  goto L_001AD3DC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  goto L_001AD3C4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  goto L_001AD3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD3AC:
    set32(c.r[5], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3BCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 111u, depth + 1u); else { c.pc = 0x002353F0u; return; } if (c.pc != 0x001AD3BCu) [[unlikely]] return; }
L_001AD3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD3C4:
    set32(c.r[5], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3D4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 111u, depth + 1u); else { c.pc = 0x002353F0u; return; } if (c.pc != 0x001AD3D4u) [[unlikely]] return; }
L_001AD3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD3DC:
    set32(c.r[5], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3ECu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 111u, depth + 1u); else { c.pc = 0x002353F0u; return; } if (c.pc != 0x001AD3ECu) [[unlikely]] return; }
L_001AD3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD3F4:
    set32(c.r[5], c.r[2].w[0] - 28704u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD404u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 111u, depth + 1u); else { c.pc = 0x002353F0u; return; } if (c.pc != 0x001AD404u) [[unlikely]] return; }
L_001AD404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD40C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD420u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD420u) [[unlikely]] return; }
L_001AD420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD490; } }
L_001AD428:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 531u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD43Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0047(c, 268u, depth + 1u); else { c.pc = 0x0021FEB0u; return; } if (c.pc != 0x001AD43Cu) [[unlikely]] return; }
L_001AD43C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);  if (t) { goto L_001AD468; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD460u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD460u) [[unlikely]] return; }
L_001AD460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_001AD478; } }
L_001AD468:
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD474u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 127u, depth + 1u); else { c.pc = 0x00191C10u; return; } if (c.pc != 0x001AD474u) [[unlikely]] return; }
L_001AD474:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_001AD478:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AD490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD490u); set32(c.r[4], c.r[2].w[0] - 28704u);  if (depth < kMaxDepth) unit_0093(c, 142u, depth + 1u); else { c.pc = 0x0034E040u; return; } if (c.pc != 0x001AD490u) [[unlikely]] return; }
L_001AD490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));
    c.budget -= 1;
L_001AD494:
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD4F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD4D8; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AD4D8; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4D0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x001AD4D0u) [[unlikely]] return; }
L_001AD4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (t) { goto L_001AD4FC; } }
L_001AD4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 11616u);
    c.r[5].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4F8u); c.r[5].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x001AD4F8u) [[unlikely]] return; }
L_001AD4F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 1;
L_001AD4FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD578; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD578; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD578; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 531u));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001AD578; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001AD578; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AD578; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD578; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 589u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 1572u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0] + 1572u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 589u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    st8((c.r[20].w[0] + 589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001AD578:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD5F0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD5F0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD5F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD5F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD5F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[21].d[0];  if (t) { goto L_001AD5F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 589u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 1566u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[21].w[0] + 1566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 589u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 589u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AD60C; } }
L_001AD5F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD60C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 1568u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 1568u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001AD60C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001AD640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_001AD678; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 2;
L_001AD678:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD690; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 2;
L_001AD690:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[18], c.r[4].w[0] + 64u);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 64u);  if (t) { goto L_001ADA4C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001AD8C4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001AD804; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001AD788; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001AD704; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[3].w[0] + 16u);  if (t) { goto L_001AD6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 100u);  if (t) { goto L_001AD82C; } }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 1;
L_001AD6F0:
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6FCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD6FCu) [[unlikely]] return; }
L_001AD6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD828; } }
L_001AD704:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD730; } }
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_001AD754; } }
L_001AD730:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001AD754:
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD77Cu); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD77Cu) [[unlikely]] return; }
L_001AD77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD828; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001AD788:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD794u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD794u) [[unlikely]] return; }
L_001AD794:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[19], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD7BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AD7BCu) [[unlikely]] return; }
L_001AD7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD828; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_001AD828; } }
L_001AD804:
    c.f[3] = ld32((c.r[16].w[0] + 1424u));
    c.f[2] = ld32((c.r[16].w[0] + 1428u));
    c.f[1] = ld32((c.r[16].w[0] + 1432u));
    c.f[0] = ld32((c.r[16].w[0] + 1436u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001AD828:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.budget -= 1;
L_001AD82C:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD850u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AD850u) [[unlikely]] return; }
L_001AD850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001AD884; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
L_001AD884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD88Cu); set32(c.r[5], c.r[17].w[0] + 1472u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001AD88Cu) [[unlikely]] return; }
L_001AD88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD894u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001AD894u) [[unlikely]] return; }
L_001AD894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD89Cu); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x001AD89Cu) [[unlikely]] return; }
L_001AD89C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD8ACu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001AD8ACu) [[unlikely]] return; }
L_001AD8AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD8B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001AD8B8u) [[unlikely]] return; }
L_001AD8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 104u);  if (t) { goto L_001ADA50; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001AD8C4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001AD97C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[16].w[0] + 32u);  goto L_001AD964; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001AD914; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[3].w[0] + 16u);  if (t) { goto L_001AD8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[29].w[0] + 100u);  if (t) { goto L_001AD9F8; } }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 1;
L_001AD8FC:
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD908u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD908u) [[unlikely]] return; }
L_001AD908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD9F4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001AD914:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD920u); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD920u) [[unlikely]] return; }
L_001AD920:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD940u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AD940u) [[unlikely]] return; }
L_001AD940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD9F4; } }
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001AD964:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD970u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD970u) [[unlikely]] return; }
L_001AD970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD9F4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001AD97C:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD988u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AD988u) [[unlikely]] return; }
L_001AD988:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[19], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AD9B0u) [[unlikely]] return; }
L_001AD9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD9F4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 9;
L_001AD9F4:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.budget -= 1;
L_001AD9F8:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA1Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001ADA1Cu) [[unlikely]] return; }
L_001ADA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ADA4C; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001ADA4C:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_001ADA50:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001ADA64u) [[unlikely]] return; }
L_001ADA64:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA74u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ADA74u) [[unlikely]] return; }
L_001ADA74:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA8Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ADA8Cu) [[unlikely]] return; }
L_001ADA8C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    st16((c.r[17].w[0] + 584u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001ADAC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 17u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 34u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001ADB84; } }
    c.f[20] = ld32((c.r[17].w[0] + 48u));
    c.f[21] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001ADB24; } }
    c.f[0] = c.f[20];
    c.f[20] = c.f[21];
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
L_001ADB24:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB30u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADB30u) [[unlikely]] return; }
L_001ADB30:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB50u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001ADB50u) [[unlikely]] return; }
L_001ADB50:
    c.f[1] = fp::sub(c.f[20], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001ADB7C; } }
    c.f[1] = fp::add(c.f[20], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001ADB88; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001ADBF0; } }
L_001ADB84:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001ADB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB90u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001ADB90u) [[unlikely]] return; }
L_001ADB90:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { goto L_001ADBB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001ADBEC; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001ADBB8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBC4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADBC4u) [[unlikely]] return; }
L_001ADBC4:
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBD4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001ADBD4u) [[unlikely]] return; }
L_001ADBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBE8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001ADBE8u) [[unlikely]] return; }
L_001ADBE8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001ADBEC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001ADBF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ADC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001ADC20:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC58u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001ADC58u) [[unlikely]] return; }
L_001ADC58:
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC68u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001ADC68u) [[unlikely]] return; }
L_001ADC68:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[3] = fp::add(c.f[0], c.f[3]);
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001ADCA8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADCC4; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADCC4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD10; } }
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADCE8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADCE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD04; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADD04; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD10; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001ADD10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADD5C; } }
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADD34; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD50; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADD50; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001ADD5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE114; } }
    set32(c.r[18], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 236u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001ADE68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.budget -= 1;
L_001ADD7C:
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDA8u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADDA8u) [[unlikely]] return; }
L_001ADDA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDC0u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001ADDC0u) [[unlikely]] return; }
L_001ADDC0:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDCCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001ADDCCu) [[unlikely]] return; }
L_001ADDCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ADDF0; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_001ADDF0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ADE38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE10u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001ADE10u) [[unlikely]] return; }
L_001ADE10:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ADE38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001ADE58; } }
L_001ADE38:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ADE58; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001ADE58:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 4;
L_001ADE68:
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADD7Cu | kUnwind; return; } goto L_001ADD7C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001AE084; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001ADF80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ADEF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001ADEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE0FC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001ADEB0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001ADEE8; } }
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE104; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ADEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001AE118; } }
L_001ADEF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF2Cu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADF2Cu) [[unlikely]] return; }
L_001ADF2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF44u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001ADF44u) [[unlikely]] return; }
L_001ADF44:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF60u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001ADF60u) [[unlikely]] return; }
L_001ADF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF74u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADF74u) [[unlikely]] return; }
L_001ADF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AE108; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001ADF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF88u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001ADF88u) [[unlikely]] return; }
L_001ADF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE048; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADFF8u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ADFF8u) [[unlikely]] return; }
L_001ADFF8:
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE008u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE008u) [[unlikely]] return; }
L_001AE008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE010u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001AE010u) [[unlikely]] return; }
L_001AE010:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE01Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE01Cu) [[unlikely]] return; }
L_001AE01C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE02Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE02Cu) [[unlikely]] return; }
L_001AE02C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE040u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AE040u) [[unlikely]] return; }
L_001AE040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE104; } }
L_001AE048:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28704u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE104; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001AE084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE08Cu); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B45F0u; return; } if (c.pc != 0x001AE08Cu) [[unlikely]] return; }
L_001AE08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE0CC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28704u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE104; } }
L_001AE0CC:
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE104; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE114; } }
L_001AE104:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AE108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE114; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE114:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AE118:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001AE140:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[20], c.r[0]);
    mmi::paddub(c.r[18], c.r[20], c.r[0]);
    c.budget -= 14;
L_001AE178:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE188u); set32(c.r[6], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE188u) [[unlikely]] return; }
L_001AE188:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE194u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE194u) [[unlikely]] return; }
L_001AE194:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AE1A0u) [[unlikely]] return; }
L_001AE1A0:
    c.f[2] = ld32((c.r[21].w[0] + 48u));
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001AE1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE4B0; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001AE1C8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1D4u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE1D4u) [[unlikely]] return; }
L_001AE1D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1E4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE1E4u) [[unlikely]] return; }
L_001AE1E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1F4u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x001AE1F4u) [[unlikely]] return; }
L_001AE1F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001AE258; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AE21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[20].w[0] + 192u));  if (t) { goto L_001AE224; } }
L_001AE21C:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_001AE224:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE238u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE238u) [[unlikely]] return; }
L_001AE238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE24Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AE24Cu) [[unlikely]] return; }
L_001AE24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AE4B0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AE258:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE178u | kUnwind; return; } goto L_001AE178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[16], c.r[28].w[0] - 30392u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[18], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_001AE27C:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2E4u); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE2E4u) [[unlikely]] return; }
L_001AE2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2ECu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001AE2ECu) [[unlikely]] return; }
L_001AE2EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE300u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE300u) [[unlikely]] return; }
L_001AE300:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE30Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE30Cu) [[unlikely]] return; }
L_001AE30C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001AE32C; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_001AE32C:
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE338u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE338u) [[unlikely]] return; }
L_001AE338:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE344u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE344u) [[unlikely]] return; }
L_001AE344:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001AE364; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001AE364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001AE3C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 176u);  if (t) { goto L_001AE3B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001AE38C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE3EC; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001AE38C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE398u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE398u) [[unlikely]] return; }
L_001AE398:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3A4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AE3A4u) [[unlikely]] return; }
L_001AE3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_001AE3F8; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AE3B0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001AE3F4; } }
L_001AE3C0:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE3F4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_001AE4B4; } }
L_001AE3F4:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_001AE3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE400u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AE400u) [[unlikely]] return; }
L_001AE400:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001AE42C; }
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.f[20] = c.f[0];
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 7;
L_001AE42C:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE27Cu | kUnwind; return; } goto L_001AE27C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE4B0; } }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AE4AC; } }
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE480u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE480u) [[unlikely]] return; }
L_001AE480:
    c.f[12] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE490u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001AE490u) [[unlikely]] return; }
L_001AE490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4A4u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AE4A4u) [[unlikely]] return; }
L_001AE4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AE4B0; } }
L_001AE4AC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE4B0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AE4B4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001AE4E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 17u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 34u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 34u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001AE570; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE52Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AE52Cu) [[unlikely]] return; }
L_001AE52C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE53Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AE53Cu) [[unlikely]] return; }
L_001AE53C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AE570; } }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE558u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AE558u) [[unlikely]] return; }
L_001AE558:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AE570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE728; } }
L_001AE570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE584u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 366u, depth + 1u); else { c.pc = 0x001B3A80u; return; } if (c.pc != 0x001AE584u) [[unlikely]] return; }
L_001AE584:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001AE59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001AE728; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001AE59C:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5ACu); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE5ACu) [[unlikely]] return; }
L_001AE5AC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5B8u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE5B8u) [[unlikely]] return; }
L_001AE5B8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001AE5D8; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_001AE5D8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5E4u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE5E4u) [[unlikely]] return; }
L_001AE5E4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5F0u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE5F0u) [[unlikely]] return; }
L_001AE5F0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_001AE610; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001AE610:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE6B8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001AE68C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001AE664; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001AE644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001AE6C4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001AE644:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE650u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE650u) [[unlikely]] return; }
L_001AE650:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE65Cu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AE65Cu) [[unlikely]] return; }
L_001AE65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE6C0; } }
L_001AE664:
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE6C0; } }
L_001AE68C:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AE6C0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001AE72C; } }
L_001AE6C0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001AE6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6CCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AE6CCu) [[unlikely]] return; }
L_001AE6CC:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AE728; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6F8u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE6F8u) [[unlikely]] return; }
L_001AE6F8:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE708u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001AE708u) [[unlikely]] return; }
L_001AE708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE71Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AE71Cu) [[unlikely]] return; }
L_001AE71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AE728; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AE728:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AE72C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AE750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001AE760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001AE770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001AE780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001AE790:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[2].w[0] - 11776u);
    set32(c.r[21], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[23], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 18;
L_001AE7D8:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[22], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    set32(c.r[16], c.r[16].w[0] + 2u);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    st32((c.r[21].w[0] + 12u), c.f[0]);
    c.budget -= 26;
L_001AE840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    set32(c.r[3], c.r[17].w[0] >> 31);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE894u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE894u) [[unlikely]] return; }
L_001AE894:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8A0u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE8A0u) [[unlikely]] return; }
L_001AE8A0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001AE8C0; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 2;
L_001AE8C0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8D0u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE8D0u) [[unlikely]] return; }
L_001AE8D0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8DCu); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE8DCu) [[unlikely]] return; }
L_001AE8DC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001AE8F8; } }
    c.r[19].d[0] = c.r[19].d[0] | 2ull;
    c.budget -= 1;
L_001AE8F8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001AEA5C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001AEA4C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001AE9C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001AE930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA48; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001AE930:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE93Cu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE93Cu) [[unlikely]] return; }
L_001AE93C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE948u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE948u) [[unlikely]] return; }
L_001AE948:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001AE974; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AE988; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001AE974:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE980u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE980u) [[unlikely]] return; }
L_001AE980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 192u);  if (t) { goto L_001AE9AC; } }
L_001AE988:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AE9A4u) [[unlikely]] return; }
L_001AE9A4:
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 2;
L_001AE9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9B4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AE9B4u) [[unlikely]] return; }
L_001AE9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA48; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001AE9C0:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9CCu); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AE9CCu) [[unlikely]] return; }
L_001AE9CC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9D8u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AE9D8u) [[unlikely]] return; }
L_001AE9D8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001AEA04; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AEA18; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001AEA04:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA10u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AEA10u) [[unlikely]] return; }
L_001AEA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001AEA3C; } }
L_001AEA18:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA34u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AEA34u) [[unlikely]] return; }
L_001AEA34:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001AEA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA44u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AEA44u) [[unlikely]] return; }
L_001AEA44:
    c.budget -= 1;
L_001AEA48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001AEA4C:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE840u | kUnwind; return; } goto L_001AE840; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001AEA5C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001AEA70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AEA80; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001AEA70:
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE7D8u | kUnwind; return; } goto L_001AE7D8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AEA80:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001AEAC0:
    set32(c.r[29], c.r[29].w[0] - 240u);
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
    set32(c.r[17], c.r[28].w[0] - 30392u);
    set32(c.r[22], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[23], c.r[5], c.r[0]);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    c.budget -= 18;
L_001AEB08:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[22].w[0]), c.f[3]);
    st32((c.r[22].w[0] + 4u), c.f[2]);
    st32((c.r[22].w[0] + 8u), c.f[1]);
    st32((c.r[22].w[0] + 12u), c.f[0]);
    c.budget -= 26;
L_001AEB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    set32(c.r[3], c.r[18].w[0] >> 31);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBC4u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AEBC4u) [[unlikely]] return; }
L_001AEBC4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBD0u); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AEBD0u) [[unlikely]] return; }
L_001AEBD0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001AEBF0; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 2;
L_001AEBF0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC00u); mmi::paddub(c.r[6], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AEC00u) [[unlikely]] return; }
L_001AEC00:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC0Cu); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AEC0Cu) [[unlikely]] return; }
L_001AEC0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001AEC28; } }
    c.r[19].d[0] = c.r[19].d[0] | 2ull;
    c.budget -= 1;
L_001AEC28:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001AED8C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001AED7C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001AECF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001AEC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AED78; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001AEC60:
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC6Cu); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AEC6Cu) [[unlikely]] return; }
L_001AEC6C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC78u); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AEC78u) [[unlikely]] return; }
L_001AEC78:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001AECA4; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AECB8; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001AECA4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECB0u); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AECB0u) [[unlikely]] return; }
L_001AECB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 208u);  if (t) { goto L_001AECDC; } }
L_001AECB8:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECD4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AECD4u) [[unlikely]] return; }
L_001AECD4:
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 2;
L_001AECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECE4u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AECE4u) [[unlikely]] return; }
L_001AECE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[20].d[0] | 2ull;  if (t) { goto L_001AED78; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001AECF0:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECFCu); mmi::paddub(c.r[6], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AECFCu) [[unlikely]] return; }
L_001AECFC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED08u); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AED08u) [[unlikely]] return; }
L_001AED08:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001AED34; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AED48; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_001AED34:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED40u); set32(c.r[5], c.r[21].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AED40u) [[unlikely]] return; }
L_001AED40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001AED6C; } }
L_001AED48:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED64u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AED64u) [[unlikely]] return; }
L_001AED64:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_001AED6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED74u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AED74u) [[unlikely]] return; }
L_001AED74:
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 1;
L_001AED78:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001AED7C:
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEB70u | kUnwind; return; } goto L_001AEB70; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001AED8C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_001AEEC4; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001AEE38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001AEE0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 176u);  if (t) { goto L_001AEDF8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001AEDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AEEB8; } }
L_001AEDC8:
    c.f[3] = ld32((c.r[23].w[0] + 16u));
    c.f[2] = ld32((c.r[23].w[0] + 20u));
    c.f[1] = ld32((c.r[23].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[23].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AEEB4; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AEDF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28704u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001AEEB4; } }
L_001AEE0C:
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[22].w[0] + 4u));
    c.f[1] = ld32((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[22].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001AEEB4; } }
L_001AEE38:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE4Cu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AEE4Cu) [[unlikely]] return; }
L_001AEE4C:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    c.f[20] = c.f[0];
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE64u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AEE64u) [[unlikely]] return; }
L_001AEE64:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AEE8C; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28704u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001AEEB4; } }
L_001AEE8C:
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[22].w[0] + 4u));
    c.f[1] = ld32((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[22].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_001AEEB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AEEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);  if (t) { goto L_001AEED8; } }
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_001AEEC4:
    c.r[2].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEB08u | kUnwind; return; } goto L_001AEB08; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    c.budget -= 2;
L_001AEED8:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001AEF10:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    set32(c.r[19], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 19;
L_001AEF5C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEF5Cu | kUnwind; return; } goto L_001AEF5C; } }
    c.f[3] = ld32((c.r[22].w[0] + 48u));
    c.f[2] = ld32((c.r[22].w[0] + 52u));
    c.f[1] = ld32((c.r[22].w[0] + 56u));
    c.f[0] = ld32((c.r[22].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[22].w[0] + 64u));
    c.f[2] = ld32((c.r[22].w[0] + 68u));
    c.f[1] = ld32((c.r[22].w[0] + 72u));
    c.f[0] = ld32((c.r[22].w[0] + 76u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[30], c.r[29].w[0] + 268u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[22].w[0] + 16u));
    c.f[2] = ld32((c.r[22].w[0] + 20u));
    c.f[1] = ld32((c.r[22].w[0] + 24u));
    c.f[0] = ld32((c.r[22].w[0] + 28u));
    mmi::paddub(c.r[18], c.r[23], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 34;
L_001AF000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    set32(c.r[3], c.r[21].w[0] >> 31);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF054u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF054u) [[unlikely]] return; }
L_001AF054:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF060u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF060u) [[unlikely]] return; }
L_001AF060:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001AF080; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_001AF080:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF090u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF090u) [[unlikely]] return; }
L_001AF090:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF09Cu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF09Cu) [[unlikely]] return; }
L_001AF09C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001AF0B8; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001AF0B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AF234; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001AF1A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001AF10C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001AF0F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF230; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001AF0F0:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001AF230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AF2E8; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001AF10C:
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF118u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF118u) [[unlikely]] return; }
L_001AF118:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF124u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF124u) [[unlikely]] return; }
L_001AF124:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001AF154; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF168; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_001AF154:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF160u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF160u) [[unlikely]] return; }
L_001AF160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 240u);  if (t) { goto L_001AF18C; } }
L_001AF168:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF184u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF184u) [[unlikely]] return; }
L_001AF184:
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_001AF18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF194u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AF194u) [[unlikely]] return; }
L_001AF194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_001AF230; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001AF1A0:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1ACu); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF1ACu) [[unlikely]] return; }
L_001AF1AC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1B8u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF1B8u) [[unlikely]] return; }
L_001AF1B8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001AF1E4; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF1F8; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001AF1E4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1F0u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF1F0u) [[unlikely]] return; }
L_001AF1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001AF21C; } }
L_001AF1F8:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF214u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF214u) [[unlikely]] return; }
L_001AF214:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_001AF21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF224u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AF224u) [[unlikely]] return; }
L_001AF224:
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 3;
L_001AF230:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AF234:
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF000u | kUnwind; return; } goto L_001AF000; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001AF2CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001AF2B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001AF294; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001AF278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AF2E8; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AF278:
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF288u); mmi::paddub(c.r[7], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 242u, depth + 1u); else { c.pc = 0x001AF320u; return; } if (c.pc != 0x001AF288u) [[unlikely]] return; }
L_001AF288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);  if (t) { goto L_001AF2EC; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AF294:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2A4u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 254u, depth + 1u); else { c.pc = 0x001AF550u; return; } if (c.pc != 0x001AF2A4u) [[unlikely]] return; }
L_001AF2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF2E8; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AF2B0:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2C0u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 263u, depth + 1u); else { c.pc = 0x001AF6D0u; return; } if (c.pc != 0x001AF2C0u) [[unlikely]] return; }
L_001AF2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF2E8; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001AF2CC:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2DCu); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 272u, depth + 1u); else { c.pc = 0x001AF810u; return; } if (c.pc != 0x001AF2DCu) [[unlikely]] return; }
L_001AF2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF2E8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AF2E8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AF2EC:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001AF320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001AF42C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001AF430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[21] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[20], c.r[0]);
    c.budget -= 5;
L_001AF37C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3ACu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF3ACu) [[unlikely]] return; }
L_001AF3AC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3B8u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF3B8u) [[unlikely]] return; }
L_001AF3B8:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3C4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AF3C4u) [[unlikely]] return; }
L_001AF3C4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3D0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AF3D0u) [[unlikely]] return; }
L_001AF3D0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001AF3EC; }
    c.f[21] = c.f[22];
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_001AF3EC:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF37Cu | kUnwind; return; } goto L_001AF37C; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[2].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF410u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF410u) [[unlikely]] return; }
L_001AF410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF424u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF424u) [[unlikely]] return; }
L_001AF424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF520; } }
L_001AF42C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001AF430:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AF490; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AF490; } }
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    st32((c.r[19].w[0] + 48u), c.f[3]);
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_001AF4D8; } }
L_001AF490:
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[19].w[0] + 64u), c.f[3]);
    st32((c.r[19].w[0] + 68u), c.f[2]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 18;
L_001AF4D8:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4E8u); set32(c.r[6], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF4E8u) [[unlikely]] return; }
L_001AF4E8:
    set32(c.r[4], c.r[19].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4F8u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF4F8u) [[unlikely]] return; }
L_001AF4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF50Cu); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF50Cu) [[unlikely]] return; }
L_001AF50C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF51Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AF51Cu) [[unlikely]] return; }
L_001AF51C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AF520:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001AF550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 272u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5B4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF5B4u) [[unlikely]] return; }
L_001AF5B4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5CCu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF5CCu) [[unlikely]] return; }
L_001AF5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5D4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AF5D4u) [[unlikely]] return; }
L_001AF5D4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[18].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF614u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF614u) [[unlikely]] return; }
L_001AF614:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF62Cu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF62Cu) [[unlikely]] return; }
L_001AF62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF634u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001AF634u) [[unlikely]] return; }
L_001AF634:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001AF64C; } }
    set32(c.r[16], 0u + 1u);
    c.f[20] = c.f[0];
    c.budget -= 2;
L_001AF64C:
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AF668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AF6A0; } }
L_001AF668:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF684u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF684u) [[unlikely]] return; }
L_001AF684:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF69Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF69Cu) [[unlikely]] return; }
L_001AF69C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AF6A0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001AF6D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 200u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6F4u); mmi::paddub(c.r[4], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001AF6F4u) [[unlikely]] return; }
L_001AF6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AF7F4; } }
L_001AF704:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF72Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001AF72Cu) [[unlikely]] return; }
L_001AF72C:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF73Cu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001AF73Cu) [[unlikely]] return; }
L_001AF73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001AF750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF7F4; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001AF750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF758u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AF758u) [[unlikely]] return; }
L_001AF758:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 160u);  if (t) { goto L_001AF778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AF7F4; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001AF778:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7A8u); st32((c.r[16].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF7A8u) [[unlikely]] return; }
L_001AF7A8:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7B8u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF7B8u) [[unlikely]] return; }
L_001AF7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7CCu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF7CCu) [[unlikely]] return; }
L_001AF7CC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7DCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AF7DCu) [[unlikely]] return; }
L_001AF7DC:
    set32(c.r[2], c.r[29].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 6;
L_001AF7F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001AF810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF834u); mmi::paddub(c.r[4], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B45F0u; return; } if (c.pc != 0x001AF834u) [[unlikely]] return; }
L_001AF834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AFA30; } }
L_001AF844:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF860u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF860u) [[unlikely]] return; }
L_001AF860:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF86Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001AF86Cu) [[unlikely]] return; }
L_001AF86C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF878u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF878u) [[unlikely]] return; }
L_001AF878:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF888u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF888u) [[unlikely]] return; }
L_001AF888:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF894u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AF894u) [[unlikely]] return; }
L_001AF894:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8A4u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF8A4u) [[unlikely]] return; }
L_001AF8A4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8B0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001AF8B0u) [[unlikely]] return; }
L_001AF8B0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF8BCu) [[unlikely]] return; }
L_001AF8BC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001AF8FC; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
L_001AF8FC:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF908u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF908u) [[unlikely]] return; }
L_001AF908:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF914u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001AF914u) [[unlikely]] return; }
L_001AF914:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF920u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AF920u) [[unlikely]] return; }
L_001AF920:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF95C; } }
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001AF95C:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF974u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AF974u) [[unlikely]] return; }
L_001AF974:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 80u);  if (t) { goto L_001AF994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AFA30; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001AF994:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9C4u); st32((c.r[16].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF9C4u) [[unlikely]] return; }
L_001AF9C4:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9D4u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AF9D4u) [[unlikely]] return; }
L_001AF9D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9E8u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AF9E8u) [[unlikely]] return; }
L_001AF9E8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9F8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AF9F8u) [[unlikely]] return; }
L_001AF9F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] - 28704u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 14;
L_001AFA30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001AFA50:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 192u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[21].w[0]);
    c.budget -= 16;
L_001AFA90:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 160u), 0u);
    mmi::paddub(c.r[19], c.r[22], c.r[0]);
    mmi::paddub(c.r[30], c.r[21], c.r[0]);
    set32(c.r[23], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[20], c.r[2].w[0] + 144u);
    c.budget -= 8;
L_001AFAB0:
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    set32(c.r[17], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[29].w[0] + 272u);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 64u));
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = ld32((c.r[19].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 288u);
    set32(c.r[18], c.r[30].w[0] + 144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 80u));
    c.f[2] = ld32((c.r[19].w[0] + 84u));
    c.f[1] = ld32((c.r[19].w[0] + 88u));
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 38;
L_001AFB48:
    set32(c.r[6], c.r[21].w[0] + 176u);
    set32(c.r[7], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB5Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 300u, depth + 1u); else { c.pc = 0x001B30D0u; return; } if (c.pc != 0x001AFB5Cu) [[unlikely]] return; }
L_001AFB5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001AFC48; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[5], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB74u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x001AFB74u) [[unlikely]] return; }
L_001AFB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFC44; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_001AFC2C; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFBB0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 2;
L_001AFBB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_001AFBEC; } }
    c.f[0] = ld32((c.r[3].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[21].w[0] + 176u);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2100u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBE8u); st32((c.r[29].w[0] + 312u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AFBE8u) [[unlikely]] return; }
L_001AFBE8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_001AFBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBF4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AFBF4u) [[unlikely]] return; }
L_001AFBF4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AFC44; } }
    set32(c.r[2], c.r[29].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001AFCAC; } }
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_001AFC2C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001AFCAC; } }
L_001AFC44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AFC48:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFB48u | kUnwind; return; } goto L_001AFB48; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFAB0u | kUnwind; return; } goto L_001AFAB0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFA90u | kUnwind; return; } goto L_001AFA90; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001AFCAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001AFCE0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[17], c.r[0]);
    mmi::paddub(c.r[20], c.r[17], c.r[0]);
    c.budget -= 15;
L_001AFD1C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[19].w[0] + 144u);
    set32(c.r[6], c.r[17].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD30u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002C(c, 300u, depth + 1u); else { c.pc = 0x001B30D0u; return; } if (c.pc != 0x001AFD30u) [[unlikely]] return; }
L_001AFD30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001AFE94; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD48u); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x001AFD48u) [[unlikely]] return; }
L_001AFD48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFE90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 48u);  if (t) { goto L_001AFE1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AFD8C; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD84u); set32(c.r[6], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AFD84u) [[unlikely]] return; }
L_001AFD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] << 4);  if (t) { goto L_001AFDE8; } }
L_001AFD8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFDAC; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 2;
L_001AFDAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AFDE4; } }
    c.f[0] = ld32((c.r[3].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[17].w[0] + 176u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2100u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFDE4u); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AFDE4u) [[unlikely]] return; }
L_001AFDE4:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.budget -= 1;
L_001AFDE8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFDF8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AFDF8u) [[unlikely]] return; }
L_001AFDF8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AFE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001AFFC8; } }
L_001AFE18:
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_001AFE1C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE28u); set32(c.r[6], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AFE28u) [[unlikely]] return; }
L_001AFE28:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE40u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001AFE40u) [[unlikely]] return; }
L_001AFE40:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AFE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 192u));  if (t) { goto L_001AFE68; } }
L_001AFE60:
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_001AFE68:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE74u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AFE74u) [[unlikely]] return; }
L_001AFE74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE88u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AFE88u) [[unlikely]] return; }
L_001AFE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AFFC8; } }
L_001AFE90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001AFE94:
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFD1Cu | kUnwind; return; } goto L_001AFD1C; } }
    set32(c.r[18], 0u - 1u);
    set32(c.r[19], c.r[28].w[0] - 30392u);
    set32(c.r[20], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 4;
L_001AFEB4:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFEDCu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001AFEDCu) [[unlikely]] return; }
L_001AFEDC:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFEECu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001AFEECu) [[unlikely]] return; }
L_001AFEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001AFF28; } }
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] - 28704u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001AFFC8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001AFF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF30u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001AFF30u) [[unlikely]] return; }
L_001AFF30:
    c.f[21] = c.f[0];
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001AFFB4; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001AFF74; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AFFB0; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_001AFF74:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF80u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001AFF80u) [[unlikely]] return; }
L_001AFF80:
    c.f[12] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF90u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001AFF90u) [[unlikely]] return; }
L_001AFF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFFA4u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001AFFA4u) [[unlikely]] return; }
L_001AFFA4:
    c.f[20] = c.f[21];
    mmi::paddub(c.r[18], c.r[21], c.r[0]);
    c.budget -= 3;
L_001AFFB0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AFFB4:
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFEB4u | kUnwind; return; } goto L_001AFEB4; } }
    c.r[2].d[0] = ~(c.r[18].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AFFC8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
}

}
