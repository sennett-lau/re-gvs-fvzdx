#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000E[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0,
    214, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0,
    309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00138000;
    case 2u: goto L_00138004;
    case 3u: goto L_00138028;
    case 4u: goto L_00138040;
    case 5u: goto L_001380B0;
    case 6u: goto L_00138100;
    case 7u: goto L_00138120;
    case 8u: goto L_00138140;
    case 9u: goto L_0013817C;
    case 10u: goto L_00138188;
    case 11u: goto L_001381E0;
    case 12u: goto L_00138224;
    case 13u: goto L_00138280;
    case 14u: goto L_001382B4;
    case 15u: goto L_001382E8;
    case 16u: goto L_00138344;
    case 17u: goto L_001383D0;
    case 18u: goto L_001383F0;
    case 19u: goto L_00138448;
    case 20u: goto L_001384D0;
    case 21u: goto L_001384F4;
    case 22u: goto L_001384FC;
    case 23u: goto L_00138524;
    case 24u: goto L_0013852C;
    case 25u: goto L_0013853C;
    case 26u: goto L_00138548;
    case 27u: goto L_00138570;
    case 28u: goto L_00138590;
    case 29u: goto L_0013859C;
    case 30u: goto L_001385C4;
    case 31u: goto L_001385F0;
    case 32u: goto L_00138608;
    case 33u: goto L_00138650;
    case 34u: goto L_001386E8;
    case 35u: goto L_00138838;
    case 36u: goto L_0013885C;
    case 37u: goto L_00138898;
    case 38u: goto L_001388AC;
    case 39u: goto L_001388C0;
    case 40u: goto L_001388E0;
    case 41u: goto L_00138968;
    case 42u: goto L_00138988;
    case 43u: goto L_001389AC;
    case 44u: goto L_001389E0;
    case 45u: goto L_00138A08;
    case 46u: goto L_00138A24;
    case 47u: goto L_00138A60;
    case 48u: goto L_00138BC8;
    case 49u: goto L_00138BE8;
    case 50u: goto L_00138BF0;
    case 51u: goto L_00138C24;
    case 52u: goto L_00138CB0;
    case 53u: goto L_00138CE8;
    case 54u: goto L_00138D08;
    case 55u: goto L_00138D40;
    case 56u: goto L_00138DD0;
    case 57u: goto L_00138DF0;
    case 58u: goto L_00138E08;
    case 59u: goto L_00138E20;
    case 60u: goto L_00138E40;
    case 61u: goto L_00138E58;
    case 62u: goto L_00138E70;
    case 63u: goto L_00138EE8;
    case 64u: goto L_00138F94;
    case 65u: goto L_00138FB0;
    case 66u: goto L_00139000;
    case 67u: goto L_00139020;
    case 68u: goto L_00139040;
    case 69u: goto L_00139080;
    case 70u: goto L_001390C0;
    case 71u: goto L_001390D0;
    case 72u: goto L_001390E0;
    case 73u: goto L_001390E8;
    case 74u: goto L_001390F8;
    case 75u: goto L_00139110;
    case 76u: goto L_00139140;
    case 77u: goto L_00139198;
    case 78u: goto L_001391A8;
    case 79u: goto L_00139200;
    case 80u: goto L_00139210;
    case 81u: goto L_0013926C;
    case 82u: goto L_0013927C;
    case 83u: goto L_001392C0;
    case 84u: goto L_001392D4;
    case 85u: goto L_001392E4;
    case 86u: goto L_00139320;
    case 87u: goto L_001393B4;
    case 88u: goto L_00139408;
    case 89u: goto L_0013943C;
    case 90u: goto L_0013946C;
    case 91u: goto L_001394C0;
    case 92u: goto L_001394D0;
    case 93u: goto L_00139508;
    case 94u: goto L_00139520;
    case 95u: goto L_00139548;
    case 96u: goto L_00139560;
    case 97u: goto L_00139570;
    case 98u: goto L_001396D0;
    case 99u: goto L_001396DC;
    case 100u: goto L_00139720;
    case 101u: goto L_00139740;
    case 102u: goto L_0013974C;
    case 103u: goto L_00139760;
    case 104u: goto L_001397A4;
    case 105u: goto L_001397DC;
    case 106u: goto L_00139840;
    case 107u: goto L_00139860;
    case 108u: goto L_00139880;
    case 109u: goto L_0013988C;
    case 110u: goto L_00139900;
    case 111u: goto L_0013993C;
    case 112u: goto L_00139958;
    case 113u: goto L_001399C0;
    case 114u: goto L_00139A90;
    case 115u: goto L_00139AC8;
    case 116u: goto L_00139B30;
    case 117u: goto L_00139B60;
    case 118u: goto L_00139B8C;
    case 119u: goto L_00139BF4;
    case 120u: goto L_00139C20;
    case 121u: goto L_00139C2C;
    case 122u: goto L_00139C3C;
    case 123u: goto L_00139C60;
    case 124u: goto L_00139CA0;
    case 125u: goto L_00139D10;
    case 126u: goto L_00139D24;
    case 127u: goto L_00139D70;
    case 128u: goto L_00139D94;
    case 129u: goto L_00139DA4;
    case 130u: goto L_00139DB0;
    case 131u: goto L_00139DD8;
    case 132u: goto L_00139E18;
    case 133u: goto L_00139E70;
    case 134u: goto L_00139E98;
    case 135u: goto L_00139ED4;
    case 136u: goto L_00139F30;
    case 137u: goto L_00139F40;
    case 138u: goto L_00139F48;
    case 139u: goto L_00139F60;
    case 140u: goto L_00139FFC;
    case 141u: goto L_0013A048;
    case 142u: goto L_0013A070;
    case 143u: goto L_0013A0BC;
    case 144u: goto L_0013A0C4;
    case 145u: goto L_0013A0D0;
    case 146u: goto L_0013A0E0;
    case 147u: goto L_0013A0F0;
    case 148u: goto L_0013A104;
    case 149u: goto L_0013A110;
    case 150u: goto L_0013A170;
    case 151u: goto L_0013A180;
    case 152u: goto L_0013A1A0;
    case 153u: goto L_0013A1D0;
    case 154u: goto L_0013A1E8;
    case 155u: goto L_0013A23C;
    case 156u: goto L_0013A250;
    case 157u: goto L_0013A290;
    case 158u: goto L_0013A2C0;
    case 159u: goto L_0013A320;
    case 160u: goto L_0013A3B0;
    case 161u: goto L_0013A3C0;
    case 162u: goto L_0013A450;
    case 163u: goto L_0013A460;
    case 164u: goto L_0013A470;
    case 165u: goto L_0013A4E0;
    case 166u: goto L_0013A540;
    case 167u: goto L_0013A5C4;
    case 168u: goto L_0013A634;
    case 169u: goto L_0013A660;
    case 170u: goto L_0013A670;
    case 171u: goto L_0013A680;
    case 172u: goto L_0013A690;
    case 173u: goto L_0013A6B0;
    case 174u: goto L_0013A6F0;
    case 175u: goto L_0013A720;
    case 176u: goto L_0013A768;
    case 177u: goto L_0013A7A0;
    case 178u: goto L_0013A7F0;
    case 179u: goto L_0013A840;
    case 180u: goto L_0013A878;
    case 181u: goto L_0013A888;
    case 182u: goto L_0013A8A0;
    case 183u: goto L_0013A8BC;
    case 184u: goto L_0013A8D0;
    case 185u: goto L_0013A948;
    case 186u: goto L_0013A958;
    case 187u: goto L_0013A9A4;
    case 188u: goto L_0013A9B0;
    case 189u: goto L_0013A9C0;
    case 190u: goto L_0013A9C8;
    case 191u: goto L_0013A9E0;
    case 192u: goto L_0013A9FC;
    case 193u: goto L_0013AA10;
    case 194u: goto L_0013AA70;
    case 195u: goto L_0013AACC;
    case 196u: goto L_0013AAD4;
    case 197u: goto L_0013AADC;
    case 198u: goto L_0013AAEC;
    case 199u: goto L_0013AAFC;
    case 200u: goto L_0013AB1C;
    case 201u: goto L_0013AB24;
    case 202u: goto L_0013AB2C;
    case 203u: goto L_0013AB38;
    case 204u: goto L_0013AB40;
    case 205u: goto L_0013AB54;
    case 206u: goto L_0013AB9C;
    case 207u: goto L_0013ABA4;
    case 208u: goto L_0013ABAC;
    case 209u: goto L_0013ABB4;
    case 210u: goto L_0013ABC0;
    case 211u: goto L_0013ABD0;
    case 212u: goto L_0013ABE0;
    case 213u: goto L_0013ABF8;
    case 214u: goto L_0013AC00;
    case 215u: goto L_0013AC08;
    case 216u: goto L_0013AC14;
    case 217u: goto L_0013AC24;
    case 218u: goto L_0013AC40;
    case 219u: goto L_0013AC50;
    case 220u: goto L_0013AC90;
    case 221u: goto L_0013AD04;
    case 222u: goto L_0013AD0C;
    case 223u: goto L_0013AD14;
    case 224u: goto L_0013AD30;
    case 225u: goto L_0013AD38;
    case 226u: goto L_0013AD44;
    case 227u: goto L_0013AD4C;
    case 228u: goto L_0013AD7C;
    case 229u: goto L_0013AD8C;
    case 230u: goto L_0013AD9C;
    case 231u: goto L_0013ADAC;
    case 232u: goto L_0013ADCC;
    case 233u: goto L_0013ADD8;
    case 234u: goto L_0013ADE0;
    case 235u: goto L_0013AE10;
    case 236u: goto L_0013AE20;
    case 237u: goto L_0013AE34;
    case 238u: goto L_0013AE3C;
    case 239u: goto L_0013AEA0;
    case 240u: goto L_0013AEB4;
    case 241u: goto L_0013AEBC;
    case 242u: goto L_0013AEC4;
    case 243u: goto L_0013AECC;
    case 244u: goto L_0013AED8;
    case 245u: goto L_0013AEE8;
    case 246u: goto L_0013AEF8;
    case 247u: goto L_0013AF10;
    case 248u: goto L_0013AF18;
    case 249u: goto L_0013AF20;
    case 250u: goto L_0013AF2C;
    case 251u: goto L_0013AF3C;
    case 252u: goto L_0013AF50;
    case 253u: goto L_0013AF60;
    case 254u: goto L_0013B000;
    case 255u: goto L_0013B010;
    case 256u: goto L_0013B020;
    case 257u: goto L_0013B030;
    case 258u: goto L_0013B040;
    case 259u: goto L_0013B050;
    case 260u: goto L_0013B060;
    case 261u: goto L_0013B0EC;
    case 262u: goto L_0013B120;
    case 263u: goto L_0013B130;
    case 264u: goto L_0013B138;
    case 265u: goto L_0013B140;
    case 266u: goto L_0013B148;
    case 267u: goto L_0013B154;
    case 268u: goto L_0013B15C;
    case 269u: goto L_0013B170;
    case 270u: goto L_0013B180;
    case 271u: goto L_0013B188;
    case 272u: goto L_0013B1A0;
    case 273u: goto L_0013B238;
    case 274u: goto L_0013B244;
    case 275u: goto L_0013B2AC;
    case 276u: goto L_0013B2B8;
    case 277u: goto L_0013B2D0;
    case 278u: goto L_0013B300;
    case 279u: goto L_0013B33C;
    case 280u: goto L_0013B350;
    case 281u: goto L_0013B398;
    case 282u: goto L_0013B3B0;
    case 283u: goto L_0013B3D0;
    case 284u: goto L_0013B3E0;
    case 285u: goto L_0013B410;
    case 286u: goto L_0013B420;
    case 287u: goto L_0013B450;
    case 288u: goto L_0013B460;
    case 289u: goto L_0013B490;
    case 290u: goto L_0013B4A0;
    case 291u: goto L_0013B4D0;
    case 292u: goto L_0013B4E0;
    case 293u: goto L_0013B500;
    case 294u: goto L_0013B520;
    case 295u: goto L_0013B580;
    case 296u: goto L_0013B590;
    case 297u: goto L_0013B5A0;
    case 298u: goto L_0013B660;
    case 299u: goto L_0013B6A8;
    case 300u: goto L_0013B6C0;
    case 301u: goto L_0013B6D0;
    case 302u: goto L_0013B718;
    case 303u: goto L_0013B730;
    case 304u: goto L_0013B740;
    case 305u: goto L_0013B77C;
    case 306u: goto L_0013B79C;
    case 307u: goto L_0013B7DC;
    case 308u: goto L_0013B7E4;
    case 309u: goto L_0013B800;
    case 310u: goto L_0013B808;
    case 311u: goto L_0013B844;
    case 312u: goto L_0013B860;
    case 313u: goto L_0013B884;
    case 314u: goto L_0013B8CC;
    case 315u: goto L_0013B900;
    case 316u: goto L_0013B910;
    case 317u: goto L_0013B970;
    case 318u: goto L_0013B9B0;
    case 319u: goto L_0013B9D0;
    case 320u: goto L_0013BA10;
    case 321u: goto L_0013BA40;
    case 322u: goto L_0013BB00;
    case 323u: goto L_0013BBA0;
    case 324u: goto L_0013BC50;
    case 325u: goto L_0013BD20;
    case 326u: goto L_0013BDE0;
    case 327u: goto L_0013BE20;
    case 328u: goto L_0013BEC0;
    case 329u: goto L_0013BF10;
    case 330u: goto L_0013BF40;
    case 331u: goto L_0013BF80;
    default: bad_entry(c, 0x00138000u); return;
    }
