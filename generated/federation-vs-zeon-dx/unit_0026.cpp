#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0026[4096] = {
    1, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236,
    0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278,
    0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0026(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00198000;
    case 2u: goto L_00198008;
    case 3u: goto L_0019800C;
    case 4u: goto L_00198014;
    case 5u: goto L_0019806C;
    case 6u: goto L_001980A0;
    case 7u: goto L_001980D0;
    case 8u: goto L_00198108;
    case 9u: goto L_0019811C;
    case 10u: goto L_0019812C;
    case 11u: goto L_00198148;
    case 12u: goto L_001981A4;
    case 13u: goto L_001981D4;
    case 14u: goto L_001981EC;
    case 15u: goto L_00198210;
    case 16u: goto L_00198248;
    case 17u: goto L_0019825C;
    case 18u: goto L_0019826C;
    case 19u: goto L_00198288;
    case 20u: goto L_001982E4;
    case 21u: goto L_00198318;
    case 22u: goto L_00198340;
    case 23u: goto L_00198350;
    case 24u: goto L_00198360;
    case 25u: goto L_00198370;
    case 26u: goto L_00198428;
    case 27u: goto L_00198438;
    case 28u: goto L_00198448;
    case 29u: goto L_00198460;
    case 30u: goto L_001984FC;
    case 31u: goto L_0019850C;
    case 32u: goto L_0019851C;
    case 33u: goto L_00198530;
    case 34u: goto L_00198540;
    case 35u: goto L_00198550;
    case 36u: goto L_00198560;
    case 37u: goto L_00198590;
    case 38u: goto L_001985A0;
    case 39u: goto L_001985F8;
    case 40u: goto L_00198610;
    case 41u: goto L_0019864C;
    case 42u: goto L_001986A0;
    case 43u: goto L_001986CC;
    case 44u: goto L_001986E0;
    case 45u: goto L_00198720;
    case 46u: goto L_001987D0;
    case 47u: goto L_00198838;
    case 48u: goto L_00198850;
    case 49u: goto L_001988E4;
    case 50u: goto L_0019894C;
    case 51u: goto L_00198960;
    case 52u: goto L_00198A44;
    case 53u: goto L_00198A98;
    case 54u: goto L_00198B00;
    case 55u: goto L_00198B28;
    case 56u: goto L_00198B78;
    case 57u: goto L_00198B98;
    case 58u: goto L_00198C30;
    case 59u: goto L_00198CE0;
    case 60u: goto L_00198D28;
    case 61u: goto L_00198D50;
    case 62u: goto L_00198D68;
    case 63u: goto L_00198DA8;
    case 64u: goto L_00198DB8;
    case 65u: goto L_00198DC8;
    case 66u: goto L_00198E10;
    case 67u: goto L_00198E90;
    case 68u: goto L_00198EB0;
    case 69u: goto L_00198F1C;
    case 70u: goto L_00198F2C;
    case 71u: goto L_00198F60;
    case 72u: goto L_00198F8C;
    case 73u: goto L_00198F98;
    case 74u: goto L_0019906C;
    case 75u: goto L_0019907C;
    case 76u: goto L_0019908C;
    case 77u: goto L_001990E4;
    case 78u: goto L_001990F8;
    case 79u: goto L_0019910C;
    case 80u: goto L_00199170;
    case 81u: goto L_001991C8;
    case 82u: goto L_001991FC;
    case 83u: goto L_00199220;
    case 84u: goto L_00199240;
    case 85u: goto L_00199268;
    case 86u: goto L_00199280;
    case 87u: goto L_00199350;
    case 88u: goto L_00199370;
    case 89u: goto L_001993CC;
    case 90u: goto L_00199410;
    case 91u: goto L_00199438;
    case 92u: goto L_0019944C;
    case 93u: goto L_001994A0;
    case 94u: goto L_001994C4;
    case 95u: goto L_001995B0;
    case 96u: goto L_0019960C;
    case 97u: goto L_0019962C;
    case 98u: goto L_00199640;
    case 99u: goto L_001996A0;
    case 100u: goto L_001996C0;
    case 101u: goto L_00199734;
    case 102u: goto L_00199760;
    case 103u: goto L_001997CC;
    case 104u: goto L_00199844;
    case 105u: goto L_00199860;
    case 106u: goto L_001998B4;
    case 107u: goto L_00199904;
    case 108u: goto L_00199958;
    case 109u: goto L_001999E8;
    case 110u: goto L_00199A08;
    case 111u: goto L_00199A20;
    case 112u: goto L_00199AF8;
    case 113u: goto L_00199B14;
    case 114u: goto L_00199B2C;
    case 115u: goto L_00199B70;
    case 116u: goto L_00199B80;
    case 117u: goto L_00199B90;
    case 118u: goto L_00199BB0;
    case 119u: goto L_00199C18;
    case 120u: goto L_00199C34;
    case 121u: goto L_00199C40;
    case 122u: goto L_00199C60;
    case 123u: goto L_00199CC4;
    case 124u: goto L_00199CE0;
    case 125u: goto L_00199CF0;
    case 126u: goto L_00199D10;
    case 127u: goto L_00199D30;
    case 128u: goto L_00199D54;
    case 129u: goto L_00199D60;
    case 130u: goto L_00199E10;
    case 131u: goto L_00199E44;
    case 132u: goto L_00199E50;
    case 133u: goto L_00199E74;
    case 134u: goto L_00199E88;
    case 135u: goto L_00199F00;
    case 136u: goto L_00199F54;
    case 137u: goto L_00199F6C;
    case 138u: goto L_00199F78;
    case 139u: goto L_00199F88;
    case 140u: goto L_0019A05C;
    case 141u: goto L_0019A19C;
    case 142u: goto L_0019A1C0;
    case 143u: goto L_0019A23C;
    case 144u: goto L_0019A29C;
    case 145u: goto L_0019A2E8;
    case 146u: goto L_0019A2F8;
    case 147u: goto L_0019A348;
    case 148u: goto L_0019A360;
    case 149u: goto L_0019A3B8;
    case 150u: goto L_0019A3E0;
    case 151u: goto L_0019A410;
    case 152u: goto L_0019A424;
    case 153u: goto L_0019A438;
    case 154u: goto L_0019A45C;
    case 155u: goto L_0019A480;
    case 156u: goto L_0019A4D0;
    case 157u: goto L_0019A528;
    case 158u: goto L_0019A540;
    case 159u: goto L_0019A860;
    case 160u: goto L_0019A88C;
    case 161u: goto L_0019A8A8;
    case 162u: goto L_0019A8E4;
    case 163u: goto L_0019A904;
    case 164u: goto L_0019A920;
    case 165u: goto L_0019A97C;
    case 166u: goto L_0019AA00;
    case 167u: goto L_0019AA18;
    case 168u: goto L_0019AA70;
    case 169u: goto L_0019AB14;
    case 170u: goto L_0019AB28;
    case 171u: goto L_0019AB38;
    case 172u: goto L_0019ABA4;
    case 173u: goto L_0019AC18;
    case 174u: goto L_0019AD68;
    case 175u: goto L_0019AE58;
    case 176u: goto L_0019AE88;
    case 177u: goto L_0019AEA0;
    case 178u: goto L_0019AEAC;
    case 179u: goto L_0019AEBC;
    case 180u: goto L_0019AF00;
    case 181u: goto L_0019AF30;
    case 182u: goto L_0019AF40;
    case 183u: goto L_0019AF54;
    case 184u: goto L_0019AF7C;
    case 185u: goto L_0019AFA4;
    case 186u: goto L_0019AFC0;
    case 187u: goto L_0019AFE0;
    case 188u: goto L_0019B014;
    case 189u: goto L_0019B034;
    case 190u: goto L_0019B048;
    case 191u: goto L_0019B064;
    case 192u: goto L_0019B084;
    case 193u: goto L_0019B0A0;
    case 194u: goto L_0019B11C;
    case 195u: goto L_0019B13C;
    case 196u: goto L_0019B144;
    case 197u: goto L_0019B15C;
    case 198u: goto L_0019B180;
    case 199u: goto L_0019B1C8;
    case 200u: goto L_0019B1D0;
    case 201u: goto L_0019B1F0;
    case 202u: goto L_0019B200;
    case 203u: goto L_0019B210;
    case 204u: goto L_0019B224;
    case 205u: goto L_0019B230;
    case 206u: goto L_0019B23C;
    case 207u: goto L_0019B244;
    case 208u: goto L_0019B250;
    case 209u: goto L_0019B260;
    case 210u: goto L_0019B274;
    case 211u: goto L_0019B280;
    case 212u: goto L_0019B28C;
    case 213u: goto L_0019B2A0;
    case 214u: goto L_0019B2B0;
    case 215u: goto L_0019B2C4;
    case 216u: goto L_0019B2D0;
    case 217u: goto L_0019B2D8;
    case 218u: goto L_0019B2F0;
    case 219u: goto L_0019B300;
    case 220u: goto L_0019B314;
    case 221u: goto L_0019B320;
    case 222u: goto L_0019B330;
    case 223u: goto L_0019B340;
    case 224u: goto L_0019B354;
    case 225u: goto L_0019B360;
    case 226u: goto L_0019B370;
    case 227u: goto L_0019B380;
    case 228u: goto L_0019B394;
    case 229u: goto L_0019B3A0;
    case 230u: goto L_0019B3AC;
    case 231u: goto L_0019B3B4;
    case 232u: goto L_0019B3C0;
    case 233u: goto L_0019B3D0;
    case 234u: goto L_0019B3E4;
    case 235u: goto L_0019B3F0;
    case 236u: goto L_0019B3FC;
    case 237u: goto L_0019B404;
    case 238u: goto L_0019B410;
    case 239u: goto L_0019B420;
    case 240u: goto L_0019B434;
    case 241u: goto L_0019B43C;
    case 242u: goto L_0019B450;
    case 243u: goto L_0019B460;
    case 244u: goto L_0019B470;
    case 245u: goto L_0019B480;
    case 246u: goto L_0019B490;
    case 247u: goto L_0019B4A0;
    case 248u: goto L_0019B4B0;
    case 249u: goto L_0019B4C0;
    case 250u: goto L_0019B4D4;
    case 251u: goto L_0019B4E0;
    case 252u: goto L_0019B4F0;
    case 253u: goto L_0019B500;
    case 254u: goto L_0019B514;
    case 255u: goto L_0019B520;
    case 256u: goto L_0019B530;
    case 257u: goto L_0019B540;
    case 258u: goto L_0019B550;
    case 259u: goto L_0019B560;
    case 260u: goto L_0019B574;
    case 261u: goto L_0019B580;
    case 262u: goto L_0019B590;
    case 263u: goto L_0019B5A0;
    case 264u: goto L_0019B5B4;
    case 265u: goto L_0019B5C0;
    case 266u: goto L_0019B5D0;
    case 267u: goto L_0019B5E0;
    case 268u: goto L_0019B5F0;
    case 269u: goto L_0019B600;
    case 270u: goto L_0019B614;
    case 271u: goto L_0019B620;
    case 272u: goto L_0019B62C;
    case 273u: goto L_0019B634;
    case 274u: goto L_0019B640;
    case 275u: goto L_0019B650;
    case 276u: goto L_0019B664;
    case 277u: goto L_0019B670;
    case 278u: goto L_0019B67C;
    case 279u: goto L_0019B684;
    case 280u: goto L_0019B690;
    case 281u: goto L_0019B6A0;
    case 282u: goto L_0019B6B4;
    case 283u: goto L_0019B6C0;
    case 284u: goto L_0019B6CC;
    case 285u: goto L_0019B6D4;
    case 286u: goto L_0019B6E0;
    case 287u: goto L_0019B6F0;
    case 288u: goto L_0019B700;
    case 289u: goto L_0019B710;
    case 290u: goto L_0019B724;
    case 291u: goto L_0019B72C;
    case 292u: goto L_0019B740;
    case 293u: goto L_0019B750;
    case 294u: goto L_0019B7A0;
    case 295u: goto L_0019B860;
    case 296u: goto L_0019B894;
    case 297u: goto L_0019B8B0;
    case 298u: goto L_0019B8E8;
    case 299u: goto L_0019B900;
    case 300u: goto L_0019B910;
    case 301u: goto L_0019B970;
    case 302u: goto L_0019B9F0;
    case 303u: goto L_0019BA5C;
    case 304u: goto L_0019BBB0;
    case 305u: goto L_0019BD18;
    case 306u: goto L_0019BE30;
    case 307u: goto L_0019BEA0;
    default: bad_entry(c, 0x00198000u); return;
    }
