#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0049[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0,
    67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106,
    0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146,
    0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196,
    0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244,
    0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265,
    0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0,
    0, 289, 0, 290, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 316,
    0, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0049(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00224000;
    case 2u: goto L_00224030;
    case 3u: goto L_00224064;
    case 4u: goto L_0022406C;
    case 5u: goto L_00224080;
    case 6u: goto L_00224094;
    case 7u: goto L_002240A0;
    case 8u: goto L_002240AC;
    case 9u: goto L_002240BC;
    case 10u: goto L_002240E4;
    case 11u: goto L_00224104;
    case 12u: goto L_00224128;
    case 13u: goto L_00224130;
    case 14u: goto L_00224164;
    case 15u: goto L_002241A0;
    case 16u: goto L_00224200;
    case 17u: goto L_00224278;
    case 18u: goto L_002242EC;
    case 19u: goto L_00224380;
    case 20u: goto L_002243A0;
    case 21u: goto L_002243DC;
    case 22u: goto L_002243E8;
    case 23u: goto L_0022443C;
    case 24u: goto L_00224460;
    case 25u: goto L_00224490;
    case 26u: goto L_00224498;
    case 27u: goto L_002244A0;
    case 28u: goto L_002244A8;
    case 29u: goto L_002244C0;
    case 30u: goto L_00224538;
    case 31u: goto L_0022454C;
    case 32u: goto L_00224560;
    case 33u: goto L_00224590;
    case 34u: goto L_00224598;
    case 35u: goto L_002245A4;
    case 36u: goto L_002245B0;
    case 37u: goto L_002245BC;
    case 38u: goto L_002245C4;
    case 39u: goto L_002245D0;
    case 40u: goto L_002245DC;
    case 41u: goto L_002245F0;
    case 42u: goto L_002246C8;
    case 43u: goto L_002247D0;
    case 44u: goto L_00224838;
    case 45u: goto L_002248A8;
    case 46u: goto L_00224990;
    case 47u: goto L_00224A00;
    case 48u: goto L_00224A14;
    case 49u: goto L_00224AE4;
    case 50u: goto L_00224BD0;
    case 51u: goto L_00224C38;
    case 52u: goto L_00224CA8;
    case 53u: goto L_00224D90;
    case 54u: goto L_00224DA0;
    case 55u: goto L_00224DB0;
    case 56u: goto L_00224DE8;
    case 57u: goto L_00224E00;
    case 58u: goto L_00224E08;
    case 59u: goto L_00224E10;
    case 60u: goto L_00224E20;
    case 61u: goto L_00224E28;
    case 62u: goto L_00224E44;
    case 63u: goto L_00224E58;
    case 64u: goto L_00224E60;
    case 65u: goto L_00224E70;
    case 66u: goto L_00224E78;
    case 67u: goto L_00224E80;
    case 68u: goto L_00224E9C;
    case 69u: goto L_00224EF0;
    case 70u: goto L_00224F1C;
    case 71u: goto L_00224F58;
    case 72u: goto L_00224F68;
    case 73u: goto L_00224FBC;
    case 74u: goto L_00224FD0;
    case 75u: goto L_00224FF8;
    case 76u: goto L_00225060;
    case 77u: goto L_00225080;
    case 78u: goto L_002250B4;
    case 79u: goto L_002252C0;
    case 80u: goto L_0022536C;
    case 81u: goto L_00225378;
    case 82u: goto L_00225404;
    case 83u: goto L_00225460;
    case 84u: goto L_002254A4;
    case 85u: goto L_002254E8;
    case 86u: goto L_002257AC;
    case 87u: goto L_0022587C;
    case 88u: goto L_00225930;
    case 89u: goto L_00225964;
    case 90u: goto L_00225970;
    case 91u: goto L_00225978;
    case 92u: goto L_0022598C;
    case 93u: goto L_0022599C;
    case 94u: goto L_002259AC;
    case 95u: goto L_002259B4;
    case 96u: goto L_002259BC;
    case 97u: goto L_002259CC;
    case 98u: goto L_002259D4;
    case 99u: goto L_002259DC;
    case 100u: goto L_00225A00;
    case 101u: goto L_00225A34;
    case 102u: goto L_00225A40;
    case 103u: goto L_00225A48;
    case 104u: goto L_00225A5C;
    case 105u: goto L_00225A6C;
    case 106u: goto L_00225A7C;
    case 107u: goto L_00225A84;
    case 108u: goto L_00225A8C;
    case 109u: goto L_00225A9C;
    case 110u: goto L_00225AA4;
    case 111u: goto L_00225AAC;
    case 112u: goto L_00225AD0;
    case 113u: goto L_00225B04;
    case 114u: goto L_00225B10;
    case 115u: goto L_00225B18;
    case 116u: goto L_00225B2C;
    case 117u: goto L_00225B3C;
    case 118u: goto L_00225B4C;
    case 119u: goto L_00225B54;
    case 120u: goto L_00225B5C;
    case 121u: goto L_00225B6C;
    case 122u: goto L_00225B74;
    case 123u: goto L_00225B7C;
    case 124u: goto L_00225BA0;
    case 125u: goto L_00225BD4;
    case 126u: goto L_00225BE0;
    case 127u: goto L_00225BE8;
    case 128u: goto L_00225BFC;
    case 129u: goto L_00225C0C;
    case 130u: goto L_00225C1C;
    case 131u: goto L_00225C24;
    case 132u: goto L_00225C2C;
    case 133u: goto L_00225C3C;
    case 134u: goto L_00225C44;
    case 135u: goto L_00225C4C;
    case 136u: goto L_00225C70;
    case 137u: goto L_00225C98;
    case 138u: goto L_00225CA4;
    case 139u: goto L_00225CAC;
    case 140u: goto L_00225CB4;
    case 141u: goto L_00225CC4;
    case 142u: goto L_00225CD4;
    case 143u: goto L_00225CDC;
    case 144u: goto L_00225CE4;
    case 145u: goto L_00225CF4;
    case 146u: goto L_00225CFC;
    case 147u: goto L_00225D04;
    case 148u: goto L_00225D20;
    case 149u: goto L_00225D30;
    case 150u: goto L_00225D40;
    case 151u: goto L_00225D88;
    case 152u: goto L_00225DCC;
    case 153u: goto L_00225E0C;
    case 154u: goto L_00225E20;
    case 155u: goto L_00225E34;
    case 156u: goto L_00225E48;
    case 157u: goto L_00225E54;
    case 158u: goto L_00225E60;
    case 159u: goto L_00225E70;
    case 160u: goto L_00225E78;
    case 161u: goto L_00225E8C;
    case 162u: goto L_00225EF8;
    case 163u: goto L_00225F00;
    case 164u: goto L_00225F0C;
    case 165u: goto L_00225F1C;
    case 166u: goto L_00225F24;
    case 167u: goto L_00225F2C;
    case 168u: goto L_00225F3C;
    case 169u: goto L_00225F44;
    case 170u: goto L_00225F6C;
    case 171u: goto L_00225F74;
    case 172u: goto L_00225F80;
    case 173u: goto L_00225FAC;
    case 174u: goto L_00225FB4;
    case 175u: goto L_00225FC0;
    case 176u: goto L_00226010;
    case 177u: goto L_00226074;
    case 178u: goto L_0022608C;
    case 179u: goto L_00226094;
    case 180u: goto L_0022609C;
    case 181u: goto L_002260A4;
    case 182u: goto L_0022610C;
    case 183u: goto L_00226160;
    case 184u: goto L_002261BC;
    case 185u: goto L_002261C4;
    case 186u: goto L_002261CC;
    case 187u: goto L_002261D4;
    case 188u: goto L_002261E4;
    case 189u: goto L_002261EC;
    case 190u: goto L_002261F8;
    case 191u: goto L_00226230;
    case 192u: goto L_00226270;
    case 193u: goto L_002262CC;
    case 194u: goto L_002262E4;
    case 195u: goto L_002262F4;
    case 196u: goto L_002262FC;
    case 197u: goto L_00226304;
    case 198u: goto L_00226360;
    case 199u: goto L_002263B4;
    case 200u: goto L_00226408;
    case 201u: goto L_00226410;
    case 202u: goto L_00226418;
    case 203u: goto L_00226420;
    case 204u: goto L_00226430;
    case 205u: goto L_00226438;
    case 206u: goto L_00226444;
    case 207u: goto L_0022647C;
    case 208u: goto L_002264B0;
    case 209u: goto L_002265EC;
    case 210u: goto L_00226650;
    case 211u: goto L_002266B4;
    case 212u: goto L_002267E4;
    case 213u: goto L_00226834;
    case 214u: goto L_00226884;
    case 215u: goto L_00226950;
    case 216u: goto L_00226A8C;
    case 217u: goto L_00226AF0;
    case 218u: goto L_00226B54;
    case 219u: goto L_00226C84;
    case 220u: goto L_00226CD4;
    case 221u: goto L_00226D24;
    case 222u: goto L_00226DF0;
    case 223u: goto L_00226E18;
    case 224u: goto L_00226E80;
    case 225u: goto L_00226EA0;
    case 226u: goto L_00226F10;
    case 227u: goto L_002270EC;
    case 228u: goto L_00227100;
    case 229u: goto L_002271AC;
    case 230u: goto L_002271B8;
    case 231u: goto L_00227278;
    case 232u: goto L_002272D4;
    case 233u: goto L_0022766C;
    case 234u: goto L_00227724;
    case 235u: goto L_002277E0;
    case 236u: goto L_00227814;
    case 237u: goto L_00227820;
    case 238u: goto L_00227828;
    case 239u: goto L_0022783C;
    case 240u: goto L_0022784C;
    case 241u: goto L_0022785C;
    case 242u: goto L_00227864;
    case 243u: goto L_0022786C;
    case 244u: goto L_0022787C;
    case 245u: goto L_00227884;
    case 246u: goto L_0022788C;
    case 247u: goto L_002278B0;
    case 248u: goto L_002278E4;
    case 249u: goto L_002278F0;
    case 250u: goto L_002278F8;
    case 251u: goto L_0022790C;
    case 252u: goto L_0022791C;
    case 253u: goto L_0022792C;
    case 254u: goto L_00227934;
    case 255u: goto L_0022793C;
    case 256u: goto L_0022794C;
    case 257u: goto L_00227954;
    case 258u: goto L_0022795C;
    case 259u: goto L_00227980;
    case 260u: goto L_002279B4;
    case 261u: goto L_002279C0;
    case 262u: goto L_002279C8;
    case 263u: goto L_002279DC;
    case 264u: goto L_002279EC;
    case 265u: goto L_002279FC;
    case 266u: goto L_00227A04;
    case 267u: goto L_00227A0C;
    case 268u: goto L_00227A1C;
    case 269u: goto L_00227A24;
    case 270u: goto L_00227A2C;
    case 271u: goto L_00227A50;
    case 272u: goto L_00227A84;
    case 273u: goto L_00227A90;
    case 274u: goto L_00227A98;
    case 275u: goto L_00227AAC;
    case 276u: goto L_00227ABC;
    case 277u: goto L_00227ACC;
    case 278u: goto L_00227AD4;
    case 279u: goto L_00227ADC;
    case 280u: goto L_00227AEC;
    case 281u: goto L_00227AF4;
    case 282u: goto L_00227AFC;
    case 283u: goto L_00227B20;
    case 284u: goto L_00227B48;
    case 285u: goto L_00227B54;
    case 286u: goto L_00227B5C;
    case 287u: goto L_00227B64;
    case 288u: goto L_00227B74;
    case 289u: goto L_00227B84;
    case 290u: goto L_00227B8C;
    case 291u: goto L_00227B94;
    case 292u: goto L_00227BA4;
    case 293u: goto L_00227BAC;
    case 294u: goto L_00227BB4;
    case 295u: goto L_00227BD0;
    case 296u: goto L_00227BE0;
    case 297u: goto L_00227BF0;
    case 298u: goto L_00227C7C;
    case 299u: goto L_00227CAC;
    case 300u: goto L_00227CF4;
    case 301u: goto L_00227DC8;
    case 302u: goto L_00227DE4;
    case 303u: goto L_00227DF4;
    case 304u: goto L_00227E38;
    case 305u: goto L_00227E4C;
    case 306u: goto L_00227E58;
    case 307u: goto L_00227E64;
    case 308u: goto L_00227E74;
    case 309u: goto L_00227E7C;
    case 310u: goto L_00227EA0;
    case 311u: goto L_00227EC4;
    case 312u: goto L_00227ECC;
    case 313u: goto L_00227ED8;
    case 314u: goto L_00227EE8;
    case 315u: goto L_00227EF0;
    case 316u: goto L_00227EFC;
    case 317u: goto L_00227F0C;
    case 318u: goto L_00227F14;
    case 319u: goto L_00227F1C;
    case 320u: goto L_00227F2C;
    case 321u: goto L_00227F34;
    case 322u: goto L_00227F58;
    case 323u: goto L_00227F60;
    case 324u: goto L_00227F6C;
    case 325u: goto L_00227FD0;
    default: bad_entry(c, 0x00224000u); return;
    }
