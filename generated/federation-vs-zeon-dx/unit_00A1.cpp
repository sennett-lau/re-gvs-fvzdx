#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A1[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 57, 58, 59, 60, 61, 62, 63, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0,
    0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0,
    206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0,
    219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0,
    0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00384000;
    case 2u: goto L_0038400C;
    case 3u: goto L_0038401C;
    case 4u: goto L_00384024;
    case 5u: goto L_0038403C;
    case 6u: goto L_00384060;
    case 7u: goto L_00384074;
    case 8u: goto L_00384098;
    case 9u: goto L_003840A0;
    case 10u: goto L_003840C4;
    case 11u: goto L_003840E8;
    case 12u: goto L_0038410C;
    case 13u: goto L_00384118;
    case 14u: goto L_00384120;
    case 15u: goto L_00384134;
    case 16u: goto L_0038416C;
    case 17u: goto L_00384174;
    case 18u: goto L_003841A0;
    case 19u: goto L_003841A8;
    case 20u: goto L_003841E0;
    case 21u: goto L_00384208;
    case 22u: goto L_00384214;
    case 23u: goto L_0038421C;
    case 24u: goto L_0038422C;
    case 25u: goto L_0038424C;
    case 26u: goto L_00384254;
    case 27u: goto L_00384278;
    case 28u: goto L_00384280;
    case 29u: goto L_0038428C;
    case 30u: goto L_0038429C;
    case 31u: goto L_003842AC;
    case 32u: goto L_003842D0;
    case 33u: goto L_003842E8;
    case 34u: goto L_00384324;
    case 35u: goto L_00384340;
    case 36u: goto L_0038434C;
    case 37u: goto L_00384354;
    case 38u: goto L_00384360;
    case 39u: goto L_00384380;
    case 40u: goto L_00384388;
    case 41u: goto L_00384394;
    case 42u: goto L_003843A4;
    case 43u: goto L_003843B4;
    case 44u: goto L_003843D8;
    case 45u: goto L_003843F0;
    case 46u: goto L_0038442C;
    case 47u: goto L_00384444;
    case 48u: goto L_00384460;
    case 49u: goto L_003844B8;
    case 50u: goto L_003845E8;
    case 51u: goto L_003845FC;
    case 52u: goto L_0038461C;
    case 53u: goto L_00384644;
    case 54u: goto L_00384670;
    case 55u: goto L_003846A0;
    case 56u: goto L_00384700;
    case 57u: goto L_00384704;
    case 58u: goto L_00384708;
    case 59u: goto L_0038470C;
    case 60u: goto L_00384710;
    case 61u: goto L_00384714;
    case 62u: goto L_00384718;
    case 63u: goto L_0038471C;
    case 64u: goto L_00384720;
    case 65u: goto L_00384730;
    case 66u: goto L_00384760;
    case 67u: goto L_00384790;
    case 68u: goto L_003847F0;
    case 69u: goto L_00384838;
    case 70u: goto L_0038483C;
    case 71u: goto L_00384848;
    case 72u: goto L_00384880;
    case 73u: goto L_0038489C;
    case 74u: goto L_00384930;
    case 75u: goto L_00384950;
    case 76u: goto L_00384980;
    case 77u: goto L_003849C4;
    case 78u: goto L_003849F8;
    case 79u: goto L_00384A04;
    case 80u: goto L_00384A14;
    case 81u: goto L_00384A30;
    case 82u: goto L_00384B8C;
    case 83u: goto L_00384BB0;
    case 84u: goto L_00384BE0;
    case 85u: goto L_00384C1C;
    case 86u: goto L_00384C4C;
    case 87u: goto L_00384C58;
    case 88u: goto L_00384C60;
    case 89u: goto L_00384C6C;
    case 90u: goto L_00384C74;
    case 91u: goto L_00384C88;
    case 92u: goto L_00384C98;
    case 93u: goto L_00384CC0;
    case 94u: goto L_00384CC8;
    case 95u: goto L_00384CE0;
    case 96u: goto L_00384CF4;
    case 97u: goto L_00384D7C;
    case 98u: goto L_00384DA0;
    case 99u: goto L_00384DD0;
    case 100u: goto L_00384E14;
    case 101u: goto L_00384E44;
    case 102u: goto L_00384E5C;
    case 103u: goto L_00384E64;
    case 104u: goto L_00384E70;
    case 105u: goto L_00384E78;
    case 106u: goto L_00384E88;
    case 107u: goto L_00384E90;
    case 108u: goto L_00384EB0;
    case 109u: goto L_00384ECC;
    case 110u: goto L_00384F38;
    case 111u: goto L_00384F80;
    case 112u: goto L_00384FB0;
    case 113u: goto L_00384FF0;
    case 114u: goto L_00385028;
    case 115u: goto L_00385070;
    case 116u: goto L_003851C0;
    case 117u: goto L_003851E0;
    case 118u: goto L_003851F0;
    case 119u: goto L_00385200;
    case 120u: goto L_0038526C;
    case 121u: goto L_00385318;
    case 122u: goto L_003854A0;
    case 123u: goto L_00385548;
    case 124u: goto L_003855B8;
    case 125u: goto L_003855C0;
    case 126u: goto L_00385624;
    case 127u: goto L_00385640;
    case 128u: goto L_00385650;
    case 129u: goto L_003856B4;
    case 130u: goto L_003856C4;
    case 131u: goto L_00385728;
    case 132u: goto L_00385730;
    case 133u: goto L_0038573C;
    case 134u: goto L_00385750;
    case 135u: goto L_00385758;
    case 136u: goto L_00385764;
    case 137u: goto L_0038576C;
    case 138u: goto L_00385788;
    case 139u: goto L_00385790;
    case 140u: goto L_00385798;
    case 141u: goto L_003857AC;
    case 142u: goto L_00385810;
    case 143u: goto L_0038582C;
    case 144u: goto L_00385834;
    case 145u: goto L_00385840;
    case 146u: goto L_0038587C;
    case 147u: goto L_003858C0;
    case 148u: goto L_003858E0;
    case 149u: goto L_00385970;
    case 150u: goto L_003859C0;
    case 151u: goto L_003859D8;
    case 152u: goto L_00385AC0;
    case 153u: goto L_00385AE0;
    case 154u: goto L_00385B30;
    case 155u: goto L_00385B50;
    case 156u: goto L_00385B80;
    case 157u: goto L_00385BA0;
    case 158u: goto L_00385BB0;
    case 159u: goto L_00385BC0;
    case 160u: goto L_00385BD0;
    case 161u: goto L_00385CB4;
    case 162u: goto L_00385CBC;
    case 163u: goto L_00385D00;
    case 164u: goto L_00385DA4;
    case 165u: goto L_00385E14;
    case 166u: goto L_00385E40;
    case 167u: goto L_00385E68;
    case 168u: goto L_00385E74;
    case 169u: goto L_00385E80;
    case 170u: goto L_00385EDC;
    case 171u: goto L_00385F24;
    case 172u: goto L_00385FE0;
    case 173u: goto L_00386014;
    case 174u: goto L_003860B0;
    case 175u: goto L_003861D0;
    case 176u: goto L_003862C0;
    case 177u: goto L_00386408;
    case 178u: goto L_00386430;
    case 179u: goto L_003864E0;
    case 180u: goto L_00386560;
    case 181u: goto L_00386614;
    case 182u: goto L_00386658;
    case 183u: goto L_00386690;
    case 184u: goto L_003866A0;
    case 185u: goto L_00386730;
    case 186u: goto L_003867DC;
    case 187u: goto L_003867F4;
    case 188u: goto L_00386810;
    case 189u: goto L_0038682C;
    case 190u: goto L_00386864;
    case 191u: goto L_00386900;
    case 192u: goto L_00386918;
    case 193u: goto L_00386930;
    case 194u: goto L_00386948;
    case 195u: goto L_0038697C;
    case 196u: goto L_00386990;
    case 197u: goto L_003869C0;
    case 198u: goto L_00386A18;
    case 199u: goto L_00386A38;
    case 200u: goto L_00386AEC;
    case 201u: goto L_00386B10;
    case 202u: goto L_00386B38;
    case 203u: goto L_00386B60;
    case 204u: goto L_00386B6C;
    case 205u: goto L_00386B74;
    case 206u: goto L_00386B80;
    case 207u: goto L_00386B88;
    case 208u: goto L_00386B94;
    case 209u: goto L_00386B9C;
    case 210u: goto L_00386BA8;
    case 211u: goto L_00386BB0;
    case 212u: goto L_00386BBC;
    case 213u: goto L_00386BC4;
    case 214u: goto L_00386BD0;
    case 215u: goto L_00386BD8;
    case 216u: goto L_00386BE4;
    case 217u: goto L_00386BEC;
    case 218u: goto L_00386BF8;
    case 219u: goto L_00386C00;
    case 220u: goto L_00386C0C;
    case 221u: goto L_00386C14;
    case 222u: goto L_00386C20;
    case 223u: goto L_00386C28;
    case 224u: goto L_00386C34;
    case 225u: goto L_00386C3C;
    case 226u: goto L_00386C48;
    case 227u: goto L_00386C50;
    case 228u: goto L_00386C5C;
    case 229u: goto L_00386C64;
    case 230u: goto L_00386C70;
    case 231u: goto L_00386C78;
    case 232u: goto L_00386C84;
    case 233u: goto L_00386C8C;
    case 234u: goto L_00386C98;
    case 235u: goto L_00386CA0;
    case 236u: goto L_00386CAC;
    case 237u: goto L_00386CB4;
    case 238u: goto L_00386CC0;
    case 239u: goto L_00386CC8;
    case 240u: goto L_00386CD4;
    case 241u: goto L_00386CDC;
    case 242u: goto L_00386CE8;
    case 243u: goto L_00386D30;
    case 244u: goto L_00386D98;
    case 245u: goto L_00386DD4;
    case 246u: goto L_00386F78;
    case 247u: goto L_00387020;
    case 248u: goto L_00387040;
    case 249u: goto L_003870B8;
    case 250u: goto L_00387104;
    case 251u: goto L_003872A0;
    case 252u: goto L_0038736C;
    case 253u: goto L_003873A0;
    case 254u: goto L_00387434;
    case 255u: goto L_00387454;
    case 256u: goto L_00387510;
    case 257u: goto L_00387544;
    case 258u: goto L_00387960;
    case 259u: goto L_003879A0;
    case 260u: goto L_00387A08;
    case 261u: goto L_00387B04;
    case 262u: goto L_00387BB8;
    case 263u: goto L_00387BD0;
    case 264u: goto L_00387C9C;
    case 265u: goto L_00387CE0;
    case 266u: goto L_00387D5C;
    case 267u: goto L_00387E8C;
    case 268u: goto L_00387EDC;
    case 269u: goto L_00387FAC;
    default: bad_entry(c, 0x00384000u); return;
    }
