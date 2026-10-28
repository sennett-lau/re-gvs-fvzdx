#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65,
    0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0,
    76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0,
    0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8010;
    case 3u: goto L_001E801C;
    case 4u: goto L_001E8024;
    case 5u: goto L_001E8044;
    case 6u: goto L_001E8048;
    case 7u: goto L_001E8060;
    case 8u: goto L_001E8070;
    case 9u: goto L_001E8080;
    case 10u: goto L_001E8098;
    case 11u: goto L_001E80A0;
    case 12u: goto L_001E80A8;
    case 13u: goto L_001E80C0;
    case 14u: goto L_001E80E8;
    case 15u: goto L_001E8160;
    case 16u: goto L_001E8190;
    case 17u: goto L_001E81BC;
    case 18u: goto L_001E8238;
    case 19u: goto L_001E8240;
    case 20u: goto L_001E8260;
    case 21u: goto L_001E82A0;
    case 22u: goto L_001E82C0;
    case 23u: goto L_001E82E0;
    case 24u: goto L_001E8398;
    case 25u: goto L_001E83A4;
    case 26u: goto L_001E83AC;
    case 27u: goto L_001E83BC;
    case 28u: goto L_001E8410;
    case 29u: goto L_001E8420;
    case 30u: goto L_001E8430;
    case 31u: goto L_001E8480;
    case 32u: goto L_001E8498;
    case 33u: goto L_001E84CC;
    case 34u: goto L_001E8560;
    case 35u: goto L_001E8568;
    case 36u: goto L_001E86F8;
    case 37u: goto L_001E8714;
    case 38u: goto L_001E8754;
    case 39u: goto L_001E8760;
    case 40u: goto L_001E8794;
    case 41u: goto L_001E87A0;
    case 42u: goto L_001E8800;
    case 43u: goto L_001E880C;
    case 44u: goto L_001E881C;
    case 45u: goto L_001E8824;
    case 46u: goto L_001E8830;
    case 47u: goto L_001E883C;
    case 48u: goto L_001E8848;
    case 49u: goto L_001E8880;
    case 50u: goto L_001E8888;
    case 51u: goto L_001E88F0;
    case 52u: goto L_001E8914;
    case 53u: goto L_001E8A14;
    case 54u: goto L_001E8A70;
    case 55u: goto L_001E8AB0;
    case 56u: goto L_001E8AE4;
    case 57u: goto L_001E8AF0;
    case 58u: goto L_001E8B3C;
    case 59u: goto L_001E8B48;
    case 60u: goto L_001E8B90;
    case 61u: goto L_001E8BCC;
    case 62u: goto L_001E8BD4;
    case 63u: goto L_001E8BE4;
    case 64u: goto L_001E8BF4;
    case 65u: goto L_001E8BFC;
    case 66u: goto L_001E8C04;
    case 67u: goto L_001E8C10;
    case 68u: goto L_001E8C18;
    case 69u: goto L_001E8C50;
    case 70u: goto L_001E8C5C;
    case 71u: goto L_001E8C84;
    case 72u: goto L_001E8C94;
    case 73u: goto L_001E8C9C;
    case 74u: goto L_001E8CE8;
    case 75u: goto L_001E8CF0;
    case 76u: goto L_001E8D00;
    case 77u: goto L_001E8D08;
    case 78u: goto L_001E8D10;
    case 79u: goto L_001E8D30;
    case 80u: goto L_001E8D9C;
    case 81u: goto L_001E8DEC;
    case 82u: goto L_001E8E54;
    case 83u: goto L_001E8E5C;
    case 84u: goto L_001E8E68;
    case 85u: goto L_001E8E78;
    case 86u: goto L_001E8E94;
    case 87u: goto L_001E8EA0;
    case 88u: goto L_001E8F14;
    case 89u: goto L_001E8F20;
    case 90u: goto L_001E8F40;
    case 91u: goto L_001E8FDC;
    case 92u: goto L_001E9020;
    case 93u: goto L_001E9030;
    case 94u: goto L_001E90E0;
    case 95u: goto L_001E91AC;
    case 96u: goto L_001E9208;
    case 97u: goto L_001E9214;
    case 98u: goto L_001E9230;
    case 99u: goto L_001E9278;
    case 100u: goto L_001E9288;
    case 101u: goto L_001E931C;
    case 102u: goto L_001E932C;
    case 103u: goto L_001E933C;
    case 104u: goto L_001E934C;
    case 105u: goto L_001E939C;
    case 106u: goto L_001E93AC;
    case 107u: goto L_001E9400;
    case 108u: goto L_001E940C;
    case 109u: goto L_001E9418;
    case 110u: goto L_001E942C;
    case 111u: goto L_001E9450;
    case 112u: goto L_001E9490;
    case 113u: goto L_001E94B4;
    case 114u: goto L_001E94BC;
    case 115u: goto L_001E94CC;
    case 116u: goto L_001E94DC;
    case 117u: goto L_001E954C;
    case 118u: goto L_001E9560;
    case 119u: goto L_001E9580;
    case 120u: goto L_001E95C8;
    case 121u: goto L_001E95D8;
    case 122u: goto L_001E95E8;
    case 123u: goto L_001E95F8;
    case 124u: goto L_001E9608;
    case 125u: goto L_001E9690;
    case 126u: goto L_001E974C;
    case 127u: goto L_001E9780;
    case 128u: goto L_001E97B4;
    case 129u: goto L_001E97C0;
    case 130u: goto L_001E97CC;
    case 131u: goto L_001E97E0;
    case 132u: goto L_001E9800;
    case 133u: goto L_001E9868;
    case 134u: goto L_001E995C;
    case 135u: goto L_001E996C;
    case 136u: goto L_001E99F4;
    case 137u: goto L_001E9A84;
    case 138u: goto L_001E9A90;
    case 139u: goto L_001E9AAC;
    case 140u: goto L_001E9AC0;
    case 141u: goto L_001E9AE4;
    case 142u: goto L_001E9B64;
    case 143u: goto L_001E9B74;
    case 144u: goto L_001E9BAC;
    case 145u: goto L_001E9BD8;
    case 146u: goto L_001E9BE8;
    case 147u: goto L_001E9C30;
    case 148u: goto L_001E9C44;
    case 149u: goto L_001E9C70;
    case 150u: goto L_001E9CC8;
    case 151u: goto L_001E9CE4;
    case 152u: goto L_001E9CF8;
    case 153u: goto L_001E9D08;
    case 154u: goto L_001E9D78;
    case 155u: goto L_001E9D8C;
    case 156u: goto L_001E9DB0;
    case 157u: goto L_001E9E18;
    case 158u: goto L_001E9E28;
    case 159u: goto L_001E9E94;
    case 160u: goto L_001E9EA0;
    case 161u: goto L_001E9EBC;
    case 162u: goto L_001E9ED4;
    case 163u: goto L_001E9EEC;
    case 164u: goto L_001E9F00;
    case 165u: goto L_001E9F10;
    case 166u: goto L_001E9F80;
    case 167u: goto L_001E9F94;
    case 168u: goto L_001E9FE0;
    case 169u: goto L_001EA070;
    case 170u: goto L_001EA080;
    case 171u: goto L_001EA0FC;
    case 172u: goto L_001EA104;
    case 173u: goto L_001EA10C;
    case 174u: goto L_001EA118;
    case 175u: goto L_001EA128;
    case 176u: goto L_001EA138;
    case 177u: goto L_001EA1A8;
    case 178u: goto L_001EA1D0;
    case 179u: goto L_001EA210;
    case 180u: goto L_001EA244;
    case 181u: goto L_001EA254;
    case 182u: goto L_001EA264;
    case 183u: goto L_001EA2D4;
    case 184u: goto L_001EA2E8;
    case 185u: goto L_001EA300;
    case 186u: goto L_001EA3B8;
    case 187u: goto L_001EA3C8;
    case 188u: goto L_001EA3DC;
    case 189u: goto L_001EA3E4;
    case 190u: goto L_001EA43C;
    case 191u: goto L_001EA450;
    case 192u: goto L_001EA460;
    case 193u: goto L_001EA4F0;
    case 194u: goto L_001EA4F8;
    case 195u: goto L_001EA504;
    case 196u: goto L_001EA514;
    case 197u: goto L_001EA548;
    case 198u: goto L_001EA554;
    case 199u: goto L_001EA560;
    case 200u: goto L_001EA5F0;
    case 201u: goto L_001EA614;
    case 202u: goto L_001EA638;
    case 203u: goto L_001EA7FC;
    case 204u: goto L_001EA808;
    case 205u: goto L_001EA820;
    case 206u: goto L_001EA978;
    case 207u: goto L_001EA9BC;
    case 208u: goto L_001EAA18;
    case 209u: goto L_001EAA64;
    case 210u: goto L_001EAAD8;
    case 211u: goto L_001EAB20;
    case 212u: goto L_001EABC0;
    case 213u: goto L_001EABD0;
    case 214u: goto L_001EAC40;
    case 215u: goto L_001EAD30;
    case 216u: goto L_001EAE10;
    case 217u: goto L_001EAE34;
    case 218u: goto L_001EAE54;
    case 219u: goto L_001EAF20;
    case 220u: goto L_001EB0C0;
    case 221u: goto L_001EB11C;
    case 222u: goto L_001EB128;
    case 223u: goto L_001EB1AC;
    case 224u: goto L_001EB1C4;
    case 225u: goto L_001EB1FC;
    case 226u: goto L_001EB278;
    case 227u: goto L_001EB2D0;
    case 228u: goto L_001EB2E0;
    case 229u: goto L_001EB2E8;
    case 230u: goto L_001EB2F0;
    case 231u: goto L_001EB2F8;
    case 232u: goto L_001EB330;
    case 233u: goto L_001EB338;
    case 234u: goto L_001EB3C0;
    case 235u: goto L_001EB3C8;
    case 236u: goto L_001EB3D0;
    case 237u: goto L_001EB3EC;
    case 238u: goto L_001EB440;
    case 239u: goto L_001EB470;
    case 240u: goto L_001EB4C8;
    case 241u: goto L_001EB5DC;
    case 242u: goto L_001EB684;
    case 243u: goto L_001EB6B4;
    case 244u: goto L_001EB6BC;
    case 245u: goto L_001EB6C4;
    case 246u: goto L_001EB79C;
    case 247u: goto L_001EB7F4;
    case 248u: goto L_001EB804;
    case 249u: goto L_001EB85C;
    case 250u: goto L_001EB86C;
    case 251u: goto L_001EB8B0;
    case 252u: goto L_001EB8B8;
    case 253u: goto L_001EB8C4;
    case 254u: goto L_001EB910;
    case 255u: goto L_001EB920;
    case 256u: goto L_001EB940;
    case 257u: goto L_001EB978;
    case 258u: goto L_001EB980;
    case 259u: goto L_001EB990;
    case 260u: goto L_001EBA08;
    case 261u: goto L_001EBA2C;
    case 262u: goto L_001EBA3C;
    case 263u: goto L_001EBAE0;
    case 264u: goto L_001EBBC0;
    case 265u: goto L_001EBBC8;
    case 266u: goto L_001EBBE8;
    case 267u: goto L_001EBBF8;
    case 268u: goto L_001EBC90;
    case 269u: goto L_001EBCA0;
    case 270u: goto L_001EBDB0;
    case 271u: goto L_001EBDD0;
    case 272u: goto L_001EBE3C;
    case 273u: goto L_001EBE4C;
    case 274u: goto L_001EBE84;
    case 275u: goto L_001EBE94;
    case 276u: goto L_001EBEA4;
    case 277u: goto L_001EBEB4;
    case 278u: goto L_001EBED8;
    case 279u: goto L_001EBF5C;
    case 280u: goto L_001EBF80;
    case 281u: goto L_001EBFD4;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    set32(c.r[4], c.r[2].w[0] + 29120u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8010u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001E8010u) [[unlikely]] return; }
