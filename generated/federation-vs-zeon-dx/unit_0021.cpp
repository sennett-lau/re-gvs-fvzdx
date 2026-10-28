#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0021[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0021(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00184000;
    case 2u: goto L_0018403C;
    case 3u: goto L_001840EC;
    case 4u: goto L_001840F4;
    case 5u: goto L_00184124;
    case 6u: goto L_00184138;
    case 7u: goto L_00184180;
    case 8u: goto L_001841BC;
    case 9u: goto L_001841D8;
    case 10u: goto L_00184208;
    case 11u: goto L_00184224;
    case 12u: goto L_0018429C;
    case 13u: goto L_001842E4;
    case 14u: goto L_00184308;
    case 15u: goto L_00184310;
    case 16u: goto L_00184338;
    case 17u: goto L_00184360;
    case 18u: goto L_00184374;
    case 19u: goto L_001843B0;
    case 20u: goto L_001843D0;
    case 21u: goto L_00184444;
    case 22u: goto L_00184470;
    case 23u: goto L_001844C4;
    case 24u: goto L_00184538;
    case 25u: goto L_001845AC;
    case 26u: goto L_001845C8;
    case 27u: goto L_00184600;
    case 28u: goto L_00184624;
    case 29u: goto L_0018466C;
    case 30u: goto L_001846B4;
    case 31u: goto L_001846E8;
    case 32u: goto L_001846FC;
    case 33u: goto L_00184740;
    case 34u: goto L_00184784;
    case 35u: goto L_001847A0;
    case 36u: goto L_001847A8;
    case 37u: goto L_00184800;
    case 38u: goto L_0018481C;
    case 39u: goto L_00184824;
    case 40u: goto L_00184834;
    case 41u: goto L_0018486C;
    case 42u: goto L_0018489C;
    case 43u: goto L_001848A4;
    case 44u: goto L_001848F8;
    case 45u: goto L_00184920;
    case 46u: goto L_00184928;
    case 47u: goto L_0018495C;
    case 48u: goto L_00184970;
    case 49u: goto L_001849A8;
    case 50u: goto L_001849B0;
    case 51u: goto L_001849F0;
    case 52u: goto L_00184A54;
    case 53u: goto L_00184A64;
    case 54u: goto L_00184AB4;
    case 55u: goto L_00184AC8;
    case 56u: goto L_00184B00;
    case 57u: goto L_00184B88;
    case 58u: goto L_00184BA0;
    case 59u: goto L_00184BE4;
    case 60u: goto L_00184C08;
    case 61u: goto L_00184C74;
    case 62u: goto L_00184CD0;
    case 63u: goto L_00184D00;
    case 64u: goto L_00184D30;
    case 65u: goto L_00184D50;
    case 66u: goto L_00184D98;
    case 67u: goto L_00184DA8;
    case 68u: goto L_00184DE4;
    case 69u: goto L_00184E00;
    case 70u: goto L_00184E20;
    case 71u: goto L_00184E30;
    case 72u: goto L_00184E60;
    case 73u: goto L_00184EF4;
    case 74u: goto L_00184F08;
    case 75u: goto L_00184F70;
    case 76u: goto L_00184F88;
    case 77u: goto L_00184FA0;
    case 78u: goto L_00184FB0;
    case 79u: goto L_00184FBC;
    case 80u: goto L_00184FD0;
    case 81u: goto L_00184FE0;
    case 82u: goto L_00185018;
    case 83u: goto L_00185030;
    case 84u: goto L_00185040;
    case 85u: goto L_00185050;
    case 86u: goto L_00185060;
    case 87u: goto L_00185070;
    case 88u: goto L_00185094;
    case 89u: goto L_001850A0;
    case 90u: goto L_00185124;
    case 91u: goto L_00185150;
    case 92u: goto L_00185184;
    case 93u: goto L_001851F8;
    case 94u: goto L_0018520C;
    case 95u: goto L_00185258;
    case 96u: goto L_0018529C;
    case 97u: goto L_001852AC;
    case 98u: goto L_00185300;
    case 99u: goto L_00185378;
    case 100u: goto L_00185480;
    case 101u: goto L_0018552C;
    case 102u: goto L_0018553C;
    case 103u: goto L_0018554C;
    case 104u: goto L_0018555C;
    case 105u: goto L_001855B0;
    case 106u: goto L_001855DC;
    case 107u: goto L_001855F0;
    case 108u: goto L_00185628;
    case 109u: goto L_00185670;
    case 110u: goto L_00185678;
    case 111u: goto L_0018569C;
    case 112u: goto L_00185738;
    case 113u: goto L_0018574C;
    case 114u: goto L_00185754;
    case 115u: goto L_00185768;
    case 116u: goto L_001857E8;
    case 117u: goto L_001857F4;
    case 118u: goto L_0018582C;
    case 119u: goto L_00185894;
    case 120u: goto L_001858A8;
    case 121u: goto L_00185920;
    case 122u: goto L_00185984;
    case 123u: goto L_001859D0;
    case 124u: goto L_00185A08;
    case 125u: goto L_00185A5C;
    case 126u: goto L_00185ACC;
    case 127u: goto L_00185AD4;
    case 128u: goto L_00185AF8;
    case 129u: goto L_00185B14;
    case 130u: goto L_00185B28;
    case 131u: goto L_00185B30;
    case 132u: goto L_00185BB0;
    case 133u: goto L_00185BBC;
    case 134u: goto L_00185BF8;
    case 135u: goto L_00185C70;
    case 136u: goto L_00185C84;
    case 137u: goto L_00185D04;
    case 138u: goto L_00185D1C;
    case 139u: goto L_00185DC8;
    case 140u: goto L_00185E70;
    case 141u: goto L_00185E90;
    case 142u: goto L_00185F30;
    case 143u: goto L_00185F3C;
    case 144u: goto L_00185FA0;
    case 145u: goto L_00185FC4;
    case 146u: goto L_00186000;
    case 147u: goto L_00186040;
    case 148u: goto L_00186064;
    case 149u: goto L_00186070;
    case 150u: goto L_001860DC;
    case 151u: goto L_00186120;
    case 152u: goto L_001861E8;
    case 153u: goto L_001861F4;
    case 154u: goto L_00186248;
    case 155u: goto L_0018629C;
    case 156u: goto L_001862E4;
    case 157u: goto L_00186330;
    case 158u: goto L_00186384;
    case 159u: goto L_001863C8;
    case 160u: goto L_001863E0;
    case 161u: goto L_00186400;
    case 162u: goto L_0018643C;
    case 163u: goto L_00186498;
    case 164u: goto L_001864C4;
    case 165u: goto L_00186504;
    case 166u: goto L_00186564;
    case 167u: goto L_00186618;
    case 168u: goto L_001866A0;
    case 169u: goto L_00186730;
    case 170u: goto L_0018675C;
    case 171u: goto L_00186860;
    case 172u: goto L_00186900;
    case 173u: goto L_00186940;
    case 174u: goto L_0018698C;
    case 175u: goto L_001869CC;
    case 176u: goto L_001869D4;
    case 177u: goto L_001869F4;
    case 178u: goto L_00186A48;
    case 179u: goto L_00186A80;
    case 180u: goto L_00186A9C;
    case 181u: goto L_00186AA4;
    case 182u: goto L_00186AAC;
    case 183u: goto L_00186AD0;
    case 184u: goto L_00186AD8;
    case 185u: goto L_00186AF4;
    case 186u: goto L_00186B14;
    case 187u: goto L_00186B3C;
    case 188u: goto L_00186B44;
    case 189u: goto L_00186B68;
    case 190u: goto L_00186B8C;
    case 191u: goto L_00186BBC;
    case 192u: goto L_00186C08;
    case 193u: goto L_00186C20;
    case 194u: goto L_00186C28;
    case 195u: goto L_00186D34;
    case 196u: goto L_00186D3C;
    case 197u: goto L_00186D44;
    case 198u: goto L_00186D58;
    case 199u: goto L_00186D6C;
    case 200u: goto L_00186DCC;
    case 201u: goto L_00186E04;
    case 202u: goto L_00186E30;
    case 203u: goto L_00186E38;
    case 204u: goto L_00186E4C;
    case 205u: goto L_00186E60;
    case 206u: goto L_00186EB0;
    case 207u: goto L_00186EE8;
    case 208u: goto L_00186EFC;
    case 209u: goto L_00186F04;
    case 210u: goto L_00186F0C;
    case 211u: goto L_00186F4C;
    case 212u: goto L_00186F5C;
    case 213u: goto L_00186F80;
    case 214u: goto L_00186F88;
    case 215u: goto L_00187040;
    case 216u: goto L_00187050;
    case 217u: goto L_001870A8;
    case 218u: goto L_001870B0;
    case 219u: goto L_001870C4;
    case 220u: goto L_001870D8;
    case 221u: goto L_00187130;
    case 222u: goto L_00187168;
    case 223u: goto L_0018719C;
    case 224u: goto L_001871A4;
    case 225u: goto L_001871B8;
    case 226u: goto L_001871CC;
    case 227u: goto L_00187210;
    case 228u: goto L_00187218;
    case 229u: goto L_00187250;
    case 230u: goto L_0018730C;
    case 231u: goto L_00187318;
    case 232u: goto L_00187334;
    case 233u: goto L_001873B4;
    case 234u: goto L_00187470;
    case 235u: goto L_00187524;
    case 236u: goto L_00187530;
    case 237u: goto L_00187584;
    case 238u: goto L_00187620;
    case 239u: goto L_001876D4;
    case 240u: goto L_001876E0;
    case 241u: goto L_00187734;
    case 242u: goto L_001877D0;
    case 243u: goto L_00187840;
    case 244u: goto L_00187868;
    case 245u: goto L_00187878;
    case 246u: goto L_0018789C;
    case 247u: goto L_001878B0;
    case 248u: goto L_001878C0;
    case 249u: goto L_001878E0;
    case 250u: goto L_00187900;
    case 251u: goto L_00187990;
    case 252u: goto L_00187A64;
    case 253u: goto L_00187A90;
    case 254u: goto L_00187AFC;
    case 255u: goto L_00187B08;
    case 256u: goto L_00187B14;
    case 257u: goto L_00187B24;
    case 258u: goto L_00187B34;
    case 259u: goto L_00187B40;
    case 260u: goto L_00187BA4;
    case 261u: goto L_00187BB4;
    case 262u: goto L_00187BD8;
    case 263u: goto L_00187C00;
    case 264u: goto L_00187D50;
    case 265u: goto L_00187D7C;
    case 266u: goto L_00187D90;
    case 267u: goto L_00187DB0;
    case 268u: goto L_00187E48;
    case 269u: goto L_00187E68;
    case 270u: goto L_00187F18;
    case 271u: goto L_00187F34;
    case 272u: goto L_00187F58;
    case 273u: goto L_00187F6C;
    case 274u: goto L_00187FA0;
    default: bad_entry(c, 0x00184000u); return;
    }