L_00224000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 3808u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 3856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224030u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00224030u) [[unlikely]] return; }
L_00224030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00224170; } }
L_00224064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022406Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022406Cu) [[unlikely]] return; }
L_0022406C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224080u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00224080u) [[unlikely]] return; }
L_00224080:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224094u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00224094u) [[unlikely]] return; }
L_00224094:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240A0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002240A0u) [[unlikely]] return; }
L_002240A0:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240ACu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002240ACu) [[unlikely]] return; }
L_002240AC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240BCu); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002240BCu) [[unlikely]] return; }
L_002240BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_002240F0; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240E4u); set32(c.r[4], ld32((c.r[2].w[0] + 224u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002240E4u) [[unlikely]] return; }
L_002240E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0022410C; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_002240F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224104u); set32(c.r[4], ld32((c.r[2].w[0] + 224u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00224104u) [[unlikely]] return; }
L_00224104:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 2;
L_0022410C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 68u));
    c.f[14] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224128u); c.f[12] = ld32((c.r[2].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00224128u) [[unlikely]] return; }
L_00224128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224130u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00224130u) [[unlikely]] return; }
L_00224130:
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224164u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00224164u) [[unlikely]] return; }
L_00224164:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_00224170:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224064u | kUnwind; return; } goto L_00224064; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002241A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_00224358; } }
    c.r[16].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_00224270; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002241F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0022435C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002241F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224200u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00224200u) [[unlikely]] return; }