L_001E8010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8044; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001E801C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8024u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001E8024u) [[unlikely]] return; }
L_001E8024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8044; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 4964u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8044u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001E8044u) [[unlikely]] return; }
L_001E8044:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E8048:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E8070:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001E8080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8098u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E8098u) [[unlikely]] return; }
L_001E8098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80A0u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x001E80A0u) [[unlikely]] return; }
L_001E80A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E80A8u) [[unlikely]] return; }
L_001E80A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E80C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E80E8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E80E8u) [[unlikely]] return; }
L_001E80E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8148; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 31696u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], c.r[3].w[0] - 32416u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 22;
L_001E8148:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24192u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E8000u < 16384u) { entry = entries_003A[(t - 0x001E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E8190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81BCu); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001E81BCu) [[unlikely]] return; }
L_001E81BC:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[3], c.r[3].w[0] - 31696u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E824C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E8248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E8248; } }
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[17].w[0] + 48u), c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 1984u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8238u); st32((c.r[17].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E8238u) [[unlikely]] return; }
L_001E8238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8240u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E8240u) [[unlikely]] return; }
L_001E8240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001E8258; } }
L_001E8248:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001E824C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E82A8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001E8258:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001E8260:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8260u | kUnwind; return; } goto L_001E8260; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24160u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82A0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 49u, depth + 1u); else { c.pc = 0x001E8880u; return; } if (c.pc != 0x001E82A0u) [[unlikely]] return; }
L_001E82A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E82A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E82C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003A(c, 51u, depth + 1u); else { c.pc = 0x001E88F0u; return; } if (c.pc != 0x001E82E0u) [[unlikely]] return; }
L_001E82E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E82F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E83F4; } }
L_001E82F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 144u), c.f[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E83E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E83E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E83E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 15u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 1984u);  if (t) { goto L_001E839C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24160u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8398u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 49u, depth + 1u); else { c.pc = 0x001E8880u; return; } if (c.pc != 0x001E8398u) [[unlikely]] return; }
L_001E8398:
    set32(c.r[4], c.r[16].w[0] + 1984u);
    c.budget -= 1;