L_00138000:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_00138004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013802C; } }
L_00138014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9792u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138028u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x00138028u) [[unlikely]] return; }
L_00138028:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013802C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138040:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], 0u + 128u);
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_0013809C; } }
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 13;
L_0013809C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001380B0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0013810C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_00138104; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001380FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001380F4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013810C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013810C; } }
L_001380F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013810C; } }
L_001380FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013810C; } }
    goto L_00138104;
L_00138100:
    c.budget -= 1;
L_00138104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013810C; } }
L_0013810C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138120:
    c.r[3].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] >> 6);  if (t) { goto L_00138130; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00138130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138140:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0])));
    set32(c.r[17], c.r[4].w[0] + 4u);
    set32(c.r[18], c.r[4].w[0] + 2048u);
    c.r[1].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00138258; } }
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    c.budget -= 1;
L_0013817C:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138188u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 242u, depth + 1u); else { c.pc = 0x00137530u; return; } if (c.pc != 0x00138188u) [[unlikely]] return; }
L_00138188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00138198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013825C; } }
L_00138198:
    set32(c.r[16], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 124u)));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 126u)));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001381E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x001381E0u) [[unlikely]] return; }
L_001381E0:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 130u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00138230; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 134u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 136u)));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138224u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x00138224u) [[unlikely]] return; }
L_00138224:
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00138230:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013817Cu | kUnwind; return; } goto L_0013817C; } }
L_00138258:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013825C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00138280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001382A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001383B4; } }
L_001382A4:
    set32(c.r[3], c.r[4].w[0] + 2048u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001382D0; } }
L_001382B4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
L_001382D0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001382B4u | kUnwind; return; } goto L_001382B4; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001382E8u); mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 242u, depth + 1u); else { c.pc = 0x00137530u; return; } if (c.pc != 0x001382E8u) [[unlikely]] return; }
L_001382E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001382FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001383B4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001382FC:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 40u)));
    set32(c.r[2], 0u + 8960u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 44u)));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 46u)));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 48u)));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138344u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x00138344u) [[unlikely]] return; }
L_00138344:
    set32(c.r[4], c.r[29].w[0] + 36u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00138368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001383B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00138368:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 50u)));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 54u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 56u)));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 58u)));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_001383B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001383B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001383D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001383F0u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 242u, depth + 1u); else { c.pc = 0x00137530u; return; } if (c.pc != 0x001383F0u) [[unlikely]] return; }
L_001383F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00138404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001384B8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00138404:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 56u)));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 62u)));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138448u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x00138448u) [[unlikely]] return; }
L_00138448:
    set32(c.r[4], c.r[29].w[0] + 52u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013846C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001384B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0013846C:
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 66u)));
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 70u)));
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 72u)));
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_001384B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001384B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001384D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[2].d[0] | 22528ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001384F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x001384F4u) [[unlikely]] return; }
L_001384F4:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_001384FC:
    c.r[9].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[10], 0u + 1024u);
    set32(c.r[11], 0u + 64u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138524u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x00100EF8u; return; } if (c.pc != 0x00138524u) [[unlikely]] return; }
L_00138524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013852Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0013852Cu) [[unlikely]] return; }
L_0013852C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013853Cu); c.r[5].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x001010E0u; return; } if (c.pc != 0x0013853Cu) [[unlikely]] return; }
L_0013853C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138548u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 77u, depth + 1u); else { c.pc = 0x00100BE0u; return; } if (c.pc != 0x00138548u) [[unlikely]] return; }
L_00138548:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001384FCu | kUnwind; return; } goto L_001384FC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00138570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[2].w[0] + 11168u);
    c.r[1].d[0] = c.r[1].d[0] | 16960ull;
    c.budget -= 6;
    { set32(c.r[5], c.r[4].w[0] + c.r[1].w[0]);  [[clang::musttail]] return unit_0029(c, 110u, depth); }