L_00384000:
    c.f[13] = ld32((c.r[1].w[0] - 32620u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038400Cu); set32(c.r[4], c.r[2].w[0] - 11968u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0038400Cu) [[unlikely]] return; }
L_0038400C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038401Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0038401Cu) [[unlikely]] return; }
L_0038401C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384024u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384024u) [[unlikely]] return; }
L_00384024:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5516u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0038406C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038403Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0038403Cu) [[unlikely]] return; }
L_0038403C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32648u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32644u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384060u); set32(c.r[4], c.r[2].w[0] - 11952u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00384060u) [[unlikely]] return; }
L_00384060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384440; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038406C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384074u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384074u) [[unlikely]] return; }
L_00384074:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32656u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32652u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384098u); set32(c.r[4], c.r[2].w[0] - 11968u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00384098u) [[unlikely]] return; }
L_00384098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003840A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003840A0u) [[unlikely]] return; }
L_003840A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32636u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003840C4u); set32(c.r[4], c.r[2].w[0] - 11928u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003840C4u) [[unlikely]] return; }
L_003840C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32628u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003840E8u); set32(c.r[4], c.r[2].w[0] - 11920u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003840E8u) [[unlikely]] return; }
L_003840E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32612u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038410Cu); set32(c.r[4], c.r[2].w[0] - 11912u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0038410Cu) [[unlikely]] return; }
L_0038410C:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_003841E8; } }
L_00384118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384120u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384120u) [[unlikely]] return; }
L_00384120:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384134u); set32(c.r[4], c.r[2].w[0] + 5518u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00384134u) [[unlikely]] return; }
L_00384134:
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 32684u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = ld32((c.r[1].w[0] - 32688u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038416Cu); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0038416Cu) [[unlikely]] return; }
L_0038416C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384174u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384174u) [[unlikely]] return; }
L_00384174:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = ld32((c.r[1].w[0] - 32676u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32680u));
    c.f[13] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003841A0u); set32(c.r[4], c.r[2].w[0] + 5526u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003841A0u) [[unlikely]] return; }