L_001E839C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83A4u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E83A4u) [[unlikely]] return; }
L_001E83A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83ACu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E83ACu) [[unlikely]] return; }
L_001E83AC:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E83BCu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E83BCu) [[unlikely]] return; }
L_001E83BC:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[0]);  if (t) { goto L_001E83EC; } }
L_001E83E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001E83E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E83F4; } }
L_001E83EC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E83F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E8410:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E8420:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001E8430:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
L_001E8480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23888u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8498u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001E8498u) [[unlikely]] return; }
L_001E8498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], c.r[3].w[0] + 23872u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 13;
L_001E84CC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E884C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E8514; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E852C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E8514:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001E852C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2910ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_001E8558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 5;
L_001E8558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8560u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E8560u) [[unlikely]] return; }
L_001E8560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8568u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x001E8568u) [[unlikely]] return; }
L_001E8568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24032u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001E85A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E85AC; } }
L_001E85A0:
    c.f[21] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[7].w[0] + 4u));  if (t) { goto L_001E8610; } }
L_001E85AC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E8610; } }
    set32(c.r[2], ld32((c.r[7].w[0] - 12u)));
    c.f[4] = ld32((c.r[7].w[0] - 8u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[5] = ld32((c.r[7].w[0] - 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[3].w[0];
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[20] = fp::add(c.f[4], c.f[1]);
    c.f[21] = fp::add(c.f[5], c.f[0]);
    c.budget -= 21;
L_001E8610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24080u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001E8648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_001E8698; } }
L_001E8648:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  if (t) { goto L_001E869C; } }
    set32(c.r[2], ld32((c.r[6].w[0] - 8u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] - 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[2]);
    c.budget -= 16;
L_001E8698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_001E869C:
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E86BC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E86D4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E86BC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001E86D4:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86F8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E86F8u) [[unlikely]] return; }
L_001E86F8:
    st8((c.r[29].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 141u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8714u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E8714u) [[unlikely]] return; }
L_001E8714:
    st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8768; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[18].w[0] + 192u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8754u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E8754u) [[unlikely]] return; }
L_001E8754:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8760u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E8760u) [[unlikely]] return; }
L_001E8760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001E8784; } }
L_001E8768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 7;
L_001E8784:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8794u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E8794u) [[unlikely]] return; }
L_001E8794:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E87A0u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E87A0u) [[unlikely]] return; }
L_001E87A0:
    st32((c.r[29].w[0] + 108u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E87C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E87D8; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E87C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001E87D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24112u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8800u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001E8800u) [[unlikely]] return; }
L_001E8800:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E880Cu); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x001E880Cu) [[unlikely]] return; }
L_001E880C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E881Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E881Cu) [[unlikely]] return; }
L_001E881C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8824u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E8824u) [[unlikely]] return; }
L_001E8824:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8830u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001E8830u) [[unlikely]] return; }
L_001E8830:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E883Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E883Cu) [[unlikely]] return; }
L_001E883C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8848u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x001E8848u) [[unlikely]] return; }
L_001E8848:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E884C:
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E84CCu | kUnwind; return; } goto L_001E84CC; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E8880:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_001E8888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001E88D0; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E88E0; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001E88D0:
    c.r[3].d[0] = c.r[8].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8888u | kUnwind; return; } goto L_001E8888; } }
    c.budget -= 1;
L_001E88E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E88F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 9;
L_001E8914:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E8A3C; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24032u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001E8970; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E8970; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E8970:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24080u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001E89B0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E89B0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001E89B0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E89CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E89E4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E89CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001E89E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A14u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E8A14u) [[unlikely]] return; }
L_001E8A14:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8A38; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001E8A38:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E8A3C:
    c.r[2].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8914u | kUnwind; return; } goto L_001E8914; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 7u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E8A70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[3].w[0] - 28448u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 16;
L_001E8AB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27088u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AE4u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E8AE4u) [[unlikely]] return; }
L_001E8AE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AF0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E8B90u; return; } if (c.pc != 0x001E8AF0u) [[unlikely]] return; }
L_001E8AF0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E8B4C; }
    set32(c.r[4], c.r[18].w[0] + 5u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1921u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B3Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E8B3Cu) [[unlikely]] return; }
L_001E8B3C:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B48u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E8B90u; return; } if (c.pc != 0x001E8B48u) [[unlikely]] return; }
L_001E8B48:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E8B4C:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 384u);
    set32(c.r[16], c.r[16].w[0] + 384u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8AB0u | kUnwind; return; } goto L_001E8AB0; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E8B90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 144u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001E8CB8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BCCu); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E8BCCu) [[unlikely]] return; }
L_001E8BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BD4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001E8BD4u) [[unlikely]] return; }
L_001E8BD4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BE4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E8BE4u) [[unlikely]] return; }
L_001E8BE4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BF4u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026E5D0u; return; } if (c.pc != 0x001E8BF4u) [[unlikely]] return; }
L_001E8BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E8BFCu) [[unlikely]] return; }
L_001E8BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C04u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E8C04u) [[unlikely]] return; }
L_001E8C04:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C10u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001E8C10u) [[unlikely]] return; }
L_001E8C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E8C18u) [[unlikely]] return; }
L_001E8C18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 779u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8C9C; } }
    c.f[0] = ld32((c.r[19].w[0] + 8336u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[29].w[0] + 84u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8340u));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8344u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C50u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E8C50u) [[unlikely]] return; }
L_001E8C50:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C5Cu); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E8C5Cu) [[unlikely]] return; }
L_001E8C5C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DC80000u);
    c.r[2].d[0] = c.r[2].d[0] | 46137ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C84u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E8C84u) [[unlikely]] return; }
L_001E8C84:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C94u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001E8C94u) [[unlikely]] return; }
L_001E8C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E8C9Cu) [[unlikely]] return; }
L_001E8C9C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { goto L_001E8CC0; } }
L_001E8CB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E8CC0:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CE8u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001E8CE8u) [[unlikely]] return; }
L_001E8CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8CF0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E8CF0u) [[unlikely]] return; }
L_001E8CF0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D00u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0013B6D0u; return; } if (c.pc != 0x001E8D00u) [[unlikely]] return; }
L_001E8D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D08u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E8D08u) [[unlikely]] return; }
L_001E8D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001E8D10u) [[unlikely]] return; }
L_001E8D10:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E8D30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001E8F20; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 24208u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 739u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001E8D8C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001E8D8C:
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8D9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E8D9Cu) [[unlikely]] return; }
L_001E8D9C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8DECu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E8DECu) [[unlikely]] return; }
L_001E8DEC:
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[17], c.r[29].w[0] + 100u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 332u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[20].w[0] + 336u), c.f[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 336u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E54u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x001E8E54u) [[unlikely]] return; }
L_001E8E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E5Cu); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E8E5Cu) [[unlikely]] return; }
L_001E8E5C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E68u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001E8E68u) [[unlikely]] return; }
L_001E8E68:
    set32(c.r[2], 0u + 1536u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E78u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001E8E78u) [[unlikely]] return; }