L_00138590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], c.r[2].w[0] + 11168u);
    set32(c.r[4], 0u + 27u);
    c.budget -= 3;
L_0013859C:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 16384u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[2].w[0] + 16385u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(230ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013859Cu | kUnwind; return; } goto L_0013859C; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(232ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 128u);  goto L_001385E4; }
L_001385C4:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 16384u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(232ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001385C4u | kUnwind; return; } goto L_001385C4; } }
    set32(c.r[4], c.r[3].w[0] + 128u);
    c.budget -= 1;
L_001385E4:
    c.budget -= 2;
    { set32(c.r[5], c.r[4].w[0] + 16256u);  [[clang::musttail]] return unit_0029(c, 110u, depth); }
L_001385F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138608u); set32(c.r[16], c.r[2].w[0] + 11168u);  if (depth < kMaxDepth) unit_000E(c, 27u, depth + 1u); else { c.pc = 0x00138570u; return; } if (c.pc != 0x00138608u) [[unlikely]] return; }
L_00138608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 9600u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 16920u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 16384u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 16924u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 6784u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 16928u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00138650:
    set32(c.r[29], c.r[29].w[0] - 368u);
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
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 364u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00138A2C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00138990; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001386B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);  if (t) { goto L_00138D0C; } }
L_001386B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[22].w[0] + 16u)));
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[30], c.r[0]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001386E8u); st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 55u, depth + 1u); else { c.pc = 0x00138D40u; return; } if (c.pc != 0x001386E8u) [[unlikely]] return; }
L_001386E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[21], c.r[2].w[0] >> 18);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0013872C; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_0013872C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[4].d[0];  if (t) { goto L_00138740; } }
    c.r[20].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0013882C; } }
L_00138740:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_00138808; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_001387E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_001387B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_00138788; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_00138830; } }
L_00138784:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00138788:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0013882C; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001387B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0013882C; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001387E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0013882C; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00138808:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 9;
L_0013882C:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_00138830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138838u);  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x00139C60u; return; } if (c.pc != 0x00138838u) [[unlikely]] return; }
L_00138838:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 240u)));
    c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00138938; } }
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] - 1u);
    c.budget -= 4;
L_0013885C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001388A4; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    st64((c.r[29].w[0]), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[20].d[0]);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[19], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138898u); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00134BD0u; return; } if (c.pc != 0x00138898u) [[unlikely]] return; }
L_00138898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0013892C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001388A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001388ACu);  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x00139C60u; return; } if (c.pc != 0x001388ACu) [[unlikely]] return; }
L_001388AC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[30], c.r[2], c.r[0]);
    st64((c.r[29].w[0]), c.r[18].d[0]);
    c.budget -= 5;
L_001388C0:
    st64((c.r[29].w[0] + 8u), c.r[20].d[0]);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[30], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[19], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001388E0u); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00134BD0u; return; } if (c.pc != 0x001388E0u) [[unlikely]] return; }
L_001388E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[23], c.r[30], c.r[0]);  if (t) { goto L_00138924; } }
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    mmi::paddub(c.r[23], c.r[30], c.r[0]);
    c.budget -= 5;
L_00138924:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0013892C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013885Cu | kUnwind; return; } goto L_0013885C; } }
L_00138938:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[22].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[22].w[0] + 44u), c.r[21].w[0]);  if (t) { goto L_00138970; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138968u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138968u) [[unlikely]] return; }
L_00138968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138D08; } }
L_00138970:
    c.r[3].d[0] = c.r[22].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138988u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138988u) [[unlikely]] return; }
L_00138988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138D08; } }
L_00138990:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 24u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 28u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 26u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 30u)));
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389ACu); set32(c.r[16], ld32((c.r[22].w[0] + 36u)));  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x00139C60u; return; } if (c.pc != 0x001389ACu) [[unlikely]] return; }
L_001389AC:
    st64((c.r[29].w[0]), c.r[20].d[0]);
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    st64((c.r[29].w[0] + 8u), c.r[21].d[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[19], c.r[0]);
    mmi::paddub(c.r[8], c.r[18], c.r[0]);
    mmi::paddub(c.r[9], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001389E0u); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00134BD0u; return; } if (c.pc != 0x001389E0u) [[unlikely]] return; }
L_001389E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[22].w[0] + 40u), c.r[20].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[22].w[0] + 44u), c.r[5].w[0]);  if (t) { goto L_00138A10; } }
    c.r[3].d[0] = c.r[20].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A08u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138A08u) [[unlikely]] return; }
L_00138A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138D08; } }
L_00138A10:
    c.r[3].d[0] = c.r[22].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A24u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138A24u) [[unlikely]] return; }
L_00138A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138D08; } }
L_00138A2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[22].w[0] + 16u)));
    st16((c.r[29].w[0] + 288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st16((c.r[29].w[0] + 304u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138A60u); st16((c.r[29].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 55u, depth + 1u); else { c.pc = 0x00138D40u; return; } if (c.pc != 0x00138A60u) [[unlikely]] return; }
L_00138A60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 18);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00138AAC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
L_00138AAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00138AC8; } }
    c.r[20].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00138BB4; } }
L_00138AC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[30].d[0] << 48;  if (t) { goto L_00138B90; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[30].d[0] << 48;  if (t) { goto L_00138B68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[30].d[0] << 48;  if (t) { goto L_00138B3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[30].d[0] << 48;  if (t) { goto L_00138B10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00138B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 336u)));  if (t) { goto L_00138BB8; } }
L_00138B0C:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.budget -= 1;
L_00138B10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00138BB4; } }
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.budget -= 1;
L_00138B3C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00138BB4; } }
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.budget -= 1;
L_00138B68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_00138BB4; } }
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.budget -= 1;
L_00138B90:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 9;
L_00138BB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 1;
L_00138BB8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BC8u); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x00139C60u; return; } if (c.pc != 0x00138BC8u) [[unlikely]] return; }
L_00138BC8:
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 360u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00138C78; } }
    c.r[16].d[0] = c.r[16].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 2;
L_00138BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138BF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 123u, depth + 1u); else { c.pc = 0x00139C60u; return; } if (c.pc != 0x00138BF0u) [[unlikely]] return; }
L_00138BF0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 320u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 304u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    st64((c.r[29].w[0]), c.r[30].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[20].d[0]);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[19], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138C24u); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00134BD0u; return; } if (c.pc != 0x00138C24u) [[unlikely]] return; }
L_00138C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[20].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00138C60; } }
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 4;
L_00138C60:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[23], c.r[21], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00138BE8u | kUnwind; return; } goto L_00138BE8; } }
    c.budget -= 1;
L_00138C78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 30u)));
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 32u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[6], ld32((c.r[22].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 26u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 28u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 24u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CB0u); mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 52u, depth + 1u); else { c.pc = 0x00134BD0u; return; } if (c.pc != 0x00138CB0u) [[unlikely]] return; }
L_00138CB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[22].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[22].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[22].d[0] << 36;  if (t) { goto L_00138CF4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138CE8u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138CE8u) [[unlikely]] return; }
L_00138CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138D08; } }
    c.r[3].d[0] = c.r[22].d[0] << 36;
    c.budget -= 1;
L_00138CF4:
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138D08u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00138D08u) [[unlikely]] return; }
L_00138D08:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00138D0C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00138D40:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00138DB8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00138DAC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00138DA0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[3].d[0] = c.lo.d[0];  if (t) { goto L_00138D90; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_00138D84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00138DC4; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00138D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_00138DC4; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00138D90:
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00138DC4; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00138DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_00138DC4; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00138DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 1);  if (t) { goto L_00138DC4; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00138DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00138DC4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00138DC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00138DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138DF0u); c.r[7].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000E(c, 62u, depth + 1u); else { c.pc = 0x00138E70u; return; } if (c.pc != 0x00138DF0u) [[unlikely]] return; }
L_00138DF0:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B90000u);
    set32(c.r[6], 0u + 32u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E08u); c.r[7].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000E(c, 62u, depth + 1u); else { c.pc = 0x00138E70u; return; } if (c.pc != 0x00138E08u) [[unlikely]] return; }