L_003841A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003841A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003841A8u) [[unlikely]] return; }
L_003841A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.f[0] = ld32((c.r[1].w[0] - 32668u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5517u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32672u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003841E0u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003841E0u) [[unlikely]] return; }
L_003841E0:
    set32(c.r[17], c.r[17].w[0] + 155u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003841E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5516u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00384118u | kUnwind; return; } goto L_00384118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00384208:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384214u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00384214u) [[unlikely]] return; }
L_00384214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038421Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0038421Cu) [[unlikely]] return; }
L_0038421C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 27055u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038422Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0038422Cu) [[unlikely]] return; }
L_0038422C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32724u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32720u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038424Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0038424Cu) [[unlikely]] return; }
L_0038424C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384254u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384254u) [[unlikely]] return; }
L_00384254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32716u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32712u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384278u); set32(c.r[4], c.r[2].w[0] - 27047u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00384278u) [[unlikely]] return; }
L_00384278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384280u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384280u) [[unlikely]] return; }
L_00384280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038428Cu); set32(c.r[4], c.r[2].w[0] - 27029u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0038428Cu) [[unlikely]] return; }
L_0038428C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[17], c.r[2].w[0] - 27056u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 4;
L_0038429C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003842ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003842ACu) [[unlikely]] return; }
L_003842AC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_00384440; } }
    c.r[1].d[0] = c.r[16].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_003842DC; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 27u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003842D0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003842D0u) [[unlikely]] return; }
L_003842D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003842E8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_003842DC:
    set32(c.r[5], c.r[17].w[0] + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003842E8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003842E8u) [[unlikely]] return; }
L_003842E8:
    c.f[0] = c.r[18].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[1].w[0] - 32704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], c.r[16].w[0] - 24u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[1].w[0] - 32708u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384324u); c.f[13] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00384324u) [[unlikely]] return; }
L_00384324:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038429Cu | kUnwind; return; } goto L_0038429C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00384340:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038434Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0038434Cu) [[unlikely]] return; }
L_0038434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384354u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384354u) [[unlikely]] return; }
L_00384354:
    set32(c.r[4], c.r[28].w[0] - 25920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384360u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00384360u) [[unlikely]] return; }
L_00384360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] - 32608u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] - 32604u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384380u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00384380u) [[unlikely]] return; }
L_00384380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384388u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00384388u) [[unlikely]] return; }
L_00384388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384394u); set32(c.r[4], c.r[2].w[0] - 32016u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00384394u) [[unlikely]] return; }
L_00384394:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[2].w[0] - 32016u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 4;
L_003843A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003843B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003843B4u) [[unlikely]] return; }
L_003843B4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00384440; } }
    c.r[1].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_003843E4; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003843D8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003843D8u) [[unlikely]] return; }
L_003843D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003843F0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_003843E4:
    set32(c.r[6], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003843F0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003843F0u) [[unlikely]] return; }
L_003843F0:
    c.f[0] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[1].w[0] - 32596u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[18].w[0] - 24u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[1].w[0] - 32600u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038442Cu); c.f[13] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0038442Cu) [[unlikely]] return; }
L_0038442C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003843A4u | kUnwind; return; } goto L_003843A4; } }
    c.budget -= 1;
L_00384440:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00384444:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00384460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00384630; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00384604; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003844B8; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_003844B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00384654; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003844B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003844B8u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x003844B8u) [[unlikely]] return; }
L_003844B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003845A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00384560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003844E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));  if (t) { goto L_003845CC; } }
L_003844E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5516u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003844FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00384500; } }
L_003844FC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00384500:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00384520; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00384538; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00384520:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00384538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_003845C8; } }
L_00384560:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 32576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 32544u);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_003845C8; } }
L_003845A4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 32560u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
L_003845C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003845CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_003845F4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003845E8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x003845E8u) [[unlikely]] return; }
L_003845E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384650; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_003845F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003845FCu);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x003845FCu) [[unlikely]] return; }
L_003845FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384650; } }
L_00384604:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00384628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038461Cu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0038461Cu) [[unlikely]] return; }
L_0038461C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384650; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00384628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00384650; } }
L_00384630:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038464C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384644u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00384644u) [[unlikely]] return; }
L_00384644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00384650; } }
L_0038464C:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00384650:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00384654:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00384670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003846A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x003846A0u) [[unlikely]] return; }
L_003846A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003846E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 46u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 20992u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] + 18176u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 16;
L_003846E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00384700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_00384704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00384708:
    set32(c.r[2], c.r[2].w[0] - 31472u);
    c.budget -= 1;
