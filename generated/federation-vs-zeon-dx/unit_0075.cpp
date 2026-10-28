#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95,
    0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0,
    136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0,
    259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0,
    266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D402C;
    case 3u: goto L_002D4040;
    case 4u: goto L_002D4090;
    case 5u: goto L_002D40AC;
    case 6u: goto L_002D40BC;
    case 7u: goto L_002D40D0;
    case 8u: goto L_002D41E8;
    case 9u: goto L_002D4214;
    case 10u: goto L_002D4220;
    case 11u: goto L_002D4230;
    case 12u: goto L_002D425C;
    case 13u: goto L_002D4264;
    case 14u: goto L_002D428C;
    case 15u: goto L_002D42B4;
    case 16u: goto L_002D42D0;
    case 17u: goto L_002D4300;
    case 18u: goto L_002D4310;
    case 19u: goto L_002D4320;
    case 20u: goto L_002D4360;
    case 21u: goto L_002D4378;
    case 22u: goto L_002D4388;
    case 23u: goto L_002D4394;
    case 24u: goto L_002D43C4;
    case 25u: goto L_002D43F8;
    case 26u: goto L_002D4410;
    case 27u: goto L_002D444C;
    case 28u: goto L_002D4468;
    case 29u: goto L_002D4478;
    case 30u: goto L_002D4490;
    case 31u: goto L_002D44FC;
    case 32u: goto L_002D4518;
    case 33u: goto L_002D4528;
    case 34u: goto L_002D453C;
    case 35u: goto L_002D4550;
    case 36u: goto L_002D4594;
    case 37u: goto L_002D459C;
    case 38u: goto L_002D45B0;
    case 39u: goto L_002D45F4;
    case 40u: goto L_002D45FC;
    case 41u: goto L_002D4610;
    case 42u: goto L_002D4664;
    case 43u: goto L_002D46AC;
    case 44u: goto L_002D46FC;
    case 45u: goto L_002D4750;
    case 46u: goto L_002D47AC;
    case 47u: goto L_002D47F0;
    case 48u: goto L_002D4830;
    case 49u: goto L_002D4870;
    case 50u: goto L_002D48EC;
    case 51u: goto L_002D4900;
    case 52u: goto L_002D4A04;
    case 53u: goto L_002D4ADC;
    case 54u: goto L_002D4BB0;
    case 55u: goto L_002D4C10;
    case 56u: goto L_002D4C68;
    case 57u: goto L_002D4CB0;
    case 58u: goto L_002D4D30;
    case 59u: goto L_002D4D90;
    case 60u: goto L_002D4DF8;
    case 61u: goto L_002D4E28;
    case 62u: goto L_002D4E60;
    case 63u: goto L_002D4EE4;
    case 64u: goto L_002D4F3C;
    case 65u: goto L_002D4F90;
    case 66u: goto L_002D501C;
    case 67u: goto L_002D507C;
    case 68u: goto L_002D50D0;
    case 69u: goto L_002D5100;
    case 70u: goto L_002D510C;
    case 71u: goto L_002D5120;
    case 72u: goto L_002D5134;
    case 73u: goto L_002D513C;
    case 74u: goto L_002D5144;
    case 75u: goto L_002D514C;
    case 76u: goto L_002D5160;
    case 77u: goto L_002D5190;
    case 78u: goto L_002D5198;
    case 79u: goto L_002D51AC;
    case 80u: goto L_002D51B4;
    case 81u: goto L_002D51BC;
    case 82u: goto L_002D51D0;
    case 83u: goto L_002D520C;
    case 84u: goto L_002D5224;
    case 85u: goto L_002D5244;
    case 86u: goto L_002D5260;
    case 87u: goto L_002D5274;
    case 88u: goto L_002D5288;
    case 89u: goto L_002D52A0;
    case 90u: goto L_002D52C0;
    case 91u: goto L_002D52F0;
    case 92u: goto L_002D5310;
    case 93u: goto L_002D5368;
    case 94u: goto L_002D5370;
    case 95u: goto L_002D537C;
    case 96u: goto L_002D538C;
    case 97u: goto L_002D5394;
    case 98u: goto L_002D5450;
    case 99u: goto L_002D5478;
    case 100u: goto L_002D54D0;
    case 101u: goto L_002D5598;
    case 102u: goto L_002D5614;
    case 103u: goto L_002D566C;
    case 104u: goto L_002D5698;
    case 105u: goto L_002D56C0;
    case 106u: goto L_002D56F0;
    case 107u: goto L_002D56F8;
    case 108u: goto L_002D5708;
    case 109u: goto L_002D5710;
    case 110u: goto L_002D5718;
    case 111u: goto L_002D5728;
    case 112u: goto L_002D5734;
    case 113u: goto L_002D5784;
    case 114u: goto L_002D57A0;
    case 115u: goto L_002D57BC;
    case 116u: goto L_002D5824;
    case 117u: goto L_002D58B0;
    case 118u: goto L_002D58D0;
    case 119u: goto L_002D590C;
    case 120u: goto L_002D5930;
    case 121u: goto L_002D5980;
    case 122u: goto L_002D59A8;
    case 123u: goto L_002D59E4;
    case 124u: goto L_002D5A08;
    case 125u: goto L_002D5A60;
    case 126u: goto L_002D5A80;
    case 127u: goto L_002D5ABC;
    case 128u: goto L_002D5AE0;
    case 129u: goto L_002D5B30;
    case 130u: goto L_002D5B5C;
    case 131u: goto L_002D5B80;
    case 132u: goto L_002D5BB0;
    case 133u: goto L_002D5BE0;
    case 134u: goto L_002D5BE8;
    case 135u: goto L_002D5BF8;
    case 136u: goto L_002D5C00;
    case 137u: goto L_002D5C08;
    case 138u: goto L_002D5C18;
    case 139u: goto L_002D5C24;
    case 140u: goto L_002D5C74;
    case 141u: goto L_002D5C90;
    case 142u: goto L_002D5CAC;
    case 143u: goto L_002D5D14;
    case 144u: goto L_002D5DA0;
    case 145u: goto L_002D5DC0;
    case 146u: goto L_002D5DFC;
    case 147u: goto L_002D5E20;
    case 148u: goto L_002D5E70;
    case 149u: goto L_002D5E98;
    case 150u: goto L_002D5ED4;
    case 151u: goto L_002D5EF8;
    case 152u: goto L_002D5F50;
    case 153u: goto L_002D5F84;
    case 154u: goto L_002D5F8C;
    case 155u: goto L_002D5F9C;
    case 156u: goto L_002D5FA4;
    case 157u: goto L_002D5FAC;
    case 158u: goto L_002D5FBC;
    case 159u: goto L_002D5FC8;
    case 160u: goto L_002D6018;
    case 161u: goto L_002D6034;
    case 162u: goto L_002D604C;
    case 163u: goto L_002D60A0;
    case 164u: goto L_002D6120;
    case 165u: goto L_002D61C0;
    case 166u: goto L_002D61FC;
    case 167u: goto L_002D6230;
    case 168u: goto L_002D6270;
    case 169u: goto L_002D62A0;
    case 170u: goto L_002D6330;
    case 171u: goto L_002D6344;
    case 172u: goto L_002D6378;
    case 173u: goto L_002D638C;
    case 174u: goto L_002D63A4;
    case 175u: goto L_002D63C4;
    case 176u: goto L_002D63EC;
    case 177u: goto L_002D6410;
    case 178u: goto L_002D6424;
    case 179u: goto L_002D6440;
    case 180u: goto L_002D64D0;
    case 181u: goto L_002D64E4;
    case 182u: goto L_002D6518;
    case 183u: goto L_002D652C;
    case 184u: goto L_002D6544;
    case 185u: goto L_002D6564;
    case 186u: goto L_002D658C;
    case 187u: goto L_002D65B0;
    case 188u: goto L_002D65C4;
    case 189u: goto L_002D65E0;
    case 190u: goto L_002D6604;
    case 191u: goto L_002D6618;
    case 192u: goto L_002D6630;
    case 193u: goto L_002D6AB0;
    case 194u: goto L_002D6B80;
    case 195u: goto L_002D6BA4;
    case 196u: goto L_002D6BC0;
    case 197u: goto L_002D6C10;
    case 198u: goto L_002D6C24;
    case 199u: goto L_002D6C30;
    case 200u: goto L_002D6CBC;
    case 201u: goto L_002D6CE0;
    case 202u: goto L_002D6D20;
    case 203u: goto L_002D6D2C;
    case 204u: goto L_002D6D38;
    case 205u: goto L_002D6D40;
    case 206u: goto L_002D6D50;
    case 207u: goto L_002D6D60;
    case 208u: goto L_002D6D98;
    case 209u: goto L_002D6DA4;
    case 210u: goto L_002D6DB4;
    case 211u: goto L_002D6DC0;
    case 212u: goto L_002D6DC8;
    case 213u: goto L_002D6DD0;
    case 214u: goto L_002D6DD8;
    case 215u: goto L_002D6DE0;
    case 216u: goto L_002D6E08;
    case 217u: goto L_002D6FA0;
    case 218u: goto L_002D6FE4;
    case 219u: goto L_002D703C;
    case 220u: goto L_002D707C;
    case 221u: goto L_002D70A0;
    case 222u: goto L_002D70F4;
    case 223u: goto L_002D7104;
    case 224u: goto L_002D7114;
    case 225u: goto L_002D7124;
    case 226u: goto L_002D7130;
    case 227u: goto L_002D71F0;
    case 228u: goto L_002D7294;
    case 229u: goto L_002D72C0;
    case 230u: goto L_002D7310;
    case 231u: goto L_002D7334;
    case 232u: goto L_002D7490;
    case 233u: goto L_002D749C;
    case 234u: goto L_002D74B4;
    case 235u: goto L_002D74E0;
    case 236u: goto L_002D7540;
    case 237u: goto L_002D761C;
    case 238u: goto L_002D7628;
    case 239u: goto L_002D7640;
    case 240u: goto L_002D766C;
    case 241u: goto L_002D7680;
    case 242u: goto L_002D76D0;
    case 243u: goto L_002D7720;
    case 244u: goto L_002D78B0;
    case 245u: goto L_002D7A60;
    case 246u: goto L_002D7AE8;
    case 247u: goto L_002D7B10;
    case 248u: goto L_002D7B20;
    case 249u: goto L_002D7B28;
    case 250u: goto L_002D7B30;
    case 251u: goto L_002D7B38;
    case 252u: goto L_002D7B48;
    case 253u: goto L_002D7B50;
    case 254u: goto L_002D7B5C;
    case 255u: goto L_002D7BB8;
    case 256u: goto L_002D7BE0;
    case 257u: goto L_002D7BF0;
    case 258u: goto L_002D7BF8;
    case 259u: goto L_002D7C00;
    case 260u: goto L_002D7C08;
    case 261u: goto L_002D7C10;
    case 262u: goto L_002D7C34;
    case 263u: goto L_002D7C5C;
    case 264u: goto L_002D7C68;
    case 265u: goto L_002D7C78;
    case 266u: goto L_002D7C80;
    case 267u: goto L_002D7C88;
    case 268u: goto L_002D7C90;
    case 269u: goto L_002D7CB4;
    case 270u: goto L_002D7CDC;
    case 271u: goto L_002D7CE8;
    case 272u: goto L_002D7D20;
    case 273u: goto L_002D7D90;
    case 274u: goto L_002D7E50;
    case 275u: goto L_002D7E6C;
    case 276u: goto L_002D7E94;
    case 277u: goto L_002D7EA4;
    case 278u: goto L_002D7EE0;
    case 279u: goto L_002D7EF4;
    case 280u: goto L_002D7F4C;
    case 281u: goto L_002D7F60;
    case 282u: goto L_002D7FA4;
    case 283u: goto L_002D7FF0;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_002D4020; } }
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002D4020:
    st8((c.r[16].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D402Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D402Cu) [[unlikely]] return; }