L_00138E08:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B80000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E40u); c.r[7].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000E(c, 62u, depth + 1u); else { c.pc = 0x00138E70u; return; } if (c.pc != 0x00138E40u) [[unlikely]] return; }
L_00138E40:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B90000u);
    set32(c.r[6], 0u + 48u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138E58u); c.r[7].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000E(c, 62u, depth + 1u); else { c.pc = 0x00138E70u; return; } if (c.pc != 0x00138E58u) [[unlikely]] return; }
L_00138E58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00138E70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[4].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[5].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 11168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 11248u);
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[23], c.r[7], c.r[0]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138EE8u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[20].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 98u, depth + 1u); else { c.pc = 0x001396D0u; return; } if (c.pc != 0x00138EE8u) [[unlikely]] return; }
L_00138EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_00138EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00138FD0; } }
L_00138EF8:
    set32(c.r[2], c.r[28].w[0] - 32012u);
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[22].d[0] != 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00138F50; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_00138F3C; } }
    set32(c.r[2], 0u + 64u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] >> 5);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00138F84; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_00138F3C:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 32u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00138F84; } }
L_00138F50:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_00138F74; } }
    set32(c.r[2], 0u + 64u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] >> 4);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00138F84; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_00138F74:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] >> 3);
    set32(c.r[2], c.r[2].w[0] << 5);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00138F84:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138F94u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 103u, depth + 1u); else { c.pc = 0x00139760u; return; } if (c.pc != 0x00138F94u) [[unlikely]] return; }
L_00138F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00138FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00138FD0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00138FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00138FB0u);  if (depth < kMaxDepth) unit_000E(c, 114u, depth + 1u); else { c.pc = 0x00139A90u; return; } if (c.pc != 0x00138FB0u) [[unlikely]] return; }
L_00138FB0:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 16616u), c.r[17].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[2].w[0] + 16632u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 16640u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[23].w[0]);
    c.budget -= 8;
L_00138FD0:
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
L_00139000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 27784u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00139020:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[5], c.r[2].w[0] + 11168u);
    set32(c.r[2], 0u + 20u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00139044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_00139060; } }
L_00139040:
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_00139044:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00139058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00139060; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00139058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390AC; } }
L_00139060:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00139094; } }
L_00139078:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013908C; } }
L_00139080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00139094; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013908C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001390AC; } }
L_00139094:
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16616u)));
    c.budget -= 6;
L_001390AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001390C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 66u, depth + 1u); else { c.pc = 0x00139000u; return; } if (c.pc != 0x001390D0u) [[unlikely]] return; }
L_001390D0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 33u, depth + 1u); else { c.pc = 0x00138650u; return; } if (c.pc != 0x001390E0u) [[unlikely]] return; }
L_001390E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390E8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000E(c, 66u, depth + 1u); else { c.pc = 0x00139000u; return; } if (c.pc != 0x001390E8u) [[unlikely]] return; }
L_001390E8:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001390F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 33u, depth + 1u); else { c.pc = 0x00138650u; return; } if (c.pc != 0x001390F8u) [[unlikely]] return; }
L_001390F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00139110:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[2].w[0] + 27784u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_00139140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[7], c.r[0]);  if (t) { goto L_00139150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001392FC; } }
L_00139150:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0013922C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));  if (t) { goto L_001391C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_00139170; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00139170:
    set32(c.r[3], c.r[2].w[0] << 10);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_00139188; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 5);  goto L_0013918C; }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_00139188:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 1;
L_0013918C:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_00139198:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001391A8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A56D0u; return; } if (c.pc != 0x001391A8u) [[unlikely]] return; }
L_001391A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139198u | kUnwind; return; } goto L_00139198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001392FC; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.budget -= 1;
L_001391C8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 11);  if (t) { goto L_001391DC; } }
    set32(c.r[2], c.r[6].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[3], c.r[2].w[0] << 11);
    c.budget -= 3;
L_001391DC:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 7ull;  if (t) { goto L_001391F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 5);  goto L_001391F4; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_001391F0:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 1;
L_001391F4:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_00139200:
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139210u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A56D0u; return; } if (c.pc != 0x00139210u) [[unlikely]] return; }
L_00139210:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139200u | kUnwind; return; } goto L_00139200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001392F8; } }
L_0013922C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0013929C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_00139244; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00139244:
    set32(c.r[3], c.r[2].w[0] << 11);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0013925C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 5);  goto L_00139260; }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0013925C:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 1;
L_00139260:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_0013926C:
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013927Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A56D0u; return; } if (c.pc != 0x0013927Cu) [[unlikely]] return; }
L_0013927C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013926Cu | kUnwind; return; } goto L_0013926C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001392F8; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 1;
L_0013929C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 12);  if (t) { goto L_001392B0; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] << 12);
    c.budget -= 3;
L_001392B0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_001392C4; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 6);  goto L_001392C8; }
L_001392C0:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_001392C4:
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 1;
L_001392C8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_001392D4:
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001392E4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A56D0u; return; } if (c.pc != 0x001392E4u) [[unlikely]] return; }
L_001392E4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001392D4u | kUnwind; return; } goto L_001392D4; } }
L_001392F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001392FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00139320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], c.r[2].w[0] + 11168u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00139410; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00139358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001394C4; } }
L_00139358:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001393BC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00139384; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001393A4; } }
L_00139384:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16632u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16640u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001394C0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16632u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_001393A4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001393B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00139110u; return; } if (c.pc != 0x001393B4u) [[unlikely]] return; }
L_001393B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001394C0; } }
L_001393BC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001393D8; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001393F8; } }
L_001393D8:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16634u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16642u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001394C0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16634u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_001393F8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139408u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00139110u; return; } if (c.pc != 0x00139408u) [[unlikely]] return; }
L_00139408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001394C0; } }
L_00139410:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00139474; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013943C; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0013945C; } }
L_0013943C:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16636u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16644u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001394C0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16636u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0013945C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013946Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00139110u; return; } if (c.pc != 0x0013946Cu) [[unlikely]] return; }
L_0013946C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001394C0; } }
L_00139474:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00139490; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001394B0; } }
L_00139490:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16638u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16646u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001394C0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16638u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_001394B0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001394C0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 75u, depth + 1u); else { c.pc = 0x00139110u; return; } if (c.pc != 0x001394C0u) [[unlikely]] return; }
L_001394C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001394C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001394D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139528; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139510; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139508u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 97u, depth + 1u); else { c.pc = 0x00139570u; return; } if (c.pc != 0x00139508u) [[unlikely]] return; }
L_00139508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00139564; } }
L_00139510:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139520u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 97u, depth + 1u); else { c.pc = 0x00139570u; return; } if (c.pc != 0x00139520u) [[unlikely]] return; }
L_00139520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139560; } }
L_00139528:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139550; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139548u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 97u, depth + 1u); else { c.pc = 0x00139570u; return; } if (c.pc != 0x00139548u) [[unlikely]] return; }
L_00139548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139560; } }
L_00139550:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139560u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 97u, depth + 1u); else { c.pc = 0x00139570u; return; } if (c.pc != 0x00139560u) [[unlikely]] return; }
L_00139560:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00139564:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00139570:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 27784u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013959C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001396BC; } }
L_0013959C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00139630; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_001395F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_001395C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001395C0; } }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_001395C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 11232u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_001395E0; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_001395E0:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001396B4; } }
    c.r[4].d[0] = c.r[6].d[0] & 31ull;
    c.budget -= 1;
L_001395F0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_00139604; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139604; } }
    set32(c.r[4], c.r[4].w[0] - 32u);
    c.budget -= 1;
L_00139604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 11200u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_00139624; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00139624:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001396B4; } }
L_00139630:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] & 7ull;  if (t) { goto L_0013967C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[4].d[0] = c.r[6].d[0] & 15ull;  if (t) { goto L_0013964C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013964C; } }
    set32(c.r[4], c.r[4].w[0] - 16u);
    c.budget -= 1;
L_0013964C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));  if (t) { goto L_0013966C; } }
    set32(c.r[2], c.r[6].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0013966C:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001396B4; } }
    c.r[4].d[0] = c.r[6].d[0] & 7ull;
    c.budget -= 1;
L_0013967C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], c.r[28].w[0] - 32008u);  if (t) { goto L_00139694; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139690; } }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_00139690:
    set32(c.r[2], c.r[28].w[0] - 32008u);
    c.budget -= 1;