L_0038470C:
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.budget -= 1;
L_00384710:
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 1;
L_00384714:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00384718:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0038471C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00384720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31440u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384790u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00384790u) [[unlikely]] return; }
L_00384790:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 31600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 24;
L_003847F0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003847F0u | kUnwind; return; } goto L_003847F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31504u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384838u); set32(c.r[8], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00384838u) [[unlikely]] return; }
L_00384838:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0038483C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384848u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 72u, depth + 1u); else { c.pc = 0x00384880u; return; } if (c.pc != 0x00384848u) [[unlikely]] return; }
L_00384848:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038483Cu | kUnwind; return; } goto L_0038483C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00384880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038489Cu); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 150u, depth + 1u); else { c.pc = 0x003859C0u; return; } if (c.pc != 0x0038489Cu) [[unlikely]] return; }
L_0038489C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003848B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00384938; } }
L_003848B4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00384934; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31504u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384930u); set32(c.r[8], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00384930u) [[unlikely]] return; }
L_00384930:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00384934:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00384938:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00384950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31424u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 17;
L_003849C4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003849C4u | kUnwind; return; } goto L_003849C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003849F8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x003849F8u) [[unlikely]] return; }
L_003849F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384A04u); set32(c.r[4], c.r[2].w[0] + 28768u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384A04u) [[unlikely]] return; }
L_00384A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 31904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384A14u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00384A14u) [[unlikely]] return; }
L_00384A14:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00384A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 32112u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00384A9C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00384A9C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00384A9C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 31968u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00384AE8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00384AE8; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00384AE8:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00384B08; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00384B08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384B24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00384B94; } }
L_00384B24:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00384B90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384B8C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384B8Cu); c.r[6].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00A1(c, 54u, depth + 1u); else { c.pc = 0x00384670u; return; } if (c.pc != 0x00384B8Cu) [[unlikely]] return; }
L_00384B8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00384B90:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00384B94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00384BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31408u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 15;
L_00384C1C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00384C1Cu | kUnwind; return; } goto L_00384C1C; } }
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00384C4Cu) [[unlikely]] return; }
L_00384C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C58u); set32(c.r[4], c.r[2].w[0] + 29088u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384C58u) [[unlikely]] return; }
L_00384C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C60u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00384C60u) [[unlikely]] return; }
L_00384C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C6Cu); set32(c.r[4], c.r[2].w[0] + 28128u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384C6Cu) [[unlikely]] return; }
L_00384C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C74u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00384C74u) [[unlikely]] return; }
L_00384C74:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 28192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C88u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384C88u) [[unlikely]] return; }
L_00384C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 31488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384C98u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00384C98u) [[unlikely]] return; }
L_00384C98:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384CC0u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00384CC0u) [[unlikely]] return; }
L_00384CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384CC8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00384CC8u) [[unlikely]] return; }
L_00384CC8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00384CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384CF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 150u, depth + 1u); else { c.pc = 0x003859C0u; return; } if (c.pc != 0x00384CF4u) [[unlikely]] return; }
L_00384CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00384D0C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00384D84; } }
L_00384D0C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[1].w[0] - 31596u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00384D80; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384D7C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384D7C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384D7Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 54u, depth + 1u); else { c.pc = 0x00384670u; return; } if (c.pc != 0x00384D7Cu) [[unlikely]] return; }
L_00384D7C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00384D80:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00384D84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00384DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31392u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 17;
L_00384E14:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00384E14u | kUnwind; return; } goto L_00384E14; } }
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00384E44u) [[unlikely]] return; }
L_00384E44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 28128u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E5Cu); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384E5Cu) [[unlikely]] return; }
L_00384E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E64u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00384E64u) [[unlikely]] return; }
L_00384E64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E70u); set32(c.r[4], c.r[2].w[0] + 28192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00384E70u) [[unlikely]] return; }
L_00384E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E78u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00384E78u) [[unlikely]] return; }
L_00384E78:
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E88u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00384E88u) [[unlikely]] return; }
L_00384E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384E90u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00384E90u) [[unlikely]] return; }
L_00384E90:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00384EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384ECCu); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 150u, depth + 1u); else { c.pc = 0x003859C0u; return; } if (c.pc != 0x00384ECCu) [[unlikely]] return; }
L_00384ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00384EE4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00384F6C; } }
L_00384EE4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00384F68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384F64; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[8], c.r[2].w[0] + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00384F38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00384F38u) [[unlikely]] return; }
L_00384F38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00384F64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00384F64:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00384F68:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00384F6C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00384F80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31376u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00384FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_00384FF0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00384FF0u | kUnwind; return; } goto L_00384FF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385028u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 147u, depth + 1u); else { c.pc = 0x003858C0u; return; } if (c.pc != 0x00385028u) [[unlikely]] return; }
L_00385028:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00385050; }
    c.f[0] = ld32((c.r[3].w[0] + 240u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 244u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 248u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
L_00385050:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00385070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 32112u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003850DC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003850DC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003850DC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 31968u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00385128; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00385128; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00385128:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00385168; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00385168; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003851C8; } }
L_00385168:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003851C4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003851C0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003851C0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00A1(c, 54u, depth + 1u); else { c.pc = 0x00384670u; return; } if (c.pc != 0x003851C0u) [[unlikely]] return; }
L_003851C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003851C4:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003851C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003851E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003851F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00385200:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[20].w[0] + 320u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 27;
L_0038526C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00385884; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 32512u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] - 32432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 32352u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 32528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385318u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x00385318u) [[unlikely]] return; }
L_00385318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 32112u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.budget -= 19;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00385370; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038537C; } }
    c.budget -= 1;