L_00184000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_001843A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018403C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 34u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 187u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184088; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00184088:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 187u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001840A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001840A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 187u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001840E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 35u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001840E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001840ECu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001840ECu) [[unlikely]] return; }
L_001840EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001843A4; } }
L_001840F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184124u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00184124u) [[unlikely]] return; }
L_00184124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184138u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00184138u) [[unlikely]] return; }
L_00184138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001843A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00184170; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001843A0; } }
L_00184170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001843A0; } }
L_00184180:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001841BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x001841BCu) [[unlikely]] return; }
L_001841BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001843A0; } }
L_001841D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184208u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00184208u) [[unlikely]] return; }
L_00184208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001843A0; } }
L_00184224:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00184254; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001842E4; } }
L_00184254:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001842C8; } }
    set32(c.r[3], c.r[16].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 79u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001842A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018429Cu); set32(c.r[4], c.r[2].w[0] + 38u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018429Cu) [[unlikely]] return; }
L_0018429C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001842E4; } }
L_001842A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001842E4; } }
L_001842C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001842E4u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001842E4u) [[unlikely]] return; }
L_001842E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 187u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001843A0; } }
L_00184308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184310u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00184310u) [[unlikely]] return; }
L_00184310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001843A0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001843A0; } }
L_00184338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0018437C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184360u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00184360u) [[unlikely]] return; }
L_00184360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018437C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184374u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00184374u) [[unlikely]] return; }
L_00184374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001843A0; } }
L_0018437C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_001843A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001843A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001843B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001843DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001843D0u);  if (depth < kMaxDepth) unit_0021(c, 33u, depth + 1u); else { c.pc = 0x00184740u; return; } if (c.pc != 0x001843D0u) [[unlikely]] return; }
L_001843D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018472C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001843DC:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[7].w[0] + 2u);  if (t) { goto L_001846AC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018461C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00184530; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018443C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00184424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00184728; } }
L_00184424:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00184728; } }
L_0018443C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184444u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00184444u) [[unlikely]] return; }
L_00184444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184728; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00184474; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00184474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184470u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x00184470u) [[unlikely]] return; }
L_00184470:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 1;
L_00184474:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001844F4; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001844C4u); st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x001844C4u) [[unlikely]] return; }
L_001844C4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].d[0] = 0ull | 33792ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00184520; } }
L_001844F4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_00184520:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00184728; } }
L_00184530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184538u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00189DE0u; return; } if (c.pc != 0x00184538u) [[unlikely]] return; }
L_00184538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184728; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00184578; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00184728; } }
L_00184578:
    set32(c.r[8], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 6416u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001845ACu); st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x001845ACu) [[unlikely]] return; }