L_00139694:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));  if (t) { goto L_001396AC; } }
    set32(c.r[2], c.r[6].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001396AC:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001396B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001396BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001396D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 11168u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_001396DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001396FC; }
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0013970C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001396FC:
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001396DCu | kUnwind; return; } goto L_001396DC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013970C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 58u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00139740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139740u);  if (depth < kMaxDepth) unit_000E(c, 117u, depth + 1u); else { c.pc = 0x00139B60u; return; } if (c.pc != 0x00139740u) [[unlikely]] return; }
L_00139740:
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013974Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x0013974Cu) [[unlikely]] return; }
L_0013974C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00139760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 11168u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001397E8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397A4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x001397A4u) [[unlikely]] return; }
L_001397A4:
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_00139818; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139818; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139818; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001397DCu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 30u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x001397DCu) [[unlikely]] return; }
L_001397DC:
    st16((c.r[20].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_00139818; } }
L_001397E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));  if (t) { goto L_00139818; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139818; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00139818; } }
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 34u)));
    c.budget -= 2;
L_00139818:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001398FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 16920u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0013983C; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0013983C:
    set32(c.r[3], c.r[3].w[0] - 8960u);
    c.budget -= 1;
L_00139840:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_00139854; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00139854:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 16384u);
    set32(c.r[6], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 3;
L_00139860:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_001398C0; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16924u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00139888; } }
L_00139880:
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00139888:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013988C:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_001398A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00139998; } }
L_001398A4:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013988Cu | kUnwind; return; } goto L_0013988C; }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139860u | kUnwind; return; } goto L_00139860; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001398C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139860u | kUnwind; return; } goto L_00139860; } }
    set32(c.r[2], c.r[4].w[0] << 5);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001398F0; } }
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001398F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_0013999C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_001398FC:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_00139900:
    set32(c.r[2], ld32((c.r[1].w[0] + 16920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00139914; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00139914:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);  if (t) { goto L_00139954; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 16924u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0013993C; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0013993C:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00139950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00139998; } }
L_00139950:
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_00139954:
    set32(c.r[3], c.r[2].w[0] + 16384u);
    c.budget -= 1;
L_00139958:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00139970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00139998; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00139970:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139958u | kUnwind; return; } goto L_00139958; } }
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] << 5);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00139998:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0013999C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001399C0:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 128u);  goto L_00139A28; }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 128u);  goto L_00139A1C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 64u);  goto L_00139A10; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 64u);  goto L_00139A04; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00139A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_00139A30; } }
L_00139A00:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00139A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00139A2C; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00139A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_00139A2C; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00139A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00139A2C; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00139A28:
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_00139A2C:
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 1;
L_00139A30:
    c.r[7].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { mmi::div(c, 0, c.r[6].w[0], c.r[4].w[0]);  goto L_00139A5C; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.budget -= 2;
L_00139A5C:
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_00139A88; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 2;
L_00139A88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[6], c.r[3].w[0] + 11168u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[5], c.r[3].w[0] - 8960u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00139AB8; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_00139AB8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_00139AC8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139AC8u | kUnwind; return; } goto L_00139AC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00139B50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00139B50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00139B50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[5], c.r[3].w[0] - 8960u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00139B20; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_00139B20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16384u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_00139B30:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139B30u | kUnwind; return; } goto L_00139B30; } }
    c.budget -= 1;
L_00139B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139B60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[6], c.r[3].w[0] + 11168u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[5], c.r[3].w[0] - 8960u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00139B80; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_00139B80:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.budget -= 3;
L_00139B8C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139B8Cu | kUnwind; return; } goto L_00139B8C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00139C10; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00139C10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00139C10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[5], c.r[3].w[0] - 8960u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_00139BE8; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_00139BE8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.budget -= 3;
L_00139BF4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139BF4u | kUnwind; return; } goto L_00139BF4; } }
L_00139C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139C20:
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 3;
L_00139C2C:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00139C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00139C54; } }
    goto L_00139C40;
L_00139C3C:
    c.budget -= 1;
L_00139C40:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00139C44:
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << (c.r[2].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139C2Cu | kUnwind; return; } goto L_00139C2C; } }
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 1;
L_00139C54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00139C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[5], c.r[2].w[0] + 9600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[6], c.r[3].w[0] + 11168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 16912ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00139CA8; } }
L_00139CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139CA0u | kUnwind; return; } goto L_00139CA0; } }
L_00139CA8:
    set32(c.r[2], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] + 16912u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 16912u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[7].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16656u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16656u);  c.pc = t; return; }
L_00139D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[3].w[0] + 9600u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[5], c.r[3].w[0] + 11168u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
L_00139D24:
    set32(c.r[3], ld32((c.r[4].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] + 16656u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139D24u | kUnwind; return; } goto L_00139D24; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 16912u), 0u);  c.pc = t; return; }
L_00139D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00139D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139D94u);  if (depth < kMaxDepth) unit_000E(c, 130u, depth + 1u); else { c.pc = 0x00139DB0u; return; } if (c.pc != 0x00139D94u) [[unlikely]] return; }
L_00139D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00139DA8; } }
L_00139D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139DA4u);  if (depth < kMaxDepth) unit_000E(c, 133u, depth + 1u); else { c.pc = 0x00139E70u; return; } if (c.pc != 0x00139DA4u) [[unlikely]] return; }
L_00139DA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00139DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00139DB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[3].w[0] - 11152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] + 560u);
    set32(c.r[8], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[9], 0u + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[9], c.r[0]);
    c.budget -= 10;
L_00139DD8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139DD8u | kUnwind; return; } goto L_00139DD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 5168u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[3].w[0] + 24u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[3].w[0] - 11136u);
    c.budget -= 8;
L_00139E18:
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00139E44; }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 8;
L_00139E44:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E18u | kUnwind; return; } goto L_00139E18; } }
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 48128ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_00139E70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[6], c.r[3].w[0] - 11152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] + 560u);
    set32(c.r[8], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[9], 0u + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[9], c.r[0]);
    c.budget -= 10;
L_00139E98:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139E98u | kUnwind; return; } goto L_00139E98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28976u);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[3].w[0] - 11136u);
    c.budget -= 7;
L_00139ED4:
    c.r[3].d[0] = ld16((c.r[9].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00139EFC; }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
L_00139EFC:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139ED4u | kUnwind; return; } goto L_00139ED4; } }
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 48128ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_00139F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F40u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_000E(c, 139u, depth + 1u); else { c.pc = 0x00139F60u; return; } if (c.pc != 0x00139F40u) [[unlikely]] return; }
L_00139F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00139F48u);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x00139F48u) [[unlikely]] return; }
L_00139F48:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00139F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 5168u);  if (t) { goto L_00139FCC; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[28].w[0] - 26196u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[28].w[0] - 26200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[28].w[0] - 26204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    st8((c.r[28].w[0] - 26192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_00139FCC:
    c.r[3].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] & 4ull;  if (t) { goto L_0013A034; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[16], c.r[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], 0u + 7u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 9;
L_00139FFC:
    st16((c.r[12].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[12].w[0] + 26u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[12].w[0] + 28u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[12].w[0] + 30u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[12].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[12].w[0] + 34u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st16((c.r[12].w[0] + 36u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[12].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00139FFCu | kUnwind; return; } goto L_00139FFC; } }
    c.r[3].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 2;
L_0013A034:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0013A04C; } }
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A048u); st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x0013A048u) [[unlikely]] return; }
L_0013A048:
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_0013A04C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0013A05C; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0013A05C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013A070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5169u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[2].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5168u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[2].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5170u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[2].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5171u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0BCu); st8((c.r[2].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x0013A0BCu) [[unlikely]] return; }
L_0013A0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0C4u);  if (depth < kMaxDepth) unit_0025(c, 261u, depth + 1u); else { c.pc = 0x00196BB0u; return; } if (c.pc != 0x0013A0C4u) [[unlikely]] return; }
L_0013A0C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A0D0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 79u)));  if (depth < kMaxDepth) unit_0025(c, 224u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x0013A0D0u) [[unlikely]] return; }
L_0013A0D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013A0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 32u);  c.pc = t; return; }
L_0013A0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A104u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0013A104u) [[unlikely]] return; }
L_0013A104:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A110u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0013A110u) [[unlikely]] return; }
L_0013A110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013A148; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A154; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013A148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0013A158; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013A154:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0013A158:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013A170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A180u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0013A180u) [[unlikely]] return; }
L_0013A180:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3268u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013A1A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull & 65535ull;  if (t) { goto L_0013A1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1D0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0013A1D0u) [[unlikely]] return; }
L_0013A1D0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013A1D4:
    c.r[2].d[0] = c.r[18].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A1E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0013A1E8u) [[unlikely]] return; }