L_00385370:
    c.f[21] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[7].w[0] + 4u));  if (t) { goto L_003853E0; } }
L_0038537C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003853E0; } }
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
L_003853E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[21]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 31968u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 16;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00385428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_00385478; } }
L_00385428:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0038547C; } }
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
L_00385478:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0038547C:
    set32(c.r[18], c.r[29].w[0] + 222u);
    set32(c.r[19], c.r[29].w[0] + 221u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003854A0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003854A0u) [[unlikely]] return; }
L_003854A0:
    st8((c.r[29].w[0] + 223u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00385848; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003857B4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003856CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00385658; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  if (t) { goto L_003854EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_003854EC:
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038550C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00385524; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0038550C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00385524:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385548u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00385548u) [[unlikely]] return; }
L_00385548:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 220u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00385570; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00385588; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00385570:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00385588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2910ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003855B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 4;
L_003855B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003855B8u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003855B8u) [[unlikely]] return; }
L_003855B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003855C0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x003855C0u) [[unlikely]] return; }
L_003855C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003855E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003855FC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003855E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003855FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385624u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00385624u) [[unlikely]] return; }
L_00385624:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31952u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385640u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00385640u) [[unlikely]] return; }
L_00385640:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385650u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00385650u) [[unlikely]] return; }
L_00385650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385870; } }
L_00385658:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00385674; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038568C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00385674:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038568C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003856B4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x003856B4u) [[unlikely]] return; }
L_003856B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003856C4u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x003856C4u) [[unlikely]] return; }
L_003856C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385870; } }
L_003856CC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003856E8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00385700; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003856E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00385700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385728u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00385728u) [[unlikely]] return; }
L_00385728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385730u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00385730u) [[unlikely]] return; }
L_00385730:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038573Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0038573Cu) [[unlikely]] return; }
L_0038573C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 28432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385750u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00385750u) [[unlikely]] return; }
L_00385750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385758u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00385758u) [[unlikely]] return; }
L_00385758:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385764u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00385764u) [[unlikely]] return; }
L_00385764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038576Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0038576Cu) [[unlikely]] return; }
L_0038576C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 20416u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385788u); c.f[13] = ld32((c.r[1].w[0] - 20412u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00385788u) [[unlikely]] return; }
L_00385788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385790u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00385790u) [[unlikely]] return; }
L_00385790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385798u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00385798u) [[unlikely]] return; }
L_00385798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003857ACu); st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x003857ACu) [[unlikely]] return; }
L_003857AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385880; } }
L_003857B4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003857D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003857E8; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003857D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003857E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385810u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00385810u) [[unlikely]] return; }
L_00385810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31952u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038582Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0038582Cu) [[unlikely]] return; }
L_0038582C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385834u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00385834u) [[unlikely]] return; }
L_00385834:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385840u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00385840u) [[unlikely]] return; }
L_00385840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385870; } }
L_00385848:
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_00385870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038587Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0038587Cu) [[unlikely]] return; }
L_0038587C:
    c.budget -= 1;
L_00385880:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00385884:
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038526Cu | kUnwind; return; } goto L_0038526C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003858C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
L_003858E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00385994; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[28].w[0] - 27048u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385968; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385968; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385960; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385960; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00385960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));  if (t) { goto L_00385984; } }
L_00385960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00385980; } }
L_00385968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385970u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00385970u) [[unlikely]] return; }
L_00385970:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00385980:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 1;
L_00385984:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003859A0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00385994:
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003858E0u | kUnwind; return; } goto L_003858E0; } }
L_003859A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003859C0:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[10], c.r[3].w[0] - 31968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 32112u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_003859D8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00385AA4; }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_00385A38; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00385A38; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_00385A38:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[8].w[0])));
    c.budget -= 10;
    { const bool t = c.r[11].sd[0] < 0;  if (t) { goto L_00385A80; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));
    c.r[1].d[0] = c.r[11].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00385A80; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_00385A80:
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00385AA0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
L_00385AA0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00385AA4:
    c.r[7].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003859D8u | kUnwind; return; } goto L_003859D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00385AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385AE0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00385AE0u) [[unlikely]] return; }
L_00385AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00385B18; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], 0u + 21u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 23344u);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_00385B18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00385B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00385B50:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 31360u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_00385B80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00385BA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00385BB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00385BC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00385BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 320u);  if (t) { goto L_00385CBC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385C2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00385C1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));  if (t) { goto L_00385CD8; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00385C1C:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
L_00385C2C:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  goto L_00385C58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00385C6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_00385C58:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
L_00385C6C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385C98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385CBC; } }
L_00385C98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385CB4u); st32((c.r[5].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00385CB4u) [[unlikely]] return; }
L_00385CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385CBCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00385CBCu) [[unlikely]] return; }
L_00385CBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3628u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385CD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00385CD4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00385CD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00385CEC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00385CEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00385D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385DCC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385DAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385D5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00385D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (t) { goto L_00385E18; } }
L_00385D50:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_00385D5C:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_00385D90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385E14; } }
L_00385D90:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385DA4u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00385DA4u) [[unlikely]] return; }
L_00385DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00385E14; } }
L_00385DAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3627u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385E14; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00385E14; } }
L_00385DCC:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00385E14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385E14u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00385E14u) [[unlikely]] return; }
L_00385E14:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00385E18:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00385E2C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00385E2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00385E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385E68u); set32(c.r[17], c.r[18].w[0] + 320u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00385E68u) [[unlikely]] return; }
L_00385E68:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385E74u); st16((c.r[28].w[0] - 24616u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00385E74u) [[unlikely]] return; }
L_00385E74:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385E80u); st16((c.r[28].w[0] - 24614u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00385E80u) [[unlikely]] return; }
L_00385E80:
    c.r[3].d[0] = c.r[2].d[0] & 127ull;
    st16((c.r[28].w[0] - 24612u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00386038; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00386014; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00386008; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00385EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00385ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));  if (t) { goto L_0038607C; } }