L_00198000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198008u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00198008u) [[unlikely]] return; }
L_00198008:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0019800C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_0019801C; } }
L_00198014:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0019801C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00198044; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00198060; } }
L_00198044:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00198060:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019806Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0019806Cu) [[unlikely]] return; }
L_0019806C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[19].d[0]; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001980A4; } }
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001980A0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 293u, depth + 1u); else { c.pc = 0x00197270u; return; } if (c.pc != 0x001980A0u) [[unlikely]] return; }
L_001980A0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001980A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001980D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 271u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198108u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00198108u) [[unlikely]] return; }
L_00198108:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00198150; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 271u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019811Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x0019811Cu) [[unlikely]] return; }
L_0019811C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019812Cu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x0019812Cu) [[unlikely]] return; }
L_0019812C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198148u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00198148u) [[unlikely]] return; }
L_00198148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00198154; } }
L_00198150:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 1;
L_00198154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0019817C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00198198; } }
L_0019817C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00198198:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001981A4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001981A4u) [[unlikely]] return; }
L_001981A4:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 268u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001981DC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 271u)));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001981D4u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x001981D4u) [[unlikely]] return; }
L_001981D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001981F0; } }
L_001981DC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 271u)));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001981ECu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 289u, depth + 1u); else { c.pc = 0x001971C0u; return; } if (c.pc != 0x001981ECu) [[unlikely]] return; }
L_001981EC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001981F0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00198210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 271u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198248u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00198248u) [[unlikely]] return; }
L_00198248:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00198290; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 271u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019825Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x0019825Cu) [[unlikely]] return; }
L_0019825C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019826Cu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x0019826Cu) [[unlikely]] return; }
L_0019826C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198288u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00198288u) [[unlikely]] return; }
L_00198288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00198294; } }
L_00198290:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 1;
L_00198294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001982BC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001982D8; } }
L_001982BC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001982D8:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001982E4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001982E4u) [[unlikely]] return; }
L_001982E4:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 268u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0019831C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 271u)));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198318u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 293u, depth + 1u); else { c.pc = 0x00197270u; return; } if (c.pc != 0x00198318u) [[unlikely]] return; }
L_00198318:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0019831C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00198340:
    c.budget -= 2;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001980D0u | kUnwind; return; } goto L_001980D0; }
L_00198350:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001980D0u | kUnwind; return; } goto L_001980D0; }
L_00198360:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198210u | kUnwind; return; } goto L_00198210; }
L_00198370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[6].w[0] - 6096u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[3].w[0] + 644u);
    st32((c.r[3].w[0] + 656u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019844C; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] + 2592u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 10432u)));
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00198440; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00198430; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00198420; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00198420; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00198420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00198450; } }
L_00198420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198428u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0026(c, 23u, depth + 1u); else { c.pc = 0x00198350u; return; } if (c.pc != 0x00198428u) [[unlikely]] return; }
L_00198428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0019844C; } }
L_00198430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198438u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0025(c, 358u, depth + 1u); else { c.pc = 0x00197D50u; return; } if (c.pc != 0x00198438u) [[unlikely]] return; }
L_00198438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0019844C; } }
L_00198440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198448u); c.r[5].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x00197410u; return; } if (c.pc != 0x00198448u) [[unlikely]] return; }
L_00198448:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0019844C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00198450:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00198460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[5].w[0] - 6096u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 652u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 644u);  if (t) { goto L_0019851C; } }
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019851C; } }
    c.r[6].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00198514; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00198504; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001984F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001984F4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001984F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00198520; } }
L_001984F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001984FCu);  if (depth < kMaxDepth) unit_0026(c, 23u, depth + 1u); else { c.pc = 0x00198350u; return; } if (c.pc != 0x001984FCu) [[unlikely]] return; }
L_001984FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019851C; } }
L_00198504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019850Cu);  if (depth < kMaxDepth) unit_0025(c, 358u, depth + 1u); else { c.pc = 0x00197D50u; return; } if (c.pc != 0x0019850Cu) [[unlikely]] return; }
L_0019850C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019851C; } }
L_00198514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019851Cu);  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x00197410u; return; } if (c.pc != 0x0019851Cu) [[unlikely]] return; }
L_0019851C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00198520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198530:
    c.budget -= 2;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001980D0u | kUnwind; return; } goto L_001980D0; }