L_00224200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224358; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 17280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 19888u);
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00224358; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_00224270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224278u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00224278u) [[unlikely]] return; }
L_00224278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002242E0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 17280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 19888u);
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 84u), 0u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 24;
L_002242E0:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242ECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002242ECu) [[unlikely]] return; }
L_002242EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224358; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[3].w[0] + 17280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[3].w[0] + 19888u);
    st32((c.r[2].w[0] + 128u), c.f[3]);
    st32((c.r[2].w[0] + 132u), c.f[2]);
    st32((c.r[2].w[0] + 136u), c.f[1]);
    st32((c.r[2].w[0] + 140u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    c.r[3].d[0] = 0ull | 32768ull;
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 25;
L_00224358:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0022435C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00224380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 3888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002243A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[16], c.r[20].w[0] + 320u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00224410; } }
L_002243DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002243E8u); st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002243E8u) [[unlikely]] return; }
L_002243E8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] + 71u);
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 10;
L_00224410:
    c.r[19].d[0] = c.r[17].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002243DCu | kUnwind; return; } goto L_002243DC; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022443Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0022443Cu) [[unlikely]] return; }
L_0022443C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00224460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 3904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00224490u); set32(c.r[5], c.r[16].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00224490u) [[unlikely]] return; }
L_00224490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224498u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00224498u) [[unlikely]] return; }
L_00224498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244A0u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002244A0u) [[unlikely]] return; }
L_002244A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244A8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002244A8u) [[unlikely]] return; }
L_002244A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002244C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_0022469C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00224504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002247AC; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00224504:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    st32((c.r[20].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[20].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 72u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[19], c.r[0]);  if (t) { goto L_00224680; } }
L_00224538:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022454Cu); st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0022454Cu) [[unlikely]] return; }
L_0022454C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224560u); st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00224560u) [[unlikely]] return; }
L_00224560:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002245E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25248u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00224590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), 0u);  if (t) { goto L_002245E8; } }
L_00224598:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002245E8; } }
L_002245A4:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002245E8; } }
L_002245B0:
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002245E8; } }
L_002245BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), 0u);  if (t) { goto L_002245E8; } }
L_002245C4:
    set32(c.r[2], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002245E8; } }
L_002245D0:
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_002245E8; } }
L_002245DC:
    set32(c.r[2], 0u - 96u);
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_002245E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002245F0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002245F0u) [[unlikely]] return; }
L_002245F0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F130000u);  if (t) { goto L_0022465C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);  if (t) { goto L_0022464C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F060000u);  if (t) { goto L_0022463C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_00224630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_0022466C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_00224630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_00224668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F060000u);
    c.budget -= 1;
L_0022463C:
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_00224668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.budget -= 1;
L_0022464C:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_00224668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F130000u);
    c.budget -= 1;
L_0022465C:
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_00224668:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0022466C:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 2048u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
L_00224680:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224538u | kUnwind; return; } goto L_00224538; } }
    set32(c.r[3], 0u + 120u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022469C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002246B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002246B8:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 65535ull;  if (t) { goto L_00224730; } }
L_002246C8:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[5].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 26;
L_00224730:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002246C8u | kUnwind; return; } goto L_002246C8; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00224770; } }
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_00224774; } }
L_00224770:
    st32((c.r[20].w[0] + 64u), 0u);
    c.budget -= 1;
L_00224774:
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002247A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_002247A8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002247AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002247D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0022487C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_002247F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224988; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002247F4:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[5], c.r[0]);  if (t) { goto L_00224860; } }
L_00224838:
    set32(c.r[6], ld32((c.r[9].w[0] + 96u)));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[9].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8192u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 10;
L_00224860:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224838u | kUnwind; return; } goto L_00224838; } }
    set32(c.r[3], 0u + 240u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022487C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00224898; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00224898:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull | 65535ull;  if (t) { goto L_00224900; } }
L_002248A8:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    st32((c.r[6].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 22;
L_00224900:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002248A8u | kUnwind; return; } goto L_002248A8; } }
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00224940; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_00224944; } }
L_00224940:
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 1;
L_00224944:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00224978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_00224978:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00224988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00224990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_00224ABC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002249D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00224BB4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002249D4:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 68u), 0u);
    set32(c.r[17], 0u - 4096u);
    st32((c.r[20].w[0] + 72u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[19], c.r[0]);  if (t) { goto L_00224AA0; } }
L_00224A00:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A14u); st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00224A14u) [[unlikely]] return; }
L_00224A14:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 16384u);  if (t) { goto L_00224A78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 8192u);  if (t) { goto L_00224A6C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8192u);  if (t) { goto L_00224A60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 16384u);  if (t) { goto L_00224A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 128u), 0u);  if (t) { goto L_00224A84; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 1;
L_00224A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00224A80; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 1;
L_00224A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00224A80; } }
    set32(c.r[3], 0u - 8192u);
    c.budget -= 1;
L_00224A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00224A80; } }
    set32(c.r[3], 0u - 16384u);
    c.budget -= 1;
L_00224A78:
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_00224A80:
    st32((c.r[18].w[0] + 128u), 0u);
    c.budget -= 1;
L_00224A84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 2048u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 7;
L_00224AA0:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224A00u | kUnwind; return; } goto L_00224A00; } }
    set32(c.r[3], 0u + 120u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00224ABC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00224AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00224AD8:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00224B38; } }
L_00224AE4:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 3072u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 21;
L_00224B38:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224AE4u | kUnwind; return; } goto L_00224AE4; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00224B78; } }
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_00224B7C; } }
L_00224B78:
    st32((c.r[20].w[0] + 64u), 0u);
    c.budget -= 1;
L_00224B7C:
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00224BB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_00224BB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00224BB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00224BD0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00224C7C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00224BF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224D88; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00224BF4:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[5], c.r[0]);  if (t) { goto L_00224C60; } }
L_00224C38:
    set32(c.r[6], ld32((c.r[9].w[0] + 96u)));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[9].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8192u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 10;
L_00224C60:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224C38u | kUnwind; return; } goto L_00224C38; } }
    set32(c.r[3], 0u + 240u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00224C7C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00224C98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00224C98:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull | 65535ull;  if (t) { goto L_00224D00; } }
L_00224CA8:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    st32((c.r[6].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 22;
L_00224D00:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224CA8u | kUnwind; return; } goto L_00224CA8; } }
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00224D40; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_00224D44; } }
L_00224D40:
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 1;
L_00224D44:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00224D78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_00224D78:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 4;
L_00224D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00224D90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00224DA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00224DB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[16], c.r[21].w[0] + 320u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_00224EB8; } }
L_00224DE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 192u);  if (t) { goto L_00224E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E00u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00224E00u) [[unlikely]] return; }
L_00224E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E08u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00224E08u) [[unlikely]] return; }
L_00224E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E10u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00224E10u) [[unlikely]] return; }
L_00224E10:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E20u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00224E20u) [[unlikely]] return; }
L_00224E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E28u); set32(c.r[4], ld32((c.r[18].w[0] + 112u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00224E28u) [[unlikely]] return; }
L_00224E28:
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 144u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E44u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x00224E44u) [[unlikely]] return; }
L_00224E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_00224EA4; } }
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 1;
L_00224E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E58u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00224E58u) [[unlikely]] return; }
L_00224E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E60u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00224E60u) [[unlikely]] return; }
L_00224E60:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E70u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00224E70u) [[unlikely]] return; }
L_00224E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E78u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00224E78u) [[unlikely]] return; }
L_00224E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E80u); set32(c.r[4], ld32((c.r[18].w[0] + 112u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00224E80u) [[unlikely]] return; }
L_00224E80:
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 144u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E9Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x00224E9Cu) [[unlikely]] return; }
L_00224E9C:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00224EA4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_00224EB8:
    c.r[20].d[0] = c.r[17].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224DE8u | kUnwind; return; } goto L_00224DE8; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00224EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00224F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F1Cu);  if (depth < kMaxDepth) unit_0049(c, 222u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x00224F1Cu) [[unlikely]] return; }