L_001E8E78:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 332u));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E94u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E8E94u) [[unlikely]] return; }
L_001E8E94:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EA0u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001E8EA0u) [[unlikely]] return; }
L_001E8EA0:
    c.f[3] = ld32((c.r[20].w[0] + 48u));
    c.f[2] = ld32((c.r[20].w[0] + 52u));
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[20].w[0] + 144u);
    st32((c.r[20].w[0] + 256u), c.f[3]);
    st32((c.r[20].w[0] + 260u), c.f[2]);
    st32((c.r[20].w[0] + 264u), c.f[1]);
    st32((c.r[20].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[20].w[0] + 304u), c.f[3]);
    st32((c.r[20].w[0] + 308u), c.f[2]);
    st32((c.r[20].w[0] + 312u), c.f[1]);
    st32((c.r[20].w[0] + 316u), c.f[0]);
    st8((c.r[19].w[0] + 787u), static_cast<std::uint8_t>(0u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F14u); st8((c.r[19].w[0] + 786u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E8F14u) [[unlikely]] return; }
L_001E8F14:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F20u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001E8F20u) [[unlikely]] return; }
L_001E8F20:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E8F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001E9000; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001E9000; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9004; } }
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    st32((c.r[17].w[0] + 256u), c.f[3]);
    st32((c.r[17].w[0] + 260u), c.f[2]);
    st32((c.r[17].w[0] + 264u), c.f[1]);
    st32((c.r[17].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E8FDCu) [[unlikely]] return; }
L_001E8FDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E9004; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E9004; } }
L_001E9000:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E9004:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E9020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 740u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001E9118; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E90B4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E9080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9154; } }
L_001E9080:
    set32(c.r[4], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E909C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
L_001E909C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E91E4; } }
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
L_001E90B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E910C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E9100; } }
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E90E0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E90E0u) [[unlikely]] return; }
L_001E90E0:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E9100:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
L_001E910C:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
L_001E9118:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_001E9148; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001E9148:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
L_001E9154:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E9164; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E9164:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_001E91DC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_001E9194; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 1;
L_001E9194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E91E4; } }
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E91ACu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E91ACu) [[unlikely]] return; }
L_001E91AC:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E91E4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001E91DC:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001E91E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 740u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9208u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E9208u) [[unlikely]] return; }
L_001E9208:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9214u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 225u, depth + 1u); else { c.pc = 0x001F3080u; return; } if (c.pc != 0x001E9214u) [[unlikely]] return; }
L_001E9214:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E9230:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9278u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E9278u) [[unlikely]] return; }
L_001E9278:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9288u); set32(c.r[6], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E9288u) [[unlikely]] return; }
L_001E9288:
    set32(c.r[20], c.r[29].w[0] + 148u);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[17], c.r[29].w[0] + 152u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E92E8; } }
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0] + 304u), c.f[3]);
    st32((c.r[19].w[0] + 308u), c.f[2]);
    st32((c.r[19].w[0] + 312u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 316u), c.f[0]);  if (t) { goto L_001E930C; } }
L_001E92E8:
    c.f[3] = ld32((c.r[19].w[0] + 304u));
    c.f[2] = ld32((c.r[19].w[0] + 308u));
    c.f[1] = ld32((c.r[19].w[0] + 312u));
    c.f[0] = ld32((c.r[19].w[0] + 316u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001E930C:
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E931Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E931Cu) [[unlikely]] return; }
L_001E931C:
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E932Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001E932Cu) [[unlikely]] return; }
L_001E932C:
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E933Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001E933Cu) [[unlikely]] return; }
L_001E933C:
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E934Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001E934Cu) [[unlikely]] return; }
L_001E934C:
    st32((c.r[20].w[0]), 0u);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E938C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E938C:
    c.f[12] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E939Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E939Cu) [[unlikely]] return; }
L_001E939C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E93ACu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E93ACu) [[unlikely]] return; }
L_001E93AC:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9400u); st32((c.r[19].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E9400u) [[unlikely]] return; }
L_001E9400:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E940Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001E940Cu) [[unlikely]] return; }
L_001E940C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9418u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E9418u) [[unlikely]] return; }
L_001E9418:
    st32((c.r[19].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E942Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E942Cu) [[unlikely]] return; }
L_001E942C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001E9450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9490u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E9490u) [[unlikely]] return; }
L_001E9490:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E94BC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + 304u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94B4u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E94B4u) [[unlikely]] return; }
L_001E94B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94BCu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001E94BCu) [[unlikely]] return; }
L_001E94BC:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94CCu); set32(c.r[5], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E94CCu) [[unlikely]] return; }
L_001E94CC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E94DCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E94DCu) [[unlikely]] return; }
L_001E94DC:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E954Cu); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E954Cu) [[unlikely]] return; }
L_001E954C:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9560u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E9560u) [[unlikely]] return; }
L_001E9560:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E9580:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95C8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E95C8u) [[unlikely]] return; }
L_001E95C8:
    set32(c.r[6], ld32((c.r[17].w[0] + 1524u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95D8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x001EC5F0u; return; } if (c.pc != 0x001E95D8u) [[unlikely]] return; }
L_001E95D8:
    set32(c.r[4], c.r[18].w[0] + 304u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95E8u); set32(c.r[6], c.r[18].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E95E8u) [[unlikely]] return; }
L_001E95E8:
    c.f[12] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E95F8u); set32(c.r[5], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E95F8u) [[unlikely]] return; }
L_001E95F8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9608u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E9608u) [[unlikely]] return; }
L_001E9608:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & 4224ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8ull;  if (t) { goto L_001E963C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 42572ull;
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DE30000u);
    c.r[2].d[0] = c.r[2].d[0] | 34917ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001E9724; } }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 1;
L_001E963C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9720; } }
L_001E9664:
    set32(c.r[2], ld32((c.r[17].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_001E9688; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001E9714; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_001E9688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9690u); set32(c.r[5], c.r[17].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E9690u) [[unlikely]] return; }
L_001E9690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_001E96C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_001E96C4:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xBA830000u);  if (t) { goto L_001E96F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.budget -= 1;
L_001E96F0:
    c.r[3].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
L_001E9710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_001E9714:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[20], c.f[0]);
    c.budget -= 3;
L_001E9720:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001E9724:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E974Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x001E974Cu) [[unlikely]] return; }
L_001E974C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001E9750:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9780u); st32((c.r[18].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001E9780u) [[unlikely]] return; }
L_001E9780:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[2], c.r[29].w[0] + 84u);
    set32(c.r[3], c.r[29].w[0] + 88u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97B4u); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E97B4u) [[unlikely]] return; }