L_001845AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 515u);
    set32(c.r[4], 0u + 11u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001845C8u); st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001845C8u) [[unlikely]] return; }
L_001845C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001845F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3540u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_00184728; } }
L_001845F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 131u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184600u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00184600u) [[unlikely]] return; }
L_00184600:
    set32(c.r[5], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].d[0] = 0ull | 33792ull;
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_00184728; } }
L_0018461C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184624u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00189BB0u; return; } if (c.pc != 0x00184624u) [[unlikely]] return; }
L_00184624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184728; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018467C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 42u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018466Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018466Cu) [[unlikely]] return; }
L_0018466C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00184728; } }
L_0018467C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00184728; } }
L_001846AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001846B4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001846B4u) [[unlikely]] return; }
L_001846B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184728; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00184704; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001846E8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001846E8u) [[unlikely]] return; }
L_001846E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00184704; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001846FCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001846FCu) [[unlikely]] return; }
L_001846FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184728; } }
L_00184704:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00184728:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018472C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00184740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 100u);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { goto L_001849E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00184784:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001849E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001849E4; } }
L_001847A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001847A8u);  if (depth < kMaxDepth) unit_0022(c, 140u, depth + 1u); else { c.pc = 0x00189FD0u; return; } if (c.pc != 0x001847A8u) [[unlikely]] return; }
L_001847A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_001847D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001847F0; } }
L_001847D4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_001847F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001849E4; } }
L_00184800:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 131u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018481Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x0018481Cu) [[unlikely]] return; }
L_0018481C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184824u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00184824u) [[unlikely]] return; }
L_00184824:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001849E4; } }
L_00184834:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018486Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x0018486Cu) [[unlikely]] return; }
L_0018486C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001849E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001849E4; } }
L_0018489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001848A4u);  if (depth < kMaxDepth) unit_0022(c, 131u, depth + 1u); else { c.pc = 0x00189D30u; return; } if (c.pc != 0x001848A4u) [[unlikely]] return; }
L_001848A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00184908; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 42u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001848F8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001848F8u) [[unlikely]] return; }
L_001848F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001849E4; } }
L_00184908:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001849E4; } }
L_00184920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184928u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00184928u) [[unlikely]] return; }
L_00184928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00184978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018495Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x0018495Cu) [[unlikely]] return; }
L_0018495C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00184978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184970u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00184970u) [[unlikely]] return; }
L_00184970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
L_00184978:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001849E4; } }
L_001849A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001849B0u);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x001849B0u) [[unlikely]] return; }
L_001849B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001849E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_001849E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001849F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_00184A8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00184A5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00184A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00184AF8; } }
L_00184A28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 187u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184A54u); st8((c.r[2].w[0] + 186u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00184A54u) [[unlikely]] return; }
L_00184A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00184AF4; } }
L_00184A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184A64u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00184A64u) [[unlikely]] return; }
L_00184A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184AF4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00184AF4; } }
L_00184A8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00184AD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184AB4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00184AB4u) [[unlikely]] return; }
L_00184AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00184AD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184AC8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00184AC8u) [[unlikely]] return; }
L_00184AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184AF4; } }
L_00184AD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00184AF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00184AF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00184B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00184B24; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00184B24:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[3].w[0] + 1u);  if (t) { goto L_00184C58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00184BCC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00184B98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00184B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00184CBC; } }
L_00184B60:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00184B90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184B88u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x00184B88u) [[unlikely]] return; }
L_00184B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00184CB8; } }
L_00184B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00184CB8; } }
L_00184B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184BA0u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00184BA0u) [[unlikely]] return; }
L_00184BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00184CB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 156u), 0u);  if (t) { goto L_00184CB8; } }
L_00184BCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00184BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184BE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00184BE4u) [[unlikely]] return; }
L_00184BE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
L_00184C08:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 156u), c.f[0]);  if (t) { goto L_00184CB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00184CB8; } }
L_00184C58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00184C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184C74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00184C74u) [[unlikely]] return; }
L_00184C74:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00184CB8; } }
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
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.budget -= 13;
L_00184CB8:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00184CBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00184CD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[3], 0u - 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 9;
    { st8((c.r[2].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));  [[clang::musttail]] return unit_0037(c, 109u, depth); }