L_002D402C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D40B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D40BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 848u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4098; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 25u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4090u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D4090u) [[unlikely]] return; }
L_002D4090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D40C0; } }
L_002D4098:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40ACu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D40ACu) [[unlikely]] return; }
L_002D40AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D40BC; } }
L_002D40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D40BCu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D40BCu) [[unlikely]] return; }
L_002D40BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D40C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D40D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D4238; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D4108; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D4108:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 31536u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 1072u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1220u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 40;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 32767u);  goto L_002D41B8; }
    c.r[1].d[0] = c.r[2].sd[0] < -24575ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D41F8; } }
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 1;
L_002D41B8:
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], 0u + 24u);
    st16((c.r[17].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D41E8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D41E8u) [[unlikely]] return; }
L_002D41E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002D4214; } }
L_002D41F8:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 25u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4214u); st16((c.r[17].w[0] + 848u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D4214u) [[unlikely]] return; }
L_002D4214:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4220u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D9610u; return; } if (c.pc != 0x002D4220u) [[unlikely]] return; }
L_002D4220:
    set32(c.r[5], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4230u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002D4230u) [[unlikely]] return; }
L_002D4230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002D42B8; } }
L_002D4238:
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D425Cu); st32((c.r[17].w[0] + 1220u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 102u, depth + 1u); else { c.pc = 0x002D9640u; return; } if (c.pc != 0x002D425Cu) [[unlikely]] return; }
L_002D425C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4264u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D4264u) [[unlikely]] return; }
L_002D4264:
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D42B4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D428Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D428Cu) [[unlikely]] return; }
L_002D428C:
    c.f[1] = ld32((c.r[17].w[0] + 1220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D42B4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D42B4u) [[unlikely]] return; }