L_0013A1E8:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0013A1EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013A220; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A22C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013A220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0013A230; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013A22C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0013A230:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_0013A23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013A250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013A27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A27C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013A27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013A2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A2B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013A2B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A2C0:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0013A2DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_0013A2DC:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0013A2FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
L_0013A2FC:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013A314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A314; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013A314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A320:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 15360ull;
    set32(c.r[2], 0u + 2048u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0013A360; } }
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0013A350; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0013A35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0013A35C; } }
L_0013A350:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0013A35C; } }
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 1;
L_0013A35C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0013A360:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_0013A39C; } }
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0013A388; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[6], c.r[0]);  if (t) { goto L_0013A398; } }
L_0013A388:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A398; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013A398:
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 1;
L_0013A39C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A3B0:
    c.budget -= 2;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A320u | kUnwind; return; } goto L_0013A320; }
L_0013A3C0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 15360ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0013A400; } }
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0013A3F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0013A3FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0013A3FC; } }
L_0013A3F0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0013A3FC; } }
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 1;
L_0013A3FC:
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0013A400:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_0013A43C; } }
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0013A428; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[6], c.r[0]);  if (t) { goto L_0013A438; } }
L_0013A428:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A438; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013A438:
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 1;
L_0013A43C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A450:
    c.budget -= 2;
    { mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A3C0u | kUnwind; return; } goto L_0013A3C0; }
L_0013A460:
    c.budget -= 2;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A3C0u | kUnwind; return; } goto L_0013A3C0; }
L_0013A470:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A4A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3268u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3280u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
L_0013A4A4:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013A4D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 3300u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
L_0013A4D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A4E0:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0013A530; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 18u));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013A534; } }
    c.r[1].d[0] = c.r[3].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013A534; } }
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0013A534; } }
L_0013A530:
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0013A534:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013A540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 18542u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A56C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A64C; } }
L_0013A56C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A64C; } }
L_0013A584:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u << 2);  if (t) { goto L_0013A59C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013A64C; } }
    set32(c.r[2], 0u << 2);
    c.budget -= 1;
L_0013A59C:
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26188u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0013A608; } }
L_0013A5C4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0013A600; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 49152ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 20u);  goto L_0013A604; }
    st32((c.r[28].w[0] - 26184u), c.r[2].w[0]);
    c.budget -= 2;
L_0013A600:
    set32(c.r[6], c.r[6].w[0] + 20u);
    c.budget -= 1;
L_0013A604:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013A608:
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A620; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A5C4u | kUnwind; return; } goto L_0013A5C4; } }
    c.budget -= 1;
L_0013A620:
    set32(c.r[2], ld32((c.r[28].w[0] - 26184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0013A64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A634u);  if (depth < kMaxDepth) unit_009E(c, 62u, depth + 1u); else { c.pc = 0x00378690u; return; } if (c.pc != 0x0013A634u) [[unlikely]] return; }
L_0013A634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013A648; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 26184u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 49152ull;
    c.budget -= 3;
L_0013A648:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0013A64C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013A660:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26188u), c.r[3].w[0]);  c.pc = t; return; }
L_0013A670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26188u), 0u);  c.pc = t; return; }
L_0013A680:
    set32(c.r[6], 0u + 8192u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 4;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0013A690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    set32(c.r[10], ld32((c.r[1].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0013A7E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_0013A6B0:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_0013A74C; } }
    c.r[12].d[0] = c.r[6].d[0] << 33;
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[12].d[0] = c.r[12].d[0] >> 33;
    c.r[1].d[0] = 0ll < c.r[12].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_0013A7C0; } }
    c.r[1].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[11], c.r[12].w[0] - 2u);  if (t) { goto L_0013A738; } }
    c.budget -= 1;
L_0013A6F0:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A6F0u | kUnwind; return; } goto L_0013A6F0; } }
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[9].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;  if (t) { goto L_0013A73C; } }
L_0013A720:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 6;
L_0013A738:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0013A73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A720u | kUnwind; return; } goto L_0013A720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[5].w[0] + 3u);  if (t) { goto L_0013A7C4; } }
L_0013A74C:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (t) { goto L_0013A7C0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[6].w[0] - 2u);  if (t) { goto L_0013A790; } }
    c.budget -= 1;
L_0013A768:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] + 2u);
    c.r[2].d[0] = c.r[11].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A768u | kUnwind; return; } goto L_0013A768; } }
    c.budget -= 1;
L_0013A790:
    c.r[1].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013A7C0; } }
    c.budget -= 1;
L_0013A7A0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[2].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A7A0u | kUnwind; return; } goto L_0013A7A0; } }
    c.budget -= 1;
L_0013A7C0:
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.budget -= 1;
L_0013A7C4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0013A7D4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0013A7D4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013A6B0u | kUnwind; return; } goto L_0013A6B0; } }
L_0013A7E8:
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103E20u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 525u, depth); }
L_0013A7F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 18;
    { st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0025(c, 235u, depth); }
L_0013A840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] - 11104u);
    st8((c.r[3].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013A878u) [[unlikely]] return; }
L_0013A878:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A888u); st8((c.r[2].w[0] + 89u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 260u, depth + 1u); else { c.pc = 0x0013B060u; return; } if (c.pc != 0x0013A888u) [[unlikely]] return; }
L_0013A888:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013A8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4560u);
    set32(c.r[6], 0u + 512u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0013A8BCu) [[unlikely]] return; }
L_0013A8BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 3792u);
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A8D0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0013A8D0u) [[unlikely]] return; }
L_0013A8D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 64u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 121u)));
    c.budget -= 24;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0013A940; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013A964; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0013A940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A948u); st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x0013A948u) [[unlikely]] return; }
L_0013A948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[2].w[0] - 10240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A958u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0013A958u) [[unlikely]] return; }
L_0013A958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0013A980; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0013A964:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0013A978; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013A97C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0013A978:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0013A97C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_0013A980:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013A9A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9A4u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0013A9A4u) [[unlikely]] return; }
L_0013A9A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013A9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9C0u);  if (depth < kMaxDepth) unit_003D(c, 254u, depth + 1u); else { c.pc = 0x001F7040u; return; } if (c.pc != 0x0013A9C0u) [[unlikely]] return; }
L_0013A9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9C8u);  if (depth < kMaxDepth) unit_000E(c, 269u, depth + 1u); else { c.pc = 0x0013B170u; return; } if (c.pc != 0x0013A9C8u) [[unlikely]] return; }
L_0013A9C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013A9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25312u);
    set32(c.r[6], 0u + 384u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013A9FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0013A9FCu) [[unlikely]] return; }