L_00198540:
    c.budget -= 2;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001980D0u | kUnwind; return; } goto L_001980D0; }
L_00198550:
    c.budget -= 2;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001980D0u | kUnwind; return; } goto L_001980D0; }
L_00198560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 522u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198590; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198590u); c.r[5].d[0] = ld8((c.r[3].w[0] + 651u));  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00198590u) [[unlikely]] return; }
L_00198590:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001985A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001985D4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001985E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001985E4; } }
L_001985D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 269u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001985E4; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001985E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001985F8; } }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001985F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001985F8u) [[unlikely]] return; }
L_001985F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00198610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 6064u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001986CC; } }
    set32(c.r[2], 0u + 60u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019864Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x0019864Cu) [[unlikely]] return; }
L_0019864C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00198678; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00198694; } }
L_00198678:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00198694:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001986A0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001986A0u) [[unlikely]] return; }
L_001986A0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 2944u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001986CCu); c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x001986CCu) [[unlikely]] return; }
L_001986CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001986E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 6096u);  if (t) { goto L_00198704; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 650u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198718; } }
L_00198704:
    set32(c.r[2], 0u + 2u);
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 650u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00198718:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001338D0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 439u, depth); }
L_00198720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 524u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198838; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00198838; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198838; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198838; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 111u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0019883C; } }
L_00198780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198838; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_00198838; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[16], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] + 16720u);
    set32(c.r[17], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00198838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001987D0u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001987D0u) [[unlikely]] return; }
L_001987D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001987FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 16748u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 646u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00198838; } }
L_001987FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 16748u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    st8((c.r[3].w[0] + 646u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 644u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198838u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00198838u) [[unlikely]] return; }
L_00198838:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0019883C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 524u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019894C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019894C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019894C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019894C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_001988B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00198950; } }
L_001988B0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[16], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] + 16720u);
    set32(c.r[17], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0019894C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001988E4u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001988E4u) [[unlikely]] return; }
L_001988E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00198910; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 16748u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 646u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019894C; } }
L_00198910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 16748u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    st8((c.r[3].w[0] + 646u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 644u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019894Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x0019894Cu) [[unlikely]] return; }
L_0019894C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00198950:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00198960:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_00198D28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 111u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001989B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_00198D2C; } }
L_001989B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00198B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00198D28; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00198D28; } }
    set32(c.r[3], c.r[3].w[0] + 28880u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00198D28; } }
    c.r[19].d[0] = c.r[19].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00198A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A44u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00198A44u) [[unlikely]] return; }
L_00198A44:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
L_00198A54:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 260u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 255u);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00198D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198A98u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00198A98u) [[unlikely]] return; }
L_00198A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] - 6u);  if (t) { goto L_00198AB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 647u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00198D28; } }
    set32(c.r[3], c.r[19].w[0] - 6u);
    c.budget -= 1;
L_00198AB8:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00198B08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 654u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 654u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
    set32(c.r[2], 0u + 300u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B00u); st8((c.r[3].w[0] + 647u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00198B00u) [[unlikely]] return; }
L_00198B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198D28; } }
L_00198B08:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B28u); st8((c.r[3].w[0] + 647u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00198B28u) [[unlikely]] return; }
L_00198B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198D28; } }
L_00198B30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 768u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_00198D28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_00198D28; } }
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00198D28; } }
    set32(c.r[3], c.r[3].w[0] + 28880u);
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00198D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B78u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00198B78u) [[unlikely]] return; }
L_00198B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00198B90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 532u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00198B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198B98u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00198B98u) [[unlikely]] return; }
L_00198B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00198BB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 533u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 535u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00198BB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00198BCC; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 534u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00198C04; } }
L_00198BCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 533u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_00198BE4; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 535u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00198C04; } }
L_00198BE4:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 534u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 535u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00198C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00198C04; } }
L_00198C00:
    mmi::paddub(c.r[17], c.r[3], c.r[0]);
    c.budget -= 1;
L_00198C04:
    c.r[18].d[0] = c.r[19].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);
    set32(c.r[22], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00198C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198C30u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00198C30u) [[unlikely]] return; }
L_00198C30:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00198D28; } }
L_00198C40:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 260u)));
    set32(c.r[4], 0u + 255u);
    c.r[6].d[0] = c.r[6].d[0] & 7ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[3], ld32((c.r[3].w[0] + 32u)));  if (t) { goto L_00198D28; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] - 6u);  if (t) { goto L_00198D28; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00198CE8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 654u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[8].w[0] + 654u);  if (t) { goto L_00198D28; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00198CBC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 532u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198CCC; } }
L_00198CBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 533u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00198CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[20].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + 29248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198CE0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00198CE0u) [[unlikely]] return; }
L_00198CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198D28; } }
L_00198CE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00198D04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 532u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00198D14; } }
L_00198D04:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 533u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00198D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[20].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + 29248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198D28u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00198D28u) [[unlikely]] return; }
L_00198D28:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00198D2C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00198D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00198DE8; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    c.budget -= 1;
L_00198D68:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], c.r[3].w[0] + 36u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00198DC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00198DB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00198D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00198DCC; } }
L_00198D9C:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198DA8u); set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  if (depth < kMaxDepth) unit_0025(c, 273u, depth + 1u); else { c.pc = 0x00196E80u; return; } if (c.pc != 0x00198DA8u) [[unlikely]] return; }
L_00198DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198DC8; } }
L_00198DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198DB8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0025(c, 275u, depth + 1u); else { c.pc = 0x00196ED0u; return; } if (c.pc != 0x00198DB8u) [[unlikely]] return; }
L_00198DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00198DC8; } }
L_00198DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198DC8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0025(c, 278u, depth + 1u); else { c.pc = 0x00196F60u; return; } if (c.pc != 0x00198DC8u) [[unlikely]] return; }
L_00198DC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00198DCC:
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00198DE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198DE4; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_00198DE4:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 1;
L_00198DE8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198D68u | kUnwind; return; } goto L_00198D68; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00198E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[8], c.r[3].w[0] - 6096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 6096u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[7].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_00198E38; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00198E38; } }
    set32(c.r[7], c.r[7].w[0] - 32u);
    c.budget -= 1;
L_00198E38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 6092u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00198E80; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_00198E7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198E7C; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_00198E7C:
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00198E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00198E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[3].w[0] - 5548u);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_00198EB0:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00198F34; }
    c.f[20] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00198EF4; } }
    c.f[20] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00198F20; } }
L_00198EF4:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_00198F24; } }
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[2];  if (t) { goto L_00198F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F1Cu); st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 259u, depth + 1u); else { c.pc = 0x00196B40u; return; } if (c.pc != 0x00198F1Cu) [[unlikely]] return; }
L_00198F1C:
    c.budget -= 1;
L_00198F20:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_00198F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00198F2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 95u, depth + 1u); else { c.pc = 0x001995B0u; return; } if (c.pc != 0x00198F2Cu) [[unlikely]] return; }
L_00198F2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00198F34:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198EB0u | kUnwind; return; } goto L_00198EB0; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00198F60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[3].w[0] - 6096u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[19], c.r[0]);
    c.budget -= 11;
L_00198F8C:
    set32(c.r[18], c.r[20].w[0] + 644u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_00198F98:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00199114; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 10432u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00198FD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00198FE0; } }
L_00198FD0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00199110; } }
L_00198FE0:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199110; } }
    st32((c.r[18].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_00199094; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00199084; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00199074; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00199064; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00199064; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00199064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199110; } }