L_002D42B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D42B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D42D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4308; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4300u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D4300u) [[unlikely]] return; }
L_002D4300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D4314; } }
L_002D4308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4310u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D4310u) [[unlikely]] return; }
L_002D4310:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D4314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D4320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 738u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D4380; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4360u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D4360u) [[unlikely]] return; }
L_002D4360:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4378u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D4378u) [[unlikely]] return; }
L_002D4378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002D438C; } }
L_002D4380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4388u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D4388u) [[unlikely]] return; }
L_002D4388:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_002D438C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4394u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D4394u) [[unlikely]] return; }
L_002D4394:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D43BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
L_002D43BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D43C4u) [[unlikely]] return; }
L_002D43C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D43E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D43EC; } }
L_002D43E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 2;
L_002D43EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D43F8u) [[unlikely]] return; }
L_002D43F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4470; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 848u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4454; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D444Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D444Cu) [[unlikely]] return; }
L_002D444C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D447C; } }
L_002D4454:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 25u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4468u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D4468u) [[unlikely]] return; }
L_002D4468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4478; } }
L_002D4470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4478u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D4478u) [[unlikely]] return; }
L_002D4478:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D447C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D4490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D4520; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 261u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4504; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D44FCu) [[unlikely]] return; }
L_002D44FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D4540; } }
L_002D4504:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 25u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4518u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D4518u) [[unlikely]] return; }
L_002D4518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D453C; } }
L_002D4520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4528u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D4528u) [[unlikely]] return; }
L_002D4528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D453C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D453Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D453Cu) [[unlikely]] return; }
L_002D453C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D4540:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D4594; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 771u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4594u) [[unlikely]] return; }
L_002D4594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D459Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002CA2B0u; return; } if (c.pc != 0x002D459Cu) [[unlikely]] return; }
L_002D459C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D45B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D45F4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 771u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D45F4u) [[unlikely]] return; }
L_002D45F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 281u, depth + 1u); else { c.pc = 0x002C7330u; return; } if (c.pc != 0x002D45FCu) [[unlikely]] return; }
L_002D45FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D46CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D466C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4664u); c.r[5].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 127u, depth + 1u); else { c.pc = 0x00139D70u; return; } if (c.pc != 0x002D4664u) [[unlikely]] return; }
L_002D4664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002D476C; } }
L_002D466C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D476C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D476C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46ACu); c.r[5].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 127u, depth + 1u); else { c.pc = 0x00139D70u; return; } if (c.pc != 0x002D46ACu) [[unlikely]] return; }
L_002D46AC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D476C; } }
L_002D46CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4704; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D46FCu); c.r[5].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 127u, depth + 1u); else { c.pc = 0x00139D70u; return; } if (c.pc != 0x002D46FCu) [[unlikely]] return; }
L_002D46FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002D476C; } }
L_002D4704:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D476C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D476C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D476C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4750u); c.r[5].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 127u, depth + 1u); else { c.pc = 0x00139D70u; return; } if (c.pc != 0x002D4750u) [[unlikely]] return; }
L_002D4750:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002D476C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4788; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D4788:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 89u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D47AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D47AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D47ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 279u, depth + 1u); else { c.pc = 0x001A73C0u; return; } if (c.pc != 0x002D47ACu) [[unlikely]] return; }
L_002D47AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 708u));
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 706u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 704u)));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 708u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 704u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 706u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 710u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D47F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 743u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D4858; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 741u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D4830u) [[unlikely]] return; }
L_002D4830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4844; } }
    st8((c.r[16].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D4844:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4858; } }
    st8((c.r[16].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D4858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4870:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8024u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 743u)));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    set32(c.r[16], c.r[19].w[0] + 5088u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[17], c.r[19].w[0] + 5104u);
    set32(c.r[18], c.r[19].w[0] + 4052u);
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_002D49DC; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D49DC; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D49DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D48ECu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D48ECu) [[unlikely]] return; }
L_002D48EC:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4900u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4900u) [[unlikely]] return; }
L_002D4900:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[4]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D4948; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8028u));
    c.f[3] = fp::sub(c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D496C; } }
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D496C; } }
L_002D4948:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8028u));
    c.f[3] = fp::sub(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D496C; } }
    c.f[3] = 0u;
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D496C:
    c.f[1] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[3].w[0];
    c.f[5] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[5], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[5], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5124u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5124u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5140u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5140u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7876u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7876u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7860u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7860u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[4]);  if (t) { goto L_002D4B84; } }
L_002D49DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 64ull;  if (t) { goto L_002D4AB4; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4AB0; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A04u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4A04u) [[unlikely]] return; }
L_002D4A04:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D4A38; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D4A38:
    c.f[1] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5124u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5124u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5140u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5140u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7876u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7876u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7860u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7860u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { goto L_002D4B84; } }
L_002D4AB0:
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 1;
L_002D4AB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4B84; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4B84; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4ADCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4ADCu) [[unlikely]] return; }
L_002D4ADC:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = fp::add(c.f[1], c.f[0]);
    st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D4B10; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D4B10:
    c.f[1] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5124u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5124u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 5140u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 5140u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7876u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7876u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 7860u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 7860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    c.budget -= 29;
L_002D4B84:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D4BB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8024u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 743u)));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    set32(c.r[17], c.r[16].w[0] + 5088u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[18], c.r[16].w[0] + 5104u);
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_002D4C38; } }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C10u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4C10u) [[unlikely]] return; }
L_002D4C10:
    c.f[2] = ld32((c.r[16].w[0] + 8024u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4C38; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    st8((c.r[16].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D4C38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4C90; } }
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4C90; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C68u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4C68u) [[unlikely]] return; }
L_002D4C68:
    c.f[2] = ld32((c.r[16].w[0] + 8024u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4C90; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st8((c.r[16].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D4C90:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 8024u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 743u)));
    c.f[4] = ld32((c.r[4].w[0] + 5092u));
    c.f[1] = ld32((c.r[4].w[0] + 5108u));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[17], c.r[16].w[0] + 5088u);
    set32(c.r[18], c.r[16].w[0] + 5104u);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.f[21] = fp::add(c.f[0], c.f[2]);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::sub(c.f[4], c.f[2]);  if (t) { goto L_002D4D5C; } }
    c.f[0] = fp::add(c.f[21], c.f[22]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D30u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4D30u) [[unlikely]] return; }
L_002D4D30:
    c.f[3] = ld32((c.r[16].w[0] + 8024u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8028u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[22], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4D5C; } }
    st32((c.r[17].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_002D4D5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4DBC; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4DBC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D90u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4D90u) [[unlikely]] return; }
L_002D4D90:
    c.f[3] = ld32((c.r[16].w[0] + 8024u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8028u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4DBC; } }
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_002D4DBC:
    c.f[1] = ld32((c.r[16].w[0] + 5124u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 5140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[17], c.r[16].w[0] + 5120u);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[18], c.r[16].w[0] + 5136u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_002D4E00; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4DF8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4DF8u) [[unlikely]] return; }
L_002D4DF8:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_002D4E00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4E30; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E28u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4E28u) [[unlikely]] return; }
L_002D4E28:
    c.f[0] = fp::add(c.f[21], c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_002D4E30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4E60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 8024u));
    c.f[4] = ld32((c.r[4].w[0] + 5092u));
    c.f[1] = ld32((c.r[4].w[0] + 5108u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 743u)));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[16], c.r[18].w[0] + 5088u);
    set32(c.r[17], c.r[18].w[0] + 5104u);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.f[21] = fp::add(c.f[0], c.f[2]);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::sub(c.f[4], c.f[2]);  if (t) { goto L_002D4F08; } }
    c.f[0] = fp::add(c.f[21], c.f[22]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4EE4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4EE4u) [[unlikely]] return; }
L_002D4EE4:
    c.f[2] = ld32((c.r[18].w[0] + 8024u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4F08; } }
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_002D4F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4F60; } }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4F60; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4F3Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D4F3Cu) [[unlikely]] return; }
L_002D4F3C:
    c.f[2] = ld32((c.r[18].w[0] + 8024u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D4F60; } }
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_002D4F60:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4F90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D50A8; } }
    st8((c.r[16].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 8024u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.f[4] = ld32((c.r[16].w[0] + 5092u));
    c.f[1] = ld32((c.r[16].w[0] + 5108u));
    c.f[0] = ld32((c.r[16].w[0] + 8020u));
    set32(c.r[17], c.r[16].w[0] + 5088u);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[18], c.r[16].w[0] + 5104u);
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.f[21] = fp::add(c.f[0], c.f[2]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = fp::sub(c.f[4], c.f[2]);  if (t) { goto L_002D5048; } }
    c.f[0] = fp::add(c.f[21], c.f[22]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D501Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D501Cu) [[unlikely]] return; }
L_002D501C:
    c.f[3] = ld32((c.r[16].w[0] + 8024u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8028u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[22], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5048; } }
    st32((c.r[17].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_002D5048:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 743u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D50A8; } }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D50A8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D507Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002D507Cu) [[unlikely]] return; }
L_002D507C:
    c.f[3] = ld32((c.r[16].w[0] + 8024u));
    c.f[1] = ld32((c.r[16].w[0] + 8028u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[3] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D50A8; } }
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_002D50A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D50D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], 0u + 26064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5100u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 85u, depth + 1u); else { c.pc = 0x0019EA80u; return; } if (c.pc != 0x002D5100u) [[unlikely]] return; }
L_002D5100:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D510Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 90u, depth + 1u); else { c.pc = 0x0019EB50u; return; } if (c.pc != 0x002D510Cu) [[unlikely]] return; }
L_002D510C:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 26032u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D514C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5120u); set32(c.r[4], c.r[17].w[0] + 544u);  if (depth < kMaxDepth) unit_001C(c, 204u, depth + 1u); else { c.pc = 0x00173320u; return; } if (c.pc != 0x002D5120u) [[unlikely]] return; }
L_002D5120:
    st16((c.r[17].w[0] + 26054u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5134u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019E7A0u; return; } if (c.pc != 0x002D5134u) [[unlikely]] return; }