L_00184D00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[3], 0u - 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 9u);
    c.budget -= 9;
    { st8((c.r[2].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));  [[clang::musttail]] return unit_0037(c, 109u, depth); }
L_00184D30:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 141u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00184D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 153u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00184DD0; } }
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00184D98:
    set32(c.r[4], 0u + 5u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184DA8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00184DA8u) [[unlikely]] return; }
L_00184DA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 153u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 153u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00184D98u | kUnwind; return; } goto L_00184D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00184DDC; } }
L_00184DD0:
    set32(c.r[18], 0u + 128u);
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_00184DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184DE4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0021(c, 69u, depth + 1u); else { c.pc = 0x00184E00u; return; } if (c.pc != 0x00184DE4u) [[unlikely]] return; }
L_00184DE4:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00184E00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_00184E20:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[18].d[0] | c.r[16].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184E30u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00184E30u) [[unlikely]] return; }
L_00184E30:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00184E20u | kUnwind; return; } goto L_00184E20; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00184E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21944u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[2].w[0] + 22064u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 17u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184EF4u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00184EF4u) [[unlikely]] return; }
L_00184EF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 64u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184F08u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00184F08u) [[unlikely]] return; }
L_00184F08:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 150u);
    set32(c.r[3], 0u + 4u);
    st16((c.r[2].w[0] + 168u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 130u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00184F58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00184F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26616u), c.r[4].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184F70u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00184F70u) [[unlikely]] return; }
L_00184F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 48128ull;
    set32(c.r[6], 0u + 1280u);
    st32((c.r[28].w[0] - 26608u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184F88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00184F88u) [[unlikely]] return; }
L_00184F88:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00184FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184FB0u);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x00184E60u; return; } if (c.pc != 0x00184FB0u) [[unlikely]] return; }
L_00184FB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184FBCu); st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 163u, depth + 1u); else { c.pc = 0x0018A6E0u; return; } if (c.pc != 0x00184FBCu) [[unlikely]] return; }
L_00184FBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00184FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00184FE0u);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x00184E60u; return; } if (c.pc != 0x00184FE0u) [[unlikely]] return; }
L_00184FE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 150u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185010; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 151u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185010; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00185010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185018u);  if (depth < kMaxDepth) unit_0022(c, 163u, depth + 1u); else { c.pc = 0x0018A6E0u; return; } if (c.pc != 0x00185018u) [[unlikely]] return; }
L_00185018:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00185030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185040u);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x00184E60u; return; } if (c.pc != 0x00185040u) [[unlikely]] return; }
L_00185040:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185050u); st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 163u, depth + 1u); else { c.pc = 0x0018A6E0u; return; } if (c.pc != 0x00185050u) [[unlikely]] return; }
L_00185050:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00185060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185070u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00185070u) [[unlikely]] return; }
L_00185070:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18432u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00185094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00185094u) [[unlikely]] return; }
L_00185094:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001850A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[3].w[0] + 1u);  if (t) { goto L_001852A4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00185184; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00185130; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001850E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001852E8; } }
L_001850E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001852E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001852E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01430000u);
    c.r[4].d[0] = c.r[2].d[0] | 55296ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185124u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 260u, depth + 1u); else { c.pc = 0x00137A90u; return; } if (c.pc != 0x00185124u) [[unlikely]] return; }
L_00185124:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 19044u), c.r[2].w[0]);  if (t) { goto L_001852E4; } }
L_00185130:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185150u); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00185150u) [[unlikely]] return; }
L_00185150:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185184; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00185184; } }
    set32(c.r[6], c.r[4].w[0] + 136u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185184u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00185184u) [[unlikely]] return; }
L_00185184:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 136u), c.f[0]);  if (t) { goto L_001852E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 136u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 144u)));
    set32(c.r[6], c.r[5].w[0] + 136u);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001851F8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x001851F8u) [[unlikely]] return; }
L_001851F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018520Cu); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018520Cu) [[unlikely]] return; }
L_0018520C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00185258; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 161u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185258u); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00185258u) [[unlikely]] return; }
L_00185258:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001852E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 155u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001852E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[5], c.r[16].w[0] + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018529Cu); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018529Cu) [[unlikely]] return; }
L_0018529C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001852E4; } }
L_001852A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001852ACu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001852ACu) [[unlikely]] return; }
L_001852AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001852E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 142u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 160u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001852E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_001852E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001852E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00185300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00185370; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00185468; } }
L_00185330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00185370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185378u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00185378u) [[unlikely]] return; }
L_00185378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185464; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001853B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185464; } }
L_001853B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185404; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00185404; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u - 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00185404:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 155u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018544C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018544C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018544C; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u - 64u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0018544C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00185464:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00185468:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00185480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_00185564; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001854AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001855A4; } }
L_001854AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001854E8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001854E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185504; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00185504:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00185520; } }
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_00185520:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018552Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018552Cu) [[unlikely]] return; }
L_0018552C:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018553Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018553Cu) [[unlikely]] return; }
L_0018553C:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018554Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018554Cu) [[unlikely]] return; }
L_0018554C:
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018555Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x0018555Cu) [[unlikely]] return; }
L_0018555C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001855A0; } }
L_00185564:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 142u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 142u);  if (t) { goto L_001855A0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_001855A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001855A4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001855B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18400u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001855DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001855DCu) [[unlikely]] return; }
L_001855DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001855F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_001859B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00185628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[6], c.r[3].w[0] + 129u);
    set32(c.r[3], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185670u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00185670u) [[unlikely]] return; }