L_00199064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019906Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0026(c, 23u, depth + 1u); else { c.pc = 0x00198350u; return; } if (c.pc != 0x0019906Cu) [[unlikely]] return; }
L_0019906C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199110; } }
L_00199074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019907Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0025(c, 358u, depth + 1u); else { c.pc = 0x00197D50u; return; } if (c.pc != 0x0019907Cu) [[unlikely]] return; }
L_0019907C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199110; } }
L_00199084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019908Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x00197410u; return; } if (c.pc != 0x0019908Cu) [[unlikely]] return; }
L_0019908C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199110; } }
L_00199094:
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00199100; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001990EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001990D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001990D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001990D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00199110; } }
L_001990D8:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001990E4u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0026(c, 24u, depth + 1u); else { c.pc = 0x00198360u; return; } if (c.pc != 0x001990E4u) [[unlikely]] return; }
L_001990E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199110; } }
L_001990EC:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001990F8u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0025(c, 372u, depth + 1u); else { c.pc = 0x00197F90u; return; } if (c.pc != 0x001990F8u) [[unlikely]] return; }
L_001990F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199110; } }
L_00199100:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019910Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0025(c, 309u, depth + 1u); else { c.pc = 0x00197530u; return; } if (c.pc != 0x0019910Cu) [[unlikely]] return; }
L_0019910C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00199110:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00199114:
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198F98u | kUnwind; return; } goto L_00198F98; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00198F8Cu | kUnwind; return; } goto L_00198F8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00199144; } }
    st8((c.r[19].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00199144:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00199170:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[3].w[0] - 6096u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6067u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001991C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 523u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_0019921C; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_001991C8:
    set32(c.r[4], ld32((c.r[20].w[0] + 1228u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 1220u);  if (t) { goto L_00199200; } }
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00199204; }
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001991FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x001979B0u; return; } if (c.pc != 0x001991FCu) [[unlikely]] return; }
L_001991FC:
    c.budget -= 1;
L_00199200:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00199204:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001991C8u | kUnwind; return; } goto L_001991C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);  if (t) { goto L_001993E4; } }
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 1;
L_0019921C:
    mmi::paddub(c.r[30], c.r[20], c.r[0]);
    c.budget -= 1;
L_00199220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 29u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    set32(c.r[18], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001992A8; } }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[21], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00199240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 969u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[22].d[0]; set32(c.r[16], c.r[21].w[0] + 964u);  if (t) { goto L_00199298; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00199270; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 100u);
    mmi::paddub(c.r[23], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199268u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00199268u) [[unlikely]] return; }
L_00199268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_00199298; } }
L_00199270:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199280u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00199280u) [[unlikely]] return; }
L_00199280:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_0019929C; }
    set32(c.r[17], ld32((c.r[16].w[0])));
    mmi::paddub(c.r[23], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 3;
L_00199298:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0019929C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[21], c.r[21].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199240u | kUnwind; return; } goto L_00199240; } }
    c.budget -= 1;
L_001992A8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001993D4; }
    set32(c.r[3], ld32((c.r[30].w[0] + 1228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[30].w[0] + 1220u);  if (t) { goto L_00199390; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 10432u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001992E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199308; } }
L_001992E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 30u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00199308; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00199378; } }
    c.budget -= 1;
L_00199308:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 30u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00199358; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199350u); c.r[6].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x001979B0u; return; } if (c.pc != 0x00199350u) [[unlikely]] return; }
L_00199350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00199378; } }
L_00199358:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199370u); c.r[6].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0025(c, 344u, depth + 1u); else { c.pc = 0x00197AE0u; return; } if (c.pc != 0x00199370u) [[unlikely]] return; }
L_00199370:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00199378:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 30u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001993D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001993D0; } }
L_00199390:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[28].w[0] - 30720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 10432u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001993CCu); c.r[6].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x001979B0u; return; } if (c.pc != 0x001993CCu) [[unlikely]] return; }
L_001993CC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001993D0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001993D4:
    c.r[3].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199220u | kUnwind; return; } goto L_00199220; } }
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001993E4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00199410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[3].w[0] - 5548u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], c.r[3].w[0] - 14832u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 10;
L_00199438:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0019946C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019944Cu);  if (depth < kMaxDepth) unit_0009(c, 528u, depth + 1u); else { c.pc = 0x00127478u; return; } if (c.pc != 0x0019944Cu) [[unlikely]] return; }
L_0019944C:
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00199468; } }
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00199468:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0019946C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199438u | kUnwind; return; } goto L_00199438; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001994A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[3].w[0] - 5548u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], c.r[3].w[0] - 14832u);
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 9;
L_001994C4:
    set32(c.r[3], ld32((c.r[12].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0019958C; }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 22u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 23u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[3].d[0]; set32(c.r[8], ld32((c.r[7].w[0] + 24u)));  if (t) { goto L_00199508; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[6].d[0]; c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0019950C; } }
    st8((c.r[7].w[0] + 23u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[7].w[0] + 28u), c.r[11].w[0]);  if (t) { goto L_00199500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199508; } }
L_00199500:
    st8((c.r[7].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00199508:
    c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019950C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0019956C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199568; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199538; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_00199538:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00199568; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[3], c.r[11].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00199568; } }
    set32(c.r[3], c.r[8].w[0] + 4u);
    st32((c.r[7].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 6u)));
    st8((c.r[7].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00199568:
    c.r[3].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019956C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00199588; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199588; } }
    st8((c.r[7].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00199588:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0019958C:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001994C4u | kUnwind; return; } goto L_001994C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001995B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] - 6096u);
    set32(c.r[6], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[3].w[0] + 552u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[3].w[0] + 548u);  if (t) { goto L_001995E4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001995E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[6].w[0]), c.f[12]);
    set32(c.r[3], c.r[3].w[0] - 14832u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019962C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019960Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0019960Cu) [[unlikely]] return; }
L_0019960C:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019962Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 568u, depth + 1u); else { c.pc = 0x00127A50u; return; } if (c.pc != 0x0019962Cu) [[unlikely]] return; }
L_0019962C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00199640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001996E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);  if (t) { goto L_001996E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001996E4; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001996A0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001996A0u) [[unlikely]] return; }
L_001996A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001996C0u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001996C0u) [[unlikely]] return; }
L_001996C0:
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 127u);  if (t) { goto L_001996D4; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[3], 0u + 127u);
    c.budget -= 2;
L_001996D4:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_001996E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.budget -= 1;
L_001996E8:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00199710; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0019972C; } }
L_00199710:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0019972C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199734u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00199734u) [[unlikely]] return; }
L_00199734:
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00199744; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_00199744:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00199760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_00199848; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0019984C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00199848; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[2].d[0] | 5152ull;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001997CCu); st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 189u, depth + 1u); else { c.pc = 0x0016F360u; return; } if (c.pc != 0x001997CCu) [[unlikely]] return; }
L_001997CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00199848; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);  if (t) { goto L_00199804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00199848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.budget -= 1;
L_00199804:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00199828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 15u);  if (t) { goto L_00199848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_00199828:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199844u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00199844u) [[unlikely]] return; }
L_00199844:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_00199848:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0019984C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00199860:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[3].w[0] - 6096u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], c.r[3].w[0] - 6084u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    c.budget -= 21;
L_001998B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_001998DC; }
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[7].d[0] = c.r[5].d[0] << (c.r[3].w[0] & 63u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001998D8; } }
    c.r[16].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.budget -= 1;
L_001998D8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001998DC:
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001998B4u | kUnwind; return; } goto L_001998B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[23], c.r[5].w[0] + 336u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[23].w[0] + c.r[8].w[0]);
    c.budget -= 7;
L_00199904:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00199924; }
    c.r[5].d[0] = c.r[5].d[0] & 63ull;
    c.r[5].d[0] = c.r[6].d[0] << (c.r[5].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
L_00199924:
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[23].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199904u | kUnwind; return; } goto L_00199904; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    c.r[20].d[0] = c.r[5].d[0] | 35840ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001999C0; } }
    set32(c.r[8], c.r[29].w[0] + 168u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    c.budget -= 4;
L_00199958:
    set32(c.r[9], c.r[5].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (t) { goto L_00199978; } }
    c.r[5].d[0] = c.r[5].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[6].d[0] << (c.r[5].w[0] & 63u);  if (t) { goto L_00199978; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 1;
L_00199978:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & c.r[11].d[0];  if (t) { goto L_00199994; } }
    c.r[5].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001999A0; } }
    c.r[5].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.budget -= 2;
L_00199994:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_001999B4; }
    c.budget -= 1;
L_001999A0:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
L_001999B4:
    c.r[5].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199958u | kUnwind; return; } goto L_00199958; } }
L_001999C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_00199A10; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[4], 0u + 1579u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001999E8u); c.r[5].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x001999E8u) [[unlikely]] return; }
L_001999E8:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 14064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199A08u); c.r[6].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x00199A08u) [[unlikely]] return; }
L_00199A08:
    set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 2;
L_00199A10:
    set32(c.r[21], c.r[3].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00199B40; } }