L_002D5134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D513Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 149u, depth + 1u); else { c.pc = 0x0019F980u; return; } if (c.pc != 0x002D513Cu) [[unlikely]] return; }
L_002D513C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5144u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 272u, depth + 1u); else { c.pc = 0x0013B1A0u; return; } if (c.pc != 0x002D5144u) [[unlikely]] return; }
L_002D5144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D514Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A19B0u; return; } if (c.pc != 0x002D514Cu) [[unlikely]] return; }
L_002D514C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], 0u + 26064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5190u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 85u, depth + 1u); else { c.pc = 0x0019EA80u; return; } if (c.pc != 0x002D5190u) [[unlikely]] return; }
L_002D5190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5198u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_001C(c, 204u, depth + 1u); else { c.pc = 0x00173320u; return; } if (c.pc != 0x002D5198u) [[unlikely]] return; }
L_002D5198:
    st16((c.r[16].w[0] + 26054u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51ACu); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019E7A0u; return; } if (c.pc != 0x002D51ACu) [[unlikely]] return; }
L_002D51AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 149u, depth + 1u); else { c.pc = 0x0019F980u; return; } if (c.pc != 0x002D51B4u) [[unlikely]] return; }
L_002D51B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A19B0u; return; } if (c.pc != 0x002D51BCu) [[unlikely]] return; }
L_002D51BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D51D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[5], 0u + 26064u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27600u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[2].w[0] - 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D520Cu); set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0027(c, 85u, depth + 1u); else { c.pc = 0x0019EA80u; return; } if (c.pc != 0x002D520Cu) [[unlikely]] return; }
L_002D520C:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 26054u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5224u); c.r[5].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0027(c, 67u, depth + 1u); else { c.pc = 0x0019E7A0u; return; } if (c.pc != 0x002D5224u) [[unlikely]] return; }
L_002D5224:
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 16383ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D5280; } }
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5244u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001B4D00u; return; } if (c.pc != 0x002D5244u) [[unlikely]] return; }
L_002D5244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D526C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5260u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 152u, depth + 1u); else { c.pc = 0x0019FA50u; return; } if (c.pc != 0x002D5260u) [[unlikely]] return; }
L_002D5260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002D528C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002D526C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5274u);  if (depth < kMaxDepth) unit_0027(c, 149u, depth + 1u); else { c.pc = 0x0019F980u; return; } if (c.pc != 0x002D5274u) [[unlikely]] return; }
L_002D5274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5288; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002D5280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5288u);  if (depth < kMaxDepth) unit_0027(c, 149u, depth + 1u); else { c.pc = 0x0019F980u; return; } if (c.pc != 0x002D5288u) [[unlikely]] return; }
L_002D5288:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D528C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D52A0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_002D52C0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D52E4; } }
    c.f[0] = ld32((c.r[4].w[0] + 1144u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { goto L_002D52E4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D52E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D52F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5310u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002D5310u) [[unlikely]] return; }
L_002D5310:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D5424; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 13);
    st32((c.r[16].w[0] + 1300u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D53CC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 27216u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5368u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002D5368u) [[unlikely]] return; }
L_002D5368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5370u); set32(c.r[4], ld32((c.r[16].w[0] + 1300u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D5370u) [[unlikely]] return; }
L_002D5370:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D537Cu); set32(c.r[5], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002D537Cu) [[unlikely]] return; }
L_002D537C:
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[5], c.r[16].w[0] + 1408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D538Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002D538Cu) [[unlikely]] return; }
L_002D538C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5394u); c.f[12] = ld32((c.r[29].w[0] + 40u));  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002D5394u) [[unlikely]] return; }
L_002D5394:
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002D541C; }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);  if (t) { goto L_002D5418; } }
L_002D53CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1300u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 57344ull;
    st32((c.r[16].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D5418; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 3;
L_002D5418:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D5438; } }
L_002D5424:
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st32((c.r[16].w[0] + 1300u), 0u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 5;
L_002D5438:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5478u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002D5478u) [[unlikely]] return; }
L_002D5478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D54B4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002D54B4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], c.r[2].w[0] << 13);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002D54BC; } }
L_002D54B4:
    st32((c.r[16].w[0]), 0u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_002D54BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D54D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] & 2048ull;
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002D5530; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D551C; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 2;
L_002D551C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[16], 0u + 1u);
    st32((c.r[18].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1300u), c.r[2].w[0]);  if (t) { goto L_002D55C8; } }
L_002D5530:
    c.r[2].d[0] = c.r[17].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5578; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D5560; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 2;
L_002D5560:
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1300u), c.r[2].w[0]);  if (t) { goto L_002D55C8; } }
L_002D5578:
    c.f[1] = ld32((c.r[18].w[0] + 1308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5598u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D5598u) [[unlikely]] return; }
L_002D5598:
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1300u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002D55BC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1300u), c.r[2].w[0]);  if (t) { goto L_002D55C8; } }
L_002D55BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    st32((c.r[18].w[0] + 1304u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 1300u), c.r[2].w[0]);
    c.budget -= 3;
L_002D55C8:
    c.r[2].d[0] = c.r[17].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 4096ull;  if (t) { goto L_002D5624; } }
    c.f[2] = ld32((c.r[18].w[0] + 7816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5614u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D5614u) [[unlikely]] return; }
L_002D5614:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 7816u), c.r[2].w[0]);  if (t) { goto L_002D569C; } }
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 1;
L_002D5624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5678; } }
    c.f[2] = ld32((c.r[18].w[0] + 7816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC5800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D566Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D566Cu) [[unlikely]] return; }
L_002D566C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 7816u), c.r[2].w[0]);  if (t) { goto L_002D569C; } }
L_002D5678:
    c.f[1] = ld32((c.r[18].w[0] + 7816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5698u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D5698u) [[unlikely]] return; }
L_002D5698:
    st32((c.r[18].w[0] + 7816u), c.r[2].w[0]);
    c.budget -= 1;
L_002D569C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D56C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56F0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002D56F0u) [[unlikely]] return; }
L_002D56F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56F8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D56F8u) [[unlikely]] return; }
L_002D56F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5708u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D5708u) [[unlikely]] return; }
L_002D5708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5710u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D5710u) [[unlikely]] return; }
L_002D5710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5718u); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D5718u) [[unlikely]] return; }
L_002D5718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5728u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002D5728u) [[unlikely]] return; }
L_002D5728:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5734u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002D5734u) [[unlikely]] return; }
L_002D5734:
    set32(c.r[3], c.r[29].w[0] + 88u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002D5764; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[29].w[0] + 84u);  if (t) { goto L_002D5770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002D5764:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 84u);
    c.budget -= 3;
L_002D5770:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5784u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D5784u) [[unlikely]] return; }
L_002D5784:
    c.f[1] = ld32((c.r[18].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57A0u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D57A0u) [[unlikely]] return; }
L_002D57A0:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57BCu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D57BCu) [[unlikely]] return; }
L_002D57BC:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[4] = ld32((c.r[17].w[0] + 7780u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[2] = fp::mul(c.f[3], c.f[21]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.f[5] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5824u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002D5824u) [[unlikely]] return; }
L_002D5824:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[3] = ld32((c.r[17].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[2]);  if (t) { goto L_002D5884; } }
L_002D5850:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5884; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_002D5884:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D58B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D58D0u) [[unlikely]] return; }
L_002D58D0:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D590Cu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D590Cu) [[unlikely]] return; }
L_002D590C:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5930u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002D5930u) [[unlikely]] return; }
L_002D5930:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D59A8u) [[unlikely]] return; }
L_002D59A8:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D59E4u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D59E4u) [[unlikely]] return; }
L_002D59E4:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A08u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002D5A08u) [[unlikely]] return; }
L_002D5A08:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D5A80u) [[unlikely]] return; }
L_002D5A80:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5ABCu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D5ABCu) [[unlikely]] return; }
L_002D5ABC:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5AE0u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002D5AE0u) [[unlikely]] return; }
L_002D5AE0:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B5Cu); set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D5B5Cu) [[unlikely]] return; }
L_002D5B5C:
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5B80u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D5B80u) [[unlikely]] return; }
L_002D5B80:
    c.f[2] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5BB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BE0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002D5BE0u) [[unlikely]] return; }
