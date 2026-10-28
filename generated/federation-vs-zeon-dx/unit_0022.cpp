#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0022[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
};

void unit_0022(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00188000;
    case 2u: goto L_0018800C;
    case 3u: goto L_00188014;
    case 4u: goto L_00188118;
    case 5u: goto L_00188194;
    case 6u: goto L_001881EC;
    case 7u: goto L_00188200;
    case 8u: goto L_00188224;
    case 9u: goto L_00188238;
    case 10u: goto L_00188258;
    case 11u: goto L_0018825C;
    case 12u: goto L_00188270;
    case 13u: goto L_00188308;
    case 14u: goto L_00188314;
    case 15u: goto L_00188338;
    case 16u: goto L_0018834C;
    case 17u: goto L_00188380;
    case 18u: goto L_001883CC;
    case 19u: goto L_00188470;
    case 20u: goto L_001884CC;
    case 21u: goto L_001884FC;
    case 22u: goto L_001885A8;
    case 23u: goto L_001885CC;
    case 24u: goto L_001885E0;
    case 25u: goto L_00188610;
    case 26u: goto L_0018867C;
    case 27u: goto L_001886A0;
    case 28u: goto L_00188710;
    case 29u: goto L_001887C8;
    case 30u: goto L_001887EC;
    case 31u: goto L_00188800;
    case 32u: goto L_00188830;
    case 33u: goto L_001888D0;
    case 34u: goto L_001888FC;
    case 35u: goto L_00188910;
    case 36u: goto L_00188918;
    case 37u: goto L_00188920;
    case 38u: goto L_00188948;
    case 39u: goto L_00188998;
    case 40u: goto L_001889A0;
    case 41u: goto L_001889B4;
    case 42u: goto L_001889D0;
    case 43u: goto L_00188A10;
    case 44u: goto L_00188A18;
    case 45u: goto L_00188A44;
    case 46u: goto L_00188A4C;
    case 47u: goto L_00188A5C;
    case 48u: goto L_00188A70;
    case 49u: goto L_00188AB8;
    case 50u: goto L_00188B18;
    case 51u: goto L_00188B20;
    case 52u: goto L_00188BA0;
    case 53u: goto L_00188C78;
    case 54u: goto L_00188CAC;
    case 55u: goto L_00188CB4;
    case 56u: goto L_00188CBC;
    case 57u: goto L_00188D08;
    case 58u: goto L_00188D10;
    case 59u: goto L_00188D8C;
    case 60u: goto L_00188DD4;
    case 61u: goto L_00188DF8;
    case 62u: goto L_00188E50;
    case 63u: goto L_00188E58;
    case 64u: goto L_00188EA0;
    case 65u: goto L_00188EDC;
    case 66u: goto L_00188F54;
    case 67u: goto L_00188F70;
    case 68u: goto L_00188F78;
    case 69u: goto L_00188FE8;
    case 70u: goto L_00189078;
    case 71u: goto L_001890A4;
    case 72u: goto L_001890AC;
    case 73u: goto L_001890FC;
    case 74u: goto L_00189104;
    case 75u: goto L_00189118;
    case 76u: goto L_0018912C;
    case 77u: goto L_001891B4;
    case 78u: goto L_00189200;
    case 79u: goto L_00189224;
    case 80u: goto L_00189238;
    case 81u: goto L_00189270;
    case 82u: goto L_00189284;
    case 83u: goto L_001892AC;
    case 84u: goto L_001892B4;
    case 85u: goto L_001892F0;
    case 86u: goto L_00189310;
    case 87u: goto L_001893A0;
    case 88u: goto L_00189420;
    case 89u: goto L_00189450;
    case 90u: goto L_0018947C;
    case 91u: goto L_00189490;
    case 92u: goto L_00189588;
    case 93u: goto L_001895D0;
    case 94u: goto L_00189684;
    case 95u: goto L_001896A0;
    case 96u: goto L_001896BC;
    case 97u: goto L_001896D8;
    case 98u: goto L_001896F4;
    case 99u: goto L_00189710;
    case 100u: goto L_0018972C;
    case 101u: goto L_0018976C;
    case 102u: goto L_00189788;
    case 103u: goto L_001897A8;
    case 104u: goto L_001897CC;
    case 105u: goto L_00189808;
    case 106u: goto L_00189840;
    case 107u: goto L_0018985C;
    case 108u: goto L_00189878;
    case 109u: goto L_00189894;
    case 110u: goto L_001898B0;
    case 111u: goto L_001898CC;
    case 112u: goto L_001898E8;
    case 113u: goto L_00189984;
    case 114u: goto L_001899A8;
    case 115u: goto L_001899B8;
    case 116u: goto L_001899CC;
    case 117u: goto L_001899E4;
    case 118u: goto L_001899EC;
    case 119u: goto L_00189A00;
    case 120u: goto L_00189A30;
    case 121u: goto L_00189A58;
    case 122u: goto L_00189A90;
    case 123u: goto L_00189B0C;
    case 124u: goto L_00189B38;
    case 125u: goto L_00189B5C;
    case 126u: goto L_00189BB0;
    case 127u: goto L_00189C54;
    case 128u: goto L_00189C80;
    case 129u: goto L_00189CAC;
    case 130u: goto L_00189CD0;
    case 131u: goto L_00189D30;
    case 132u: goto L_00189D90;
    case 133u: goto L_00189DA0;
    case 134u: goto L_00189DE0;
    case 135u: goto L_00189E80;
    case 136u: goto L_00189EAC;
    case 137u: goto L_00189ED8;
    case 138u: goto L_00189EFC;
    case 139u: goto L_00189F30;
    case 140u: goto L_00189FD0;
    case 141u: goto L_0018A030;
    case 142u: goto L_0018A040;
    case 143u: goto L_0018A09C;
    case 144u: goto L_0018A0C0;
    case 145u: goto L_0018A138;
    case 146u: goto L_0018A144;
    case 147u: goto L_0018A184;
    case 148u: goto L_0018A1C8;
    case 149u: goto L_0018A240;
    case 150u: goto L_0018A27C;
    case 151u: goto L_0018A28C;
    case 152u: goto L_0018A2E4;
    case 153u: goto L_0018A310;
    case 154u: goto L_0018A3AC;
    case 155u: goto L_0018A3C4;
    case 156u: goto L_0018A41C;
    case 157u: goto L_0018A430;
    case 158u: goto L_0018A4F4;
    case 159u: goto L_0018A500;
    case 160u: goto L_0018A5C0;
    case 161u: goto L_0018A5D4;
    case 162u: goto L_0018A664;
    case 163u: goto L_0018A6E0;
    case 164u: goto L_0018A704;
    case 165u: goto L_0018A718;
    case 166u: goto L_0018A730;
    case 167u: goto L_0018A73C;
    case 168u: goto L_0018A750;
    case 169u: goto L_0018A788;
    case 170u: goto L_0018A7A4;
    case 171u: goto L_0018A7D0;
    case 172u: goto L_0018A84C;
    case 173u: goto L_0018A88C;
    case 174u: goto L_0018A89C;
    case 175u: goto L_0018A8B0;
    case 176u: goto L_0018A8C0;
    case 177u: goto L_0018A8D4;
    case 178u: goto L_0018A910;
    case 179u: goto L_0018A980;
    case 180u: goto L_0018A9C0;
    case 181u: goto L_0018AA20;
    case 182u: goto L_0018AA50;
    case 183u: goto L_0018AAA0;
    case 184u: goto L_0018ABF0;
    case 185u: goto L_0018AC74;
    case 186u: goto L_0018ACA0;
    case 187u: goto L_0018AE50;
    case 188u: goto L_0018AEC8;
    case 189u: goto L_0018AEF0;
    case 190u: goto L_0018AFA0;
    case 191u: goto L_0018B034;
    case 192u: goto L_0018B054;
    case 193u: goto L_0018B07C;
    case 194u: goto L_0018B180;
    case 195u: goto L_0018B200;
    case 196u: goto L_0018B214;
    case 197u: goto L_0018B23C;
    case 198u: goto L_0018B2B0;
    case 199u: goto L_0018B32C;
    case 200u: goto L_0018B354;
    case 201u: goto L_0018B460;
    case 202u: goto L_0018B4C8;
    case 203u: goto L_0018B4F0;
    case 204u: goto L_0018B5D0;
    case 205u: goto L_0018B644;
    case 206u: goto L_0018B66C;
    case 207u: goto L_0018B780;
    case 208u: goto L_0018B7F4;
    case 209u: goto L_0018B81C;
    case 210u: goto L_0018B870;
    case 211u: goto L_0018B8F0;
    case 212u: goto L_0018B914;
    case 213u: goto L_0018B93C;
    case 214u: goto L_0018BA50;
    case 215u: goto L_0018BA6C;
    case 216u: goto L_0018BA90;
    case 217u: goto L_0018BAD0;
    case 218u: goto L_0018BAE4;
    case 219u: goto L_0018BB30;
    case 220u: goto L_0018BB40;
    case 221u: goto L_0018BB48;
    case 222u: goto L_0018BB7C;
    case 223u: goto L_0018BB84;
    case 224u: goto L_0018BBA0;
    case 225u: goto L_0018BBD0;
    case 226u: goto L_0018BBD8;
    case 227u: goto L_0018BC10;
    case 228u: goto L_0018BC70;
    case 229u: goto L_0018BC90;
    case 230u: goto L_0018BC98;
    case 231u: goto L_0018BCB0;
    case 232u: goto L_0018BCD0;
    case 233u: goto L_0018BCD8;
    case 234u: goto L_0018BCF0;
    case 235u: goto L_0018BD38;
    case 236u: goto L_0018BD40;
    case 237u: goto L_0018BD50;
    case 238u: goto L_0018BD80;
    case 239u: goto L_0018BDD0;
    case 240u: goto L_0018BDE8;
    case 241u: goto L_0018BE08;
    case 242u: goto L_0018BE38;
    case 243u: goto L_0018BE40;
    case 244u: goto L_0018BE94;
    case 245u: goto L_0018BEA0;
    case 246u: goto L_0018BEAC;
    case 247u: goto L_0018BEB8;
    case 248u: goto L_0018BEC0;
    case 249u: goto L_0018BEEC;
    case 250u: goto L_0018BEF4;
    case 251u: goto L_0018BF30;
    case 252u: goto L_0018BF94;
    case 253u: goto L_0018BFA4;
    case 254u: goto L_0018BFAC;
    case 255u: goto L_0018BFE4;
    default: bad_entry(c, 0x00188000u); return;
    }