L_00185670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001859BC; } }
L_00185678:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 142u);  if (t) { goto L_001859B8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001859B8; } }
L_0018569C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001856FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001856D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 58u);  if (t) { goto L_00185730; } }
L_001856D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001856F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_00185730; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001856F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00185730; } }
L_001856FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 59u);  if (t) { goto L_00185730; } }
L_00185710:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00185730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 27u);  if (t) { goto L_00185730; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00185730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185738u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00185738u) [[unlikely]] return; }
L_00185738:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001859B8; } }
L_0018574C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185754u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00185754u) [[unlikely]] return; }
L_00185754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185790; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185768u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00185768u) [[unlikely]] return; }
L_00185768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185790; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001859B8; } }
L_00185790:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 3u);  if (t) { goto L_00185928; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001857B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001859B8; } }
L_001857B4:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001857E0; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001857E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018590C; } }
L_001857E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001857E8u); c.r[4].d[0] = ld8((c.r[5].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x001857E8u) [[unlikely]] return; }
L_001857E8:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001857F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 179u, depth + 1u); else { c.pc = 0x0018A980u; return; } if (c.pc != 0x001857F4u) [[unlikely]] return; }
L_001857F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0018582C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018582C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018582C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 129u);  if (t) { goto L_00185854; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018588C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_0018586C; } }
L_00185854:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018588C; } }
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0018586C:
    set32(c.r[4], c.r[3].w[0] + 3u);
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018582Cu | kUnwind; return; } goto L_0018582C; } }
L_0018588C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185894u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00185894u) [[unlikely]] return; }
L_00185894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001859B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001858A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001858A8u) [[unlikely]] return; }
L_001858A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001859B8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 143u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00185904; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001859B8; } }
L_00185904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001859B8; } }
L_0018590C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185920u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00185920u) [[unlikely]] return; }
L_00185920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001859B8; } }
L_00185928:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 68u);  if (t) { goto L_00185948; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 69u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001859B8; } }
L_00185948:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 129u);  if (t) { goto L_0018596C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018596C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001859B8; } }
L_00185984:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001859B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
L_001859B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001859BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001859D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_00185E58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00185A08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 187u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185AB8; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[7], c.r[9].w[0] + 0u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_00185A5C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 187u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00185AA8; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00185A8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 162u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00185AB8; } }
L_00185A8C:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 162u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00185AB8; } }
L_00185AA4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00185AA8:
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00185A5Cu | kUnwind; return; } goto L_00185A5C; } }
    c.budget -= 1;
L_00185AB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185ACCu); set32(c.r[6], c.r[2].w[0] + 162u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00185ACCu) [[unlikely]] return; }
L_00185ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00185E5C; } }
L_00185AD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + 142u);  if (t) { goto L_00185E58; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00185E58; } }
L_00185AF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 30u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185B14u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00185B14u) [[unlikely]] return; }
L_00185B14:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00185E58; } }
L_00185B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185B30u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00185B30u) [[unlikely]] return; }
L_00185B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185B58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185E58; } }
L_00185B58:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 3u);  if (t) { goto L_00185D14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00185B7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00185E58; } }
L_00185B7C:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185BA8; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185BA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185CF0; } }
L_00185BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185BB0u); c.r[4].d[0] = ld8((c.r[5].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00185BB0u) [[unlikely]] return; }
L_00185BB0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185BBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 179u, depth + 1u); else { c.pc = 0x0018A980u; return; } if (c.pc != 0x00185BBCu) [[unlikely]] return; }
L_00185BBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00185BF8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], c.r[3].w[0] + 162u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 162u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_00185BEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185BEC; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00185BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00185BF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00185BF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 162u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 162u);  if (t) { goto L_00185C20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00185C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00185C3C; } }
L_00185C20:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185C68; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_00185C3C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00185C68; } }
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_00185C60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185C60; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_00185C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00185BF8u | kUnwind; return; } goto L_00185BF8; } }
L_00185C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185C70u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00185C70u) [[unlikely]] return; }
L_00185C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185E58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185C84u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00185C84u) [[unlikely]] return; }
L_00185C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185E58; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 143u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 162u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00185E58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 187u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185E58; } }
L_00185CF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185D04u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00185D04u) [[unlikely]] return; }
L_00185D04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 162u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00185E58; } }
L_00185D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185D1Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00185D1Cu) [[unlikely]] return; }
L_00185D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185D84; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 162u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00185D84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 187u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185E58; } }
L_00185D84:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00185DAC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 69u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00185E58; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00185DAC:
    st8((c.r[4].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185E58; } }
L_00185DC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 142u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185E58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 162u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00185E00; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185E58; } }
L_00185E00:
    st8((c.r[6].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 162u)));
    st8((c.r[5].w[0] + 129u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 162u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00185E2C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00185E2C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_00185E58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00185E5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00185E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_00185E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185E90u);  if (depth < kMaxDepth) unit_0021(c, 146u, depth + 1u); else { c.pc = 0x00186000u; return; } if (c.pc != 0x00185E90u) [[unlikely]] return; }