L_002D5BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BE8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D5BE8u) [[unlikely]] return; }
L_002D5BE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5BF8u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D5BF8u) [[unlikely]] return; }
L_002D5BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C00u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D5C00u) [[unlikely]] return; }
L_002D5C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C08u); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D5C08u) [[unlikely]] return; }
L_002D5C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C18u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002D5C18u) [[unlikely]] return; }
L_002D5C18:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C24u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002D5C24u) [[unlikely]] return; }
L_002D5C24:
    set32(c.r[3], c.r[29].w[0] + 88u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002D5C54; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[29].w[0] + 84u);  if (t) { goto L_002D5C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002D5C54:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 84u);
    c.budget -= 3;
L_002D5C60:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C74u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D5C74u) [[unlikely]] return; }
L_002D5C74:
    c.f[1] = ld32((c.r[18].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5C90u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D5C90u) [[unlikely]] return; }
L_002D5C90:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5CACu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D5CACu) [[unlikely]] return; }
L_002D5CAC:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[4] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[2] = fp::mul(c.f[3], c.f[21]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.f[5] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5D14u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002D5D14u) [[unlikely]] return; }
L_002D5D14:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[3] = ld32((c.r[17].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D5D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[2]);  if (t) { goto L_002D5D74; } }
L_002D5D40:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5D74; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_002D5D74:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D5DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D5DC0u) [[unlikely]] return; }
L_002D5DC0:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5DFCu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D5DFCu) [[unlikely]] return; }
L_002D5DFC:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E20u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002D5E20u) [[unlikely]] return; }
L_002D5E20:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5E98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D5E98u) [[unlikely]] return; }
L_002D5E98:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5ED4u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D5ED4u) [[unlikely]] return; }
L_002D5ED4:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5EF8u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002D5EF8u) [[unlikely]] return; }
L_002D5EF8:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1000u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5F50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[21] = c.f[12];
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F84u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x002D5F84u) [[unlikely]] return; }
L_002D5F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F8Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D5F8Cu) [[unlikely]] return; }
L_002D5F8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5F9Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D5F9Cu) [[unlikely]] return; }
L_002D5F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FA4u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D5FA4u) [[unlikely]] return; }
L_002D5FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FACu); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D5FACu) [[unlikely]] return; }
L_002D5FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FBCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002D5FBCu) [[unlikely]] return; }
L_002D5FBC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5FC8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002D5FC8u) [[unlikely]] return; }
L_002D5FC8:
    set32(c.r[3], c.r[29].w[0] + 88u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002D5FF8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[29].w[0] + 84u);  if (t) { goto L_002D6004; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002D5FF8:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 84u);
    c.budget -= 3;
L_002D6004:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6018u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D6018u) [[unlikely]] return; }
L_002D6018:
    c.f[1] = ld32((c.r[18].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6034u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D6034u) [[unlikely]] return; }
L_002D6034:
    c.f[21] = fp::mul(c.f[21], c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D604Cu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D604Cu) [[unlikely]] return; }
L_002D604C:
    c.f[5] = fp::mul(c.f[21], c.f[0]);
    c.f[4] = ld32((c.r[17].w[0] + 7780u));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D60A0u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002D60A0u) [[unlikely]] return; }
L_002D60A0:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[3] = ld32((c.r[17].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D60CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[2]);  if (t) { goto L_002D6100; } }
L_002D60CC:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6100; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_002D6100:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D6120:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D6140; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25612u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D61B8; } }
L_002D6140:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8432u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D6188; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6188; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D6188; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D6188; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D61B8; } }
L_002D6188:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002D61B8; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 820u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D61B8; } }
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002D61B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D61C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 1304u));
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1004u));
    c.f[1] = ld32((c.r[2].w[0] + 1024u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61FCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D61FCu) [[unlikely]] return; }
L_002D61FC:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6234; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6230u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6230u) [[unlikely]] return; }
L_002D6230:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_002D6234:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 1304u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6270:
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B500u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 293u, depth); }
L_002D62A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 17u);
    c.r[4].d[0] = c.r[5].d[0] & 512ull;
    c.r[17].d[0] = c.r[4].d[0] << 48;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002D6394; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6394; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6394; } }
    c.f[0] = ld32((c.r[16].w[0] + 3184u));
    set32(c.r[18], c.r[29].w[0] + 84u);
    set32(c.r[19], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3188u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3192u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_002D6338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6330u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D6330u) [[unlikely]] return; }
L_002D6330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6344; } }
L_002D6338:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6344u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 120u, depth + 1u); else { c.pc = 0x0022A230u; return; } if (c.pc != 0x002D6344u) [[unlikely]] return; }
L_002D6344:
    c.f[0] = ld32((c.r[16].w[0] + 2992u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2996u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3000u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_002D6380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6378u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D6378u) [[unlikely]] return; }
L_002D6378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6424; } }
L_002D6380:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D638Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 120u, depth + 1u); else { c.pc = 0x0022A230u; return; } if (c.pc != 0x002D638Cu) [[unlikely]] return; }
L_002D638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002D6428; } }
L_002D6394:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D63AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D63A4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D63A4u) [[unlikely]] return; }
L_002D63A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6424; } }
L_002D63AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002D641C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D63C4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D63C4u) [[unlikely]] return; }
L_002D63C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D63ECu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D63ECu) [[unlikely]] return; }
L_002D63EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6410u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004A(c, 120u, depth + 1u); else { c.pc = 0x0022A230u; return; } if (c.pc != 0x002D6410u) [[unlikely]] return; }
L_002D6410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6424; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D641C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6424u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 120u, depth + 1u); else { c.pc = 0x0022A230u; return; } if (c.pc != 0x002D6424u) [[unlikely]] return; }
L_002D6424:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D6428:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D6440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 17u);
    c.r[4].d[0] = c.r[5].d[0] & 512ull;
    c.r[17].d[0] = c.r[4].d[0] << 48;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002D6534; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6534; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6534; } }
    c.f[0] = ld32((c.r[16].w[0] + 3184u));
    set32(c.r[18], c.r[29].w[0] + 84u);
    set32(c.r[19], c.r[29].w[0] + 88u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3188u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3192u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_002D64D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64D0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D64D0u) [[unlikely]] return; }
L_002D64D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D64E4; } }
L_002D64D8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D64E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002D64E4u) [[unlikely]] return; }
L_002D64E4:
    c.f[0] = ld32((c.r[16].w[0] + 2992u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2996u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3000u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_002D6520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6518u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D6518u) [[unlikely]] return; }
L_002D6518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D65C4; } }
L_002D6520:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D652Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002D652Cu) [[unlikely]] return; }
L_002D652C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002D65C8; } }
L_002D6534:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002D654C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6544u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D6544u) [[unlikely]] return; }
L_002D6544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D65C4; } }
L_002D654C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002D65BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6564u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D6564u) [[unlikely]] return; }
L_002D6564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D658Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D658Cu) [[unlikely]] return; }
L_002D658C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65B0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002D65B0u) [[unlikely]] return; }
L_002D65B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D65C4; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D65BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D65C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 122u, depth + 1u); else { c.pc = 0x0022A2F0u; return; } if (c.pc != 0x002D65C4u) [[unlikely]] return; }
L_002D65C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D65C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002D65E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D660C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6604u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D6604u) [[unlikely]] return; }
L_002D6604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6618; } }
L_002D660C:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6618u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 120u, depth + 1u); else { c.pc = 0x0022A230u; return; } if (c.pc != 0x002D6618u) [[unlikely]] return; }
L_002D6618:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D6630:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 708u));
    set32(c.r[8], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[9].d[0] = ld16((c.r[4].w[0] + 962u));
    set32(c.r[7], 0u - 64u);
    c.r[6].d[0] = c.r[5].d[0] & 32ull;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 724u), c.r[7].w[0]);  if (t) { goto L_002D665C; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 777u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_002D665C:
    c.r[6].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D6680; } }
    set32(c.r[6], 0u + 20u);
    st8((c.r[4].w[0] + 794u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 32ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D6694; } }