L_00188000:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188258; } }
L_0018800C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188014u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));  if (depth < kMaxDepth) unit_00A4(c, 188u, depth + 1u); else { c.pc = 0x00393CD0u; return; } if (c.pc != 0x00188014u) [[unlikely]] return; }
L_00188014:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 4u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00188044; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 5u);  if (t) { goto L_0018804C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00188048; } }
L_00188044:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00188048:
    set32(c.r[3], 0u - 5u);
    c.budget -= 1;
L_0018804C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { mmi::paddub(c.r[17], c.r[0], c.r[0]);  goto L_001880A4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0018807C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00188078; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00188078:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_0018807C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001880A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001880A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001880A4; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_001880A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001880CC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001880D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001880F0; } }
L_001880CC:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_001880D0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001880F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001880F0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001880F0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; st16((c.r[5].w[0] + 20u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00188108; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00188108; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001881BC; } }
L_00188108:
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188118u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00188118u) [[unlikely]] return; }
L_00188118:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188144; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00188144; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0018819C; } }
L_00188144:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188160; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188188; } }
L_00188160:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00188184; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188188; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00188184:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00188188:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188194u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188194u) [[unlikely]] return; }
L_00188194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));  if (t) { goto L_001881E4; } }
L_0018819C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001881E0; } }
L_001881BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_001881E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_001881E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188258; } }
L_001881EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018821C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188200u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00188200u) [[unlikely]] return; }
L_00188200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188258; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188258; } }
L_0018821C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188224u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00188224u) [[unlikely]] return; }
L_00188224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188240; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188238u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00188238u) [[unlikely]] return; }
L_00188238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188258; } }
L_00188240:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00188258:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018825C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00188270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 2u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001882C4; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018836C; } }
L_001882C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_00188330; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00188308; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001882EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00188370; } }
L_001882EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188308u); set32(c.r[4], c.r[2].w[0] + 25u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188308u) [[unlikely]] return; }
L_00188308:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188314u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00188314u) [[unlikely]] return; }
L_00188314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018836C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018836C; } }
L_00188330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188338u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00188338u) [[unlikely]] return; }
L_00188338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188354; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018834Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x0018834Cu) [[unlikely]] return; }
L_0018834C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018836C; } }
L_00188354:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0018836C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00188370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001883D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001883CCu);  if (depth < kMaxDepth) unit_0022(c, 25u, depth + 1u); else { c.pc = 0x00188610u; return; } if (c.pc != 0x001883CCu) [[unlikely]] return; }
L_001883CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00188604; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001883D8:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018841C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188600; } }
L_0018841C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[8], c.r[7].w[0] + 2u);  if (t) { goto L_00188594; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001884C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00188440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188600; } }
L_00188440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188470u); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00188470u) [[unlikely]] return; }
L_00188470:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_001884B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[3].d[0] = 0ull | 33792ull;
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_001884C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.budget -= 1;
L_001884B0:
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3540u);
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 5;
L_001884C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001884CCu);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00189DE0u; return; } if (c.pc != 0x001884CCu) [[unlikely]] return; }
L_001884CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188600; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00188510; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 23u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001884FCu); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001884FCu) [[unlikely]] return; }
L_001884FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188600; } }
L_00188510:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00188570; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018856C; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188600; } }
L_0018856C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00188570:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188600; } }
L_00188594:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001885C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001885A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001885A8u) [[unlikely]] return; }
L_001885A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188600; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188600; } }
L_001885C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001885CCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001885CCu) [[unlikely]] return; }
L_001885CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001885E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001885E0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001885E0u) [[unlikely]] return; }
L_001885E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188600; } }
L_001885E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00188600:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00188604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00188610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001887B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00188674; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00188650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00188824; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_00188650:
    st16((c.r[5].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00188820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188820; } }