L_001E97B4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97C0u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001E97C0u) [[unlikely]] return; }
L_001E97C0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97CCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E97CCu) [[unlikely]] return; }
L_001E97CC:
    st32((c.r[18].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E97E0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E97E0u) [[unlikely]] return; }
L_001E97E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E9800:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 24208u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[5].w[0] + 1532u)));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_001E9A1C; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9868u); set32(c.r[6], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E9868u) [[unlikely]] return; }
L_001E9868:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[3] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E98B0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E9C44; } }
L_001E98B0:
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 184u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E99B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28288u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28284u);
    set32(c.r[18], c.r[29].w[0] + 132u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[4], c.r[21].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28280u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E995Cu); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 205u, depth + 1u); else { c.pc = 0x0026ED80u; return; } if (c.pc != 0x001E995Cu) [[unlikely]] return; }
L_001E995C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E996Cu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001E996Cu) [[unlikely]] return; }
L_001E996C:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E99D4; } }
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_001E99D4; } }
L_001E99B0:
    c.f[3] = ld32((c.r[21].w[0] + 64u));
    c.f[2] = ld32((c.r[21].w[0] + 68u));
    c.f[1] = ld32((c.r[21].w[0] + 72u));
    c.f[0] = ld32((c.r[21].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 128u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001E99D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9A64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[2].w[0] + 27024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E99F4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 239u, depth + 1u); else { c.pc = 0x001F35F0u; return; } if (c.pc != 0x001E99F4u) [[unlikely]] return; }
L_001E99F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9A64; } }
    st8((c.r[20].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 755u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9A64; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E9A64; } }
L_001E9A1C:
    c.f[0] = ld32((c.r[20].w[0] + 8352u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8356u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8360u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 184u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 164u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 168u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 18;
L_001E9A64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9B00; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A84u); st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001E9A84u) [[unlikely]] return; }
L_001E9A84:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9A90u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x001E9A90u) [[unlikely]] return; }
L_001E9A90:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AACu);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x001E9AACu) [[unlikely]] return; }
L_001E9AAC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AC0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001E9AC0u) [[unlikely]] return; }
L_001E9AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9AE4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E9AE4u) [[unlikely]] return; }
L_001E9AE4:
    st16((c.r[21].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E9B00; } }
    set32(c.r[2], 0u + 5u);
    st16((c.r[21].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E9B00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 340u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_001E9B58; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 740u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 792u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9B54; } }
    st8((c.r[20].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 755u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9B54; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E9B54:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_001E9B58:
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B64u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E9B64u) [[unlikely]] return; }
L_001E9B64:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B74u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005B(c, 188u, depth + 1u); else { c.pc = 0x0026EAE0u; return; } if (c.pc != 0x001E9B74u) [[unlikely]] return; }
L_001E9B74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 340u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[21].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9BACu);  if (depth < kMaxDepth) unit_005B(c, 214u, depth + 1u); else { c.pc = 0x0026EED0u; return; } if (c.pc != 0x001E9BACu) [[unlikely]] return; }
L_001E9BAC:
    c.f[0] = ld32((c.r[21].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 184u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 332u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9BD8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E9BD8u) [[unlikely]] return; }
L_001E9BD8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9BE8u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E9BE8u) [[unlikely]] return; }
L_001E9BE8:
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    st32((c.r[21].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 164u));
    st32((c.r[21].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 168u));
    st32((c.r[21].w[0] + 72u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[21].w[0] + 16u), c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C30u); st32((c.r[21].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E9C30u) [[unlikely]] return; }
L_001E9C30:
    st32((c.r[21].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9C44u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E9C44u) [[unlikely]] return; }
L_001E9C44:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001E9C70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CC8u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E9CC8u) [[unlikely]] return; }
L_001E9CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 1424u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 327u, depth + 1u); else { c.pc = 0x0034BA10u; return; } if (c.pc != 0x001E9CE4u) [[unlikely]] return; }
L_001E9CE4:
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9CF8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E9CF8u) [[unlikely]] return; }
L_001E9CF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D08u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E9D08u) [[unlikely]] return; }
L_001E9D08:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D78u); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E9D78u) [[unlikely]] return; }
L_001E9D78:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9D8Cu); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E9D8Cu) [[unlikely]] return; }
L_001E9D8C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E9DB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 24208u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001E9E08; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 1524u)));
    st32((c.r[18].w[0] + 1532u), c.r[2].w[0]);
    c.budget -= 4;
L_001E9E08:
    set32(c.r[6], ld32((c.r[18].w[0] + 1532u)));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E18u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 17u, depth + 1u); else { c.pc = 0x001EC5F0u; return; } if (c.pc != 0x001E9E18u) [[unlikely]] return; }
L_001E9E18:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E28u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E9E28u) [[unlikely]] return; }
L_001E9E28:
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E9E70; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 739u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[18].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001E9FB4; } }
L_001E9E70:
    c.f[0] = ld32((c.r[19].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 180u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 184u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9E94u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001E9E94u) [[unlikely]] return; }
L_001E9E94:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EA0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x001E9EA0u) [[unlikely]] return; }
L_001E9EA0:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EBCu);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x001E9EBCu) [[unlikely]] return; }
L_001E9EBC:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9ED4u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001E9ED4u) [[unlikely]] return; }
L_001E9ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9EECu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x001E9EECu) [[unlikely]] return; }
L_001E9EEC:
    c.f[0] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F00u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001E9F00u) [[unlikely]] return; }
L_001E9F00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F10u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E9F10u) [[unlikely]] return; }
L_001E9F10:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F80u); st32((c.r[19].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001E9F80u) [[unlikely]] return; }
L_001E9F80:
    st32((c.r[19].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9F94u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001E9F94u) [[unlikely]] return; }
L_001E9F94:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E9FB4; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[18].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_001E9FB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E9FE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[3], c.r[2].w[0] + 26464u);
    c.f[0] = ld32((c.r[4].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[17], c.r[29].w[0] + 132u);
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[18], c.r[29].w[0] + 136u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 160u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 164u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[20].w[0] + 336u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA070u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EA070u) [[unlikely]] return; }
L_001EA070:
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA080u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EA080u) [[unlikely]] return; }
L_001EA080:
    c.f[1] = ld32((c.r[20].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[20].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 264u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 332u), c.f[0]);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0FCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EA0FCu) [[unlikely]] return; }
L_001EA0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA104u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 322u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EA104u) [[unlikely]] return; }
L_001EA104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA10Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 320u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001EA10Cu) [[unlikely]] return; }
L_001EA10C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA118u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EA118u) [[unlikely]] return; }
L_001EA118:
    c.f[12] = ld32((c.r[20].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA128u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EA128u) [[unlikely]] return; }
L_001EA128:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA138u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EA138u) [[unlikely]] return; }
L_001EA138:
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA1A8u); st32((c.r[20].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EA1A8u) [[unlikely]] return; }
L_001EA1A8:
    st32((c.r[20].w[0] + 332u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EA1D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA210u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC410u; return; } if (c.pc != 0x001EA210u) [[unlikely]] return; }