L_002D6680:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[9].d[0] = c.r[9].d[0] & 65535ull;  goto L_002D6698; }
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[4].w[0] + 794u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_002D6694:
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 1;
L_002D6698:
    c.r[8].d[0] = c.r[5].d[0] | c.r[9].d[0];
    set32(c.r[6], 0u + 768u);
    c.r[7].d[0] = c.r[8].d[0] & 768ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 384u);  if (t) { goto L_002D66BC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 4ull;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    set32(c.r[6], 0u + 384u);
    c.budget -= 4;
L_002D66BC:
    c.r[7].d[0] = c.r[8].d[0] & 384ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 640u);  if (t) { goto L_002D66D8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 9ull;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    set32(c.r[6], 0u + 640u);
    c.budget -= 4;
L_002D66D8:
    c.r[7].d[0] = c.r[8].d[0] & 640ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[6].d[0] = c.r[9].d[0] & 256ull;  if (t) { goto L_002D66F4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 18ull;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[9].d[0] & 256ull;
    c.budget -= 4;
L_002D66F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[6].d[0] = c.r[9].d[0] & 512ull;  if (t) { goto L_002D670C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[9].d[0] & 512ull;
    c.budget -= 4;
L_002D670C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 65535ull;  goto L_002D6724; }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_002D6724:
    set32(c.r[6], 0u + 768u);
    c.r[7].d[0] = c.r[3].d[0] & 768ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002D6744; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D6754; } }
L_002D6744:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 1025u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D6754:
    set32(c.r[6], 0u + 384u);
    c.r[7].d[0] = c.r[3].d[0] & 384ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002D6774; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D6784; } }
L_002D6774:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 2049u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D6784:
    set32(c.r[6], 0u + 640u);
    c.r[7].d[0] = c.r[3].d[0] & 640ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002D67A4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D67B4; } }
L_002D67A4:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 4097u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D67B4:
    c.r[6].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D67D0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D67E0; } }
L_002D67D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 257u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D67E0:
    c.r[6].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D67FC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D680C; } }
L_002D67FC:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 513u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D680C:
    c.r[6].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D6828; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 724u)));
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[6].w[0]);  if (t) { goto L_002D6838; } }
L_002D6828:
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u - 8193u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 4;
L_002D6838:
    set32(c.r[8], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[7], c.r[5].w[0] << 6);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D6884; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    set32(c.r[7], c.r[5].w[0] << 10);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[8].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[6], 0u + 20u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 724u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 799u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
L_002D6884:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 799u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D68BC; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[4].w[0] + 799u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D68BC; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    c.budget -= 5;
L_002D68BC:
    set32(c.r[8], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[7], c.r[5].w[0] << 14);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.budget -= 7;
    if (c.r[6].d[0] == 0ull) { c.r[5].d[0] = c.r[8].d[0] << 36;  goto L_002D6904; }
    c.r[6].d[0] = c.r[8].d[0] << 36;
    c.r[6].d[0] = c.r[6].d[0] >> 36;
    st32((c.r[4].w[0] + 724u), c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] << 18);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[5].w[0]);  if (t) { goto L_002D690C; } }
    c.r[5].d[0] = c.r[8].d[0] << 36;
    c.budget -= 1;
L_002D6904:
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    st32((c.r[4].w[0] + 724u), c.r[5].w[0]);
    c.budget -= 2;
L_002D690C:
    c.r[5].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D69D8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 796u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_002D6964; } }
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[5], c.r[3].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[6].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[8].d[0] & c.r[7].d[0];
    st32((c.r[4].w[0] + 724u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u + 14u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 797u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D699C; } }
L_002D6964:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D699C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 797u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D699C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 5;
L_002D699C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 798u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6AA0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6AA0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002D6AA0; } }
L_002D69D8:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 796u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D6A28; } }
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0F000000u);
    set32(c.r[3], 0u + 10u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 724u), c.r[5].w[0]);
    c.r[7].d[0] = ld16((c.r[4].w[0] + 710u));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[7], c.r[7].w[0] << 14);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 724u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D6A64; } }
L_002D6A28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 798u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6A64; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6A64; } }
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 6;
L_002D6A64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6AA0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 797u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6AA0; } }
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 6;
L_002D6AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6AB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 1520u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D7088; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 737u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002D6AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002D708C; } }
L_002D6AF0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6B10; } }
    st32((c.r[17].w[0] + 7908u), 0u);
    st32((c.r[17].w[0] + 7904u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7088; } }
L_002D6B10:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 32ull;  if (t) { goto L_002D6B30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[7].w[0] + 32u);  goto L_002D6BB0; }
    c.r[2].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 1;
L_002D6B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6B60; } }
    c.f[3] = ld32((c.r[17].w[0] + 1328u));
    c.f[2] = ld32((c.r[17].w[0] + 1332u));
    c.f[1] = ld32((c.r[17].w[0] + 1336u));
    c.f[0] = ld32((c.r[17].w[0] + 1340u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_002D6D10; } }
L_002D6B60:
    c.f[0] = ld32((c.r[17].w[0] + 7904u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6B80u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6B80u) [[unlikely]] return; }
L_002D6B80:
    st32((c.r[17].w[0] + 7904u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7908u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6BA4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6BA4u) [[unlikely]] return; }
L_002D6BA4:
    st32((c.r[17].w[0] + 7908u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7088; } }
L_002D6BB0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6BC0u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002D6BC0u) [[unlikely]] return; }
L_002D6BC0:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[18], c.r[29].w[0] + 168u);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6C74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 160u);  if (t) { goto L_002D6C18; } }
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C10u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002D6C10u) [[unlikely]] return; }
L_002D6C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[18].w[0]));  if (t) { goto L_002D6C28; } }
L_002D6C18:
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C24u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002D6C24u) [[unlikely]] return; }
L_002D6C24:
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_002D6C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6C30u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002D6C30u) [[unlikely]] return; }
L_002D6C30:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 793u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002D6C5C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 21505ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < -21504ll ? 1ull : 0ull;  if (t) { goto L_002D6C74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002D6C74; } }
L_002D6C5C:
    c.r[1].d[0] = c.r[3].sd[0] < 18433ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < -18432ll ? 1ull : 0ull;  if (t) { goto L_002D6C74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D6C74; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002D6C74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D6C9C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7744u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D6C9C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 741u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6CEC; } }
L_002D6C9C:
    c.f[0] = ld32((c.r[17].w[0] + 7904u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CBCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6CBCu) [[unlikely]] return; }
L_002D6CBC:
    st32((c.r[17].w[0] + 7904u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7908u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6CE0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6CE0u) [[unlikely]] return; }
L_002D6CE0:
    st32((c.r[17].w[0] + 7908u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7088; } }
L_002D6CEC:
    c.f[3] = ld32((c.r[17].w[0] + 1328u));
    c.f[2] = ld32((c.r[17].w[0] + 1332u));
    c.f[1] = ld32((c.r[17].w[0] + 1336u));
    c.f[0] = ld32((c.r[17].w[0] + 1340u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_002D6D10:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D20u); st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002D6D20u) [[unlikely]] return; }
L_002D6D20:
    set32(c.r[2], ld32((c.r[17].w[0] + 7904u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D2Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D6D2Cu) [[unlikely]] return; }
L_002D6D2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 7908u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D38u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D6D38u) [[unlikely]] return; }
L_002D6D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D40u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002D6D40u) [[unlikely]] return; }
L_002D6D40:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D50u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002D6D50u) [[unlikely]] return; }
L_002D6D50:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D60u); set32(c.r[6], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026E5D0u; return; } if (c.pc != 0x002D6D60u) [[unlikely]] return; }
L_002D6D60:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 737u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D6D9C; } }
    st32((c.r[29].w[0] + 180u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 7908u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6D98u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6D98u) [[unlikely]] return; }