L_00188674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018867Cu);  if (depth < kMaxDepth) unit_0022(c, 140u, depth + 1u); else { c.pc = 0x00189FD0u; return; } if (c.pc != 0x0018867Cu) [[unlikely]] return; }
L_0018867C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00188820; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; st32((c.r[3].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_00188738; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001886A0u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001886A0u) [[unlikely]] return; }
L_001886A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188718; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001886DC; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188704; } }
L_001886DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00188700; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188704; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00188700:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00188704:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188710u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188710u) [[unlikely]] return; }
L_00188710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188820; } }
L_00188718:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188820; } }
L_00188738:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00188788; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188820; } }
L_00188788:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188820; } }
L_001887B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001887E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887C8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001887C8u) [[unlikely]] return; }
L_001887C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188820; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188820; } }
L_001887E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001887ECu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001887ECu) [[unlikely]] return; }
L_001887EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00188808; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188800u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00188800u) [[unlikely]] return; }
L_00188800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188820; } }
L_00188808:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00188820:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00188824:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001888A0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001888A0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188B84; } }
L_001888A0:
    set32(c.r[16], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 2u);  if (t) { goto L_00188B84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001888D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 32696u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_00188908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001888FCu); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001888FCu) [[unlikely]] return; }
L_001888FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00188B88; } }
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_00188908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188910u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188910u) [[unlikely]] return; }
L_00188910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188B84; } }
L_00188918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188920u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00188920u) [[unlikely]] return; }
L_00188920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188B84; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 32696u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018897C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188948u);  if (depth < kMaxDepth) unit_0021(c, 65u, depth + 1u); else { c.pc = 0x00184D50u; return; } if (c.pc != 0x00188948u) [[unlikely]] return; }
L_00188948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188968; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 32694u)));
    st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00188968:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188984; } }
L_0018897C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00188984:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00188B84; } }
L_00188998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001889A0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001889A0u) [[unlikely]] return; }
L_001889A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001889BC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001889B4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001889B4u) [[unlikely]] return; }
L_001889B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188B84; } }
L_001889BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188B84; } }
L_001889D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 142u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00188B84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A10u); set32(c.r[6], c.r[2].w[0] + 131u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00188A10u) [[unlikely]] return; }
L_00188A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188B84; } }
L_00188A18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 142u);  if (t) { goto L_00188B84; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188B84; } }
L_00188A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A4Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00188A4Cu) [[unlikely]] return; }
L_00188A4C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 131u)));
    set32(c.r[6], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A5Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x00188A5Cu) [[unlikely]] return; }
L_00188A5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188A70u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00188A70u) [[unlikely]] return; }
L_00188A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188AAC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188B84; } }
L_00188AAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188AB8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00188AB8u) [[unlikely]] return; }
L_00188AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00188B84; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 131u)));
    set32(c.r[4], c.r[4].w[0] << 12);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3592u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 54u);  goto L_00188B10; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188B84; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_00188B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188B18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00188B18u) [[unlikely]] return; }
L_00188B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00188B84; } }
L_00188B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00188B84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00188B5C; } }
    st8((c.r[16].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00188B84; } }
L_00188B5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 154u)));
    set32(c.r[4], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[16].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00188B84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00188B88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00188BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00188C48; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00188C48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00188C48; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_00188C48:
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_001892D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00188C78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], 0u + 20u);  goto L_00188CA4; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001892D8; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_00188CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CACu);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188CACu) [[unlikely]] return; }
L_00188CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001892DC; } }
L_00188CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188CBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00188CBCu) [[unlikely]] return; }
L_00188CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_00188D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188D10u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00188D10u) [[unlikely]] return; }
L_00188D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00188D34; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00188D7C; } }
L_00188D34:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00188D68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_00188D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_00188D7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001892D8; } }
L_00188D8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_00188DC4; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00188DC8; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 1;
L_00188DC4:
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00188DC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DD4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188DD4u) [[unlikely]] return; }
L_00188DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188DF8u); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00188DF8u) [[unlikely]] return; }
L_00188DF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_00188E38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[4].d[0] = 0ull | 33792ull;
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_001892D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.budget -= 1;
L_00188E38:
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3540u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_001892D8; } }
L_00188E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188E58u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00188E58u) [[unlikely]] return; }
L_00188E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001892D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00188FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188EA0u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00189DE0u; return; } if (c.pc != 0x00188EA0u) [[unlikely]] return; }
L_00188EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00188F18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 180u);
    set32(c.r[4], 0u + 23u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188EDCu); st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188EDCu) [[unlikely]] return; }
L_00188EDC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001892D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_00188F18:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F54u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00188F54u) [[unlikely]] return; }
L_00188F54:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00188FB8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 131u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F70u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00188F70u) [[unlikely]] return; }
L_00188F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188F78u);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x00188F78u) [[unlikely]] return; }
L_00188F78:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 187u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 187u);  if (t) { goto L_001892D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001892D8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_00188FB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
L_00188FCC:
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001892D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00188FE8u);  if (depth < kMaxDepth) unit_0022(c, 140u, depth + 1u); else { c.pc = 0x00189FD0u; return; } if (c.pc != 0x00188FE8u) [[unlikely]] return; }
L_00188FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00189054; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001892D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_00189054:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 24u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189078u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00189078u) [[unlikely]] return; }
L_00189078:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001890EC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 131u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001890A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x001890A4u) [[unlikely]] return; }
L_001890A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001890ACu);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x001890ACu) [[unlikely]] return; }
L_001890AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 187u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 187u);  if (t) { goto L_001892D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001892D8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_001890EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_001890FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189104u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00189104u) [[unlikely]] return; }
L_00189104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189118u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00189118u) [[unlikely]] return; }
L_00189118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189134; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018912Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x0018912Cu) [[unlikely]] return; }
L_0018912C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
L_00189134:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 60u);  if (t) { goto L_001891F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 144u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00189158; } }
    st8((c.r[5].w[0] + 145u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00189158:
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 170u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001891DC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001891D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 187u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018919C; } }
    set32(c.r[2], 0u + 41u);
    st8((c.r[6].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001891A8; } }