L_0013A9FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], c.r[3].w[0] - 11072u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25312u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
L_0013AA10:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[6].w[0] + 16u), c.f[3]);
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013AA10u | kUnwind; return; } goto L_0013AA10; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013AA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0013ABD8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_0013AB4C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013AAE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0013AC28; } }
L_0013AABC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AACCu); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0013AACCu) [[unlikely]] return; }
L_0013AACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAD4u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0013AAD4u) [[unlikely]] return; }
L_0013AAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AADCu);  if (depth < kMaxDepth) unit_001F(c, 69u, depth + 1u); else { c.pc = 0x0017CBA0u; return; } if (c.pc != 0x0013AADCu) [[unlikely]] return; }
L_0013AADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AC24; } }
L_0013AAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAECu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0013AAECu) [[unlikely]] return; }
L_0013AAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AAFCu);  if (depth < kMaxDepth) unit_001F(c, 70u, depth + 1u); else { c.pc = 0x0017CBC0u; return; } if (c.pc != 0x0013AAFCu) [[unlikely]] return; }
L_0013AAFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB1Cu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003E(c, 414u, depth + 1u); else { c.pc = 0x001FB000u; return; } if (c.pc != 0x0013AB1Cu) [[unlikely]] return; }
L_0013AB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB24u);  if (depth < kMaxDepth) unit_0017(c, 254u, depth + 1u); else { c.pc = 0x0015E610u; return; } if (c.pc != 0x0013AB24u) [[unlikely]] return; }
L_0013AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB2Cu);  if (depth < kMaxDepth) unit_0017(c, 270u, depth + 1u); else { c.pc = 0x0015E850u; return; } if (c.pc != 0x0013AB2Cu) [[unlikely]] return; }
L_0013AB2C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB38u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0013AB38u) [[unlikely]] return; }
L_0013AB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013AB40u) [[unlikely]] return; }
L_0013AB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AC24; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013AB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB54u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013AB54u) [[unlikely]] return; }
L_0013AB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AB9C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AB9C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AB9Cu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0013AB9Cu) [[unlikely]] return; }
L_0013AB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABA4u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0013ABA4u) [[unlikely]] return; }
L_0013ABA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABACu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0013ABACu) [[unlikely]] return; }
L_0013ABAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABB4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0013ABB4u) [[unlikely]] return; }
L_0013ABB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABC0u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0013ABC0u) [[unlikely]] return; }
L_0013ABC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABD0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x0013ABD0u) [[unlikely]] return; }
L_0013ABD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AC24; } }
L_0013ABD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABE0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013ABE0u) [[unlikely]] return; }
L_0013ABE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013ABF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013AC24; } }
L_0013ABF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ABF8u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0013ABF8u) [[unlikely]] return; }
L_0013ABF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC00u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0013AC00u) [[unlikely]] return; }
L_0013AC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC08u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0013AC08u) [[unlikely]] return; }
L_0013AC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC14u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0013AC14u) [[unlikely]] return; }
L_0013AC14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC24u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x0013AC24u) [[unlikely]] return; }
L_0013AC24:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0013AC28:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013AC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AC50u);  if (depth < kMaxDepth) unit_000E(c, 194u, depth + 1u); else { c.pc = 0x0013AA70u; return; } if (c.pc != 0x0013AC50u) [[unlikely]] return; }
L_0013AC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AC80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 10;
L_0013AC80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013AC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[6].w[0] + 2u);  if (t) { goto L_0013AEF0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_0013AE2C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0013AD94; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0013ACDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0013AF40; } }
L_0013ACDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 121u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0013ACF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013AD1C; } }
L_0013ACF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD04u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0013AD04u) [[unlikely]] return; }
L_0013AD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD0Cu);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0013AD0Cu) [[unlikely]] return; }
L_0013AD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD14u);  if (depth < kMaxDepth) unit_001F(c, 69u, depth + 1u); else { c.pc = 0x0017CBA0u; return; } if (c.pc != 0x0013AD14u) [[unlikely]] return; }
L_0013AD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
L_0013AD1C:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD30u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0013AD30u) [[unlikely]] return; }
L_0013AD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD38u);  if (depth < kMaxDepth) unit_003E(c, 417u, depth + 1u); else { c.pc = 0x001FB080u; return; } if (c.pc != 0x0013AD38u) [[unlikely]] return; }
L_0013AD38:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD44u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0013AD44u) [[unlikely]] return; }
L_0013AD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD4Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013AD4Cu) [[unlikely]] return; }
L_0013AD4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 121u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AF3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AF3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD7Cu);  if (depth < kMaxDepth) unit_0029(c, 283u, depth + 1u); else { c.pc = 0x001A7470u; return; } if (c.pc != 0x0013AD7Cu) [[unlikely]] return; }
L_0013AD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
L_0013AD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD8Cu);  if (depth < kMaxDepth) unit_0029(c, 133u, depth + 1u); else { c.pc = 0x001A5C20u; return; } if (c.pc != 0x0013AD8Cu) [[unlikely]] return; }
L_0013AD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
L_0013AD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AD9Cu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0013AD9Cu) [[unlikely]] return; }
L_0013AD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADACu);  if (depth < kMaxDepth) unit_001F(c, 70u, depth + 1u); else { c.pc = 0x0017CBC0u; return; } if (c.pc != 0x0013ADACu) [[unlikely]] return; }
L_0013ADAC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADCCu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003E(c, 417u, depth + 1u); else { c.pc = 0x001FB080u; return; } if (c.pc != 0x0013ADCCu) [[unlikely]] return; }
L_0013ADCC:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADD8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0013ADD8u) [[unlikely]] return; }
L_0013ADD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ADE0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013ADE0u) [[unlikely]] return; }
L_0013ADE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 121u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AF3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AF3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE10u);  if (depth < kMaxDepth) unit_0029(c, 283u, depth + 1u); else { c.pc = 0x001A7470u; return; } if (c.pc != 0x0013AE10u) [[unlikely]] return; }
L_0013AE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
L_0013AE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE20u);  if (depth < kMaxDepth) unit_0029(c, 133u, depth + 1u); else { c.pc = 0x001A5C20u; return; } if (c.pc != 0x0013AE20u) [[unlikely]] return; }
L_0013AE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013AE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AE34u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013AE34u) [[unlikely]] return; }
L_0013AE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AEB4; } }
L_0013AE3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013AEB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 121u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_0013AE90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0013AEAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_0013AE90:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEA0u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x0013AEA0u) [[unlikely]] return; }
L_0013AEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AEB4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0013AEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEB4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0013AEB4u) [[unlikely]] return; }
L_0013AEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEBCu);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0013AEBCu) [[unlikely]] return; }
L_0013AEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEC4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0013AEC4u) [[unlikely]] return; }
L_0013AEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AECCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0013AECCu) [[unlikely]] return; }
L_0013AECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AED8u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0013AED8u) [[unlikely]] return; }
L_0013AED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEE8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x0013AEE8u) [[unlikely]] return; }
L_0013AEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013AF3C; } }
L_0013AEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AEF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0013AEF8u) [[unlikely]] return; }
L_0013AEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0013AF3C; } }
L_0013AF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF10u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0013AF10u) [[unlikely]] return; }
L_0013AF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF18u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0013AF18u) [[unlikely]] return; }
L_0013AF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF20u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0013AF20u) [[unlikely]] return; }
L_0013AF20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF2Cu); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0013AF2Cu) [[unlikely]] return; }
L_0013AF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x0013AF3Cu) [[unlikely]] return; }
L_0013AF3C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0013AF40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013AF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013AF60u);  if (depth < kMaxDepth) unit_000E(c, 220u, depth + 1u); else { c.pc = 0x0013AC90u; return; } if (c.pc != 0x0013AF60u) [[unlikely]] return; }
L_0013AF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013AFE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 121u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013AF88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 122u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013AFA0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0013AF88:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013AFD0; } }
L_0013AFA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0013AFBC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013AFC0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0013AFBC:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0013AFC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 120u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0013AFD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 6;
L_0013AFE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B010u);  if (depth < kMaxDepth) unit_0029(c, 112u, depth + 1u); else { c.pc = 0x001A5800u; return; } if (c.pc != 0x0013B010u) [[unlikely]] return; }
L_0013B010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B020u);  if (depth < kMaxDepth) unit_000E(c, 178u, depth + 1u); else { c.pc = 0x0013A7F0u; return; } if (c.pc != 0x0013B020u) [[unlikely]] return; }
L_0013B020:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B040u);  if (depth < kMaxDepth) unit_0029(c, 218u, depth + 1u); else { c.pc = 0x001A6590u; return; } if (c.pc != 0x0013B040u) [[unlikely]] return; }
L_0013B040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013B050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B050u);  if (depth < kMaxDepth) unit_000E(c, 178u, depth + 1u); else { c.pc = 0x0013A7F0u; return; } if (c.pc != 0x0013B050u) [[unlikely]] return; }
L_0013B050:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3524u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013B090; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3532u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013B110; } }
L_0013B090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0013B0F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013B10C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B0ECu); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 262u, depth + 1u); else { c.pc = 0x0013B120u; return; } if (c.pc != 0x0013B0ECu) [[unlikely]] return; }
L_0013B0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013B110; } }
L_0013B0F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013B110; } }
L_0013B10C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0013B110:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B130u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0013B130u) [[unlikely]] return; }
L_0013B130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B138u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0013B138u) [[unlikely]] return; }
L_0013B138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B140u);  if (depth < kMaxDepth) unit_0081(c, 2u, depth + 1u); else { c.pc = 0x00304010u; return; } if (c.pc != 0x0013B140u) [[unlikely]] return; }
L_0013B140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B148u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0013B148u) [[unlikely]] return; }
L_0013B148:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B154u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x0013B154u) [[unlikely]] return; }
L_0013B154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B15Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x0013B15Cu) [[unlikely]] return; }
L_0013B15C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B180u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0013B180u) [[unlikely]] return; }
L_0013B180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B188u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0013B188u) [[unlikely]] return; }
L_0013B188:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B1A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8400u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0013B2B8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013B2B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8052u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013B204; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 7872u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 748u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
L_0013B204:
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B244; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013B244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B238u); set32(c.r[4], c.r[17].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0013B238u) [[unlikely]] return; }
L_0013B238:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B244u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x0013B244u) [[unlikely]] return; }
L_0013B244:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8053u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013B278; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 7824u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 748u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
L_0013B278:
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013B2B8; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013B2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2ACu); set32(c.r[4], c.r[17].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0013B2ACu) [[unlikely]] return; }
L_0013B2AC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B2B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x0013B2B8u) [[unlikely]] return; }
L_0013B2B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013B2D0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[1], c.f[0]);  c.pc = t; return; }
L_0013B300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0013B320; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0013B340; } }
L_0013B320:
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B33Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 136u, depth + 1u); else { c.pc = 0x00113130u; return; } if (c.pc != 0x0013B33Cu) [[unlikely]] return; }
L_0013B33C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0013B340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 16384u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0013B370; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013B37C; } }
L_0013B370:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0013B39C; } }
L_0013B37C:
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B398u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 117u, depth + 1u); else { c.pc = 0x00112D90u; return; } if (c.pc != 0x0013B398u) [[unlikely]] return; }
L_0013B398:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0013B39C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B3B0:
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.f[12] = fp::mul(c.f[1], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00113220u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 143u, depth); }
L_0013B3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B3E0u);  if (depth < kMaxDepth) unit_0004(c, 155u, depth + 1u); else { c.pc = 0x001133A8u; return; } if (c.pc != 0x0013B3E0u) [[unlikely]] return; }
L_0013B3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63876ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B420u);  if (depth < kMaxDepth) unit_0004(c, 146u, depth + 1u); else { c.pc = 0x001132A8u; return; } if (c.pc != 0x0013B420u) [[unlikely]] return; }
L_0013B420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63876ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B460u);  if (depth < kMaxDepth) unit_0004(c, 111u, depth + 1u); else { c.pc = 0x00112AB8u; return; } if (c.pc != 0x0013B460u) [[unlikely]] return; }
L_0013B460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63876ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B4A0u);  if (depth < kMaxDepth) unit_0004(c, 165u, depth + 1u); else { c.pc = 0x001134A8u; return; } if (c.pc != 0x0013B4A0u) [[unlikely]] return; }
L_0013B4A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63876ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B4D0:
    c.f[12] = c.f[12] & fp::kAbs;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_0013B4E0:
    c.f[12] = fp::sqrt(c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_0013B500:
    c.f[12] = fp::sqrt(c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_0013B520:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013B55C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0013B578; } }
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_0013B578; } }
L_0013B55C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0013B578; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
L_0013B578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B580:
    c.f[12] = fp::cvt_w_s(c.f[12]);
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.f[12];  c.pc = t; return; }
L_0013B590:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001135D0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 175u, depth); }
L_0013B5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 192u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 194u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[5].d[0] | 256ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 200u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 196u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 204u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 206u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 212u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 208u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 216u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 218u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 15200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 224u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 220u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st16((c.r[1].w[0] + 228u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st16((c.r[1].w[0] + 230u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 15328u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 236u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 240u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 244u), c.r[5].w[0]);  c.pc = t; return; }
L_0013B660:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 7u, 4u, 5u);
    vu::move(c.vu0, 15u, 6u, 0u);
    vu::addbc(c.vu0, 4u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::opmula(c.vu0, 6u, 7u);
    vu::opmsub(c.vu0, 9u, 7u, 6u);
    vu::opmula(c.vu0, 7u, 9u);
    vu::opmsub(c.vu0, 8u, 9u, 7u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B6A8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 133u, depth + 1u); else { c.pc = 0x00135B70u; return; } if (c.pc != 0x0013B6A8u) [[unlikely]] return; }