L_00185E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00185FF0; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00185E9C:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 129u)));
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00185EE0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00185FEC; } }
L_00185EE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 2u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[9], c.r[8].w[0] + 2u);  if (t) { goto L_00185FBC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00185F94; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_00185F64; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00185F30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00185F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00185FEC; } }
L_00185F20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185F30u); st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00185F30u) [[unlikely]] return; }
L_00185F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185F3Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00185F3Cu) [[unlikely]] return; }
L_00185F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00185FEC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00185FEC; } }
L_00185F64:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[8].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00185FEC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00185FEC; } }
L_00185F94:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 130u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185FA0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00185FA0u) [[unlikely]] return; }
L_00185FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185FEC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00185FEC; } }
L_00185FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00185FC4u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00185FC4u) [[unlikely]] return; }
L_00185FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00185FEC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00185FEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00185FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00186000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_001860D4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001860A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00186064; } }
L_00186040:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00186050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018610C; } }
L_00186050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 43u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186064u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186064u) [[unlikely]] return; }
L_00186064:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186070u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00186070u) [[unlikely]] return; }
L_00186070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186108; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00186108; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00186108; } }
L_001860A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00186108; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186108; } }
L_001860D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001860DCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 164u)));  if (depth < kMaxDepth) unit_00A4(c, 188u, depth + 1u); else { c.pc = 0x00393CD0u; return; } if (c.pc != 0x001860DCu) [[unlikely]] return; }
L_001860DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_00186108:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018610C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00186120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00186180; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00186180; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001863C8; } }
L_00186180:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { goto L_00186300; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001862A4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00186240; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001861E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001861C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001863CC; } }
L_001861C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001861E8u); set32(c.r[4], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001861E8u) [[unlikely]] return; }
L_001861E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001861F4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001861F4u) [[unlikely]] return; }
L_001861F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001863C8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 2u);
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001863C8; } }
L_00186240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186248u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00186248u) [[unlikely]] return; }
L_00186248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001863C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018626C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00186288; } }
L_0018626C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001863C8; } }
L_00186288:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018629Cu); st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018629Cu) [[unlikely]] return; }
L_0018629C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001863C8; } }
L_001862A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 130u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001862E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x001862E4u) [[unlikely]] return; }
L_001862E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001863C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001863C8; } }
L_00186300:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186330u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00186330u) [[unlikely]] return; }
L_00186330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001863C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_001863B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186384u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00186384u) [[unlikely]] return; }
L_00186384:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001863A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001863C8; } }
L_001863A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001863C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.budget -= 1;
L_001863B8:
    set32(c.r[6], 0u + 3540u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001863C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001863C8u) [[unlikely]] return; }
L_001863C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001863CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001863E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0018640C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186400u);  if (depth < kMaxDepth) unit_0021(c, 168u, depth + 1u); else { c.pc = 0x001866A0u; return; } if (c.pc != 0x00186400u) [[unlikely]] return; }
L_00186400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018668C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0018640C:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186450; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018643C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186688; } }
L_00186450:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_001865E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00186490; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00186478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00186688; } }
L_00186478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186688; } }
L_00186490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186498u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00186498u) [[unlikely]] return; }
L_00186498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186688; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001864C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001864C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001864C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001864C4u) [[unlikely]] return; }
L_001864C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186544; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 129u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 6416u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186504u); st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00186504u) [[unlikely]] return; }
L_00186504:
    set32(c.r[6], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].d[0] = 0ull | 33792ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001865D8; } }
L_00186544:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186564u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00186564u) [[unlikely]] return; }
L_00186564:
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 168u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001865A0; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001865C8; } }
L_001865A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001865C4; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001865C8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001865C4:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001865C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001865D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00186688; } }
L_001865E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186610; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186688; } }
L_00186610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186618u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00189DE0u; return; } if (c.pc != 0x00186618u) [[unlikely]] return; }
L_00186618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186688; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00186648; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186678; } }
L_00186648:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018666C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00186678; } }
L_0018666C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00186678:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00186688:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018668C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001866A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { goto L_0018674C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00186728; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001866F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00186928; } }
L_001866F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00186924; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186924; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186924; } }
L_00186728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186730u);  if (depth < kMaxDepth) unit_0022(c, 140u, depth + 1u); else { c.pc = 0x00189FD0u; return; } if (c.pc != 0x00186730u) [[unlikely]] return; }
L_00186730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186924; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186924; } }
L_0018674C:
    st16((c.r[5].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018675Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));  if (depth < kMaxDepth) unit_00A4(c, 188u, depth + 1u); else { c.pc = 0x00393CD0u; return; } if (c.pc != 0x0018675Cu) [[unlikely]] return; }
L_0018675C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 4u);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0018678C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 5u);  if (t) { goto L_00186794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00186790; } }
L_0018678C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00186790:
    set32(c.r[3], 0u - 5u);
    c.budget -= 1;
L_00186794:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { mmi::paddub(c.r[18], c.r[0], c.r[0]);  goto L_001867EC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001867C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001867C0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001867C0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_001867C4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001867EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001867EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001867EC; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001867EC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00186814; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00186818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00186838; } }
L_00186814:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.budget -= 1;
L_00186818:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00186838; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186838; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00186838:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00186850; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_00186850; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001868D4; } }
L_00186850:
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186860u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00186860u) [[unlikely]] return; }
L_00186860:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001868B0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001868B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001868B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001868A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001868BC; } }
L_001868A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001868BC; } }
L_001868B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001868BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186918; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001868D4:
    st8((c.r[5].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001868FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00186908; } }
L_001868FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_00186900:
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00186908:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00186918:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00186924:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00186928:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00186940:
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
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00186998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018698Cu);  if (depth < kMaxDepth) unit_0021(c, 206u, depth + 1u); else { c.pc = 0x00186EB0u; return; } if (c.pc != 0x0018698Cu) [[unlikely]] return; }
L_0018698C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00186E9C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00186998:
    st8((c.r[5].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 2u);  if (t) { goto L_00186E98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 22352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001869CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001869D4u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001869D4u) [[unlikely]] return; }
L_001869D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186A28; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001869F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001869F4u) [[unlikely]] return; }
L_001869F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186A14; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00186E98; } }
L_00186A14:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186E98; } }
L_00186A28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 130u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186A48u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00186A48u) [[unlikely]] return; }
L_00186A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186E98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_00186A8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186A80u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00186A80u) [[unlikely]] return; }
L_00186A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00186E98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.budget -= 1;
L_00186A8C:
    set32(c.r[6], 0u + 3540u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186A9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00186A9Cu) [[unlikely]] return; }