L_0018919C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + 31u);
    st8((c.r[6].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001891A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001891B4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001891B4u) [[unlikely]] return; }
L_001891B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 180u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_001891D8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001891DC:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
    set32(c.r[4], 0u + 60u);
    c.budget -= 1;
L_001891F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189200u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00189200u) [[unlikely]] return; }
L_00189200:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 180u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001892D8; } }
L_00189224:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189238u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00189238u) [[unlikely]] return; }
L_00189238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001892D8; } }
L_00189254:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; st16((c.r[6].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018928C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189270u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00189270u) [[unlikely]] return; }
L_00189270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018928C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189284u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00189284u) [[unlikely]] return; }
L_00189284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
L_0018928C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001892D8; } }
L_001892AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001892B4u);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x001892B4u) [[unlikely]] return; }
L_001892B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001892D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001892D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001892DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001892F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189310u);  if (depth < kMaxDepth) unit_0022(c, 87u, depth + 1u); else { c.pc = 0x001893A0u; return; } if (c.pc != 0x00189310u) [[unlikely]] return; }
L_00189310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018938C; } }
L_00189318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 130ull;  if (t) { goto L_00189350; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00189388; } }
    c.r[3].d[0] = c.r[4].d[0] & 130ull;
    c.budget -= 1;
L_00189350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00189374; } }
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00189388; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00189374:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00189388:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018938C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001893A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001893F4; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001893E8; } }
    set32(c.r[3], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001893E4; } }
    set32(c.r[3], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001893E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001893F4; } }
L_001893E4:
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001893E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001893F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001893F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189418; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00189440; } }
L_00189418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189420u);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x00189420u) [[unlikely]] return; }
L_00189420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00189440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00189440:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00189450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018947Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018947Cu) [[unlikely]] return; }
L_0018947C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00189490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001894B0; } }
    set32(c.r[3], 0u + 100u);
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001894B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00189550; } }
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 156u), c.f[0]);  if (t) { goto L_001895BC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 156u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 146u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 145u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001895BC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    set32(c.r[3], 0u - 128u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001895BC; } }
L_00189550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001895BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189588; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189588; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189588u); set32(c.r[4], ld32((c.r[1].w[0] - 19044u)));  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x00189588u) [[unlikely]] return; }
L_00189588:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.budget -= 13;
L_001895BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001895D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] < 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001895F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[5], c.r[17].w[0] << 12);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_001895F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0018981C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    st8((c.r[2].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 79u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[4].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_00189648:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00189668; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 74u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018975C; } }
L_00189668:
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[5], c.r[2].w[0] + 5168u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189684u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189684u) [[unlikely]] return; }
L_00189684:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32864ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896A0u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001896A0u) [[unlikely]] return; }
L_001896A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32928ull;
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[2].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896BCu); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001896BCu) [[unlikely]] return; }
L_001896BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32960ull;
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896D8u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001896D8u) [[unlikely]] return; }
L_001896D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[1].d[0] = 0ull | 32992ull;
    set32(c.r[5], c.r[2].w[0] + 25312u);
    set32(c.r[6], 0u + 384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001896F4u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001896F4u) [[unlikely]] return; }
L_001896F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 33376ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[5], c.r[2].w[0] + 84u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189710u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189710u) [[unlikely]] return; }
L_00189710:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 33394ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[2].w[0] + 102u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018972Cu); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0018972Cu) [[unlikely]] return; }
L_0018972C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 32144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 32143u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0018975C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[3].d[0] = 0ull | 32832ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018976Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 255u, depth + 1u); else { c.pc = 0x0010E8B8u; return; } if (c.pc != 0x0018976Cu) [[unlikely]] return; }
L_0018976C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001897BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[2].w[0] + 25952u);
    set32(c.r[6], 0u + 3584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189788u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189788u) [[unlikely]] return; }
L_00189788:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32832ull;
    set32(c.r[4], c.r[16].w[0] + 3584u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001897A8u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001897A8u) [[unlikely]] return; }
L_001897A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 32694u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001897BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 4;
L_001897CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3592u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001897E4; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_001897E4:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001897CCu | kUnwind; return; } goto L_001897CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 32696u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189808u); c.r[5].d[0] = 0ull | 33790ull;  if (depth < kMaxDepth) unit_0022(c, 119u, depth + 1u); else { c.pc = 0x00189A00u; return; } if (c.pc != 0x00189808u) [[unlikely]] return; }
L_00189808:
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 31746u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001899EC; } }
L_0018981C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_00189968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 5168u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189840u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189840u) [[unlikely]] return; }
L_00189840:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32864ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018985Cu); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0018985Cu) [[unlikely]] return; }
L_0018985C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32928ull;
    set32(c.r[6], 0u + 32u);
    set32(c.r[4], c.r[3].w[0] + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189878u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189878u) [[unlikely]] return; }
L_00189878:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32960ull;
    set32(c.r[6], 0u + 32u);
    set32(c.r[4], c.r[3].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189894u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189894u) [[unlikely]] return; }
L_00189894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25312u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 32992ull;
    set32(c.r[6], 0u + 384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898B0u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001898B0u) [[unlikely]] return; }
L_001898B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 33376ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[3].w[0] + 84u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898CCu); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001898CCu) [[unlikely]] return; }
L_001898CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].d[0] = 0ull | 33394ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[4], c.r[3].w[0] + 102u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001898E8u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001898E8u) [[unlikely]] return; }
L_001898E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 32144u));
    st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 32143u));
    st8((c.r[3].w[0] + 101u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5175u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189960; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 79u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00189968; } }
L_00189960:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00189968:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_001899EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25952u);
    set32(c.r[6], 0u + 3584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189984u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00189984u) [[unlikely]] return; }
L_00189984:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[2].w[0] + 28000u);
    set32(c.r[6], 0u + 16u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[17], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899A8u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001899A8u) [[unlikely]] return; }