L_00385ECC:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385EDCu); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00A2(c, 35u, depth + 1u); else { c.pc = 0x00389090u; return; } if (c.pc != 0x00385EDCu) [[unlikely]] return; }
L_00385EDC:
    st16((c.r[17].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00385EE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00385F48; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st16((c.r[17].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
L_00385F24:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00385F24u | kUnwind; return; } goto L_00385F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386078; } }
L_00385F48:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 10u);  if (t) { goto L_00385F84; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00385FC8; } }
L_00385F84:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00385FC8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00385FC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00385FE0; } }
    set32(c.r[5], 0u + 59u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00385FE0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00385FE0u) [[unlikely]] return; }
L_00385FE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00386078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00386078; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00386008:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386014u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00386014u) [[unlikely]] return; }
L_00386014:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3627u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00386078; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00386078; } }
L_00386038:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00386078; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00386078:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0038607C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00386090; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00386090:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003860B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386164; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386144; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386100; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003860F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));  if (t) { goto L_003861A8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003860F4:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_00386100:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_00386134; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003861A4; } }
L_00386134:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), 0u);  if (t) { goto L_003861A4; } }
L_00386144:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3627u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003861A4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003861A4; } }
L_00386164:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003861A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003861A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003861A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003861BC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003861BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003861D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[7], c.r[3].w[0] + 25952u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386270; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386214; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00386204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));  if (t) { goto L_00386274; } }
L_00386204:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00386214:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0038626C; }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00386270; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[7].w[0] + 3627u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00386270; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0038626C:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00386270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 1;
L_00386274:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003862B0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003862B0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003862B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003862C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25952u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[16].w[0] + 320u);  if (t) { goto L_003863C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00386384; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00386324; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00386314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (t) { goto L_0038640C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00386314:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), 0u);
    c.budget -= 4;
L_00386324:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0038637C; }
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00386408; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[5].w[0]);  if (t) { goto L_00386408; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0038637C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00386408; } }
L_00386384:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3268u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00386408; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00386408; } }
L_003863C0:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_00386408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386408u); st8((c.r[5].w[0] + 3628u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 152u, depth + 1u); else { c.pc = 0x00385AC0u; return; } if (c.pc != 0x00386408u) [[unlikely]] return; }
L_00386408:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0038640C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00386420; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00386420:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00386430:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_003864D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386470; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00386460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003864D4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00386460:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), 0u);
    c.budget -= 4;
L_00386470:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003864CC; }
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_003864D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 643u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003864D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003864CC:
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003864D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003864D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003864E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_00386554; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00386518; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00386510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00386558; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00386510:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_00386518:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00386554; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 4;
L_00386554:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00386558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00386560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16696u)));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[29].w[0] + 58u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 256u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[2], 0u + 640u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], 0u + 224u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 27040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386614u); st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00386614u) [[unlikely]] return; }
L_00386614:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386658u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00386658u) [[unlikely]] return; }
L_00386658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386690u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00386690u) [[unlikely]] return; }
L_00386690:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003866A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 25952u);
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16704u)));
    set32(c.r[17], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[6], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 36;
L_00386730:
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 31088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[20], c.r[29].w[0] + 198u);
    set32(c.r[21], c.r[29].w[0] + 164u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[6].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 200u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[29].w[0] + 202u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 10u));
    st32((c.r[21].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 14u));
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003867DCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003867DCu) [[unlikely]] return; }
L_003867DC:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003867F4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003867F4u) [[unlikely]] return; }
L_003867F4:
    set32(c.r[30], c.r[29].w[0] + 205u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386810u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00386810u) [[unlikely]] return; }
L_00386810:
    set32(c.r[23], c.r[29].w[0] + 206u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038682Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0038682Cu) [[unlikely]] return; }
L_0038682C:
    set32(c.r[22], c.r[29].w[0] + 207u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386864u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00386864u) [[unlikely]] return; }
L_00386864:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00386730u | kUnwind; return; } goto L_00386730; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16700u)));
    set32(c.r[8], 0u + 128u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[6], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 175u);
    if (c.r[9].d[0] != 0) c.r[8].d[0] = c.r[7].d[0];
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    set32(c.r[6], c.r[2].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 202u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386900u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00386900u) [[unlikely]] return; }
L_00386900:
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386918u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00386918u) [[unlikely]] return; }
L_00386918:
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386930u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00386930u) [[unlikely]] return; }
L_00386930:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386948u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00386948u) [[unlikely]] return; }
L_00386948:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038697Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038697Cu) [[unlikely]] return; }
L_0038697C:
    c.f[12] = ld32((c.r[17].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386990u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x00386990u) [[unlikely]] return; }
L_00386990:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003869C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16704u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386A18u); c.f[12] = ld32((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00386A18u) [[unlikely]] return; }
L_00386A18:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 31024u);
    st32((c.r[29].w[0] + 88u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_00386A38:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[11], c.r[29].w[0] + 106u);
    set32(c.r[2], c.r[29].w[0] + 52u);
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65300ull;
    set32(c.r[8], c.r[28].w[0] - 27036u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 104u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 110u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[17].w[0] + 10u));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.r[10].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[9], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 14u));
    st32((c.r[1].w[0] - 20380u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386AECu); st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00386AECu) [[unlikely]] return; }