L_00186A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00186E98; } }
L_00186AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186AACu);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00186AACu) [[unlikely]] return; }
L_00186AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186E98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186E98; } }
L_00186AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186AD8u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00186AD8u) [[unlikely]] return; }
L_00186AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186E98; } }
L_00186AF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186B14u); st8((c.r[2].w[0] + 61u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x00186B14u) [[unlikely]] return; }
L_00186B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186B2C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00186E98; } }
L_00186B2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00186E98; } }
L_00186B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186B44u);  if (depth < kMaxDepth) unit_0022(c, 144u, depth + 1u); else { c.pc = 0x0018A0C0u; return; } if (c.pc != 0x00186B44u) [[unlikely]] return; }
L_00186B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E98; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00186B70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186B68u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186B68u) [[unlikely]] return; }
L_00186B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));  if (t) { goto L_00186B84; } }
L_00186B70:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
L_00186B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186E98; } }
L_00186B8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186BBCu); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00186BBCu) [[unlikely]] return; }
L_00186BBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 515u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186BFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3540u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00186C20; } }
L_00186BFC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 131u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186C08u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00186C08u) [[unlikely]] return; }
L_00186C08:
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = 0ull | 33792ull;
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 6;
L_00186C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186C28u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00189BB0u; return; } if (c.pc != 0x00186C28u) [[unlikely]] return; }
L_00186C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186CD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 14u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00186C70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u - 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00186C70:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00186D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186D18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 186u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186D18; } }
    set32(c.r[4], c.r[2].w[0] + 187u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00186D18; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 170u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00186D18; } }
L_00186CD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 13u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00186D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 186u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00186D18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00186D18:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186D34u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186D34u) [[unlikely]] return; }
L_00186D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00186E98; } }
L_00186D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186D44u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00186D44u) [[unlikely]] return; }
L_00186D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E98; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186D58u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00186D58u) [[unlikely]] return; }
L_00186D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186D74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186D6Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00186D6Cu) [[unlikely]] return; }
L_00186D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E98; } }
L_00186D74:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00186D98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00186D98:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186DDC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00186DDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186DCCu); st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186DCCu) [[unlikely]] return; }
L_00186DCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00186E98; } }
L_00186DDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 170u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00186E18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186E04u); set32(c.r[4], c.r[2].w[0] + 31u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186E04u) [[unlikely]] return; }
L_00186E04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00186E98; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00186E18:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00186E98; } }
L_00186E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186E38u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00186E38u) [[unlikely]] return; }
L_00186E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00186E68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186E4Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00186E4Cu) [[unlikely]] return; }
L_00186E4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186E7C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186E60u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00186E60u) [[unlikely]] return; }
L_00186E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00186E7C; } }
L_00186E68:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00186E98; } }
L_00186E7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00186E98:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00186E9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00186EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_00187244; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00186EE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186EFCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00186EFCu) [[unlikely]] return; }
L_00186EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00187248; } }
L_00186F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186F0Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00186F0Cu) [[unlikely]] return; }
L_00186F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187244; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187244; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 131u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186F4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00186F4Cu) [[unlikely]] return; }
L_00186F4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00187244; } }
L_00186F5C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[6].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00187244; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187244; } }
L_00186F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00186F88u);  if (depth < kMaxDepth) unit_0022(c, 131u, depth + 1u); else { c.pc = 0x00189D30u; return; } if (c.pc != 0x00186F88u) [[unlikely]] return; }
L_00186F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187244; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 170u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00187058; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00186FE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u - 128u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00186FE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 128u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 14u);  goto L_00187048; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00187044; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 186u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187044; } }
    set32(c.r[4], c.r[2].w[0] + 187u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00187044; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_00187040:
    st8((c.r[2].w[0] + 170u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00187044:
    set32(c.r[4], 0u + 14u);
    c.budget -= 1;
L_00187048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187050u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187050u) [[unlikely]] return; }
L_00187050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00187244; } }
L_00187058:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 128u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00187244; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187244; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 187u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 186u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187244; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5175u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187244; } }
L_001870A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001870B0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001870B0u) [[unlikely]] return; }
L_001870B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187244; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001870C4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001870C4u) [[unlikely]] return; }
L_001870C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001870E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001870D8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001870D8u) [[unlikely]] return; }
L_001870D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187244; } }
L_001870E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001870FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001870FC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187140; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187140; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187130u); st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187130u) [[unlikely]] return; }
L_00187130:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00187244; } }
L_00187140:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 170u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187178; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187168u); set32(c.r[4], c.r[2].w[0] + 31u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187168u) [[unlikely]] return; }
L_00187168:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00187244; } }
L_00187178:
    st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187244; } }
L_0018719C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001871A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001871A4u) [[unlikely]] return; }
L_001871A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001871D4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001871B8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001871B8u) [[unlikely]] return; }
L_001871B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001871E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001871CCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001871CCu) [[unlikely]] return; }
L_001871CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001871E8; } }
L_001871D4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00187244; } }
L_001871E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187244; } }
L_00187210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187218u);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x00187218u) [[unlikely]] return; }
L_00187218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187244; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00187244:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00187248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001872BC; } }
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001872BC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00187458; } }
L_001872BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { goto L_001873AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187358; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018730C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001872F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018745C; } }
L_001872F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018730Cu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018730Cu) [[unlikely]] return; }
L_0018730C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187318u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00187318u) [[unlikely]] return; }
L_00187318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187458; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187334u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 65u, depth + 1u); else { c.pc = 0x00184D50u; return; } if (c.pc != 0x00187334u) [[unlikely]] return; }
L_00187334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187458; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 32694u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 131u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00187458; } }
L_00187358:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 142u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00187458; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 131u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187458; } }
L_001873AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001873B4u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x001873B4u) [[unlikely]] return; }
L_001873B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018744C; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001873E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187458; } }
L_001873E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    st8((c.r[4].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26616u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 131u)));
    set32(c.r[4], c.r[4].w[0] << 12);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3592u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00187434; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187438; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_00187434:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00187438:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187458; } }