L_00199A20:
    set32(c.r[3], c.r[23].w[0] + c.r[19].w[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    if (c.r[22].d[0] == c.r[3].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00199B34; }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[22].d[0] & 63ull;
    c.r[4].d[0] = c.r[3].d[0] << (c.r[4].w[0] & 63u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00199B30; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 168u)));
    c.r[1].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];  if (t) { goto L_00199A90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 2736u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[18].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4768u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199AF0; } }
L_00199A90:
    c.r[1].d[0] = c.r[22].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00199AC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 128u)));
    set32(c.r[3], c.r[18].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4792u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00199AF0; } }
L_00199AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 2880u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 192u)));
    set32(c.r[3], c.r[18].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4808u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st8((c.r[2].w[0] - 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00199AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199AF8u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x00199AF8u) [[unlikely]] return; }
L_00199AF8:
    mmi::paddub(c.r[30], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 14064u);
    set32(c.r[7], c.r[18].w[0] + 3u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199B14u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x00199B14u) [[unlikely]] return; }
L_00199B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[4], c.r[2].w[0] - 25360u);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199B2Cu); mmi::paddub(c.r[7], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x00199B2Cu) [[unlikely]] return; }
L_00199B2C:
    set32(c.r[20], c.r[20].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_00199B30:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00199B34:
    c.r[3].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199A20u | kUnwind; return; } goto L_00199A20; } }
L_00199B40:
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
L_00199B70:
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199860u | kUnwind; return; } goto L_00199860; }
L_00199B80:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199860u | kUnwind; return; } goto L_00199860; }
L_00199B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 6096u);
    set32(c.r[8], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 8;
L_00199BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00199BE8; } }
    c.r[2].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_00199BE8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199BB0u | kUnwind; return; } goto L_00199BB0; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[7].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[4], 0u + 1581u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199C18u); c.r[5].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x00199C18u) [[unlikely]] return; }
L_00199C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 14064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199C34u); c.r[6].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00199C34u) [[unlikely]] return; }
L_00199C34:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00199C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 6096u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 8;
L_00199C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 12u);  if (t) { goto L_00199C98; } }
    c.r[2].d[0] = c.r[3].d[0] & 31ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_00199C98:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199C60u | kUnwind; return; } goto L_00199C60; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[7].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[4], 0u + 1580u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199CC4u); c.r[5].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x00199CC4u) [[unlikely]] return; }
L_00199CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 14064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01AA0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199CE0u); c.r[6].d[0] = c.r[2].d[0] | 35840ull;  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00199CE0u) [[unlikely]] return; }
L_00199CE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00199CF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 6084u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00199D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28136u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 28136u), c.r[3].w[0]);  c.pc = t; return; }
L_00199D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21942u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00199D54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199D54u); set32(c.r[4], c.r[2].w[0] - 25328u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00199D54u) [[unlikely]] return; }
L_00199D54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00199D60:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[7], c.r[3].w[0] + 32224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[3].w[0] + 32228u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[3].w[0] + 32232u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 624u), c.f[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 628u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 632u), c.f[0]);
    st32((c.r[4].w[0] + 636u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 592u), 0u);
    st32((c.r[4].w[0] + 596u), 0u);
    st32((c.r[4].w[0] + 600u), 0u);
    st32((c.r[4].w[0] + 604u), 0u);
    st32((c.r[4].w[0] + 608u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 612u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 616u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 620u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00199E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00199E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199E44u); set32(c.r[4], c.r[2].w[0] - 15376u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x00199E44u) [[unlikely]] return; }
L_00199E44:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00199E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199E50u);  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00192F90u; return; } if (c.pc != 0x00199E50u) [[unlikely]] return; }
L_00199E50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 7856u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00199E74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00199E74u) [[unlikely]] return; }
L_00199E74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 21952u);
    set32(c.r[6], 0u + 1536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199E88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00199E88u) [[unlikely]] return; }
L_00199E88:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[2].w[0] - 30832u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[2].w[0] + 32224u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 21936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 20480u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 21952u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 30;
L_00199F00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 32128u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 608u)));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F54u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x00199F54u) [[unlikely]] return; }
L_00199F54:
    set32(c.r[19], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F6Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00199F6Cu) [[unlikely]] return; }
L_00199F6C:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F78u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00199F78u) [[unlikely]] return; }
L_00199F78:
    st16((c.r[18].w[0] + 612u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00199F88u); c.f[13] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00199F88u) [[unlikely]] return; }
L_00199F88:
    st16((c.r[18].w[0] + 614u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[18].w[0] + 616u), static_cast<std::uint16_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 528u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00199F00u | kUnwind; return; } goto L_00199F00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A01C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 21936u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[3].w[0] + 592u), c.f[4]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[3].w[0] + 596u), c.f[3]);
    st32((c.r[3].w[0] + 600u), c.f[2]);
    st32((c.r[3].w[0] + 604u), c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[3].w[0] + 592u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[3].w[0] + 596u));
    c.f[2] = ld32((c.r[3].w[0] + 600u));
    c.f[1] = ld32((c.r[3].w[0] + 604u));
    st32((c.r[2].w[0] + 608u), c.f[4]);
    st32((c.r[2].w[0] + 612u), c.f[3]);
    st32((c.r[2].w[0] + 616u), c.f[2]);
    st32((c.r[2].w[0] + 620u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[2].w[0] + 612u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 612u), c.f[0]);
    c.budget -= 26;
L_0019A01C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4560u)));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 21942u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[5], c.r[2].w[0] - 23440u);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 7088u);
    set32(c.r[11], c.r[6].w[0] + 6704u);
    set32(c.r[10], 0u + 61u);
    c.budget -= 16;
L_0019A05C:
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[13], 0u + 1u);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    c.r[13].d[0] = c.r[13].d[0] | 32768ull;
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[12], c.r[11].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.r[6].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[5], c.f[4]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 12u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[5] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[4]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.r[9].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[7].d[0] = ld16((c.r[12].w[0] + 4u));
    c.r[8].d[0] = ld16((c.r[12].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 8;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st64((c.r[5].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[5].w[0] + 40u), c.r[10].d[0]);
    c.r[8].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[7].d[0] = ld16((c.r[12].w[0] + 4u));
    c.r[9].d[0] = ld16((c.r[12].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 8;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[13].d[0];
    st64((c.r[5].w[0] + 24u), c.r[7].d[0]);
    c.budget -= 63;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A05Cu | kUnwind; return; } goto L_0019A05C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0019A188; } }
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    st64((c.r[1].w[0] - 23416u), c.r[2].d[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
L_0019A188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st8((c.r[1].w[0] + 28140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A19Cu); st8((c.r[1].w[0] + 28141u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 86u, depth + 1u); else { c.pc = 0x001A51A0u; return; } if (c.pc != 0x0019A19Cu) [[unlikely]] return; }
L_0019A19C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0019A1C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A3B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A3B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4736u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0019A2B0; } }
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0019A23C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 891u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 789u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8391u)));
    c.r[5].d[0] = c.r[5].sd[0] < 43ll ? 1ull : 0ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];  if (t) { goto L_0019A288; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1844u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 5;
L_0019A288:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0019A2A4; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A29Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0019A29Cu) [[unlikely]] return; }
L_0019A29C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0019A2A4:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A23Cu | kUnwind; return; } goto L_0019A23C; } }
L_0019A2B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0019A3B8; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A2E8u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0019A2E8u) [[unlikely]] return; }
L_0019A2E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A2F8u); set32(c.r[5], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0019A2F8u) [[unlikely]] return; }
L_0019A2F8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A3B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[2].w[0] + 592u));
    c.f[2] = ld32((c.r[2].w[0] + 596u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = ld32((c.r[2].w[0] + 604u));
    st32((c.r[2].w[0] + 608u), c.f[3]);
    st32((c.r[2].w[0] + 612u), c.f[2]);
    st32((c.r[2].w[0] + 616u), c.f[1]);
    st32((c.r[2].w[0] + 620u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A348u); set32(c.r[6], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0019A348u) [[unlikely]] return; }
L_0019A348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A360u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0019A360u) [[unlikely]] return; }
L_0019A360:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A374; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0019A374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A3A8; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_0019A3B8; } }
L_0019A3A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A3B8u); set32(c.r[4], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0019A3B8u) [[unlikely]] return; }
L_0019A3B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019A438; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019A438; } }
    set32(c.r[4], c.r[3].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A3E0u); set32(c.r[5], c.r[3].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0019A3E0u) [[unlikely]] return; }