L_00224F1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00224F5C; } }
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 141ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00224F50; } }
    c.r[1].d[0] = c.r[3].sd[0] < 147ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00224F58; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00224F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F58u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 459u, depth + 1u); else { c.pc = 0x00243630u; return; } if (c.pc != 0x00224F58u) [[unlikely]] return; }
L_00224F58:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00224F5C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F68u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00224F68u) [[unlikely]] return; }
L_00224F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00224FB4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 20576u);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 23872u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 17;
L_00224FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FBCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 158u, depth + 1u); else { c.pc = 0x001922E0u; return; } if (c.pc != 0x00224FBCu) [[unlikely]] return; }
L_00224FBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00224FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FF8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00224FF8u) [[unlikely]] return; }
L_00224FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225044; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 20576u);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 23872u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 17;
L_00225044:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00225060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00225080:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[3].w[0] + 8864u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[2], c.r[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[10], c.r[2], c.r[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00225100; } }
    set32(c.r[11], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_002250B4:
    c.r[6].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st8((c.r[11].w[0] + 234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 1u));
    st8((c.r[11].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 2u));
    st8((c.r[11].w[0] + 227u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[9].w[0] + 80u), 0u);
    st32((c.r[9].w[0] + 84u), 0u);
    st32((c.r[9].w[0] + 88u), 0u);
    st32((c.r[10].w[0] + 192u), c.r[5].w[0]);
    st8((c.r[11].w[0] + 241u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 3u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    st8((c.r[11].w[0] + 248u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_00225100:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[2].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002250B4u | kUnwind; return; } goto L_002250B4; } }
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 68u), 0u);
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 3936u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 3937u);
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 3938u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[15], c.r[3].w[0] + 3939u);
    st8((c.r[2].w[0] + 257u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[14], c.r[3].w[0] + 3940u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[13], c.r[3].w[0] + 3941u);
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[12], c.r[3].w[0] + 3944u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[11], c.r[3].w[0] + 3944u);
    st8((c.r[2].w[0] + 256u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[10], c.r[3].w[0] + 3944u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[3].w[0] + 3948u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[2].w[0] + 263u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[3].w[0] + 3952u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 3956u);
    set32(c.r[24], c.r[24].w[0] << 5);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 3960u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].d[0] = 0ull | 65535ull;
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] + 3964u);
    set32(c.r[15], c.r[15].w[0] << 5);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[14], c.r[14].w[0] << 5);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    st8((c.r[2].w[0] + 258u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 107;
    { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_002252C0; }
L_002252C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_00225334; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 742u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00225324; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00225324; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00225324:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 275u)));
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 277u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 274u)));  if (t) { goto L_00225360; } }
L_00225334:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00225350; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00225350:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 275u)));
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 277u)));
    c.budget -= 4;
L_00225360:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022536Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 208u, depth + 1u); else { c.pc = 0x002264B0u; return; } if (c.pc != 0x0022536Cu) [[unlikely]] return; }
L_0022536C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225378u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 215u, depth + 1u); else { c.pc = 0x00226950u; return; } if (c.pc != 0x00225378u) [[unlikely]] return; }
L_00225378:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0022585C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_002257A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00225404; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002253B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (t) { goto L_002258E4; } }
L_002253B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002258E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 256u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { goto L_002253E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 258u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002258E0; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.budget -= 1;
L_002253E0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002258E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225404u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004A(c, 97u, depth + 1u); else { c.pc = 0x00229C50u; return; } if (c.pc != 0x00225404u) [[unlikely]] return; }
L_00225404:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00225448; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 256u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 56;  if (t) { goto L_00225438; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 258u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00225448; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.budget -= 1;
L_00225438:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_002254D8; } }
L_00225448:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 6;
L_00225460:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 227u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 227u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225460u | kUnwind; return; } goto L_00225460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002254B8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_002254A4:
    st8((c.r[3].w[0] + 227u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
L_002254B8:
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002254A4u | kUnwind; return; } goto L_002254A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002258E0; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_002254D8:
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00225780; } }
    set32(c.r[8], c.r[17].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_002254E8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[9], c.r[8].w[0] + 248u);  if (t) { goto L_00225528; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[8].w[0] + 220u);  if (t) { goto L_00225518; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 241u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00225528; } }
L_00225518:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00225768; } }
L_00225528:
    c.r[7].d[0] = ld8((c.r[8].w[0] + 234u));
    set32(c.r[6], 0u + 168u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 169u);  if (t) { goto L_002255CC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 227u)));
    set32(c.r[9], c.r[8].w[0] + 227u);
    set32(c.r[6], c.r[7].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; st8((c.r[8].w[0] + 227u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00225560; } }
    set32(c.r[6], 0u + 30u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 88u), 0u);
    c.budget -= 5;
L_00225560:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[6].d[0] = c.r[6].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002255A8; } }
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), c.f[0]);  if (t) { goto L_00225768; } }
L_002255A8:
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 80u), c.f[0]);  if (t) { goto L_00225768; } }
    set32(c.r[6], 0u + 169u);
    c.budget -= 1;
L_002255CC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002256B8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 227u)));
    set32(c.r[9], c.r[8].w[0] + 227u);
    set32(c.r[6], c.r[7].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; st8((c.r[8].w[0] + 227u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00225608; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[6], 0u + 20u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 88u), 0u);
    c.budget -= 8;
L_00225608:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[6].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0022565C; } }
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D920000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E120000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), c.f[0]);  if (t) { goto L_00225768; } }
L_0022565C:
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[6].d[0] = c.r[6].d[0] | 35289ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C7C0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[7].d[0] = c.r[6].d[0] | 4037ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD9D0000u);
    c.r[6].d[0] = c.r[6].d[0] | 35289ull;
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 84u));
    c.f[2] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 192u), c.f[0]);  if (t) { goto L_00225768; } }
L_002256B8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 227u)));
    set32(c.r[9], c.r[8].w[0] + 227u);
    set32(c.r[6], c.r[7].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; st8((c.r[8].w[0] + 227u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002256E8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 192u), c.r[6].w[0]);
    set32(c.r[6], 0u + 20u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[3].w[0] + 84u), 0u);
    c.budget -= 7;