L_002D6D98:
    st32((c.r[17].w[0] + 7908u), c.r[2].w[0]);
    c.budget -= 1;
L_002D6D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DA4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D6DA4u) [[unlikely]] return; }
L_002D6DA4:
    set32(c.r[16], c.r[17].w[0] + 4676u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D6DB4u) [[unlikely]] return; }
L_002D6DB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D6DC0u) [[unlikely]] return; }
L_002D6DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DC8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D6DC8u) [[unlikely]] return; }
L_002D6DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DD0u); set32(c.r[4], ld32((c.r[29].w[0] + 180u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D6DD0u) [[unlikely]] return; }
L_002D6DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DD8u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D6DD8u) [[unlikely]] return; }
L_002D6DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6DE0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002D6DE0u) [[unlikely]] return; }
L_002D6DE0:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 188u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6E08u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026E5D0u; return; } if (c.pc != 0x002D6E08u) [[unlikely]] return; }
L_002D6E08:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6E9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D6E64; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < -16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002D6E48; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_002D6E48:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[1].d[0] = c.r[3].sd[0] < -16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002D6E9C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_002D6E9C; } }
L_002D6E64:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D6E80; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_002D6E80:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D6E9C; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 3;
L_002D6E9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 4208u);
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D6EE0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_002D6F08; } }
L_002D6EE0:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D6F08; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 6;
L_002D6F08:
    set32(c.r[16], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D6F38; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_002D7000; } }
L_002D6F38:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].d[0] = c.r[2].sd[0] < 15361ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_002D6F58; }
    c.r[1].d[0] = c.r[2].sd[0] < -15360ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D6F60; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D6F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_002D6FE8; } }
L_002D6F60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D6FA8; } }
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x46700000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FA0u); c.f[12] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6FA0u) [[unlikely]] return; }
L_002D6FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6FE4; } }
L_002D6FA8:
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x46700000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6FE4u); c.f[12] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D6FE4u) [[unlikely]] return; }
L_002D6FE4:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002D6FE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);  if (t) { goto L_002D7000; } }
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
L_002D7000:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7904u)));
    c.f[0] = ld32((c.r[17].w[0] + 7740u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D703Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D703Cu) [[unlikely]] return; }
L_002D703C:
    set32(c.r[6], ld32((c.r[17].w[0] + 7904u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 7904u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 7908u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.f[0] = ld32((c.r[17].w[0] + 7740u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D707Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D707Cu) [[unlikely]] return; }
L_002D707C:
    set32(c.r[3], ld32((c.r[17].w[0] + 7908u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 7908u), c.r[3].w[0]);
    c.budget -= 3;
L_002D7088:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D708C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002D70A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 952u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D711C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D711C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D710C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D70FC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D70EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D7128; } }
L_002D70EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D70F4u);  if (depth < kMaxDepth) unit_0075(c, 226u, depth + 1u); else { c.pc = 0x002D7130u; return; } if (c.pc != 0x002D70F4u) [[unlikely]] return; }
L_002D70F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7124; } }
L_002D70FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7104u);  if (depth < kMaxDepth) unit_0075(c, 227u, depth + 1u); else { c.pc = 0x002D71F0u; return; } if (c.pc != 0x002D7104u) [[unlikely]] return; }
L_002D7104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7124; } }
L_002D710C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7114u);  if (depth < kMaxDepth) unit_0075(c, 229u, depth + 1u); else { c.pc = 0x002D72C0u; return; } if (c.pc != 0x002D7114u) [[unlikely]] return; }
L_002D7114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7124; } }
L_002D711C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7124u);  if (depth < kMaxDepth) unit_0075(c, 236u, depth + 1u); else { c.pc = 0x002D7540u; return; } if (c.pc != 0x002D7124u) [[unlikely]] return; }
L_002D7124:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D7128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D7130:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 27488u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D71E4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[5], 0u + 900u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 912u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[4].w[0] + 896u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0] + 908u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[4].w[0] + 900u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 944u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 950u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 948u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 958u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 959u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 896u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 904u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 912u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 928u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 932u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 936u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 908u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 916u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 920u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 924u), c.r[3].w[0]);
    c.budget -= 36;
L_002D71E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D71F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 956u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D72A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 948u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002D723C; }
    set32(c.r[3], 0u + 900u);
    st16((c.r[16].w[0] + 948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7240; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002D723C:
    st16((c.r[16].w[0] + 948u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D7240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002D72A8; } }
L_002D7258:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 950u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 950u)));
    c.r[3].d[0] = c.r[3].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D72A8; } }
    st16((c.r[16].w[0] + 950u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7294u); set32(c.r[17], ld32((c.r[16].w[0] + 896u)));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002D7294u) [[unlikely]] return; }
L_002D7294:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[16].w[0] + 904u), c.r[3].w[0]);
    c.budget -= 5;
L_002D72A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D72C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 953u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D74E8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D73A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D73A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D7308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002D7524; } }
L_002D7308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7310u);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x002D7310u) [[unlikely]] return; }
L_002D7310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D7398; } }
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7334u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002D7334u) [[unlikely]] return; }
L_002D7334:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 7908u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 900u)));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & 61440ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[16].w[0] + 961u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7370; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7520; } }
L_002D7370:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 896u)));  if (t) { goto L_002D7388; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_002D7388:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 904u), c.r[3].w[0]);  if (t) { goto L_002D7520; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002D7398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7520; } }
L_002D73A0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 944u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002D74D4; }
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 953u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D73E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 904u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 959u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7408; } }
L_002D73E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 904u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 959u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002D7408:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 961u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 958u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D7448; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 953u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D743C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 954u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7520; } }
L_002D743C:
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7520; } }
L_002D7448:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 959u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7490u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D7490u) [[unlikely]] return; }
L_002D7490:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D749Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D749Cu) [[unlikely]] return; }
L_002D749C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 960u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74B4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D74B4u) [[unlikely]] return; }
L_002D74B4:
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D7520; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D7520; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D74D4:
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 243u, depth + 1u); else { c.pc = 0x002D7720u; return; } if (c.pc != 0x002D74E0u) [[unlikely]] return; }
L_002D74E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7520; } }
L_002D74E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 954u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002D751C; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 904u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 961u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002D7520; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002D751C:
    st8((c.r[16].w[0] + 954u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D7520:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D7524:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 952u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D7574; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 959u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D766C; } }
L_002D7574:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 944u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002D7660; }
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 904u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0] + 958u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 904u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 959u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 959u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D75D4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 952u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D766C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D766C; } }
L_002D75D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 958u)));
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D761Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D761Cu) [[unlikely]] return; }
L_002D761C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7628u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D7628u) [[unlikely]] return; }
L_002D7628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 960u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7640u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D7640u) [[unlikely]] return; }
L_002D7640:
    st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 946u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002D766C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 946u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D766C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D7660:
    st16((c.r[16].w[0] + 944u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D766Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 243u, depth + 1u); else { c.pc = 0x002D7720u; return; } if (c.pc != 0x002D766Cu) [[unlikely]] return; }