L_0019A3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A438; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A410u); set32(c.r[6], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0019A410u) [[unlikely]] return; }
L_0019A410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A424u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0019A424u) [[unlikely]] return; }
L_0019A424:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[2].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A438u); set32(c.r[5], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x0019A438u) [[unlikely]] return; }
L_0019A438:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 7952u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A45Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019A45Cu) [[unlikely]] return; }
L_0019A45C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0019A480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[2].w[0] - 23416u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 8048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 433u)));
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    set32(c.r[5], 0u + 22u);
    c.budget -= 17;
    { st64((c.r[1].w[0] + 8064u), c.r[2].d[0]);  [[clang::musttail]] return unit_0027(c, 105u, depth); }
L_0019A4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[2].d[0] | 18541ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0019A534; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[2], c.r[2].w[0] - 23440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[1].w[0] + 28141u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A528u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0019A528u) [[unlikely]] return; }
L_0019A528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A534; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0019A534:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019A540:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 11u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0019A748; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019A5A4; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019A580; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0019A580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019A854; } }
L_0019A580:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A854; } }
L_0019A5A4:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);  if (t) { goto L_0019A638; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A60000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A634; } }
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44040000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A634; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44230000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A854; } }
L_0019A634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.budget -= 1;
L_0019A638:
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44940000u);  if (t) { goto L_0019A6C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443E0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A6BC; } }
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44850000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A6BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A6BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A854; } }
L_0019A6BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44940000u);
    c.budget -= 1;
L_0019A6C0:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A40000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A854; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44870000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C60000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A854; } }
L_0019A748:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44040000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_0019A7D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A7CC; } }
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44090000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A7CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A60000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0019A854; } }
L_0019A7CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.budget -= 1;
L_0019A7D0:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x448D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A854; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44710000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019A854; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C50000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0019A854; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0019A854:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019A860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019A8C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[16], c.r[3].w[0] - 15376u);
    set32(c.r[17], 0u + 4u);
    c.budget -= 3;
L_0019A88C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0019A8AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A8A8u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 73u, depth + 1u); else { c.pc = 0x0019E860u; return; } if (c.pc != 0x0019A8A8u) [[unlikely]] return; }
L_0019A8A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0019A8AC:
    c.r[3].d[0] = c.r[3].d[0] | 20384ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019A88Cu | kUnwind; return; } goto L_0019A88C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0019A908; } }
L_0019A8C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[4], c.r[3].w[0] + 5008u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A8E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A8E4u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 79u, depth + 1u); else { c.pc = 0x0019E950u; return; } if (c.pc != 0x0019A8E4u) [[unlikely]] return; }
L_0019A8E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], c.r[3].w[0] - 19760u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019A904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A904u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 79u, depth + 1u); else { c.pc = 0x0019E950u; return; } if (c.pc != 0x0019A904u) [[unlikely]] return; }
L_0019A904:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0019A908:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019A920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    fpu_div(c, 0u, c.f[12], c.f[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[21] = c.f[15];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 1u, c.f[13], c.f[1]);
    fpu_div(c, 22u, c.f[0], c.f[14]);
    c.f[20] = c.f[16];
    c.f[0] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 23u, c.f[0], c.f[14]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019A97Cu);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x0019A97Cu) [[unlikely]] return; }
L_0019A97C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[5].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[3] = fp::mul(c.f[3], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::add(c.f[22], c.f[22]);
    c.f[1] = fp::add(c.f[23], c.f[23]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[0] = c.r[4].w[0];
    st32((c.r[16].w[0]), c.f[2]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    c.f[1] = fp::add(c.f[20], c.f[21]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019AA00:
    set32(c.r[2], 0u + 63u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[8], 0u + 6u);
    c.budget -= 6;
L_0019AA18:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::clip(c.vu0, 9u, 9u);
    set32(c.r[3], cfc2(c, 18u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019AA68; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019AA18u | kUnwind; return; } goto L_0019AA18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0019AA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019AA70:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[30], c.r[21].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[22], c.r[4].w[0] + 9600u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[23], c.r[7], c.r[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] | 4896ull;  if (t) { goto L_0019AF00; } }
    set32(c.r[3], 0u + 4080u);
    st32((c.r[21].w[0] + 640u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 652u), c.f[12]);
    st32((c.r[29].w[0] + 544u), 0u);
    st32((c.r[29].w[0] + 536u), 0u);
    st32((c.r[29].w[0] + 532u), 0u);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 528u), 0u);  if (t) { goto L_0019AB38; } }
    c.f[14] = ld32((c.r[5].w[0] + 1344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[12] = c.r[2].w[0];
    c.f[15] = ld32((c.r[5].w[0] + 1348u));
    c.f[16] = ld32((c.r[5].w[0] + 1352u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB14u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0026(c, 164u, depth + 1u); else { c.pc = 0x0019A920u; return; } if (c.pc != 0x0019AB14u) [[unlikely]] return; }
L_0019AB14:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[21].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB28u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0019AB28u) [[unlikely]] return; }
L_0019AB28:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AB38u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0019AB38u) [[unlikely]] return; }
L_0019AB38:
    set32(c.r[3], c.r[23].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23424u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23420u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 496u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 500u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23436u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.f[0]);  if (t) { goto L_0019AEE0; } }
    set32(c.r[3], c.r[16].w[0] << 4);
    c.budget -= 1;
L_0019ABA4:
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[18], c.r[3].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 80u));
    set32(c.r[3], 0u + 110u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019AC18; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0019AC18; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0019AC18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[3] = ld32((c.r[1].w[0] - 23376u));
    set32(c.r[17], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[2] = ld32((c.r[1].w[0] - 23372u));
    st32((c.r[29].w[0] + 496u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[1] = ld32((c.r[1].w[0] - 23392u));
    st32((c.r[29].w[0] + 500u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[0] = ld32((c.r[1].w[0] - 23388u));
    st32((c.r[29].w[0] + 504u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AC18u); st32((c.r[29].w[0] + 508u), c.f[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0019AC18u) [[unlikely]] return; }
L_0019AC18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0019AEDC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0019AD78; } }
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] + 8400u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    set32(c.r[3], c.r[3].w[0] + 8432u);
    set32(c.r[8], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[29].w[0] + 392u), c.f[0]);
    st32((c.r[29].w[0] + 396u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 96u) & ~15u, c.vu0.vf[4]);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[3], 0u + 2u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 488u), c.f[0]);  if (t) { goto L_0019AD20; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019AD20; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019AD20; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0019AD54; }
L_0019AD20:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 80u));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 400u);  if (t) { goto L_0019AD60; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019AD5C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019AD5C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0019AD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 80u));  if (t) { goto L_0019AD7C; } }
L_0019AD5C:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 1;
L_0019AD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AD68u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0026(c, 166u, depth + 1u); else { c.pc = 0x0019AA00u; return; } if (c.pc != 0x0019AD68u) [[unlikely]] return; }
L_0019AD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019AD78; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 2;
L_0019AD78:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 80u));
    c.budget -= 1;
L_0019AD7C:
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019ADF0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 82u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);  if (t) { goto L_0019ADB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43940000u);
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0019ADBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.budget -= 1;
L_0019ADB0:
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
L_0019ADBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28428u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0019ADF0; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_0019ADF0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0019AEC4; } }
    set32(c.r[2], c.r[29].w[0] + 512u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 496u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[21].w[0] + 640u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 816u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[21].w[0] + 80u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 656u);
    set32(c.r[6], c.r[21].w[0] + 144u);
    set32(c.r[8], c.r[21].w[0] + 336u);
    set32(c.r[9], c.r[21].w[0] + 400u);
    set32(c.r[10], c.r[21].w[0] + 464u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE58u); set32(c.r[11], c.r[21].w[0] + 528u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135E40u; return; } if (c.pc != 0x0019AE58u) [[unlikely]] return; }
L_0019AE58:
    set32(c.r[4], ld32((c.r[22].w[0] + 816u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AE88u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x0019AE88u) [[unlikely]] return; }
L_0019AE88:
    set32(c.r[2], ld32((c.r[28].w[0] - 26180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_0019AEB0; } }
    st32((c.r[28].w[0] - 26180u), c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AEA0u); set32(c.r[4], ld32((c.r[28].w[0] - 26180u)));  if (depth < kMaxDepth) unit_000D(c, 147u, depth + 1u); else { c.pc = 0x00135DF0u; return; } if (c.pc != 0x0019AEA0u) [[unlikely]] return; }
L_0019AEA0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AEACu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x0019AEACu) [[unlikely]] return; }
L_0019AEAC:
    c.budget -= 1;