L_001EA210:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[17].w[0] + 304u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 272u);
    c.f[3] = ld32((c.r[2].w[0] + 592u));
    c.f[2] = ld32((c.r[2].w[0] + 596u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = ld32((c.r[2].w[0] + 604u));
    st32((c.r[17].w[0] + 272u), c.f[3]);
    st32((c.r[17].w[0] + 276u), c.f[2]);
    st32((c.r[17].w[0] + 280u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA244u); st32((c.r[17].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EA244u) [[unlikely]] return; }
L_001EA244:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA254u); set32(c.r[5], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EA254u) [[unlikely]] return; }
L_001EA254:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA264u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EA264u) [[unlikely]] return; }
L_001EA264:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2D4u); st32((c.r[17].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EA2D4u) [[unlikely]] return; }
L_001EA2D4:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA2E8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 58u, depth + 1u); else { c.pc = 0x001ECC80u; return; } if (c.pc != 0x001EA2E8u) [[unlikely]] return; }
L_001EA2E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EA300:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001EA5C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 739u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001EA5C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    st32((c.r[18].w[0] + 256u), c.f[3]);
    st32((c.r[18].w[0] + 260u), c.f[2]);
    st32((c.r[18].w[0] + 264u), c.f[1]);
    st32((c.r[18].w[0] + 268u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 28;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);  goto L_001EA404; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + 304u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3B8u); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EA3B8u) [[unlikely]] return; }
L_001EA3B8:
    set32(c.r[5], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3C8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001EA3C8u) [[unlikely]] return; }
L_001EA3C8:
    set32(c.r[5], c.r[18].w[0] + 304u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3DCu); st32((c.r[18].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_003B(c, 53u, depth + 1u); else { c.pc = 0x001ECBD0u; return; } if (c.pc != 0x001EA3DCu) [[unlikely]] return; }
L_001EA3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3E4u); set32(c.r[4], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001EA3E4u) [[unlikely]] return; }
L_001EA3E4:
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 788u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[17].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 795u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.budget -= 8;
L_001EA404:
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[18].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 14;
L_001EA43C:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 336u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA450u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EA450u) [[unlikely]] return; }
L_001EA450:
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA460u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EA460u) [[unlikely]] return; }
L_001EA460:
    c.f[1] = ld32((c.r[18].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 264u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001EA4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4F0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EA4F0u) [[unlikely]] return; }
L_001EA4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA4F8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EA4F8u) [[unlikely]] return; }
L_001EA4F8:
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA504u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EA504u) [[unlikely]] return; }
L_001EA504:
    c.f[12] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA514u); set32(c.r[5], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EA514u) [[unlikely]] return; }
L_001EA514:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[2] = ld32((c.r[18].w[0] + 292u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 292u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA548u); st32((c.r[18].w[0] + 292u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EA548u) [[unlikely]] return; }
L_001EA548:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA554u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EA554u) [[unlikely]] return; }
L_001EA554:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA560u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001EA560u) [[unlikely]] return; }
L_001EA560:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.f[0]);  if (t) { goto L_001EA5CC; } }
L_001EA5C8:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001EA5CC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EA5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA614u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001EA614u) [[unlikely]] return; }
L_001EA614:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28304u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
L_001EA638:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA638u | kUnwind; return; } goto L_001EA638; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] - 4784u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 4u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EA6B8; } }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EA808; } }
L_001EA6B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 356u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 6336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    st16((c.r[17].w[0] + 304u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    st16((c.r[17].w[0] + 306u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 33;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EA74C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EA764; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EA74C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EA764:
    st32((c.r[17].w[0] + 336u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EA784; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EA79C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EA784:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EA79C:
    st32((c.r[17].w[0] + 340u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x468C0000u);  goto L_001EA7E8; }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EA7C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EA7DC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EA7C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EA7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 352u), c.f[0]);  if (t) { goto L_001EA7F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x468C0000u);
    c.budget -= 1;
L_001EA7E8:
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 2;
L_001EA7F0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA7FCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EA7FCu) [[unlikely]] return; }
L_001EA7FC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA808u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003A(c, 205u, depth + 1u); else { c.pc = 0x001EA820u; return; } if (c.pc != 0x001EA808u) [[unlikely]] return; }
L_001EA808:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[3].w[0] - 28448u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 352u));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 352u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1520u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001EA8A8; } }
    c.f[1] = ld32((c.r[18].w[0] + 352u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA8A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EA8CC; } }
L_001EA8A8:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EAAF8; } }
L_001EA8CC:
    c.f[3] = ld32((c.r[7].w[0] + 48u));
    c.f[2] = ld32((c.r[7].w[0] + 52u));
    c.f[1] = ld32((c.r[7].w[0] + 56u));
    c.f[0] = ld32((c.r[7].w[0] + 60u));
    set32(c.r[6], c.r[17].w[0] + 8320u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 272u), c.f[3]);
    st32((c.r[18].w[0] + 276u), c.f[2]);
    st32((c.r[18].w[0] + 280u), c.f[1]);
    st32((c.r[18].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[7].w[0] + 16u));
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0] + 28u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 288u), c.f[3]);
    st32((c.r[18].w[0] + 292u), c.f[2]);
    st32((c.r[18].w[0] + 296u), c.f[1]);
    st32((c.r[18].w[0] + 300u), c.f[0]);
    c.budget -= 43;
L_001EA978:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA978u | kUnwind; return; } goto L_001EA978; } }
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1328u);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA9BCu); st32((c.r[18].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EA9BCu) [[unlikely]] return; }
L_001EA9BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001EAAF8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] - 6336u);
    set32(c.r[6], c.r[17].w[0] + 8320u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 356u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 788u));
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 16;
L_001EAA18:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAA18u | kUnwind; return; } goto L_001EAA18; } }
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    set32(c.r[4], c.r[18].w[0] + 256u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 1328u);
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA64u); st8((c.r[18].w[0] + 357u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EAA64u) [[unlikely]] return; }
L_001EAA64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[4] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = fp::add(c.f[4], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F5E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 35442ull;
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = c.f[0];
    fpu_div(c, 1u, c.f[1], c.f[4]);
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 324u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAAF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[18].w[0] + 16u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAAD8u); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 25u, depth + 1u); else { c.pc = 0x001EC860u; return; } if (c.pc != 0x001EAAD8u) [[unlikely]] return; }
L_001EAAD8:
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001EAAF8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EAB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EABC0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAB5C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAB80; } }
L_001EAB5C:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EABC0; } }
L_001EAB80:
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27144u);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EABC0u) [[unlikely]] return; }
L_001EABC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EABD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001EABF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 316u), 0u);
    c.budget -= 3;