L_001899A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899B8u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001899B8u) [[unlikely]] return; }
L_001899B8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899CCu); st8((c.r[2].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0017(c, 250u, depth + 1u); else { c.pc = 0x0015E540u; return; } if (c.pc != 0x001899CCu) [[unlikely]] return; }
L_001899CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001899EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899E4u);  if (depth < kMaxDepth) unit_0017(c, 272u, depth + 1u); else { c.pc = 0x0015E890u; return; } if (c.pc != 0x001899E4u) [[unlikely]] return; }
L_001899E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001899ECu);  if (depth < kMaxDepth) unit_0017(c, 268u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001899ECu) [[unlikely]] return; }
L_001899EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00189A00:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_00189A18; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00189A18:
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_00189A7C; } }
    c.r[1].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[9].w[0] - 2u);  if (t) { goto L_00189A68; } }
L_00189A30:
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00189A30u | kUnwind; return; } goto L_00189A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;  if (t) { goto L_00189A6C; } }
L_00189A58:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 4;
L_00189A68:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00189A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00189A58u | kUnwind; return; } goto L_00189A58; } }
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 2;
L_00189A7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00189A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 31u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00189B78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00189B54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00189B28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00189B9C; } }
L_00189B00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189B0Cu); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 130u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189B0Cu) [[unlikely]] return; }
L_00189B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189B98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189B98; } }
L_00189B28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189B38u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189B38u) [[unlikely]] return; }
L_00189B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189B98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189B98; } }
L_00189B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189B5Cu);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00189B5Cu) [[unlikely]] return; }
L_00189B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189B98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189B98; } }
L_00189B78:
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 32u);  if (t) { goto L_00189B94; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00189B98; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_00189B94:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00189B98:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00189B9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 31u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 31u);  if (t) { goto L_00189CEC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00189CC8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00189C9C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00189C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00189D1C; } }
L_00189C44:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C54u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189C54u) [[unlikely]] return; }
L_00189C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189D18; } }
L_00189C70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189C80u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189C80u) [[unlikely]] return; }
L_00189C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189D18; } }
L_00189C9C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CACu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189CACu) [[unlikely]] return; }
L_00189CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189D18; } }
L_00189CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189CD0u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00189CD0u) [[unlikely]] return; }
L_00189CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189D18; } }
L_00189CEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_00189D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00189D14; } }
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 1;
L_00189D14:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00189D18:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00189D1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u - 5u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189D90u);  if (depth < kMaxDepth) unit_00A4(c, 209u, depth + 1u); else { c.pc = 0x00393F50u; return; } if (c.pc != 0x00189D90u) [[unlikely]] return; }
L_00189D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189DA0; } }
L_00189D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189DA0u);  if (depth < kMaxDepth) unit_00A4(c, 210u, depth + 1u); else { c.pc = 0x00393F60u; return; } if (c.pc != 0x00189DA0u) [[unlikely]] return; }
L_00189DA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00189DC8; }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00189DBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00189DCC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00189DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00189DC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00189DC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00189DCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00189DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 31u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00189F18; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00189EF4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00189EC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00189E9C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00189E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00189FB8; } }
L_00189E70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189E80u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189E80u) [[unlikely]] return; }
L_00189E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189FB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189FB4; } }
L_00189E9C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EACu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189EACu) [[unlikely]] return; }
L_00189EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189FB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189FB4; } }
L_00189EC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189ED8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00189ED8u) [[unlikely]] return; }
L_00189ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189FB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189FB4; } }
L_00189EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189EFCu);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00189EFCu) [[unlikely]] return; }
L_00189EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189FB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00189FB4; } }
L_00189F18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00189F90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00189F30u); c.r[5].d[0] = 0ull | 33790ull;  if (depth < kMaxDepth) unit_0022(c, 119u, depth + 1u); else { c.pc = 0x00189A00u; return; } if (c.pc != 0x00189F30u) [[unlikely]] return; }
L_00189F30:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 31746u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u - 1u);  if (t) { goto L_00189F88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00189F84; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.r[2].d[0] = 0ull | 33792ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00189F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00189FAC; } }
L_00189F84:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00189F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));  if (t) { goto L_00189FB0; } }
L_00189F90:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], 0u + 3540u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u - 1u);  if (t) { goto L_00189FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_00189FAC; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00189FAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_00189FB0:
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00189FB4:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00189FB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00189FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A030u);  if (depth < kMaxDepth) unit_00A4(c, 194u, depth + 1u); else { c.pc = 0x00393D70u; return; } if (c.pc != 0x0018A030u) [[unlikely]] return; }
L_0018A030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A040; } }
L_0018A038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A040u);  if (depth < kMaxDepth) unit_00A4(c, 195u, depth + 1u); else { c.pc = 0x00393D80u; return; } if (c.pc != 0x0018A040u) [[unlikely]] return; }
L_0018A040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[11], 0u + 1u);  if (t) { goto L_0018A068; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (t) { goto L_0018A05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[11], c.r[2], c.r[0]);  if (t) { goto L_0018A068; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 1;
L_0018A05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018A06C; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 1;
L_0018A068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018A06C:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_0018A0AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A0AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[10].d[0] = ld16((c.r[1].w[0] - 31746u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A09Cu); c.r[5].d[0] = 0ull | 33790ull;  if (depth < kMaxDepth) unit_0022(c, 119u, depth + 1u); else { c.pc = 0x00189A00u; return; } if (c.pc != 0x0018A09Cu) [[unlikely]] return; }
L_0018A09C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_0018A0AC; } }
    set32(c.r[11], 0u - 7u);
    c.budget -= 1;
L_0018A0AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[11], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018A0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018A0F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A100; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0018A0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0018A228; } }
L_0018A100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0018A1C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018A120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_0018A224; } }
L_0018A120:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 61u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[19].d[0] = c.r[3].d[0] | 53248ull;
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0018A138:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A144u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0018A144u) [[unlikely]] return; }
L_0018A144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0018A1AC; }
    set32(c.r[8], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    mmi::paddub(c.r[7], c.r[19], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A184u); st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018A184u) [[unlikely]] return; }
L_0018A184:
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 515u);
    st32((c.r[2].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 10;
L_0018A1AC:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A138u | kUnwind; return; } goto L_0018A138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A220; } }
L_0018A1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A1C8u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00189BB0u; return; } if (c.pc != 0x0018A1C8u) [[unlikely]] return; }
L_0018A1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A220; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0018A1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0018A220; } }
L_0018A1E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018A208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0018A220; } }
L_0018A208:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 61u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0018A220:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_0018A224:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018A228:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018A240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[3].d[0] | 49408ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_0018A2A8; } }
L_0018A27C:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A28Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0018A28Cu) [[unlikely]] return; }
L_0018A28C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 64u);  goto L_0018A2A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0018A2C0; } }
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_0018A2A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0018A2A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A27Cu | kUnwind; return; } goto L_0018A27C; } }
    c.budget -= 1;