L_0019AEB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AEBCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x0019AEBCu) [[unlikely]] return; }
L_0019AEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AED8; } }
L_0019AEC4:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
L_0019AED8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0019AEDC:
    c.budget -= 1;
L_0019AEE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019ABA4u | kUnwind; return; } goto L_0019ABA4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0019AF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AF00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0019AF00u) [[unlikely]] return; }
L_0019AF00:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_0019AF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AF40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0026(c, 159u, depth + 1u); else { c.pc = 0x0019A860u; return; } if (c.pc != 0x0019AF40u) [[unlikely]] return; }
L_0019AF40:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AF54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0019AF54u) [[unlikely]] return; }
L_0019AF54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_0019AF88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[4], c.r[2].w[0] + 5008u);
    c.r[5].d[0] = 0ull | 32771ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AF7Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0019AF7Cu) [[unlikely]] return; }
L_0019AF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019AFA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 1;
L_0019AF88:
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 32772ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[4], c.r[2].w[0] + 5008u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AFA4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0019AFA4u) [[unlikely]] return; }
L_0019AFA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 15360u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 15296u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AFC0u); st32((c.r[1].w[0] - 15364u), 0u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x0019AFC0u) [[unlikely]] return; }
L_0019AFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 15376u);
    c.r[5].d[0] = 0ull | 32771ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019AFE0u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0019AFE0u) [[unlikely]] return; }
L_0019AFE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019B000; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019B048; } }
L_0019B000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9776u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B014u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0019B014u) [[unlikely]] return; }
L_0019B014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 32772ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], c.r[2].w[0] - 19760u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B034u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0019B034u) [[unlikely]] return; }
L_0019B034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9760u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B048u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0019B048u) [[unlikely]] return; }
L_0019B048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[4], c.r[2].w[0] + 25408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[5], c.r[2].w[0] + 25472u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B064u); st32((c.r[1].w[0] + 25404u), 0u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x0019B064u) [[unlikely]] return; }
L_0019B064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[4], c.r[2].w[0] + 25392u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B084u); c.r[5].d[0] = 0ull | 32773ull;  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0019B084u) [[unlikely]] return; }
L_0019B084:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[16], c.r[3].w[0] - 19760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.r[4].d[0] = c.r[3].d[0] | 10244ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019B0E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 10240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019B16C; } }
L_0019B0E4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0019B0FC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 10240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0019B16C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0019B0FC:
    c.r[4].d[0] = c.r[3].d[0] | 10240ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    st16((c.r[1].w[0] + 10260u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B11Cu); st16((c.r[1].w[0] + 10262u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 124u, depth + 1u); else { c.pc = 0x0019F480u; return; } if (c.pc != 0x0019B11Cu) [[unlikely]] return; }
L_0019B11C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10244u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.r[4].d[0] = c.r[2].d[0] | 26688ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01920000u);
    c.r[5].d[0] = c.r[2].d[0] | 27728ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B13Cu); set32(c.r[6], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0027(c, 125u, depth + 1u); else { c.pc = 0x0019F4E0u; return; } if (c.pc != 0x0019B13Cu) [[unlikely]] return; }
L_0019B13C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 2;
L_0019B144:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B15Cu); c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (depth < kMaxDepth) unit_0027(c, 137u, depth + 1u); else { c.pc = 0x0019F6A0u; return; } if (c.pc != 0x0019B15Cu) [[unlikely]] return; }
L_0019B15C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B144u | kUnwind; return; } goto L_0019B144; } }
L_0019B16C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019B180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0019B1D4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019B1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B1C8u);  if (depth < kMaxDepth) unit_0027(c, 129u, depth + 1u); else { c.pc = 0x0019F5A0u; return; } if (c.pc != 0x0019B1C8u) [[unlikely]] return; }
L_0019B1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B1D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 148u, depth + 1u); else { c.pc = 0x0019F950u; return; } if (c.pc != 0x0019B1D0u) [[unlikely]] return; }
L_0019B1D0:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0019B1D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019B1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 25392u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B224u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B224u) [[unlikely]] return; }
L_0019B224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B230u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B230u) [[unlikely]] return; }
L_0019B230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B23Cu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B23Cu) [[unlikely]] return; }
L_0019B23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B244u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B244u) [[unlikely]] return; }
L_0019B244:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B274u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B274u) [[unlikely]] return; }
L_0019B274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B280u); set32(c.r[4], c.r[3].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B280u) [[unlikely]] return; }
L_0019B280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B28Cu); set32(c.r[4], c.r[3].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B28Cu) [[unlikely]] return; }
L_0019B28C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B2C4u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B2C4u) [[unlikely]] return; }
L_0019B2C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B2D0u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B2D0u) [[unlikely]] return; }
L_0019B2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B2D8u);  if (depth < kMaxDepth) unit_0038(c, 260u, depth + 1u); else { c.pc = 0x001E2C80u; return; } if (c.pc != 0x0019B2D8u) [[unlikely]] return; }
L_0019B2D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B314u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B314u) [[unlikely]] return; }
L_0019B314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B320u); set32(c.r[4], c.r[3].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B320u) [[unlikely]] return; }
L_0019B320:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B354u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B354u) [[unlikely]] return; }
L_0019B354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B360u); set32(c.r[4], c.r[3].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B360u) [[unlikely]] return; }
L_0019B360:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B394u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B394u) [[unlikely]] return; }
L_0019B394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3A0u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B3A0u) [[unlikely]] return; }
L_0019B3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3ACu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B3ACu) [[unlikely]] return; }
L_0019B3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3B4u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B3B4u) [[unlikely]] return; }
L_0019B3B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3E4u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B3E4u) [[unlikely]] return; }
L_0019B3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3F0u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B3F0u) [[unlikely]] return; }
L_0019B3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B3FCu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B3FCu) [[unlikely]] return; }
L_0019B3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B404u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B404u) [[unlikely]] return; }
L_0019B404:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B434u); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B434u) [[unlikely]] return; }
L_0019B434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B43Cu);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B43Cu) [[unlikely]] return; }
L_0019B43C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 5008u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 5008u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B4A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 5008u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B4D4u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B4D4u) [[unlikely]] return; }
L_0019B4D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B4E0u); set32(c.r[4], c.r[3].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B4E0u) [[unlikely]] return; }
L_0019B4E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B514u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B514u) [[unlikely]] return; }
L_0019B514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B520u); set32(c.r[4], c.r[3].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B520u) [[unlikely]] return; }
L_0019B520:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 5008u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B574u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B574u) [[unlikely]] return; }
L_0019B574:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B580u); set32(c.r[4], c.r[3].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B580u) [[unlikely]] return; }
L_0019B580:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B5B4u); set32(c.r[4], c.r[3].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B5B4u) [[unlikely]] return; }
L_0019B5B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B5C0u); set32(c.r[4], c.r[3].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B5C0u) [[unlikely]] return; }
L_0019B5C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B5E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 5008u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B614u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B614u) [[unlikely]] return; }
L_0019B614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B620u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B620u) [[unlikely]] return; }
L_0019B620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B62Cu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B62Cu) [[unlikely]] return; }
L_0019B62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B634u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B634u) [[unlikely]] return; }
L_0019B634:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B664u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B664u) [[unlikely]] return; }
L_0019B664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B670u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B670u) [[unlikely]] return; }
L_0019B670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B67Cu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B67Cu) [[unlikely]] return; }
L_0019B67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B684u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B684u) [[unlikely]] return; }
L_0019B684:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B6B4u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B6B4u) [[unlikely]] return; }
L_0019B6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B6C0u); set32(c.r[4], c.r[2].w[0] + 25392u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B6C0u) [[unlikely]] return; }
L_0019B6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B6CCu); set32(c.r[4], c.r[2].w[0] - 19760u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B6CCu) [[unlikely]] return; }
L_0019B6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B6D4u);  if (depth < kMaxDepth) unit_0026(c, 193u, depth + 1u); else { c.pc = 0x0019B0A0u; return; } if (c.pc != 0x0019B6D4u) [[unlikely]] return; }
L_0019B6D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 10240ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B180u | kUnwind; return; } goto L_0019B180; }
L_0019B6F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[3].w[0] + 25392u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00199D60u | kUnwind; return; } goto L_00199D60; }
L_0019B700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B724u); set32(c.r[4], c.r[2].w[0] + 5008u);  if (depth < kMaxDepth) unit_0026(c, 129u, depth + 1u); else { c.pc = 0x00199D60u; return; } if (c.pc != 0x0019B724u) [[unlikely]] return; }
L_0019B724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B72Cu);  if (depth < kMaxDepth) unit_0038(c, 260u, depth + 1u); else { c.pc = 0x001E2C80u; return; } if (c.pc != 0x0019B72Cu) [[unlikely]] return; }
L_0019B72C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0019B750:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], c.r[3].w[0] + 10352u);
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], c.r[3].w[0] + 9984u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[3].w[0]), c.r[4].d[0]);  c.pc = t; return; }
L_0019B7A0:
    set32(c.r[6], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26080u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26084u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    set32(c.r[3], c.r[3].w[0] + 26000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26088u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    set32(c.r[5], 0u + 8192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26096u), c.r[5].w[0]);
    set32(c.r[4], 0u + 12800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26100u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 6784u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26104u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26112u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A10000u);
    st32((c.r[1].w[0] + 26116u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25968u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26120u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26128u), c.r[6].w[0]);
    set32(c.r[3], 0u + 4608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26132u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A10000u);
    set32(c.r[3], c.r[3].w[0] + 25888u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26136u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26144u), c.r[6].w[0]);
    set32(c.r[3], 0u + 12288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st32((c.r[1].w[0] + 26148u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A10000u);
    set32(c.r[3], c.r[3].w[0] + 25808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 26152u), c.r[3].w[0]);  c.pc = t; return; }