L_001EABF4:
    c.f[1] = ld32((c.r[5].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[29].w[0] + 32u);  if (t) { goto L_001EAC34; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 336u));
    st32((c.r[16].w[0] + 316u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 7;
L_001EAC34:
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 25u, depth + 1u); else { c.pc = 0x001EC860u; return; } if (c.pc != 0x001EAC40u) [[unlikely]] return; }
L_001EAC40:
    c.f[3] = ld32((c.r[16].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 292u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 296u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 280u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 336u));
    c.f[0] = ld32((c.r[16].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EAD30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001EAD60; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
L_001EAD60:
    c.f[20] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 352u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EADD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[17].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EADD0; } }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001EADD0:
    c.f[1] = ld32((c.r[17].w[0] + 324u));
    c.f[0] = ld32((c.r[17].w[0] + 320u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    c.f[0] = ld32((c.r[17].w[0] + 328u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 304u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE10u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EAE10u) [[unlikely]] return; }
L_001EAE10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 306u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE34u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EAE34u) [[unlikely]] return; }
L_001EAE34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAE54u); st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 25u, depth + 1u); else { c.pc = 0x001EC860u; return; } if (c.pc != 0x001EAE54u) [[unlikely]] return; }
L_001EAE54:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[4] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[5] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EAF20:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_001EAF90; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 316u), 0u);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[4].w[0] + 288u), c.f[3]);
    st32((c.r[4].w[0] + 292u), c.f[2]);
    st32((c.r[4].w[0] + 296u), c.f[1]);
    st32((c.r[4].w[0] + 300u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[4].w[0] + 272u), c.f[3]);
    st32((c.r[4].w[0] + 276u), c.f[2]);
    st32((c.r[4].w[0] + 280u), c.f[1]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.budget -= 19;
L_001EAF90:
    c.f[1] = ld32((c.r[5].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EAFDC; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    st32((c.r[4].w[0] + 316u), c.f[0]);
    c.budget -= 10;
L_001EAFDC:
    c.f[3] = ld32((c.r[4].w[0] + 288u));
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 292u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 296u));
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 272u));
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 276u));
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 56u));
    c.f[3] = ld32((c.r[4].w[0] + 280u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.budget -= 55;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.f[0]);  c.pc = t; return; }
L_001EB0C0:
    set32(c.r[29], c.r[29].w[0] - 272u);
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
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24208u);
    set32(c.r[6], 0u + 384u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB11Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001EB11Cu) [[unlikely]] return; }
L_001EB11C:
    set32(c.r[8], c.r[19].w[0] + 8320u);
    set32(c.r[7], c.r[20].w[0] + 144u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
L_001EB128:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB128u | kUnwind; return; } goto L_001EB128; } }
    c.f[0] = ld32((c.r[20].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[6], 0u + 4u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 164u));
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 168u));
    st32((c.r[20].w[0] + 72u), c.f[0]);
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1ACu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EB1ACu) [[unlikely]] return; }
L_001EB1AC:
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1C4u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EB1C4u) [[unlikely]] return; }
L_001EB1C4:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[16], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[20].w[0] + 48u), c.f[3]);
    st32((c.r[20].w[0] + 52u), c.f[2]);
    st32((c.r[20].w[0] + 56u), c.f[1]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1FCu); set32(c.r[5], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EB1FCu) [[unlikely]] return; }
L_001EB1FC:
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[30], c.r[29].w[0] + 200u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], c.r[29].w[0] + 168u);  if (t) { goto L_001EB250; } }
    c.f[0] = ld32((c.r[19].w[0] + 8352u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8356u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8360u));
    st32((c.r[30].w[0]), c.f[0]);
    set32(c.r[18], c.r[29].w[0] + 168u);
    c.budget -= 7;
L_001EB250:
    set32(c.r[17], c.r[29].w[0] + 176u);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB278u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001EB278u) [[unlikely]] return; }
L_001EB278:
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[29].w[0] + 160u);  if (t) { goto L_001EB2D4; } }
    st32((c.r[23].w[0]), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2D0u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001EB2D0u) [[unlikely]] return; }
L_001EB2D0:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001EB2D4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2E0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001EB2E0u) [[unlikely]] return; }
L_001EB2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2E8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001EB2E8u) [[unlikely]] return; }
L_001EB2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001EB2F0u) [[unlikely]] return; }
L_001EB2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB2F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001EB2F8u) [[unlikely]] return; }
L_001EB2F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[21], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 2048u);  if (t) { goto L_001EB324; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_001EB328; } }
L_001EB324:
    set32(c.r[21], c.r[21].w[0] + 512u);
    c.budget -= 1;
L_001EB328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB330u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EB330u) [[unlikely]] return; }
L_001EB330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB338u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001EB338u) [[unlikely]] return; }
L_001EB338:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0]));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 220u), 0u);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    st32((c.r[29].w[0] + 236u), 0u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    st32((c.r[29].w[0] + 252u), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3C0u); st32((c.r[29].w[0] + 268u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EB3C0u) [[unlikely]] return; }
L_001EB3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3C8u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001EB3C8u) [[unlikely]] return; }
L_001EB3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3D0u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001EB3D0u) [[unlikely]] return; }
L_001EB3D0:
    st32((c.r[20].w[0] + 20u), 0u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    st32((c.r[20].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB3ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001EB3ECu) [[unlikely]] return; }
L_001EB3EC:
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001EB440:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.f[0]);  c.pc = t; return; }
L_001EB470:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB4C8u); st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EB4C8u) [[unlikely]] return; }
L_001EB4C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB544; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EB540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB504; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 522u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB540; } }
L_001EB504:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 15u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 651u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_001EB534; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB530; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB540; } }
L_001EB530:
    set32(c.r[2], 0u + 45u);
    c.budget -= 1;
L_001EB534:
    st8((c.r[19].w[0] + 358u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 359u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001EB54C; } }
L_001EB540:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EB544:
    st8((c.r[19].w[0] + 358u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 359u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EB54C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB638; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29593u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB638; } }
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
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB638; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_001EB5DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_001EB628; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001EB624; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 640u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB624; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB624; } }
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001EB638; } }
L_001EB624:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001EB628:
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB5DCu | kUnwind; return; } goto L_001EB5DC; } }
    c.budget -= 1;
L_001EB638:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001EB64C; } }
    st32((c.r[19].w[0] + 364u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[18], c.r[0]);  if (t) { goto L_001EB650; } }
L_001EB64C:
    st32((c.r[19].w[0] + 364u), c.r[17].w[0]);
    c.budget -= 1;
L_001EB650:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001EB664; } }
    st32((c.r[19].w[0] + 360u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[17], c.r[0]);  if (t) { goto L_001EB668; } }
L_001EB664:
    st32((c.r[19].w[0] + 360u), c.r[16].w[0]);
    c.budget -= 1;
L_001EB668:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB6AC; } }
    set32(c.r[6], c.r[17].w[0] + 8320u);
    set32(c.r[5], c.r[19].w[0] + 144u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_001EB684:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB684u | kUnwind; return; } goto L_001EB684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB6C8; } }