L_0018A2C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0018A2F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A2E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018A2E4u) [[unlikely]] return; }
L_0018A2E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0018A2F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018A310:
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 32u);  if (t) { goto L_0018A388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_0018A678; } }
L_0018A388:
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0018A3A4; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0018A678; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0018A3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_0018A498; } }
L_0018A3AC:
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 22000u);
    set32(c.r[16], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A3C4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0018A3C4u) [[unlikely]] return; }
L_0018A3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A420; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 1024u);
    set32(c.r[2], 0u + 964u);
    set32(c.r[4], c.r[4].w[0] + 1023u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], 0u + 1u);  if (t) { goto L_0018A420; } }
    set32(c.r[20], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; mmi::paddub(c.r[30], c.r[20], c.r[0]);  if (t) { goto L_0018A420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A41Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0022(c, 149u, depth + 1u); else { c.pc = 0x0018A240u; return; } if (c.pc != 0x0018A41Cu) [[unlikely]] return; }
L_0018A41C:
    c.budget -= 1;
L_0018A420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A430u); set32(c.r[5], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0018A430u) [[unlikely]] return; }
L_0018A430:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] + 64u);  goto L_0018A494; }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], 0u + 3540u);  if (t) { goto L_0018A454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull | 33792ull;  if (t) { goto L_0018A458; } }
    set32(c.r[19], 0u + 3540u);
    c.budget -= 1;
L_0018A454:
    c.budget -= 1;
L_0018A458:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], 0u - 1024u);
    set32(c.r[4], c.r[4].w[0] + 1023u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[22], 0u + 1u);  if (t) { goto L_0018A490; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_0018A490:
    set32(c.r[21], c.r[21].w[0] + 64u);
    c.budget -= 1;
L_0018A494:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0018A498:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A3ACu | kUnwind; return; } goto L_0018A3AC; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[30], 0u - 1u);  goto L_0018A4C0; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018A4C4; } }
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_0018A4C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018A4C4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0018A4D4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_0018A4E8; } }
L_0018A4D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0018A4FC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0018A4F8; } }
L_0018A4E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A4F4u); set32(c.r[4], c.r[2].w[0] + 22000u);  if (depth < kMaxDepth) unit_0022(c, 149u, depth + 1u); else { c.pc = 0x0018A240u; return; } if (c.pc != 0x0018A4F4u) [[unlikely]] return; }
L_0018A4F4:
    set32(c.r[30], 0u - 1u);
    c.budget -= 1;
L_0018A4F8:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0018A4FC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018A500:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0018A584; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0018A554; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0018A524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_0018A5B4; } }
L_0018A524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[2].w[0] - 7132u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull | 34840ull;  if (t) { goto L_0018A54C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] | 47936ull;  if (t) { goto L_0018A5B0; } }
    c.r[19].d[0] = 0ull | 34840ull;
    c.budget -= 1;
L_0018A54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A5B0; } }
L_0018A554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[2].w[0] - 7068u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull | 36952ull;  if (t) { goto L_0018A57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] | 47936ull;  if (t) { goto L_0018A5B0; } }
    c.r[19].d[0] = 0ull | 36952ull;
    c.budget -= 1;
L_0018A57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A5B0; } }
L_0018A584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[17], c.r[2].w[0] - 7004u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull | 36952ull;  if (t) { goto L_0018A5AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] | 47936ull;  if (t) { goto L_0018A5B0; } }
    c.r[19].d[0] = 0ull | 36952ull;
    c.budget -= 1;
L_0018A5AC:
    c.budget -= 1;
L_0018A5B0:
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_0018A5B4:
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0018A638; } }
L_0018A5C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[22], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A5D4u); set32(c.r[5], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0018A5D4u) [[unlikely]] return; }
L_0018A5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 64u);  goto L_0018A634; }
    set32(c.r[3], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_0018A5F0; } }
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 2;
L_0018A5F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A608; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0018A630; } }
L_0018A608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[4], c.r[3].w[0] + 1023u);
    set32(c.r[3], 0u - 1024u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_0018A630:
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 1;
L_0018A634:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0018A638:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 55u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A5C0u | kUnwind; return; } goto L_0018A5C0; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0018A66C; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[30], 0u - 1u);  if (t) { goto L_0018A668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A664u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 149u, depth + 1u); else { c.pc = 0x0018A240u; return; } if (c.pc != 0x0018A664u) [[unlikely]] return; }
L_0018A664:
    c.budget -= 1;
L_0018A668:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0018A66C:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A500u | kUnwind; return; } goto L_0018A500; } }
L_0018A678:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    set32(c.r[4], c.r[2].w[0] + 80u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_0018A6A0; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0018A6A0:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[30], c.r[0]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0018A6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[16].d[0] = c.r[2].d[0] | 53248ull;
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A704u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0018A704u) [[unlikely]] return; }
L_0018A704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    set32(c.r[6], 0u + 2048u);
    c.r[4].d[0] = c.r[2].d[0] | 51200ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A718u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0018A718u) [[unlikely]] return; }
L_0018A718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 53248ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A730u); c.r[6].d[0] = c.r[2].d[0] | 49152ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0018A730u) [[unlikely]] return; }
L_0018A730:
    set32(c.r[4], 0u + 1204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A73Cu); set32(c.r[5], c.r[28].w[0] - 31056u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0018A73Cu) [[unlikely]] return; }
L_0018A73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[4].d[0] = c.r[2].d[0] | 53248ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A750u); set32(c.r[5], c.r[2].w[0] + 22000u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018A750u) [[unlikely]] return; }
L_0018A750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[3].d[0] = c.r[2].d[0] | 51200ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[2].d[0] = c.r[2].d[0] | 53312ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], c.r[2].w[0] + 27744u);
    set32(c.r[7], ld32((c.r[1].w[0] - 12224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[2].w[0] - 7392u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A788u); set32(c.r[8], 0u + 964u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0018A788u) [[unlikely]] return; }
L_0018A788:
    set32(c.r[2], 0u + 964u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 12220u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A7A4u); set32(c.r[5], c.r[2].w[0] + 22528u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018A7A4u) [[unlikely]] return; }
L_0018A7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[3].d[0] = c.r[3].d[0] | 53248ull;
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 47936ull;
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018A7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 149u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 149u);  if (t) { goto L_0018A940; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0018A878; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018A854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018A820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0018A964; } }
L_0018A820:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 147u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A84Cu); set32(c.r[6], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018A84Cu) [[unlikely]] return; }
L_0018A84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018A960; } }
L_0018A854:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 142u);  if (t) { goto L_0018A960; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 149u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018A960; } }
L_0018A878:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 151u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018A8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A88Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018A88Cu) [[unlikely]] return; }
L_0018A88C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 148u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 150u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A89Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0018A89Cu) [[unlikely]] return; }
L_0018A89C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018A8C8; } }
L_0018A8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8B0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018A8B0u) [[unlikely]] return; }
L_0018A8B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 148u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 150u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8C0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018A8C0u) [[unlikely]] return; }
L_0018A8C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018A8C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A8D4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x0018A8D4u) [[unlikely]] return; }
L_0018A8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A904; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 149u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018A960; } }
L_0018A904:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018A910u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x0018A910u) [[unlikely]] return; }
L_0018A910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A960; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 149u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018A960; } }
L_0018A940:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A960; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 143u)));
    set32(c.r[16], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0018A960; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0018A960:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0018A964:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018A980:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4096ull;  if (t) { goto L_0018A99C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0018A9A8; } }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 1;