L_002256E8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[6].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00225724; } }
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 84u), c.f[0]);  if (t) { goto L_00225768; } }
L_00225724:
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C7C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 4037ull;
    c.f[2] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD9D0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[6].d[0] = c.r[6].d[0] | 35289ull;
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 84u));
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[3].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.budget -= 17;
L_00225768:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 6;
L_00225780:
    c.r[7].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[7].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[17].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002254E8u | kUnwind; return; } goto L_002254E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002258E0; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_002257A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00225840; } }
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_002257AC:
    set32(c.r[6], c.r[3].w[0] + 227u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 227u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00225828; } }
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00225830; } }
L_00225828:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00225830:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 4;
L_00225840:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002257ACu | kUnwind; return; } goto L_002257AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002258E0; } }
L_0022585C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8864u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    mmi::paddub(c.r[8], c.r[17], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002258C8; } }
    set32(c.r[9], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0022587C:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[3].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    st8((c.r[9].w[0] + 234u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[9].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[9].w[0] + 227u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0] + 80u), 0u);
    st32((c.r[7].w[0] + 84u), 0u);
    st32((c.r[7].w[0] + 88u), 0u);
    st32((c.r[8].w[0] + 192u), c.r[4].w[0]);
    st8((c.r[9].w[0] + 241u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    st8((c.r[9].w[0] + 248u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_002258C8:
    c.r[5].d[0] = c.r[10].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022587Cu | kUnwind; return; } goto L_0022587C; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002258E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 1;
L_002258E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002258FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00225900; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002258FC:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00225900:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00225930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 255u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225964u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225964u) [[unlikely]] return; }
L_00225964:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225970u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00225970u) [[unlikely]] return; }
L_00225970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225978u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225978u) [[unlikely]] return; }
L_00225978:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022598Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0022598Cu) [[unlikely]] return; }
L_0022598C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022599Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0022599Cu) [[unlikely]] return; }
L_0022599C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259ACu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002259ACu) [[unlikely]] return; }
L_002259AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002259B4u) [[unlikely]] return; }
L_002259B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259BCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002259BCu) [[unlikely]] return; }
L_002259BC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259CCu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002259CCu) [[unlikely]] return; }
L_002259CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002259D4u) [[unlikely]] return; }
L_002259D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259DCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002259DCu) [[unlikely]] return; }
L_002259DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 255u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A34u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225A34u) [[unlikely]] return; }
L_00225A34:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A40u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00225A40u) [[unlikely]] return; }
L_00225A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A48u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225A48u) [[unlikely]] return; }
L_00225A48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A5Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00225A5Cu) [[unlikely]] return; }
L_00225A5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A6Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00225A6Cu) [[unlikely]] return; }
L_00225A6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A7Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00225A7Cu) [[unlikely]] return; }
L_00225A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225A84u) [[unlikely]] return; }
L_00225A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A8Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225A8Cu) [[unlikely]] return; }
L_00225A8C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225A9Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00225A9Cu) [[unlikely]] return; }
L_00225A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00225AA4u) [[unlikely]] return; }
L_00225AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AACu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225AACu) [[unlikely]] return; }
L_00225AAC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 255u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B04u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225B04u) [[unlikely]] return; }
L_00225B04:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B10u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00225B10u) [[unlikely]] return; }
L_00225B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B18u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225B18u) [[unlikely]] return; }
L_00225B18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B2Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00225B2Cu) [[unlikely]] return; }
L_00225B2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B3Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00225B3Cu) [[unlikely]] return; }
L_00225B3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B4Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00225B4Cu) [[unlikely]] return; }
L_00225B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225B54u) [[unlikely]] return; }
L_00225B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B5Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225B5Cu) [[unlikely]] return; }
L_00225B5C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B6Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00225B6Cu) [[unlikely]] return; }
L_00225B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00225B74u) [[unlikely]] return; }
L_00225B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B7Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225B7Cu) [[unlikely]] return; }
L_00225B7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 255u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BD4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225BD4u) [[unlikely]] return; }
L_00225BD4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BE0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00225BE0u) [[unlikely]] return; }
L_00225BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BE8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225BE8u) [[unlikely]] return; }
L_00225BE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BFCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00225BFCu) [[unlikely]] return; }
L_00225BFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C0Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00225C0Cu) [[unlikely]] return; }
L_00225C0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C1Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00225C1Cu) [[unlikely]] return; }
L_00225C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225C24u) [[unlikely]] return; }
L_00225C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C2Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225C2Cu) [[unlikely]] return; }
L_00225C2C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C3Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00225C3Cu) [[unlikely]] return; }
L_00225C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00225C44u) [[unlikely]] return; }
L_00225C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C4Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225C4Cu) [[unlikely]] return; }
L_00225C4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C98u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225C98u) [[unlikely]] return; }
L_00225C98:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CA4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00225CA4u) [[unlikely]] return; }
L_00225CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CACu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225CACu) [[unlikely]] return; }
L_00225CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CB4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00225CB4u) [[unlikely]] return; }
L_00225CB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CC4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00225CC4u) [[unlikely]] return; }
L_00225CC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CD4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00225CD4u) [[unlikely]] return; }
L_00225CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225CDCu) [[unlikely]] return; }
L_00225CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CE4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225CE4u) [[unlikely]] return; }
L_00225CE4:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CF4u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00225CF4u) [[unlikely]] return; }
L_00225CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00225CFCu) [[unlikely]] return; }
L_00225CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225D04u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225D04u) [[unlikely]] return; }
L_00225D04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00225D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00225D30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00225D40:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 577u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] + 9104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00225D88u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00225D88u) [[unlikely]] return; }
L_00225D88:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29564u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DCCu); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00225DCCu) [[unlikely]] return; }
L_00225DCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_00225FD8; } }
    set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00225E0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 241u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_00225FC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225E20u) [[unlikely]] return; }
L_00225E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E34u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00225E34u) [[unlikely]] return; }
L_00225E34:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E48u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00225E48u) [[unlikely]] return; }
L_00225E48:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E54u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00225E54u) [[unlikely]] return; }
L_00225E54:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E60u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00225E60u) [[unlikely]] return; }
L_00225E60:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E70u); st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00225E70u) [[unlikely]] return; }
L_00225E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E78u); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00225E78u) [[unlikely]] return; }
L_00225E78:
    c.f[0] = ld32((c.r[18].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225E8Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00225E8Cu) [[unlikely]] return; }
L_00225E8C:
    st8((c.r[28].w[0] - 29561u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 234u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 9024u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8976u);
    set32(c.r[4], c.r[4].w[0] - 168u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9072u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 234u));
    set32(c.r[2], 0u + 170u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00225F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225EF8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00225EF8u) [[unlikely]] return; }
L_00225EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F00u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225F00u) [[unlikely]] return; }
L_00225F00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F0Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00225F0Cu) [[unlikely]] return; }
L_00225F0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F1Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00225F1Cu) [[unlikely]] return; }
L_00225F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F24u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00225F24u) [[unlikely]] return; }
L_00225F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F2Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00225F2Cu) [[unlikely]] return; }
L_00225F2C:
    c.f[13] = ld32((c.r[21].w[0] + 36u));
    c.f[14] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F3Cu); c.f[12] = ld32((c.r[21].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00225F3Cu) [[unlikely]] return; }
L_00225F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F44u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00225F44u) [[unlikely]] return; }
L_00225F44:
    c.f[5] = ld32((c.r[19].w[0] + 80u));
    c.f[4] = ld32((c.r[21].w[0] + 112u));
    c.f[3] = ld32((c.r[19].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 116u));
    c.f[1] = ld32((c.r[19].w[0] + 88u));
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.f[12] = fp::mul(c.f[5], c.f[4]);
    c.f[13] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F6Cu); c.f[14] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00225F6Cu) [[unlikely]] return; }
L_00225F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F74u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225F74u) [[unlikely]] return; }
L_00225F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F80u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x00225F80u) [[unlikely]] return; }
L_00225F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225FC0; } }
L_00225F88:
    c.f[3] = ld32((c.r[19].w[0] + 80u));
    c.f[2] = ld32((c.r[21].w[0] + 112u));
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = ld32((c.r[21].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FACu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00225FACu) [[unlikely]] return; }
L_00225FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FB4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00225FB4u) [[unlikely]] return; }
L_00225FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FC0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x00225FC0u) [[unlikely]] return; }
L_00225FC0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00225FC4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_00225FD8:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225E0Cu | kUnwind; return; } goto L_00225E0C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00226010:
    set32(c.r[29], c.r[29].w[0] - 320u);
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
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[17], c.r[29].w[0] + 164u);
    set32(c.r[18], c.r[29].w[0] + 168u);
    mmi::paddub(c.r[23], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    mmi::paddub(c.r[22], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226074u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00226074u) [[unlikely]] return; }