L_0018744C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    st8((c.r[4].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00187458:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018745C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001874DC; } }
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001874DC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00187608; } }
L_001874DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018757C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00187510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018760C; } }
L_00187510:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187524u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187524u) [[unlikely]] return; }
L_00187524:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187530u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00187530u) [[unlikely]] return; }
L_00187530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187608; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 5u);
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00187608; } }
L_0018757C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187584u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00187584u) [[unlikely]] return; }
L_00187584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187608; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001875A8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001875F4; } }
L_001875A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001875DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001875F8; } }
L_001875DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001875F8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001875F4:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001875F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00187608:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018760C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018768C; } }
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018768C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001877B8; } }
L_0018768C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018772C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001876D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001876C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001877BC; } }
L_001876C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001876D4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001876D4u) [[unlikely]] return; }
L_001876D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001876E0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001876E0u) [[unlikely]] return; }
L_001876E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001877B8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001877B8; } }
L_0018772C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187734u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00187734u) [[unlikely]] return; }
L_00187734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001877B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00187758; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001877A4; } }
L_00187758:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018778C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[3].w[0] + 154u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001877A8; } }
L_0018778C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001877A8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001877A4:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001877A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001877B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001877BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001877D0:
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
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187824; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001878D0; } }
L_00187824:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_00187894; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187870; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018784C; } }
    goto L_00187844;
L_00187840:
    c.budget -= 1;
L_00187844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001878D4; } }
L_0018784C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187868u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187868u) [[unlikely]] return; }
L_00187868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001878D0; } }
L_00187870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187878u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00187878u) [[unlikely]] return; }
L_00187878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001878D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001878D0; } }
L_00187894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018789Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x0018789Cu) [[unlikely]] return; }
L_0018789C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001878B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001878B0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001878B0u) [[unlikely]] return; }
L_001878B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001878D0; } }
L_001878B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001878C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001878D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001878D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001878E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0018790C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187900u);  if (depth < kMaxDepth) unit_0021(c, 251u, depth + 1u); else { c.pc = 0x00187990u; return; } if (c.pc != 0x00187900u) [[unlikely]] return; }
L_00187900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00187988; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0018790C:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 130ull;  if (t) { goto L_0018794C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187984; } }
    c.r[3].d[0] = c.r[4].d[0] & 130ull;
    c.budget -= 1;
L_0018794C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00187970; } }
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187984; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00187970:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00187984:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00187988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00187A38; } }
    set32(c.r[3], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00187A1C; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001879D4; } }
    set32(c.r[3], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001879D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00187A38; } }
L_001879D4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_001879F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001879F4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001879F4:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_001879F8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187A38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00187A38; } }
L_00187A1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00187A38; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00187A38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00187A5C; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187A84; } }
L_00187A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187A64u);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x00187A64u) [[unlikely]] return; }
L_00187A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187A84; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00187A84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00187BD0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187BAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00187ACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00187BF0; } }
L_00187ACC:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 52u);  goto L_00187B84; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00184000u < 16384u) { entry = entries_0021[(t - 0x00184000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00187AFC:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B08:
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 47u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 49u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B34:
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187B58; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
L_00187B58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_00187B78; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
L_00187B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187B88; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 1;
L_00187B84:
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00187B88:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187BA4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187BA4u) [[unlikely]] return; }
L_00187BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00187BEC; } }
L_00187BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187BB4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00187BB4u) [[unlikely]] return; }
L_00187BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187BEC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00187BEC; } }
L_00187BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187BD8u); c.r[4].d[0] = ld8((c.r[2].w[0] + 163u));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x00187BD8u) [[unlikely]] return; }
L_00187BD8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1020ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187BEC; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00187BEC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00187BF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00187C00:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[5].w[0] + 2u);  if (t) { goto L_00187CBC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187C6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00187C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00187D44; } }
L_00187C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], 0u - 3u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 600u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00187D44; } }
L_00187C6C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00187C98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 142u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187D44; } }
L_00187C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187D44; } }
L_00187CBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00187D44; } }
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
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 145u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00187D28; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187D44; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_00187D28:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00187D44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00187D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18352u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00187D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00187D7Cu) [[unlikely]] return; }
L_00187D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00187DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187DB0u);  if (depth < kMaxDepth) unit_0021(c, 274u, depth + 1u); else { c.pc = 0x00187FA0u; return; } if (c.pc != 0x00187DB0u) [[unlikely]] return; }
L_00187DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00187F90; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00187DBC:
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 71u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00187E00; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187F8C; } }
L_00187E00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_00187F20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00187E40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00187E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00187F8C; } }
L_00187E28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00187F8C; } }
L_00187E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187E48u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00187E48u) [[unlikely]] return; }
L_00187E48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187F8C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187E68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x00187E68u) [[unlikely]] return; }
L_00187E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00187EA0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00187F8C; } }
L_00187EA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187EE4; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00187F0C; } }
L_00187EE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00187F08; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00187F0C; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00187F08:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00187F0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187F18u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00187F18u) [[unlikely]] return; }
L_00187F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00187F8C; } }
L_00187F20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00187F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187F34u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00187F34u) [[unlikely]] return; }
L_00187F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187F8C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00187F8C; } }
L_00187F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187F58u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00187F58u) [[unlikely]] return; }
L_00187F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00187F74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00187F6Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00187F6Cu) [[unlikely]] return; }
L_00187F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00187F8C; } }
L_00187F74:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00187F8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00187F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00187FA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 100u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { [[clang::musttail]] return unit_0022(c, 6u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0022(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00187FF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0022(c, 11u, depth); } }
L_00187FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0022(c, 10u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_0022(c, 1u, depth);
}

}