L_00386AEC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00386A38u | kUnwind; return; } goto L_00386A38; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00386B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00386CF8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00386B38:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_00386CEC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11904u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00384000u < 16384u) { entry = entries_00A1[(t - 0x00384000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00386B60:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386B6Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 243u, depth + 1u); else { c.pc = 0x00386D30u; return; } if (c.pc != 0x00386B6Cu) [[unlikely]] return; }
L_00386B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386B74:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386B80u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 253u, depth + 1u); else { c.pc = 0x003873A0u; return; } if (c.pc != 0x00386B80u) [[unlikely]] return; }
L_00386B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386B88:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386B94u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 253u, depth + 1u); else { c.pc = 0x003873A0u; return; } if (c.pc != 0x00386B94u) [[unlikely]] return; }
L_00386B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386B9C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386BA8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 253u, depth + 1u); else { c.pc = 0x003873A0u; return; } if (c.pc != 0x00386BA8u) [[unlikely]] return; }
L_00386BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386BB0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386BBCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A2(c, 6u, depth + 1u); else { c.pc = 0x003881D0u; return; } if (c.pc != 0x00386BBCu) [[unlikely]] return; }
L_00386BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386BC4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386BD0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 265u, depth + 1u); else { c.pc = 0x00387CE0u; return; } if (c.pc != 0x00386BD0u) [[unlikely]] return; }
L_00386BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386BD8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386BE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386BE4u) [[unlikely]] return; }
L_00386BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386BEC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386BF8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386BF8u) [[unlikely]] return; }
L_00386BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C00:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C0Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386C0Cu) [[unlikely]] return; }
L_00386C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C14:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C20u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386C20u) [[unlikely]] return; }
L_00386C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C28:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386C34u) [[unlikely]] return; }
L_00386C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C3C:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C48u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 259u, depth + 1u); else { c.pc = 0x003879A0u; return; } if (c.pc != 0x00386C48u) [[unlikely]] return; }
L_00386C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386C5Cu) [[unlikely]] return; }
L_00386C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C64:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C70u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386C70u) [[unlikely]] return; }
L_00386C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C78:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C84u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386C84u) [[unlikely]] return; }
L_00386C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386C8C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386C98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386C98u) [[unlikely]] return; }
L_00386C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386CA0:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386CACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386CACu) [[unlikely]] return; }
L_00386CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386CB4:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386CC0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386CC0u) [[unlikely]] return; }
L_00386CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386CC8:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386CD4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386CD4u) [[unlikely]] return; }
L_00386CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00386CE8; } }
L_00386CDC:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386CE8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_00A1(c, 248u, depth + 1u); else { c.pc = 0x00387040u; return; } if (c.pc != 0x00386CE8u) [[unlikely]] return; }
L_00386CE8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00386CEC:
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
L_00386CF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 140u)));
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00386B38u | kUnwind; return; } goto L_00386B38; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00386D30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16704u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386D98u); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00386D98u) [[unlikely]] return; }
L_00386D98:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    c.r[3].d[0] = c.r[17].d[0] << 48;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[19], 0u + 199u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 15;
L_00386DD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00386E0C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00386EB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00386E0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00386E58; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 1000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00386EB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00386E58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00386EA0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00386EB8; } }
L_00386EA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_00386EB8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_00386EDC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00386ED8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00386F7C; }
    c.budget -= 1;
L_00386ED8:
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00386EDC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], c.r[29].w[0] + 138u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    set32(c.r[8], 0u + 44u);
    set32(c.r[2], c.r[3].w[0] + 24u);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[10], c.r[29].w[0] + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[9].w[0] + 24u);
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 96u), c.r[19].w[0]);
    st32((c.r[10].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 136u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00386F78u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00386F78u) [[unlikely]] return; }
L_00386F78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00386F7C:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00386DD4u | kUnwind; return; } goto L_00386DD4; } }
    set32(c.r[2], 0u + 488u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 196u);
    set32(c.r[5], c.r[29].w[0] + 138u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 136u)));
    set32(c.r[4], 0u + 280u);
    set32(c.r[3], 0u + 46u);
    set32(c.r[9], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[8].w[0] + 20u);
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 136u);
    set32(c.r[2], c.r[8].w[0] + 20u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387020u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387020u) [[unlikely]] return; }
L_00387020:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00387040:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16704u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[20], c.r[4].w[0] + 320u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003870B8u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003870B8u) [[unlikely]] return; }
L_003870B8:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    c.r[21].d[0] = c.r[16].d[0] << 48;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30736u);
    set32(c.r[23], c.r[21].w[0] << 3);
    set32(c.r[19], 0u + 500u);
    set32(c.r[22], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 152u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 19;
L_00387104:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038713C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003871C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0038713C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00387188; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003871C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00387188:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003871C4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 82u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 12;
L_003871C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003871C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003871E0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003871E0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003872A4; }
    c.budget -= 1;
L_003871E0:
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[4].w[0] + 20u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[22].w[0] + 6u));
    set32(c.r[2], 0u + 56u);
    set32(c.r[6], c.r[29].w[0] + 202u);
    c.r[1].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[18], 0u + 1u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + 10u);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0038725C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30748u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (t) { goto L_00387270; } }
L_0038725C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30744u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 5;
L_00387270:
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003872A0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x003872A0u) [[unlikely]] return; }
L_003872A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003872A4:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387104u | kUnwind; return; } goto L_00387104; } }
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30734u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 202u);
    set32(c.r[10], c.r[29].w[0] + 164u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30732u);
    set32(c.r[3], c.r[2].w[0] + c.r[23].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30730u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[8], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[4].w[0] + 20u);
    st16((c.r[29].w[0] + 204u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    set32(c.r[2], c.r[4].w[0] + 20u);
    st16((c.r[29].w[0] + 206u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 160u), c.r[9].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[3], c.r[29].w[0] + 200u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0])));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038736Cu); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0038736Cu) [[unlikely]] return; }