L_002D766C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7680:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 952u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D76BC; } }
    st16((c.r[4].w[0] + 950u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4u);
    st16((c.r[4].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 953u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[4].w[0] + 904u), c.r[3].w[0]);
    c.budget -= 11;
L_002D76BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D76D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 959u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D770C; } }
    st16((c.r[4].w[0] + 950u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 944u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] + 946u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 952u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    st8((c.r[4].w[0] + 953u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 960u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[4].w[0] + 904u), c.r[3].w[0]);
    c.budget -= 11;
L_002D770C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7720:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 958u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 912u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 946u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 959u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 944u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 908u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[10].w[0];
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[3].w[0] + 4u));
    c.f[6] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    fpu_div(c, 3u, c.f[3], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[12], c.r[3].w[0] - c.r[6].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    c.r[3].d[0] = c.r[12].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.f[7] = fp::sub(c.f[0], c.f[6]);
    c.f[8] = fp::sub(c.f[1], c.f[5]);
    c.f[0] = c.r[11].w[0];
    fpu_div(c, 8u, c.f[8], c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[1]);
    fpu_div(c, 7u, c.f[7], c.f[2]);
    c.f[5] = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[7], c.f[1]);
    c.budget -= 50;
    { const bool t = c.r[3].d[0] != 0ull; c.f[6] = fp::add(c.f[6], c.f[0]);  if (t) { goto L_002D77F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[12].w[0]);
    set32(c.r[12], 0u - c.r[3].w[0]);
    c.budget -= 3;
L_002D77F4:
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    mmi::div(c, 0, c.r[12].w[0], c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[12].w[0], c.r[11].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[3].w[0] - c.r[7].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_002D7840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[12].w[0]);
    set32(c.r[12], 0u - c.r[3].w[0]);
    c.budget -= 3;
L_002D7840:
    mmi::div(c, 0, c.r[12].w[0], c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[9].w[0] + 8u));
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[9], c.r[3].w[0] - c.r[8].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[12].w[0], c.r[11].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_002D787C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    set32(c.r[9], 0u - c.r[3].w[0]);
    c.budget -= 3;
L_002D787C:
    mmi::div(c, 0, c.r[9].w[0], c.r[10].w[0]);
    st32((c.r[4].w[0] + 928u), c.f[4]);
    st32((c.r[4].w[0] + 932u), c.f[5]);
    st32((c.r[4].w[0] + 936u), c.f[6]);
    st32((c.r[4].w[0] + 916u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 920u), c.r[7].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 924u), c.r[8].w[0]);  c.pc = t; return; }
L_002D78B0:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_002D7904; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 368u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002D78F8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 369u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
L_002D78F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7904; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_002D7904:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D7980; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 6ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002D7948; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44820000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[3], c.r[7], c.r[0]);  if (t) { goto L_002D7948; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D7948:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7974; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44570000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7974; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D7974:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D7980; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002D7980:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D7A00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 7ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002D79C4; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[3], c.r[6], c.r[0]);  if (t) { goto L_002D79C4; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D79C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D79F4; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x448B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D79F4; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D79F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D7A00; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002D7A00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D7A50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7A44; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002D7A44; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D7A44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7A50; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D7A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7A60:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D7D00; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 616u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D7D00; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = c.r[6].d[0] & 240ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7D00; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002D7B78; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D7ACC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_002D7B78; } }
L_002D7ACC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[18], c.r[16].w[0] + 4032u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7AE8u); st8((c.r[16].w[0] + 1603u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D7AE8u) [[unlikely]] return; }
L_002D7AE8:
    c.f[5] = ld32((c.r[16].w[0] + 128u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B10u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7B10u) [[unlikely]] return; }
L_002D7B10:
    set32(c.r[2], ld32((c.r[16].w[0] + 1320u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B20u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D7B20u) [[unlikely]] return; }
L_002D7B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B28u); c.r[4].d[0] = ld16((c.r[16].w[0] + 1324u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D7B28u) [[unlikely]] return; }
L_002D7B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B30u); c.r[4].d[0] = ld16((c.r[16].w[0] + 1316u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D7B30u) [[unlikely]] return; }
L_002D7B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B38u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002D7B38u) [[unlikely]] return; }
L_002D7B38:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B48u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002D7B48u) [[unlikely]] return; }
L_002D7B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B50u); set32(c.r[4], c.r[16].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002D7B50u) [[unlikely]] return; }
L_002D7B50:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7B5Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D7B5Cu) [[unlikely]] return; }
L_002D7B5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1320u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002D7D00; } }
L_002D7B78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7D00; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002D7D00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002D7D00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[18], c.r[16].w[0] + 4032u);
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BB8u); st8((c.r[16].w[0] + 1603u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002D7BB8u) [[unlikely]] return; }
L_002D7BB8:
    c.f[5] = ld32((c.r[16].w[0] + 128u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 132u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BE0u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7BE0u) [[unlikely]] return; }
L_002D7BE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1324u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BF0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D7BF0u) [[unlikely]] return; }
L_002D7BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7BF8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 1320u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D7BF8u) [[unlikely]] return; }
L_002D7BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C00u); c.r[4].d[0] = ld16((c.r[16].w[0] + 1316u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D7C00u) [[unlikely]] return; }
L_002D7C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C08u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8064u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D7C08u) [[unlikely]] return; }
L_002D7C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C10u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8060u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D7C10u) [[unlikely]] return; }
L_002D7C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_002D7C40; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C34u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7C34u) [[unlikely]] return; }
L_002D7C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_002D7C60; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 1;
L_002D7C40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7C5C; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C5Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7C5Cu) [[unlikely]] return; }
L_002D7C5C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_002D7C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C68u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002D7C68u) [[unlikely]] return; }
L_002D7C68:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C78u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002D7C78u) [[unlikely]] return; }
L_002D7C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C80u); set32(c.r[4], c.r[16].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002D7C80u) [[unlikely]] return; }
L_002D7C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C88u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D7C88u) [[unlikely]] return; }
L_002D7C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C90u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D7C90u) [[unlikely]] return; }
L_002D7C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_002D7CC0; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CB4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7CB4u) [[unlikely]] return; }
L_002D7CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_002D7CE0; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 1;
L_002D7CC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CDCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D7CDCu) [[unlikely]] return; }
L_002D7CDC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_002D7CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CE8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D7CE8u) [[unlikely]] return; }
L_002D7CE8:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1320u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 6;
L_002D7D00:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002D7D20:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8008u));
    c.f[0] = ld32((c.r[4].w[0] + 1232u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D7D7C; } }
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7D78; } }
    st32((c.r[4].w[0] + 52u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 1232u));
    c.f[0] = ld32((c.r[4].w[0] + 8008u));
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_002D7D7C; } }
L_002D7D78:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D7D7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7D90:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002D7DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7DCC; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7E3C; } }
L_002D7DCC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_002D7DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002D7E04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7E00; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7E3C; } }
L_002D7E00:
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002D7E04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D7E34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7E34; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D7E3C; } }
L_002D7E34:
    st32((c.r[4].w[0]), c.f[12]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_002D7E3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7E50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[16].w[0] + 1552u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 7;
L_002D7E6C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7E6Cu | kUnwind; return; } goto L_002D7E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7E94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002D7E94u) [[unlikely]] return; }
L_002D7E94:
    set32(c.r[6], 0u + 8384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002D7EA4u) [[unlikely]] return; }
L_002D7EA4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D7F30; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D7EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 49u, depth + 1u); else { c.pc = 0x00340870u; return; } if (c.pc != 0x002D7EE0u) [[unlikely]] return; }
L_002D7EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002D7EF8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D7EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7EF4u);  if (depth < kMaxDepth) unit_0070(c, 73u, depth + 1u); else { c.pc = 0x002C0D20u; return; } if (c.pc != 0x002D7EF4u) [[unlikely]] return; }
L_002D7EF4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002D7EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[3].w[0] - 25728u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002D7F98; } }
L_002D7F30:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D7F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 30u, depth + 1u); else { c.pc = 0x00318500u; return; } if (c.pc != 0x002D7F4Cu) [[unlikely]] return; }
L_002D7F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_002D7F64; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D7F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7F60u);  if (depth < kMaxDepth) unit_005A(c, 136u, depth + 1u); else { c.pc = 0x00269CA0u; return; } if (c.pc != 0x002D7F60u) [[unlikely]] return; }
L_002D7F60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_002D7F64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], c.r[3].w[0] - 25936u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
L_002D7F98:
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 1552u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
L_002D7FA4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7FA4u | kUnwind; return; } goto L_002D7FA4; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 768u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8438u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 8391u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D7FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 4;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