L_0018A99C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_0018A9AC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0018A9A8:
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 1;
L_0018A9AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018A9C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], c.r[2].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018A9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018AA10; } }
L_0018A9DC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 27u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 13;
L_0018AA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018AA20:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018AA48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018AA48; } }
L_0018AA44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018AA48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018AA50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 18256u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018AAA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018ABDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018AB08; } }
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 26u)));
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 25u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018ABDC; } }
L_0018AB08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 54u);  if (t) { goto L_0018AB20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018AB20:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018ABB4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018ABB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 17u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018ABA4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018ABA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABDC; } }
L_0018ABA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ABDC; } }
L_0018ABB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0018ABDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018ABF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018AC8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018AC58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018AC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0018AE3C; } }
L_0018AC40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0018AC58:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[7], c.r[16].w[0] + 8u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AC74u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 337u, depth + 1u); else { c.pc = 0x0010F4E8u; return; } if (c.pc != 0x0018AC74u) [[unlikely]] return; }
L_0018AC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AE38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018AC8C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[6], c.r[16].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ACA0u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018ACA0u) [[unlikely]] return; }
L_0018ACA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AE38; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018AD18; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0018ACD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018AD4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0018AD48; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0018ACD8:
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 186u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 79u)));
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018AD4C; } }
L_0018AD18:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 186u)));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018AD4C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0018AD48:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 1;
L_0018AD4C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0018AD78; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 15u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0; st8((c.r[5].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018AD78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018AE38; } }
L_0018AD78:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0018ADD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018AE00; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018AE00; } }
L_0018ADD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018ADF0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018AE00; } }
L_0018ADF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0018AE00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018AE38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018AE3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018AE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018AEE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018AEB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018AE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018AF88; } }
L_0018AE9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 7;
L_0018AEB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEC8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0003(c, 364u, depth + 1u); else { c.pc = 0x0010F9A0u; return; } if (c.pc != 0x0018AEC8u) [[unlikely]] return; }
L_0018AEC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018AF84; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018AEE0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018AEF0u); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018AEF0u) [[unlikely]] return; }
L_0018AEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018AF84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    st8((c.r[4].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018AF34; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018AF4C; } }
L_0018AF34:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0018AF4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018AF84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018AF88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018AFA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B06C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B01C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018AFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B174; } }
L_0018AFEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    c.budget -= 12;
L_0018B01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 22544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B034u); set32(c.r[6], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018B034u) [[unlikely]] return; }
L_0018B034:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26608u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[8], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B054u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 343u, depth + 1u); else { c.pc = 0x0010F670u; return; } if (c.pc != 0x0018B054u) [[unlikely]] return; }
L_0018B054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B170; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B06C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B07Cu); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B07Cu) [[unlikely]] return; }
L_0018B07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B170; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_0018B0A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26608u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0018B138; } }
L_0018B0A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018B138; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0018B11C; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 186u)));
    set32(c.r[6], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018B138; } }
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0018B11C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018B138; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0018B138:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B174:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0018B180:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B22C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B1E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B1CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B2A4; } }
L_0018B1CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 32u), 0u);
    c.budget -= 7;
L_0018B1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 22544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B200u); set32(c.r[6], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018B200u) [[unlikely]] return; }
L_0018B200:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B214u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0003(c, 295u, depth + 1u); else { c.pc = 0x0010EE48u; return; } if (c.pc != 0x0018B214u) [[unlikely]] return; }
L_0018B214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B2A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B22C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B23Cu); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B23Cu) [[unlikely]] return; }
L_0018B23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B2A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018B260; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26608u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0018B268; } }
L_0018B260:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 32u), 0u);
    c.budget -= 2;
L_0018B268:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B2A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B2A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0018B2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B344; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B310; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B2FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B454; } }
L_0018B2FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0018B310:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B32Cu); set32(c.r[6], c.r[2].w[0] - 6288u);  if (depth < kMaxDepth) unit_0003(c, 288u, depth + 1u); else { c.pc = 0x0010ED10u; return; } if (c.pc != 0x0018B32Cu) [[unlikely]] return; }
L_0018B32C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B450; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B344:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B354u); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B354u) [[unlikely]] return; }
L_0018B354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B450; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0018B36C; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_0018B36C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018B418; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0018B3E8; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[4], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 186u)));
    set32(c.r[7], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    st8((c.r[6].w[0] + 186u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018B418; } }
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0018B3E8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0018B414; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0018B418; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0018B414:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_0018B418:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B450:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B454:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B4E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B4C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B5C4; } }
L_0018B4AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0018B4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B4C8u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0003(c, 297u, depth + 1u); else { c.pc = 0x0010EE80u; return; } if (c.pc != 0x0018B4C8u) [[unlikely]] return; }
L_0018B4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B5C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B4E0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B4F0u); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B4F0u) [[unlikely]] return; }
L_0018B4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B5C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018B588; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0018B56C; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 186u)));
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018B588; } }
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0018B56C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018B588; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0018B588:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B5C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B5C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B65C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B630; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B768; } }
L_0018B61C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0018B630:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B644u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0003(c, 311u, depth + 1u); else { c.pc = 0x0010F0A0u; return; } if (c.pc != 0x0018B644u) [[unlikely]] return; }
L_0018B644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B764; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B65C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B66Cu); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B66Cu) [[unlikely]] return; }
L_0018B66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B764; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018B72C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0018B6F4; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 186u)));
    set32(c.r[7], c.r[7].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    st8((c.r[6].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018B72C; } }
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0018B6F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018B720; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 128u);
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_0018B72C; } }
L_0018B720:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 3;
L_0018B72C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B764:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B768:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B80C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B7E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018B860; } }
L_0018B7CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0018B7E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B7F4u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0003(c, 318u, depth + 1u); else { c.pc = 0x0010F1C0u; return; } if (c.pc != 0x0018B7F4u) [[unlikely]] return; }
L_0018B7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018B85C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B80C:
    set32(c.r[6], c.r[16].w[0] + 12u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B81Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B81Cu) [[unlikely]] return; }