L_0019B860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    set32(c.r[5], c.r[2].w[0] + 26080u);
    set32(c.r[2], c.r[28].w[0] - 30712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[7], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 13;
L_0019B894:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { goto L_0019B8D0; } }
L_0019B8B0:
    set32(c.r[3], c.r[6].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B8B0u | kUnwind; return; } goto L_0019B8B0; } }
    c.budget -= 1;
L_0019B8D0:
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019B894u | kUnwind; return; } goto L_0019B894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B8E8u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016F210u; return; } if (c.pc != 0x0019B8E8u) [[unlikely]] return; }
L_0019B8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10272u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019B900u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x0019B900u) [[unlikely]] return; }
L_0019B900:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019B910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 26136u)));
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[7].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0019B970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    set32(c.r[3], c.r[3].w[0] + 26080u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] << 2);  if (t) { goto L_0019B99C; } }
    mmi::paddub(c.r[5], c.r[3], c.r[0]);
    set32(c.r[7], c.r[5].w[0] << 2);
    c.budget -= 2;
L_0019B99C:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[7].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0019B9F0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 26080u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[21], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 32u);  if (t) { [[clang::musttail]] return unit_0027(c, 55u, depth); } }
L_0019BA5C:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[3].w[0] >> 28);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0027(c, 54u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_0027(c, 39u, depth); } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] + 8512u);
    set32(c.r[3], c.r[5].w[0] >> 18);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0019BAB8; } }
    c.r[18].d[0] = ld8((c.r[21].w[0] + 13u));
    c.budget -= 3;
L_0019BAB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BAD8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0019BAD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_0019BAF0; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0019BAF0:
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0027(c, 56u, depth); } }
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0019BB20; } }
    c.r[17].d[0] = c.r[17].d[0] | 8ull;
    c.budget -= 2;
L_0019BB20:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BB38; } }
    c.r[17].d[0] = c.r[17].d[0] | 128ull;
    c.budget -= 2;
L_0019BB38:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BB50; } }
    c.r[17].d[0] = c.r[17].d[0] | 256ull;
    c.budget -= 2;
L_0019BB50:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BB68; } }
    set32(c.r[20], 0u + 1u);
    c.r[17].d[0] = c.r[17].d[0] | 512ull;
    c.budget -= 2;
L_0019BB68:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BBB8; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[17].d[0] = c.r[17].d[0] | 16ull;  if (t) { goto L_0019BB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_0019BBB8; } }
L_0019BB90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0019BBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u - 1u);  if (t) { goto L_0019BBB8; } }
L_0019BBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BBB0u);  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00139020u; return; } if (c.pc != 0x0019BBB0u) [[unlikely]] return; }
L_0019BBB0:
    mmi::paddub(c.r[23], c.r[2], c.r[0]);
    c.budget -= 2;
L_0019BBB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 516u);  if (t) { goto L_0019BCF0; } }
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0019BC10; } }
    set32(c.r[4], c.r[5].w[0] >> 12);
    c.r[5].d[0] = c.r[4].d[0] & 15ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28141u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[17].d[0] = c.r[17].d[0] | 32ull;  if (t) { goto L_0019BC10; } }
    c.r[4].d[0] = ld16((c.r[29].w[0] + 516u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st8((c.r[1].w[0] + 28141u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[29].w[0] + 516u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0019BC10:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0019BC54; } }
    set32(c.r[4], c.r[5].w[0] >> 8);
    c.r[5].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[17].d[0] = c.r[17].d[0] | 64ull;  if (t) { goto L_0019BC50; } }
    c.r[4].d[0] = ld16((c.r[29].w[0] + 518u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[29].w[0] + 518u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0019BC50:
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_0019BC54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0019BCF0; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    set32(c.r[3], 0u + 14u);
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 516u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { goto L_0019BCB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28141u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], c.r[3].w[0] - 23408u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[19].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 12;
L_0019BCB0:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 518u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019BCF0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] + 8624u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld64((c.r[3].w[0]));
    set32(c.r[3], c.r[20].w[0] + 66u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st64((c.r[19].w[0]), c.r[4].d[0]);
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 13;
L_0019BCF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { [[clang::musttail]] return unit_0027(c, 54u, depth); } }
    set32(c.r[4], c.r[4].w[0] + 22784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00198000u < 16384u) { entry = entries_0026[(t - 0x00198000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0019BD18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x64000000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 32769ull;
    st64((c.r[19].w[0]), c.r[4].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[4].d[0] | 21776ull;
    c.r[3].d[0] = c.r[17].d[0] | 3ull;
    st64((c.r[19].w[0] + 8u), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 10u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 11u));
    c.r[7].d[0] = ld8((c.r[21].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 14u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    c.r[3].d[0] = ld32((c.r[21].w[0] + 16u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1936u);
    set32(c.r[5], c.r[5].w[0] + 1728u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 22u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = ld32((c.r[21].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 1936u);
    set32(c.r[5], c.r[5].w[0] + 1728u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 30u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 28u)));
    c.r[4].d[0] = ld32((c.r[21].w[0] + 32u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 36u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 1936u);
    set32(c.r[6], c.r[6].w[0] + 1728u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    st64((c.r[19].w[0] + 8u), 0ull);
    c.budget -= 70;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { [[clang::musttail]] return unit_0027(c, 54u, depth); } }
L_0019BE30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xA4000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 32769ull;
    st64((c.r[19].w[0]), c.r[3].d[0]);
    set32(c.r[3], c.r[20].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], 0u + 67u);
    c.r[5].d[0] = c.r[3].d[0] << 8;
    set32(c.r[3], c.r[20].w[0] + 6u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 21331ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 4;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[17].d[0] | 3ull;
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st64((c.r[19].w[0]), c.r[2].d[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019BEA0u); mmi::paddub(c.r[5], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 60u, depth + 1u); else { c.pc = 0x0019E550u; return; } if (c.pc != 0x0019BEA0u) [[unlikely]] return; }
L_0019BEA0:
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 14;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] | 10ull;
    c.r[4].d[0] = c.r[4].d[0] << 34;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0]), c.r[4].d[0]);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 13u));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 14u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 15u));
    c.r[7].d[0] = ld8((c.r[21].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 18u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = ld32((c.r[21].w[0] + 20u));
    set32(c.r[4], c.r[4].w[0] + 1936u);
    set32(c.r[5], c.r[5].w[0] + 1728u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 38u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 30u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 28u)));
    c.r[3].d[0] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] + 1936u);
    set32(c.r[5], c.r[5].w[0] + 1728u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[19].w[0] + 8u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 50u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 48u)));
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 42u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 40u)));
    c.r[4].d[0] = ld32((c.r[21].w[0] + 44u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 52u));
    set32(c.r[5], c.r[5].w[0] + 1936u);
    set32(c.r[6], c.r[6].w[0] + 1728u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 88;
    [[clang::musttail]] return unit_0027(c, 1u, depth);
}

}