L_00226074:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022608Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0022608Cu) [[unlikely]] return; }
L_0022608C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226094u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00226094u) [[unlikely]] return; }
L_00226094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022609Cu); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0022609Cu) [[unlikely]] return; }
L_0022609C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260A4u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002260A4u) [[unlikely]] return; }
L_002260A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[30], c.r[29].w[0] + 292u);
    set32(c.r[19], c.r[29].w[0] + 180u);
    set32(c.r[21], c.r[29].w[0] + 296u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[20], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022610Cu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0022610Cu) [[unlikely]] return; }
L_0022610C:
    c.f[1] = ld32((c.r[16].w[0] + 8320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8324u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226160u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00226160u) [[unlikely]] return; }
L_00226160:
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261BCu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002261BCu) [[unlikely]] return; }
L_002261BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261C4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002261C4u) [[unlikely]] return; }
L_002261C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261CCu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002261CCu) [[unlikely]] return; }
L_002261CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261D4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002261D4u) [[unlikely]] return; }
L_002261D4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261E4u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x002261E4u) [[unlikely]] return; }
L_002261E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261ECu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002261ECu) [[unlikely]] return; }
L_002261EC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261F8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002261F8u) [[unlikely]] return; }
L_002261F8:
    c.r[4].d[0] = c.r[22].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    c.r[2].d[0] = c.r[23].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226230u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x00226230u) [[unlikely]] return; }
L_00226230:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 16384u);
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
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00226270:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262CCu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002262CCu) [[unlikely]] return; }
L_002262CC:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262E4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002262E4u) [[unlikely]] return; }
L_002262E4:
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 384u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262F4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002262F4u) [[unlikely]] return; }
L_002262F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262FCu); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002262FCu) [[unlikely]] return; }
L_002262FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226304u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00226304u) [[unlikely]] return; }
L_00226304:
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[19], c.r[29].w[0] + 148u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[20], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226360u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00226360u) [[unlikely]] return; }
L_00226360:
    c.f[1] = ld32((c.r[16].w[0] + 8320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8324u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263B4u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002263B4u) [[unlikely]] return; }
L_002263B4:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226408u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00226408u) [[unlikely]] return; }
L_00226408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226410u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00226410u) [[unlikely]] return; }
L_00226410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226418u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00226418u) [[unlikely]] return; }
L_00226418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226420u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00226420u) [[unlikely]] return; }
L_00226420:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226430u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x00226430u) [[unlikely]] return; }
L_00226430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226438u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00226438u) [[unlikely]] return; }
L_00226438:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226444u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x00226444u) [[unlikely]] return; }
L_00226444:
    c.r[4].d[0] = c.r[21].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8928u);
    c.r[2].d[0] = c.r[22].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022647Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0022647Cu) [[unlikely]] return; }
L_0022647C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002264B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 263u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00226930; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226930; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 276u)));
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].d[0] & 12ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_00226510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022651C; } }
L_00226510:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0022651C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022651C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00226778; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00226588; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00226544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00226934; } }
L_00226544:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 259u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00226930; } }
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0022657C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00226584; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0022657C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00226588; } }
L_00226584:
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00226588:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 259u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_002265A4; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
L_002265A4:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_002266A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_0022663C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_002265D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_002265D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002265D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));  if (t) { goto L_00226704; } }
L_002265D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x002265ECu) [[unlikely]] return; }
L_002265EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226930; } }
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_0022663C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226650u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00226650u) [[unlikely]] return; }
L_00226650:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226930; } }
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_002266A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x002266B4u) [[unlikely]] return; }
L_002266B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226930; } }
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_00226704:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8896u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00226930; } }
L_00226778:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 259u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_0022679C; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 80u);
    c.budget -= 6;
L_0022679C:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00226870; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00226820; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_002267D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_002267D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002267D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));  if (t) { goto L_002268C0; } }
L_002267D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002267E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x002267E4u) [[unlikely]] return; }
L_002267E4:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_00226820:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226834u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00226834u) [[unlikely]] return; }
L_00226834:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_00226870:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 263u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226884u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00226010u; return; } if (c.pc != 0x00226884u) [[unlikely]] return; }
L_00226884:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226930; } }
L_002268C0:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8896u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 261u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226930; } }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00226930:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00226934:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00226950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00226DD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226DD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 276u)));
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].d[0] & 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_002269B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002269BC; } }
L_002269B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_002269BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002269BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00226C18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00226A28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002269E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00226DD4; } }
L_002269E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00226DD0; } }
    st8((c.r[16].w[0] + 260u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00226A1C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00226A24; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00226A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00226A28; } }
L_00226A24:
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00226A28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00226A44; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 260u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
L_00226A44:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_00226B40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_00226ADC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00226A78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00226A78; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00226A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));  if (t) { goto L_00226BA4; } }
L_00226A78:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226A8Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226A8Cu) [[unlikely]] return; }
L_00226A8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226DD0; } }
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226ADC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226AF0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226AF0u) [[unlikely]] return; }
L_00226AF0:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226DD0; } }
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226B40:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B54u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226B54u) [[unlikely]] return; }
L_00226B54:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00226DD0; } }
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226BA4:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8928u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00226DD0; } }
L_00226C18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00226C3C; } }
    set32(c.r[4], 0u + 16u);
    st8((c.r[16].w[0] + 260u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 32u);
    c.budget -= 6;
L_00226C3C:
    c.r[5].d[0] = c.r[7].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_00226D10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 80u);  if (t) { goto L_00226CC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00226C70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 16u);  if (t) { goto L_00226C70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00226C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));  if (t) { goto L_00226D60; } }
L_00226C70:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226C84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226C84u) [[unlikely]] return; }
L_00226C84:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226CC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226CD4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226CD4u) [[unlikely]] return; }
L_00226CD4:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226D10:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 255u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 264u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226D24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 192u, depth + 1u); else { c.pc = 0x00226270u; return; } if (c.pc != 0x00226D24u) [[unlikely]] return; }
L_00226D24:
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00226DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226DD0; } }
L_00226D60:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 8928u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 262u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00226DD0; } }
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00226DD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00226DD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00226DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E18u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00226E18u) [[unlikely]] return; }
L_00226E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226E60; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 13u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 28288u);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 31728u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00226E60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00226E80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00226EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[5].w[0] + 3941u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_00226EE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002270EC; } }
L_00226EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[2].w[0] + 9136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[2].w[0] + 9184u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    mmi::paddub(c.r[11], c.r[3], c.r[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3E800000u);  if (t) { goto L_00226F68; } }
    set32(c.r[12], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00226F10:
    c.r[6].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st8((c.r[12].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 1u));
    st8((c.r[12].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 2u));
    st8((c.r[12].w[0] + 202u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 3u));
    st8((c.r[12].w[0] + 232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[10].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[10].w[0] + 76u), c.f[0]);
    st32((c.r[11].w[0] + 152u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    set32(c.r[10], c.r[10].w[0] + 8u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    st8((c.r[12].w[0] + 222u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_00226F68:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226F10u | kUnwind; return; } goto L_00226F10; } }
    st8((c.r[3].w[0] + 245u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 246u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 68u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 3936u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 3937u);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 3938u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[13], c.r[2].w[0] + 3939u);
    st8((c.r[3].w[0] + 244u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[12], c.r[2].w[0] + 3940u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[11], c.r[2].w[0] + 3944u);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[10], c.r[2].w[0] + 3944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[2].w[0] + 3948u);
    st8((c.r[3].w[0] + 243u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[2].w[0] + 3952u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[2].w[0] + 3956u);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 3964u);
    st8((c.r[3].w[0] + 249u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 3960u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[14], c.r[14].w[0] << 5);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    st8((c.r[3].w[0] + 250u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[13], c.r[13].w[0] << 5);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    st8((c.r[3].w[0] + 242u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 92;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002270ECu); st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 228u, depth + 1u); else { c.pc = 0x00227100u; return; } if (c.pc != 0x002270ECu) [[unlikely]] return; }
L_002270EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00227100:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_00227174; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 742u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227164; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227164; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00227164:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 275u)));
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 277u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 274u)));  if (t) { goto L_002271A0; } }
L_00227174:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00227190:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 275u)));
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 277u)));
    c.budget -= 4;