L_0018B81C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018B85C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018B85C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018B860:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018B870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 14u);  if (t) { goto L_0018B92C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018B8D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018B8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018BA44; } }
L_0018B8BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 7;
L_0018B8D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 22552u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B8F0u); set32(c.r[6], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018B8F0u) [[unlikely]] return; }
L_0018B8F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26608u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[8], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 17u)));
    set32(c.r[9], c.r[2].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B914u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 343u, depth + 1u); else { c.pc = 0x0010F670u; return; } if (c.pc != 0x0018B914u) [[unlikely]] return; }
L_0018B914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018BA40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018B92C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018B93Cu); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0018B93Cu) [[unlikely]] return; }
L_0018B93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018BA40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0018B970; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26608u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], c.r[4].w[0] + 64u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018BA08; } }
L_0018B970:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0018BA08; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 68u));
    st8((c.r[5].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;  if (t) { goto L_0018B9EC; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 186u)));
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018BA08; } }
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 1;
L_0018B9EC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018BA08; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0018BA08:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_0018BA40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018BA44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0018BA50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 28144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_0018BA6C:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BA90u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0018BA90u) [[unlikely]] return; }
L_0018BA90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 80ull;
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BA6Cu | kUnwind; return; } goto L_0018BA6C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0018BAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[16], c.r[3].w[0] + 28144u);
    c.budget -= 5;
L_0018BAE4:
    st32((c.r[28].w[0] - 26172u), c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0018BB90; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018BB50; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0018BB40; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018BB24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[16].w[0]));  if (t) { goto L_0018BBA4; } }
L_0018BB24:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB30u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 380u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0018BB30u) [[unlikely]] return; }
L_0018BB30:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB40u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 384u, depth + 1u); else { c.pc = 0x001039C0u; return; } if (c.pc != 0x0018BB40u) [[unlikely]] return; }
L_0018BB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB48u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0018BB48u) [[unlikely]] return; }
L_0018BB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018BBA0; } }
L_0018BB50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018BBA0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 418u, depth + 1u); else { c.pc = 0x00103AD0u; return; } if (c.pc != 0x0018BB7Cu) [[unlikely]] return; }
L_0018BB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BB84u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0018BB84u) [[unlikely]] return; }
L_0018BB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018BBA0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018BB90:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BBA0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0022(c, 227u, depth + 1u); else { c.pc = 0x0018BC10u; return; } if (c.pc != 0x0018BBA0u) [[unlikely]] return; }
L_0018BBA0:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 1;
L_0018BBA4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018BBC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018BBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0018BBDC; } }
L_0018BBC4:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0018BBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BBD0u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 390u, depth + 1u); else { c.pc = 0x001039F0u; return; } if (c.pc != 0x0018BBD0u) [[unlikely]] return; }
L_0018BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BBD8u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 382u, depth + 1u); else { c.pc = 0x001039B0u; return; } if (c.pc != 0x0018BBD8u) [[unlikely]] return; }
L_0018BBD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0018BBDC:
    c.r[3].d[0] = c.r[3].d[0] | 80ull;
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[3], c.r[3].w[0] + 28384u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018BAE4u | kUnwind; return; } goto L_0018BAE4; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018BC10:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    set32(c.r[3], c.r[3].w[0] + 28144u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 4u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[4].w[0] + 80u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 25u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0018BC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26172u)));
    set32(c.r[2], 0u + 3u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BC90u); set32(c.r[4], ld32((c.r[3].w[0] + 60u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0018BC90u) [[unlikely]] return; }
L_0018BC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BC98u);  if (depth < kMaxDepth) unit_0000(c, 388u, depth + 1u); else { c.pc = 0x001039E0u; return; } if (c.pc != 0x0018BC98u) [[unlikely]] return; }
L_0018BC98:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018BCB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26172u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BCD0u); set32(c.r[4], ld32((c.r[3].w[0] + 60u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0018BCD0u) [[unlikely]] return; }
L_0018BCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BCD8u);  if (depth < kMaxDepth) unit_0000(c, 416u, depth + 1u); else { c.pc = 0x00103AC0u; return; } if (c.pc != 0x0018BCD8u) [[unlikely]] return; }
L_0018BCD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018BCF0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] + 28144u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018BD40; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BD38u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 390u, depth + 1u); else { c.pc = 0x001039F0u; return; } if (c.pc != 0x0018BD38u) [[unlikely]] return; }
L_0018BD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BD40u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 382u, depth + 1u); else { c.pc = 0x001039B0u; return; } if (c.pc != 0x0018BD40u) [[unlikely]] return; }
L_0018BD40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018BD50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18216u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018BD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[3].w[0] + 5168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25696u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 3u);  if (t) { goto L_0018BF18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00188000u < 16384u) { entry = entries_0022[(t - 0x00188000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018BDD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u - 128u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0018BDE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25728u);
    set32(c.r[6], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE08u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0018BE08u) [[unlikely]] return; }
L_0018BE08:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE38u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BE38u) [[unlikely]] return; }
L_0018BE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0018BF1C; } }
L_0018BE40:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_0018BF18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 29u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BE94u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BE94u) [[unlikely]] return; }
L_0018BE94:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEA0u); c.r[5].d[0] = c.r[17].d[0] | 1ull;  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BEA0u) [[unlikely]] return; }
L_0018BEA0:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEACu); c.r[5].d[0] = c.r[17].d[0] | 2ull;  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BEACu) [[unlikely]] return; }
L_0018BEAC:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEB8u); c.r[5].d[0] = c.r[17].d[0] | 3ull;  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BEB8u) [[unlikely]] return; }
L_0018BEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018BF18; } }
L_0018BEC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018BF18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 8u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BEECu); st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018BEECu) [[unlikely]] return; }
L_0018BEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018BF18; } }
L_0018BEF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018BF18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0018BF18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018BF1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018BF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25696u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 5168u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[7], c.r[3].w[0] + 3u);  if (t) { [[clang::musttail]] return unit_0023(c, 5u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0023(c, 3u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0023(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[6], c.r[0]);  if (t) { goto L_0018BF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0023(c, 11u, depth); } }
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 1;
L_0018BF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BF94u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018BF94u) [[unlikely]] return; }
L_0018BF94:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BFA4u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0018BFA4u) [[unlikely]] return; }
L_0018BFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BFACu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x0013A250u; return; } if (c.pc != 0x0018BFACu) [[unlikely]] return; }
L_0018BFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018BFDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0023(c, 10u, depth); } }
L_0018BFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018BFE4u);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x0018BFE4u) [[unlikely]] return; }
L_0018BFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0023(c, 10u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    [[clang::musttail]] return unit_0023(c, 1u, depth);
}

}