L_0013B6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B6C0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0013B6C0u) [[unlikely]] return; }
L_0013B6C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B6D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 14u, 7u, 4u, 5u);
    vu::opmula(c.vu0, 6u, 7u);
    vu::opmsub(c.vu0, 9u, 7u, 6u);
    vu::opmula(c.vu0, 7u, 9u);
    vu::opmsub(c.vu0, 8u, 9u, 7u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B718u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 133u, depth + 1u); else { c.pc = 0x00135B70u; return; } if (c.pc != 0x0013B718u) [[unlikely]] return; }
L_0013B718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B730u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0013B730u) [[unlikely]] return; }
L_0013B730:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B740:
    c.f[0] = c.r[4].w[0];
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38490000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[1] = c.r[2].w[0];
    c.f[22] = c.f[12];
    c.f[21] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B77Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0004(c, 143u, depth + 1u); else { c.pc = 0x00113220u; return; } if (c.pc != 0x0013B77Cu) [[unlikely]] return; }
L_0013B77C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B79Cu);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x0013B79Cu) [[unlikely]] return; }
L_0013B79C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59269ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 68u);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0013B7DCu) [[unlikely]] return; }
L_0013B7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B7E4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x0013B7E4u) [[unlikely]] return; }
L_0013B7E4:
    st32((c.r[16].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B800u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x0013B800u) [[unlikely]] return; }
L_0013B800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B808u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0004(c, 143u, depth + 1u); else { c.pc = 0x00113220u; return; } if (c.pc != 0x0013B808u) [[unlikely]] return; }
L_0013B808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43600000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45000000u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[5].d[0] = c.r[2].d[0] | 61440ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 4896ull;
    c.f[12] = c.r[5].w[0];
    c.f[14] = c.r[3].w[0];
    st32((c.r[1].w[0] + 6240u), c.f[0]);
    c.f[13] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B844u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x0013B844u) [[unlikely]] return; }
L_0013B844:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013B860:
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38490000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[1] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B884u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 143u, depth + 1u); else { c.pc = 0x00113220u; return; } if (c.pc != 0x0013B884u) [[unlikely]] return; }
L_0013B884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43600000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44EC0000u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 57344ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[6].d[0] = c.r[2].d[0] | 61440ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 5344ull;
    c.f[12] = c.r[7].w[0];
    c.f[13] = c.r[6].w[0];
    c.f[14] = c.r[5].w[0];
    c.f[15] = c.r[3].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B8CCu); st32((c.r[1].w[0] + 6240u), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x0013B8CCu) [[unlikely]] return; }
L_0013B8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x450A0000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013B900u); c.r[4].d[0] = c.r[2].d[0] | 5792ull;  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x0013B900u) [[unlikely]] return; }
L_0013B900:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013B910:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[1].w[0] + 240u), c.r[4].w[0]);  if (t) { goto L_0013B950; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0013B940; } }
    set32(c.r[3], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_0013B960; } }
L_0013B940:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_0013B960; } }
L_0013B950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 244u), c.r[3].w[0]);
    c.budget -= 4;
L_0013B960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013B970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[5].w[0]) & ~15u, c.vu0.vf[9]);  c.pc = t; return; }
L_0013B9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    c.budget -= 8;
L_0013B9D0:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[9]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 11;
    { const bool t = 0ull != c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013B9D0u | kUnwind; return; } goto L_0013B9D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BA10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    vu::mr32(c.vu0, 15u, 5u, 0u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);  c.pc = t; return; }
L_0013BA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[2].d[0] | 240ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[2].d[0] | 192ull;
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0013BAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013BAC8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0013BAAC:
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_0013BAC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    vu::mr32(c.vu0, 15u, 5u, 0u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 6u, 5u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    vu::mr32(c.vu0, 15u, 7u, 6u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);  c.pc = t; return; }
L_0013BB00:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[7].d[0] | 240ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[7].d[0] | 192ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0013BB64; } }
    c.r[3].d[0] = c.r[7].d[0] | 244ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);  if (t) { goto L_0013BB98; } }
L_0013BB64:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.budget -= 13;
L_0013BB98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[2].d[0] | 240ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 192ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0013BBC8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0013BBC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_0013BBF0; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0013BC44; } }
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.budget -= 1;
L_0013BBF0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 21;
L_0013BC44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[2].d[0] | 240ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[2].d[0] | 192ull;
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0013BCBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0013BCD8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0013BCBC:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_0013BCD8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013BD0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.budget -= 11;
L_0013BD0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013BD20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[3].d[0] | 240ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[3].d[0] | 192ull;
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0013BDA0; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 8;
L_0013BDA0:
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[8].d[0] = c.r[8].d[0] | 64ull;
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);  c.pc = t; return; }
L_0013BDE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[4], c.r[0]);  c.pc = t; return; }
L_0013BE20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[0] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 244u)));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.f[0]);  c.pc = t; return; }
L_0013BEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::move(c.vu0, 14u, 7u, 4u);
    vu::move(c.vu0, 14u, 8u, 5u);
    vu::move(c.vu0, 14u, 9u, 6u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[4], c.r[0]);  c.pc = t; return; }
L_0013BF10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);  c.pc = t; return; }
L_0013BF40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 1u, 4u, 0u, 0u);
    vu::sub(c.vu0, 1u, 5u, 0u, 0u);
    vu::sub(c.vu0, 1u, 6u, 0u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);  c.pc = t; return; }
L_0013BF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 244ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[2]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[9].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 14u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    vu::maddbc(c.vu0, 15u, 15u, 7u, c.vu0.vf[11].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[13]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[14]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[15]);  c.pc = t; return; }
}

}