L_0038736C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003873A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16704u)));
    c.r[20].d[0] = c.r[5].d[0] << 48;
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387434u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00387434u) [[unlikely]] return; }
L_00387434:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 200u);
    c.budget -= 8;
L_00387454:
    set32(c.r[2], 0u + 256u);
    if (c.r[17].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 56u);
    set32(c.r[2], 0u + 236u);
    set32(c.r[19], c.r[29].w[0] + 218u);
    if (c.r[17].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[4], 0u + 238u);
    set32(c.r[3], 0u + 280u);
    if (c.r[17].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[5], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], 0u + 62u);
    set32(c.r[23], c.r[29].w[0] + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] + 20u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[23].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 196u);
    set32(c.r[8], c.r[8].w[0] + 10u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387510u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387510u) [[unlikely]] return; }
L_00387510:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387454u | kUnwind; return; } goto L_00387454; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[3].w[0] - 30672u);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[30], c.r[20].w[0] + 1u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 9;
L_00387544:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0038757C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00387848; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0038757C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003875C8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00387848; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003875C8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[4].d[0];  if (t) { goto L_00387604; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0038784C; } }
L_00387604:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 140u)));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003876C4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_00387660; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00387690; } }
L_00387660:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
L_00387690:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24616u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 150u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00387848; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003876C4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_003877A0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[5].d[0];  if (t) { goto L_00387714; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 142u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00387798; } }
L_00387714:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_0038775C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 144u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00387798; } }
L_0038775C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 146u)));
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
L_00387798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00387848; } }
L_003877A0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[5].d[0];  if (t) { goto L_003877DC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 142u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00387844; } }
L_003877DC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_00387818; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 144u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00387844; } }
L_00387818:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 146u)));
    set32(c.r[4], 0u + 100u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
L_00387844:
    c.budget -= 1;
L_00387848:
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0038784C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00387868; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00387868; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00387964; }
    c.budget -= 1;
L_00387868:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[1].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[22], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_003878E8; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00387920; } }
L_003878E8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[29].w[0] + 222u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00387920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387960u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387960u) [[unlikely]] return; }
L_00387960:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00387964:
    c.r[3].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387544u | kUnwind; return; } goto L_00387544; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003879A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[23], c.r[4].w[0] + 320u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387A08u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00387A08u) [[unlikely]] return; }
L_00387A08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16700u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 30624u);
    set32(c.r[4], c.r[18].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 152u), 0u);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[20], c.r[29].w[0] + 176u);
    set32(c.r[17], c.r[29].w[0] + 180u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30622u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[19], c.r[29].w[0] + 202u);
    set32(c.r[21], c.r[29].w[0] + 204u);
    set32(c.r[22], c.r[29].w[0] + 206u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[9].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[8], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[2].w[0] - 30752u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[9].w[0]);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 184u), c.r[9].w[0]);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 200u);
    set32(c.r[2], c.r[9].w[0] + 32u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387B04u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387B04u) [[unlikely]] return; }
L_00387B04:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[10], 0u + 220u);
    set32(c.r[9], 0u + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] + 26u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + 20u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[11].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 200u);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] - 16704u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387BB8u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387BB8u) [[unlikely]] return; }
L_00387BB8:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[23].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_00387BD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00387C04; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00387C1C; } }
L_00387C04:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_00387C1C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00387C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 15u);  if (t) { goto L_00387C5C; } }
L_00387C58:
    set32(c.r[2], c.r[17].w[0] + 31u);
    c.budget -= 1;
L_00387C5C:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[7].w[0] + 20u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387C9Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387C9Cu) [[unlikely]] return; }
L_00387C9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387BD0u | kUnwind; return; } goto L_00387BD0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00387CE0:
    set32(c.r[29], c.r[29].w[0] - 224u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16700u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[19], c.r[2].w[0] + 25952u);
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387D5Cu); c.f[12] = ld32((c.r[4].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00387D5Cu) [[unlikely]] return; }
L_00387D5C:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], 0u + 234u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 123u);
    set32(c.r[16], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 184u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[8].d[0] = c.r[2].d[0] | 21846ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] - 30576u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[30], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] - 30574u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[1].w[0] + 29420u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 30572u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0] + 200u), c.r[7].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], c.r[2].w[0] - 30570u);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[9].w[0] >> 31);
    set32(c.r[17], c.r[29].w[0] + 218u);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[9].d[0] = ld16((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[18], c.r[29].w[0] + 222u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[10].w[0] + c.r[9].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 76;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387E8Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387E8Cu) [[unlikely]] return; }
L_00387E8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29420u)));
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 30416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00387FC0; } }
    c.r[1].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00387FC0; } }
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 1;
L_00387EDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 30496u);
    set32(c.r[4], 0u + 123u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 124u);
    set32(c.r[9], 0u + 160u);
    set32(c.r[8], 0u + 48u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2070u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] - 30752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    if (c.r[10].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 216u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2070u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = 0ull;
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20380u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00387FACu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00387FACu) [[unlikely]] return; }
L_00387FAC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387EDCu | kUnwind; return; } goto L_00387EDC; } }
    c.budget -= 1;
L_00387FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 3468u)));
    set32(c.r[3], c.r[2].w[0] - 30414u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2070u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A2(c, 4u, depth); } }
    c.r[1].d[0] = 0ll < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_00A2(c, 4u, depth); } }
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_00A2(c, 1u, depth);
}

}