L_002271A0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271ACu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 325u, depth + 1u); else { c.pc = 0x00227FD0u; return; } if (c.pc != 0x002271ACu) [[unlikely]] return; }
L_002271AC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002271B8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 9u, depth + 1u); else { c.pc = 0x00228470u; return; } if (c.pc != 0x002271B8u) [[unlikely]] return; }
L_002271B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002276FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00227660; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0022722C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002271F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (t) { goto L_00227794; } }
L_002271F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00227790; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 243u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227790; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227790; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022722C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00227260; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 243u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227260; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002272B8; } }
L_00227260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 6;
L_00227278:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 202u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 202u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227278u | kUnwind; return; } goto L_00227278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227790; } }
L_002272B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 9184u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[17], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (t) { goto L_00227640; } }
    set32(c.r[6], c.r[17].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_002272D4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 222u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[10], c.r[6].w[0] + 222u);  if (t) { goto L_00227308; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[9], c.r[6].w[0] + 192u);  if (t) { goto L_002272F8; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00227308; } }
L_002272F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00227628; } }
L_00227308:
    c.r[9].d[0] = ld8((c.r[6].w[0] + 212u));
    set32(c.r[7], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00227598; } }
    set32(c.r[7], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00227508; } }
    set32(c.r[7], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_002273E0; } }
    set32(c.r[7], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00227344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[8].w[0] + 1u);  if (t) { goto L_0022762C; } }
L_00227344:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 202u)));
    set32(c.r[10], c.r[6].w[0] + 202u);
    set32(c.r[7], c.r[9].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; st8((c.r[6].w[0] + 202u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0022737C; } }
    set32(c.r[6], 0u + 30u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[3].w[0] + 152u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_00227628; } }
L_0022737C:
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CBF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 9613ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D160000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 12234ull;
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227628; } }
    c.f[1] = ld32((c.r[3].w[0] + 152u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 152u), c.f[0]);  if (t) { goto L_00227628; } }
L_002273E0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 202u)));
    set32(c.r[7], c.r[6].w[0] + 202u);
    set32(c.r[9], c.r[10].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; st8((c.r[6].w[0] + 202u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_00227418; } }
    set32(c.r[6], 0u + 20u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[3].w[0] + 152u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_00227628; } }
L_00227418:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[6].d[0] = c.r[9].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00227464; } }
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D8F0000u);
    c.r[6].d[0] = c.r[6].d[0] | 23594ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DE50000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 24642ull;
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_002274D8; } }
    c.r[6].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_00227464:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002274A4; } }
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBB030000u);
    c.r[6].d[0] = c.r[6].d[0] | 4762ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E810000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 35127ull;
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_002274D8; } }
L_002274A4:
    c.f[1] = ld32((c.r[5].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBC9B0000u);
    c.r[6].d[0] = c.r[6].d[0] | 42466ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[0]);
    c.budget -= 13;
L_002274D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227628; } }
    c.f[1] = ld32((c.r[3].w[0] + 152u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD2A0000u);
    c.r[6].d[0] = c.r[6].d[0] | 43691ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 152u), c.f[0]);  if (t) { goto L_00227628; } }
L_00227508:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 202u)));
    set32(c.r[10], c.r[6].w[0] + 202u);
    set32(c.r[7], c.r[9].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; st8((c.r[6].w[0] + 202u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00227540; } }
    set32(c.r[6], 0u + 10u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[3].w[0] + 152u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_00227628; } }
L_00227540:
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 76u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227628; } }
    c.f[1] = ld32((c.r[3].w[0] + 152u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 152u), c.f[0]);  if (t) { goto L_00227628; } }
L_00227598:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 202u)));
    set32(c.r[11], c.r[6].w[0] + 202u);
    set32(c.r[7], c.r[9].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; st8((c.r[6].w[0] + 202u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002275DC; } }
    set32(c.r[7], 0u + 20u);
    st8((c.r[6].w[0] + 192u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 60u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[3].w[0] + 152u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 76u), c.f[0]);  if (t) { goto L_00227628; } }
L_002275DC:
    c.f[1] = ld32((c.r[5].w[0] + 76u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.r[6].d[0] = c.r[6].d[0] | 34953ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[1].d[0] = c.r[6].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227628; } }
    c.f[1] = ld32((c.r[3].w[0] + 152u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBC4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 152u), c.f[0]);
    c.budget -= 8;