L_001EB6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6B4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EB6B4u) [[unlikely]] return; }
L_001EB6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6BCu); c.r[4].d[0] = ld16((c.r[18].w[0] + 84u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EB6BCu) [[unlikely]] return; }
L_001EB6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6C4u); set32(c.r[4], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001EB6C4u) [[unlikely]] return; }
L_001EB6C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EB6C8:
    st8((c.r[19].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 164u));
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 168u));
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB714; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25696u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EB71C; } }
L_001EB714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[2].w[0] + 26440u);
    c.budget -= 2;
L_001EB71C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB754; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 320u), c.f[0]);  if (t) { goto L_001EB75C; } }
L_001EB754:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 320u), c.f[0]);
    c.budget -= 2;
L_001EB75C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_001EB774; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EB784; } }
L_001EB774:
    st8((c.r[19].w[0] + 356u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EB7D4; } }
L_001EB784:
    st8((c.r[19].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB79Cu); st8((c.r[2].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EB79Cu) [[unlikely]] return; }
L_001EB79C:
    c.f[1] = ld32((c.r[19].w[0] + 320u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB7D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB7D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB7D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EB7D0:
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EB7D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB80C; } }
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7F4u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EB7F4u) [[unlikely]] return; }
L_001EB7F4:
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB804u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EB804u) [[unlikely]] return; }
L_001EB804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 356u));  if (t) { goto L_001EB830; } }
L_001EB80C:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[19].w[0] + 48u), c.f[3]);
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 356u));
    c.budget -= 9;
L_001EB830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB8E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB8E8; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB85Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EB85Cu) [[unlikely]] return; }
L_001EB85C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB86Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001EB86Cu) [[unlikely]] return; }
L_001EB86C:
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.f[0] = 0u;
    st32((c.r[2].w[0]), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 88u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8B0u); set32(c.r[4], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EB8B0u) [[unlikely]] return; }
L_001EB8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8B8u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EB8B8u) [[unlikely]] return; }
L_001EB8B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EB8C4u) [[unlikely]] return; }
L_001EB8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[19].w[0] + 320u));  if (t) { goto L_001EB904; } }
L_001EB8CC:
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001EB900; } }
L_001EB8E8:
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 152u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_001EB900:
    c.f[12] = ld32((c.r[19].w[0] + 320u));
    c.budget -= 1;
L_001EB904:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB910u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EB910u) [[unlikely]] return; }
L_001EB910:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB920u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EB920u) [[unlikely]] return; }
L_001EB920:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EB940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB978u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EB978u) [[unlikely]] return; }
L_001EB978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB980u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 232u, depth + 1u); else { c.pc = 0x001F3360u; return; } if (c.pc != 0x001EB980u) [[unlikely]] return; }
L_001EB980:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EB990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 364u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001EB9D4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 25696u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001EB9DC; } }
L_001EB9D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[3].w[0] + 26440u);
    c.budget -= 2;
L_001EB9DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 641u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001EBA14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA08u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003A(c, 263u, depth + 1u); else { c.pc = 0x001EBAE0u; return; } if (c.pc != 0x001EBA08u) [[unlikely]] return; }
L_001EBA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001EBAC8; } }
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001EBA14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EBA44; } }
    c.f[12] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA2Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EBA2Cu) [[unlikely]] return; }
L_001EBA2C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA3Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EBA3Cu) [[unlikely]] return; }
L_001EBA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 48u));  if (t) { goto L_001EBA6C; } }
L_001EBA44:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 10;
L_001EBA6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 23;
L_001EBAC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EBAE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_001EBB28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25696u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EBB30; } }
L_001EBB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[2].w[0] + 26440u);
    c.budget -= 2;
L_001EBB30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBC20; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[18].w[0] + 272u), c.f[3]);
    st32((c.r[18].w[0] + 276u), c.f[2]);
    st32((c.r[18].w[0] + 280u), c.f[1]);
    st32((c.r[18].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[18].w[0] + 288u), c.f[3]);
    st32((c.r[18].w[0] + 292u), c.f[2]);
    st32((c.r[18].w[0] + 296u), c.f[1]);
    st32((c.r[18].w[0] + 300u), c.f[0]);
    st32((c.r[18].w[0] + 316u), 0u);
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBC0u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EBBC0u) [[unlikely]] return; }
L_001EBBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBC8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001EBBC8u) [[unlikely]] return; }
L_001EBBC8:
    c.f[12] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBC00; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBE8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EBBE8u) [[unlikely]] return; }
L_001EBBE8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBBF8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EBBF8u) [[unlikely]] return; }
L_001EBBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 316u));  if (t) { goto L_001EBC24; } }
L_001EBC00:
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001EBC20:
    c.f[1] = ld32((c.r[18].w[0] + 316u));
    c.budget -= 1;
L_001EBC24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBC5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001EBC5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 16u);  if (t) { goto L_001EBDA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBCA8; } }
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC90u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EBC90u) [[unlikely]] return; }
L_001EBC90:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCA0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EBCA0u) [[unlikely]] return; }
L_001EBCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[18].w[0] + 288u));  if (t) { goto L_001EBCD0; } }
L_001EBCA8:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 288u));
    c.budget -= 10;
L_001EBCD0:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 292u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 296u));
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 280u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 54;
L_001EBDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDB0u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EBDB0u) [[unlikely]] return; }
L_001EBDB0:
    st32((c.r[18].w[0] + 320u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EBDD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 360u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_001EBE18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25696u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EBE20; } }
L_001EBE18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[2].w[0] + 26440u);
    c.budget -= 2;
L_001EBE20:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE54; } }
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE3Cu); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EBE3Cu) [[unlikely]] return; }
L_001EBE3C:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE4Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EBE4Cu) [[unlikely]] return; }
L_001EBE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001EBE78; } }
L_001EBE54:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 9;
L_001EBE78:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE84u); set32(c.r[6], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EBE84u) [[unlikely]] return; }
L_001EBE84:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE94u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 53u, depth + 1u); else { c.pc = 0x001ECBD0u; return; } if (c.pc != 0x001EBE94u) [[unlikely]] return; }
L_001EBE94:
    c.f[12] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEA4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EBEA4u) [[unlikely]] return; }
L_001EBEA4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEB4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EBEB4u) [[unlikely]] return; }
L_001EBEB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EBEF4; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 320u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBED8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001EBED8u) [[unlikely]] return; }
L_001EBED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 16u);  if (t) { goto L_001EBF54; } }
L_001EBEF4:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 24;
L_001EBF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF5Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EBF5Cu) [[unlikely]] return; }
L_001EBF5C:
    st32((c.r[18].w[0] + 320u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EBF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 25696u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], c.r[17].w[0] + 8320u);
    set32(c.r[7], c.r[18].w[0] + 144u);
    set32(c.r[6], 0u + 8u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
L_001EBFD4:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBFD4u | kUnwind; return; } goto L_001EBFD4; } }
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