L_00227628:
    set32(c.r[6], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0022762C:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
L_00227640:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[17].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002272D4u | kUnwind; return; } goto L_002272D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227790; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_00227660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (t) { goto L_002276E0; } }
    set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0022766C:
    set32(c.r[6], c.r[3].w[0] + 202u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 202u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002276C8; } }
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 72u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.f[2] = ld32((c.r[5].w[0] + 76u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 76u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002276D0; } }
L_002276C8:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002276D0:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 4;
L_002276E0:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022766Cu | kUnwind; return; } goto L_0022766C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227790; } }
L_002276FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 9136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 9184u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[17], c.r[0]);
    mmi::paddub(c.r[9], c.r[17], c.r[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x3E800000u);  if (t) { goto L_00227778; } }
    set32(c.r[10], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00227724:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    st8((c.r[10].w[0] + 212u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[10].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[10].w[0] + 202u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    st8((c.r[10].w[0] + 232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st32((c.r[8].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[8].w[0] + 76u), c.f[0]);
    st32((c.r[9].w[0] + 152u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st8((c.r[10].w[0] + 222u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
L_00227778:
    c.r[5].d[0] = c.r[11].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227724u | kUnwind; return; } goto L_00227724; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00227790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 1;
L_00227794:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002277AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002277B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002277AC:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002277B0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002277E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 242u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227814u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00227814u) [[unlikely]] return; }
L_00227814:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227820u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00227820u) [[unlikely]] return; }
L_00227820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227828u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227828u) [[unlikely]] return; }
L_00227828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022783Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0022783Cu) [[unlikely]] return; }
L_0022783C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022784Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0022784Cu) [[unlikely]] return; }
L_0022784C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022785Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0022785Cu) [[unlikely]] return; }
L_0022785C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227864u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227864u) [[unlikely]] return; }
L_00227864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022786Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022786Cu) [[unlikely]] return; }
L_0022786C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022787Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022787Cu) [[unlikely]] return; }
L_0022787C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227884u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227884u) [[unlikely]] return; }
L_00227884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022788Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022788Cu) [[unlikely]] return; }
L_0022788C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002278B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 242u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002278E4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002278E4u) [[unlikely]] return; }
L_002278E4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002278F0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002278F0u) [[unlikely]] return; }
L_002278F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002278F8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002278F8u) [[unlikely]] return; }
L_002278F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022790Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0022790Cu) [[unlikely]] return; }
L_0022790C:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022791Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0022791Cu) [[unlikely]] return; }
L_0022791C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022792Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0022792Cu) [[unlikely]] return; }
L_0022792C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227934u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227934u) [[unlikely]] return; }
L_00227934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022793Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022793Cu) [[unlikely]] return; }
L_0022793C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022794Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0022794Cu) [[unlikely]] return; }
L_0022794C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227954u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227954u) [[unlikely]] return; }
L_00227954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022795Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022795Cu) [[unlikely]] return; }
L_0022795C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00227980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 242u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279B4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002279B4u) [[unlikely]] return; }
L_002279B4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279C0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002279C0u) [[unlikely]] return; }
L_002279C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279C8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002279C8u) [[unlikely]] return; }
L_002279C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279DCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002279DCu) [[unlikely]] return; }
L_002279DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279ECu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002279ECu) [[unlikely]] return; }
L_002279EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002279FCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002279FCu) [[unlikely]] return; }
L_002279FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227A04u) [[unlikely]] return; }
L_00227A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A0Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227A0Cu) [[unlikely]] return; }
L_00227A0C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A1Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00227A1Cu) [[unlikely]] return; }
L_00227A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227A24u) [[unlikely]] return; }
L_00227A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A2Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227A2Cu) [[unlikely]] return; }
L_00227A2C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00227A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 242u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A84u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00227A84u) [[unlikely]] return; }
L_00227A84:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A90u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00227A90u) [[unlikely]] return; }
L_00227A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A98u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227A98u) [[unlikely]] return; }
L_00227A98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 242u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00227AACu) [[unlikely]] return; }
L_00227AAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227ABCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00227ABCu) [[unlikely]] return; }
L_00227ABC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227ACCu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00227ACCu) [[unlikely]] return; }
L_00227ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227AD4u) [[unlikely]] return; }
L_00227AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227ADCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227ADCu) [[unlikely]] return; }
L_00227ADC:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AECu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00227AECu) [[unlikely]] return; }
L_00227AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227AF4u) [[unlikely]] return; }
L_00227AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227AFCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227AFCu) [[unlikely]] return; }
L_00227AFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00227B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B48u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00227B48u) [[unlikely]] return; }
L_00227B48:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B54u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00227B54u) [[unlikely]] return; }
L_00227B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B5Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227B5Cu) [[unlikely]] return; }
L_00227B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B64u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00227B64u) [[unlikely]] return; }
L_00227B64:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B74u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00227B74u) [[unlikely]] return; }
L_00227B74:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B84u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00227B84u) [[unlikely]] return; }
L_00227B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227B8Cu) [[unlikely]] return; }
L_00227B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B94u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227B94u) [[unlikely]] return; }
L_00227B94:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BA4u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00227BA4u) [[unlikely]] return; }
L_00227BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227BACu) [[unlikely]] return; }
L_00227BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227BB4u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227BB4u) [[unlikely]] return; }
L_00227BB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00227BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00227BE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00227BF0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[21].w[0] + 320u);  if (t) { goto L_00227C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 275u)));  if (t) { goto L_00227C40; } }
L_00227C38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 275u)));
    c.budget -= 2;
L_00227C40:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 243u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227F9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 244u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9440u);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C7Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00227C7Cu) [[unlikely]] return; }
L_00227C7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227CACu); st32((c.r[1].w[0] - 20372u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00227CACu) [[unlikely]] return; }
L_00227CAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[16], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[16], c.r[0]);  if (t) { goto L_00227F88; } }
    set32(c.r[19], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00227CF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 222u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[23].w[0] + 1u);  if (t) { goto L_00227F74; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 212u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[19].w[0] + 212u);  if (t) { goto L_00227D60; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 2u);  goto L_00227D58; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], 0u + 1u);  goto L_00227D4C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[17], c.r[0], c.r[0]);  goto L_00227D40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_00227D6C; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00227D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227D68; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00227D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227D68; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_00227D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227D68; } }
L_00227D60:
    set32(c.r[17], 0u + 3u);
    c.budget -= 2;
L_00227D68:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_00227D6C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9280u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 9408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[22].w[0] + 152u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DC8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00227DC8u) [[unlikely]] return; }
L_00227DC8:
    st8((c.r[28].w[0] - 29557u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00227DE4u) [[unlikely]] return; }
L_00227DE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DF4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00227DF4u) [[unlikely]] return; }
L_00227DF4:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227E38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 202u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = 0u;
    set32(c.r[3], 0u + 60u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[12];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E38u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00227E38u) [[unlikely]] return; }
L_00227E38:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E4Cu); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00227E4Cu) [[unlikely]] return; }
L_00227E4C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E58u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00227E58u) [[unlikely]] return; }
L_00227E58:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E64u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00227E64u) [[unlikely]] return; }
L_00227E64:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E74u); st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00227E74u) [[unlikely]] return; }
L_00227E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E7Cu); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00227E7Cu) [[unlikely]] return; }
L_00227E7C:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227EA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EA0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00227EA0u) [[unlikely]] return; }
L_00227EA0:
    c.f[3] = ld32((c.r[18].w[0] + 72u));
    c.f[2] = ld32((c.r[21].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[21].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EC4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00227EC4u) [[unlikely]] return; }
L_00227EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227ECCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227ECCu) [[unlikely]] return; }
L_00227ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227ED8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x00227ED8u) [[unlikely]] return; }
L_00227ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227F70; } }
L_00227EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EE8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00227EE8u) [[unlikely]] return; }
L_00227EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EF0u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227EF0u) [[unlikely]] return; }
L_00227EF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EFCu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00227EFCu) [[unlikely]] return; }
L_00227EFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00227F0Cu) [[unlikely]] return; }
L_00227F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F14u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00227F14u) [[unlikely]] return; }
L_00227F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F1Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00227F1Cu) [[unlikely]] return; }
L_00227F1C:
    c.f[13] = ld32((c.r[21].w[0] + 36u));
    c.f[14] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F2Cu); c.f[12] = ld32((c.r[21].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00227F2Cu) [[unlikely]] return; }
L_00227F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F34u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00227F34u) [[unlikely]] return; }
L_00227F34:
    c.f[3] = ld32((c.r[18].w[0] + 72u));
    c.f[2] = ld32((c.r[21].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 76u));
    c.f[0] = ld32((c.r[21].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F58u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00227F58u) [[unlikely]] return; }
L_00227F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F60u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00227F60u) [[unlikely]] return; }
L_00227F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F6Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x00227F6Cu) [[unlikely]] return; }
L_00227F6C:
    c.budget -= 1;
L_00227F70:
    set32(c.r[3], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00227F74:
    c.r[23].d[0] = c.r[3].d[0] << 56;
    set32(c.r[22], c.r[22].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.budget -= 5;
L_00227F88:
    c.r[6].d[0] = c.r[23].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227CF4u | kUnwind; return; } goto L_00227CF4; } }
L_00227F9C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00227FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 249u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { [[clang::musttail]] return unit_004A(c, 8u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_004A(c, 8u, depth); } }
    [[clang::musttail]] return unit_004A(c, 1u, depth);
}

}
