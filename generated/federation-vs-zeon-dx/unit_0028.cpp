#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 2, 0, 0, 0, 3, 4, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0,
    263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0004;
    case 3u: goto L_001A0014;
    case 4u: goto L_001A0018;
    case 5u: goto L_001A001C;
    case 6u: goto L_001A0030;
    case 7u: goto L_001A0040;
    case 8u: goto L_001A0050;
    case 9u: goto L_001A0060;
    case 10u: goto L_001A0068;
    case 11u: goto L_001A008C;
    case 12u: goto L_001A00B8;
    case 13u: goto L_001A00CC;
    case 14u: goto L_001A0118;
    case 15u: goto L_001A0124;
    case 16u: goto L_001A01C0;
    case 17u: goto L_001A01E0;
    case 18u: goto L_001A01F0;
    case 19u: goto L_001A020C;
    case 20u: goto L_001A0218;
    case 21u: goto L_001A0230;
    case 22u: goto L_001A0234;
    case 23u: goto L_001A025C;
    case 24u: goto L_001A0268;
    case 25u: goto L_001A0274;
    case 26u: goto L_001A02A8;
    case 27u: goto L_001A02B4;
    case 28u: goto L_001A02CC;
    case 29u: goto L_001A0380;
    case 30u: goto L_001A0390;
    case 31u: goto L_001A03A0;
    case 32u: goto L_001A03E0;
    case 33u: goto L_001A03F4;
    case 34u: goto L_001A0400;
    case 35u: goto L_001A040C;
    case 36u: goto L_001A0430;
    case 37u: goto L_001A04A0;
    case 38u: goto L_001A04AC;
    case 39u: goto L_001A04C4;
    case 40u: goto L_001A04D0;
    case 41u: goto L_001A04DC;
    case 42u: goto L_001A04F8;
    case 43u: goto L_001A0508;
    case 44u: goto L_001A0580;
    case 45u: goto L_001A0590;
    case 46u: goto L_001A05A8;
    case 47u: goto L_001A05B4;
    case 48u: goto L_001A05BC;
    case 49u: goto L_001A0608;
    case 50u: goto L_001A0640;
    case 51u: goto L_001A06DC;
    case 52u: goto L_001A0720;
    case 53u: goto L_001A0748;
    case 54u: goto L_001A0790;
    case 55u: goto L_001A07B0;
    case 56u: goto L_001A084C;
    case 57u: goto L_001A0890;
    case 58u: goto L_001A08B8;
    case 59u: goto L_001A0900;
    case 60u: goto L_001A0920;
    case 61u: goto L_001A0A44;
    case 62u: goto L_001A0A7C;
    case 63u: goto L_001A0A8C;
    case 64u: goto L_001A0A9C;
    case 65u: goto L_001A0ABC;
    case 66u: goto L_001A0AE8;
    case 67u: goto L_001A0B0C;
    case 68u: goto L_001A0B3C;
    case 69u: goto L_001A0B80;
    case 70u: goto L_001A0C3C;
    case 71u: goto L_001A0C78;
    case 72u: goto L_001A0C88;
    case 73u: goto L_001A0C98;
    case 74u: goto L_001A0CB8;
    case 75u: goto L_001A0CE4;
    case 76u: goto L_001A0D08;
    case 77u: goto L_001A0D38;
    case 78u: goto L_001A0D70;
    case 79u: goto L_001A0E14;
    case 80u: goto L_001A0E28;
    case 81u: goto L_001A0F60;
    case 82u: goto L_001A0FC0;
    case 83u: goto L_001A0FCC;
    case 84u: goto L_001A1008;
    case 85u: goto L_001A1014;
    case 86u: goto L_001A10C4;
    case 87u: goto L_001A10E4;
    case 88u: goto L_001A1260;
    case 89u: goto L_001A1268;
    case 90u: goto L_001A12A0;
    case 91u: goto L_001A1318;
    case 92u: goto L_001A1388;
    case 93u: goto L_001A13C0;
    case 94u: goto L_001A1400;
    case 95u: goto L_001A1464;
    case 96u: goto L_001A14B4;
    case 97u: goto L_001A1514;
    case 98u: goto L_001A1598;
    case 99u: goto L_001A15E8;
    case 100u: goto L_001A1674;
    case 101u: goto L_001A16C8;
    case 102u: goto L_001A1748;
    case 103u: goto L_001A17D0;
    case 104u: goto L_001A1814;
    case 105u: goto L_001A1870;
    case 106u: goto L_001A18F8;
    case 107u: goto L_001A19A8;
    case 108u: goto L_001A19B0;
    case 109u: goto L_001A1A18;
    case 110u: goto L_001A1A20;
    case 111u: goto L_001A1A28;
    case 112u: goto L_001A1A30;
    case 113u: goto L_001A1A38;
    case 114u: goto L_001A1A40;
    case 115u: goto L_001A1A48;
    case 116u: goto L_001A1A50;
    case 117u: goto L_001A1A58;
    case 118u: goto L_001A1A60;
    case 119u: goto L_001A1A68;
    case 120u: goto L_001A1A70;
    case 121u: goto L_001A1A80;
    case 122u: goto L_001A1AB8;
    case 123u: goto L_001A1AF8;
    case 124u: goto L_001A1B10;
    case 125u: goto L_001A1B28;
    case 126u: goto L_001A1BE8;
    case 127u: goto L_001A1BF4;
    case 128u: goto L_001A1C00;
    case 129u: goto L_001A1C0C;
    case 130u: goto L_001A1C1C;
    case 131u: goto L_001A1C2C;
    case 132u: goto L_001A1C40;
    case 133u: goto L_001A1C50;
    case 134u: goto L_001A1C58;
    case 135u: goto L_001A1C68;
    case 136u: goto L_001A1C78;
    case 137u: goto L_001A1CB4;
    case 138u: goto L_001A1D24;
    case 139u: goto L_001A1D34;
    case 140u: goto L_001A1D78;
    case 141u: goto L_001A1D84;
    case 142u: goto L_001A1D90;
    case 143u: goto L_001A1D9C;
    case 144u: goto L_001A1DAC;
    case 145u: goto L_001A1DB4;
    case 146u: goto L_001A1DC4;
    case 147u: goto L_001A1DD4;
    case 148u: goto L_001A1DE4;
    case 149u: goto L_001A1E18;
    case 150u: goto L_001A1E84;
    case 151u: goto L_001A1E90;
    case 152u: goto L_001A1EC0;
    case 153u: goto L_001A1FEC;
    case 154u: goto L_001A2000;
    case 155u: goto L_001A2008;
    case 156u: goto L_001A2010;
    case 157u: goto L_001A2018;
    case 158u: goto L_001A2028;
    case 159u: goto L_001A2038;
    case 160u: goto L_001A204C;
    case 161u: goto L_001A205C;
    case 162u: goto L_001A2064;
    case 163u: goto L_001A2074;
    case 164u: goto L_001A2084;
    case 165u: goto L_001A20C8;
    case 166u: goto L_001A2130;
    case 167u: goto L_001A2140;
    case 168u: goto L_001A2154;
    case 169u: goto L_001A215C;
    case 170u: goto L_001A2164;
    case 171u: goto L_001A216C;
    case 172u: goto L_001A217C;
    case 173u: goto L_001A2184;
    case 174u: goto L_001A2194;
    case 175u: goto L_001A21A4;
    case 176u: goto L_001A21B0;
    case 177u: goto L_001A2240;
    case 178u: goto L_001A2270;
    case 179u: goto L_001A22A4;
    case 180u: goto L_001A22BC;
    case 181u: goto L_001A22F8;
    case 182u: goto L_001A2338;
    case 183u: goto L_001A23F4;
    case 184u: goto L_001A2400;
    case 185u: goto L_001A240C;
    case 186u: goto L_001A2450;
    case 187u: goto L_001A2498;
    case 188u: goto L_001A24A4;
    case 189u: goto L_001A24B0;
    case 190u: goto L_001A24F0;
    case 191u: goto L_001A2534;
    case 192u: goto L_001A2540;
    case 193u: goto L_001A254C;
    case 194u: goto L_001A2594;
    case 195u: goto L_001A25DC;
    case 196u: goto L_001A265C;
    case 197u: goto L_001A2670;
    case 198u: goto L_001A2678;
    case 199u: goto L_001A2688;
    case 200u: goto L_001A2698;
    case 201u: goto L_001A26A8;
    case 202u: goto L_001A26B8;
    case 203u: goto L_001A26C8;
    case 204u: goto L_001A26D8;
    case 205u: goto L_001A2738;
    case 206u: goto L_001A2770;
    case 207u: goto L_001A27E0;
    case 208u: goto L_001A2850;
    case 209u: goto L_001A28F8;
    case 210u: goto L_001A2904;
    case 211u: goto L_001A2910;
    case 212u: goto L_001A2954;
    case 213u: goto L_001A2990;
    case 214u: goto L_001A29D4;
    case 215u: goto L_001A29DC;
    case 216u: goto L_001A29EC;
    case 217u: goto L_001A29FC;
    case 218u: goto L_001A2A44;
    case 219u: goto L_001A2A78;
    case 220u: goto L_001A2AEC;
    case 221u: goto L_001A2AF8;
    case 222u: goto L_001A2B30;
    case 223u: goto L_001A2E34;
    case 224u: goto L_001A2ECC;
    case 225u: goto L_001A2EE0;
    case 226u: goto L_001A2F1C;
    case 227u: goto L_001A2F58;
    case 228u: goto L_001A2FB0;
    case 229u: goto L_001A30C4;
    case 230u: goto L_001A30D0;
    case 231u: goto L_001A30DC;
    case 232u: goto L_001A30E8;
    case 233u: goto L_001A313C;
    case 234u: goto L_001A3194;
    case 235u: goto L_001A31D0;
    case 236u: goto L_001A31E4;
    case 237u: goto L_001A31EC;
    case 238u: goto L_001A3224;
    case 239u: goto L_001A325C;
    case 240u: goto L_001A32EC;
    case 241u: goto L_001A3320;
    case 242u: goto L_001A3394;
    case 243u: goto L_001A33EC;
    case 244u: goto L_001A3458;
    case 245u: goto L_001A3464;
    case 246u: goto L_001A3470;
    case 247u: goto L_001A347C;
    case 248u: goto L_001A34D4;
    case 249u: goto L_001A34DC;
    case 250u: goto L_001A3514;
    case 251u: goto L_001A354C;
    case 252u: goto L_001A35A4;
    case 253u: goto L_001A35D8;
    case 254u: goto L_001A3678;
    case 255u: goto L_001A36A0;
    case 256u: goto L_001A3920;
    case 257u: goto L_001A39B4;
    case 258u: goto L_001A39C0;
    case 259u: goto L_001A39D0;
    case 260u: goto L_001A39E4;
    case 261u: goto L_001A39EC;
    case 262u: goto L_001A39F8;
    case 263u: goto L_001A3A00;
    case 264u: goto L_001A3A0C;
    case 265u: goto L_001A3A20;
    case 266u: goto L_001A3A64;
    case 267u: goto L_001A3A78;
    case 268u: goto L_001A3AB4;
    case 269u: goto L_001A3AC0;
    case 270u: goto L_001A3AD0;
    case 271u: goto L_001A3AE0;
    case 272u: goto L_001A3AF8;
    case 273u: goto L_001A3B08;
    case 274u: goto L_001A3B18;
    case 275u: goto L_001A3B28;
    case 276u: goto L_001A3B38;
    case 277u: goto L_001A3B50;
    case 278u: goto L_001A3B60;
    case 279u: goto L_001A3B70;
    case 280u: goto L_001A3B80;
    case 281u: goto L_001A3BA0;
    case 282u: goto L_001A3BB4;
    case 283u: goto L_001A3BC8;
    case 284u: goto L_001A3BE0;
    case 285u: goto L_001A3BF0;
    case 286u: goto L_001A3C18;
    case 287u: goto L_001A3C40;
    case 288u: goto L_001A3C64;
    case 289u: goto L_001A3C70;
    case 290u: goto L_001A3C94;
    case 291u: goto L_001A3CD0;
    case 292u: goto L_001A3CF4;
    case 293u: goto L_001A3D04;
    case 294u: goto L_001A3D24;
    case 295u: goto L_001A3D54;
    case 296u: goto L_001A3D7C;
    case 297u: goto L_001A3DA8;
    case 298u: goto L_001A3DC0;
    case 299u: goto L_001A3EF0;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 1;
L_001A0004:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0014u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x001A0014u) [[unlikely]] return; }
L_001A0014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_001A0018:
    c.r[2].d[0] = c.r[2].d[0] | 4896ull;
    c.budget -= 1;
L_001A001C:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0030u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x0019EE10u; return; } if (c.pc != 0x001A0030u) [[unlikely]] return; }
L_001A0030:
    set32(c.r[4], c.r[29].w[0] + 464u);
    mmi::paddub(c.r[5], c.r[30], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0040u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 162u, depth + 1u); else { c.pc = 0x001923A0u; return; } if (c.pc != 0x001A0040u) [[unlikely]] return; }
L_001A0040:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    set32(c.r[6], c.r[29].w[0] + 704u);
    c.budget -= 4;
L_001A0050:
    set32(c.r[8], c.r[2].w[0] + 1856u);
    set32(c.r[7], c.r[29].w[0] + 768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0060u); set32(c.r[9], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x001A0060u) [[unlikely]] return; }
L_001A0060:
    set32(c.r[2], c.r[29].w[0] + 768u);
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.budget -= 2;
L_001A0068:
    set32(c.r[5], c.r[17].w[0] + 320u);
    set32(c.r[6], c.r[17].w[0] + 384u);
    set32(c.r[7], c.r[17].w[0] + 448u);
    set32(c.r[8], c.r[17].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 576u);
    set32(c.r[10], c.r[29].w[0] + 640u);
    set32(c.r[11], c.r[29].w[0] + 704u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A008Cu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x001A008Cu) [[unlikely]] return; }
L_001A008C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[17].w[0] + 572u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 560u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] + 5u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[17].w[0] + 560u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00B8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x00135080u; return; } if (c.pc != 0x001A00B8u) [[unlikely]] return; }
L_001A00B8:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00CCu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001350D0u; return; } if (c.pc != 0x001A00CCu) [[unlikely]] return; }
L_001A00CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st64((c.r[21].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[21].w[0]), 0ull);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 26044u)));
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 21210u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0118u); set32(c.r[19], c.r[2].w[0] + 21200u);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001A0118u) [[unlikely]] return; }
L_001A0118:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0124u); mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001A0124u) [[unlikely]] return; }
L_001A0124:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << 26;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    set32(c.r[4], 0u + 4u);
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[21].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[21].w[0]), c.r[2].d[0]);
    c.budget -= 39;
L_001A01C0:
    set32(c.r[2], 0u + 1042u);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 844u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001A05F0; } }
    set32(c.r[2], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_001A01E0:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    c.budget -= 4;
L_001A01F0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 845u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st8((c.r[29].w[0] + 846u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 844u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A020Cu); st8((c.r[29].w[0] + 845u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A020Cu) [[unlikely]] return; }
L_001A020C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0218u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001A0218u) [[unlikely]] return; }
L_001A0218:
    set32(c.r[20], ld32((c.r[29].w[0] + 428u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0234u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001A0234u) [[unlikely]] return; }
    goto L_001A0234;
L_001A0230:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 1;
L_001A0234:
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A025Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001A025Cu) [[unlikely]] return; }
L_001A025C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0268u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001A0268u) [[unlikely]] return; }
L_001A0268:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0274u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A0274u) [[unlikely]] return; }
L_001A0274:
    c.r[2].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = c.f[20];
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02A8u); st32((c.r[29].w[0] + 352u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 276u, depth + 1u); else { c.pc = 0x00102F98u; return; } if (c.pc != 0x001A02A8u) [[unlikely]] return; }
L_001A02A8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02B4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A02B4u) [[unlikely]] return; }
L_001A02B4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02CCu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001A02CCu) [[unlikely]] return; }
L_001A02CC:
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = ld32((c.r[29].w[0] + 316u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001A0344; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A0340; } }
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A0340; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A0340; } }
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A0340; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A034C; } }
L_001A0340:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A0344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 844u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001A0350; } }
L_001A034C:
    st8((c.r[29].w[0] + 844u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A0350:
    set32(c.r[2], c.r[29].w[0] + 844u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0368; } }
    c.r[20].d[0] = 0ull | 32768ull;
    c.budget -= 2;
L_001A0368:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001A03C8; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0380u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001A0380u) [[unlikely]] return; }
L_001A0380:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0390u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001A0390u) [[unlikely]] return; }
L_001A0390:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03A0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 207u, depth + 1u); else { c.pc = 0x00102480u; return; } if (c.pc != 0x001A03A0u) [[unlikely]] return; }
L_001A03A0:
    c.f[2] = ld32((c.r[29].w[0] + 312u));
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A03C8; } }
    c.r[20].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001A03C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03E0u); st32((c.r[29].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A03E0u) [[unlikely]] return; }
L_001A03E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[17].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03F4u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A03F4u) [[unlikely]] return; }
L_001A03F4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0400u); set32(c.r[5], c.r[17].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A0400u) [[unlikely]] return; }
L_001A0400:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A040Cu); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A040Cu) [[unlikely]] return; }
L_001A040C:
    st32((c.r[29].w[0] + 296u), 0u);
    st32((c.r[29].w[0] + 292u), 0u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    st32((c.r[29].w[0] + 288u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0430u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001A0430u) [[unlikely]] return; }
L_001A0430:
    c.f[1] = ld32((c.r[29].w[0] + 304u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A0450; } }
    st32((c.r[29].w[0] + 304u), 0u);
    c.budget -= 1;
L_001A0450:
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A0470; } }
    st32((c.r[29].w[0] + 308u), 0u);
    c.budget -= 1;
L_001A0470:
    c.f[1] = ld32((c.r[29].w[0] + 312u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_001A0494; } }
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 2;
L_001A0494:
    set32(c.r[5], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04A0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001A04A0u) [[unlikely]] return; }
L_001A04A0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04ACu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A04ACu) [[unlikely]] return; }
L_001A04AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04C4u); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102650u; return; } if (c.pc != 0x001A04C4u) [[unlikely]] return; }
L_001A04C4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A04D0u) [[unlikely]] return; }
L_001A04D0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04DCu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001A04DCu) [[unlikely]] return; }
L_001A04DC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04F8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001A04F8u) [[unlikely]] return; }
L_001A04F8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0508u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102650u; return; } if (c.pc != 0x001A0508u) [[unlikely]] return; }
L_001A0508:
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[6] = ld32((c.r[29].w[0] + 308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 312u));
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    c.f[7] = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[6] = fp::mul(c.f[6], c.f[6]);
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    c.facc = fp::add(c.f[7], c.f[6]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    fpu_div(c, 20u, c.f[4], c.f[5]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_001A0574; } }
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 2;
L_001A0574:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0580u); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001A0580u) [[unlikely]] return; }
L_001A0580:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0590u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102620u; return; } if (c.pc != 0x001A0590u) [[unlikely]] return; }
L_001A0590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102A10u; return; } if (c.pc != 0x001A05A8u) [[unlikely]] return; }
L_001A05A8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05B4u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001A05B4u) [[unlikely]] return; }
L_001A05B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05BCu); c.f[12] = ld32((c.r[17].w[0] + 572u));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001A05BCu) [[unlikely]] return; }
L_001A05BC:
    st32((c.r[29].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 13;
L_001A05F0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[29].w[0] + 368u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A01E0u | kUnwind; return; } goto L_001A01E0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0608u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001A0608u) [[unlikely]] return; }
L_001A0608:
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
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_001A0640:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[3].w[0] + 9600u);
    set32(c.r[5], 0u + 26064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27600u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[1].w[0] + 10432u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 4868u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[1].w[0] + 10436u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0720; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 12672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A06DCu); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A06DCu) [[unlikely]] return; }
L_001A06DC:
    set32(c.r[7], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0720u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 176u, depth + 1u); else { c.pc = 0x0019FF50u; return; } if (c.pc != 0x001A0720u) [[unlikely]] return; }
L_001A0720:
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0790; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[5], c.r[17].w[0] + 14400u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0748u); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A0748u) [[unlikely]] return; }
L_001A0748:
    set32(c.r[7], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0790u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 176u, depth + 1u); else { c.pc = 0x0019FF50u; return; } if (c.pc != 0x001A0790u) [[unlikely]] return; }
L_001A0790:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A07B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[3].w[0] + 9600u);
    set32(c.r[5], 0u + 26064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27600u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 4896u);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[1].w[0] + 10440u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 4868u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[1].w[0] + 10444u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0890; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 12096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A084Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A084Cu) [[unlikely]] return; }
L_001A084C:
    set32(c.r[7], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], 0u + 2u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0890u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 176u, depth + 1u); else { c.pc = 0x0019FF50u; return; } if (c.pc != 0x001A0890u) [[unlikely]] return; }
L_001A0890:
    set32(c.r[4], ld32((c.r[18].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0900; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[5], c.r[17].w[0] + 12672u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08B8u); set32(c.r[7], 0u + 21u);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A08B8u) [[unlikely]] return; }
L_001A08B8:
    set32(c.r[7], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[3], 0u + 11200u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], 0u + 3u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0900u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0027(c, 176u, depth + 1u); else { c.pc = 0x0019FF50u; return; } if (c.pc != 0x001A0900u) [[unlikely]] return; }
L_001A0900:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A0920:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[8], c.r[6].w[0] + 9600u);
    set32(c.r[6], 0u + 26064u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[6].w[0] + 27600u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_001A09D4; } }
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[5].w[0] - 4720u);
    c.r[22].d[0] = ld32((c.r[16].w[0] + 1260u));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[21], c.r[5].w[0] + 4u);
    set32(c.r[5], 0u + 11200u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[19], 0u + 2u);
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 560u);  if (t) { goto L_001A0A38; } }
L_001A09D4:
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[22], 0u - 1u);
    set32(c.r[8], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[6].w[0] - 4720u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[21], c.r[6].w[0] + 28u);
    set32(c.r[6], 0u + 11200u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[19], 0u + 1u);
    c.r[22].d[0] = c.r[22].d[0] << 32;
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 25;
L_001A0A38:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A0B50; } }
    set32(c.r[23], c.r[4].w[0] << 4);
    c.budget -= 1;
L_001A0A44:
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[4].w[0] & 63u);
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_001A0B44; }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A7Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x001A0A7Cu) [[unlikely]] return; }
L_001A0A7C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A8Cu); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x0019EE10u; return; } if (c.pc != 0x001A0A8Cu) [[unlikely]] return; }
L_001A0A8C:
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A9Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 162u, depth + 1u); else { c.pc = 0x001923A0u; return; } if (c.pc != 0x001A0A9Cu) [[unlikely]] return; }
L_001A0A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    set32(c.r[7], c.r[29].w[0] + 512u);
    set32(c.r[9], c.r[29].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0ABCu); c.r[8].d[0] = c.r[2].d[0] | 6752ull;  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x001A0ABCu) [[unlikely]] return; }
L_001A0ABC:
    set32(c.r[2], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[18].w[0] + 256u);
    set32(c.r[5], c.r[18].w[0] + 320u);
    set32(c.r[6], c.r[18].w[0] + 384u);
    set32(c.r[7], c.r[18].w[0] + 448u);
    set32(c.r[8], c.r[18].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 320u);
    set32(c.r[10], c.r[29].w[0] + 384u);
    set32(c.r[11], c.r[29].w[0] + 448u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0AE8u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x001A0AE8u) [[unlikely]] return; }
L_001A0AE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 560u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[18].w[0] + 560u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 572u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[7].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B0Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A0B0Cu) [[unlikely]] return; }
L_001A0B0C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    set32(c.r[2], ld32((c.r[17].w[0] + 26044u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 21200u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[8], c.r[20], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B3Cu); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C7070u; return; } if (c.pc != 0x001A0B3Cu) [[unlikely]] return; }
L_001A0B3C:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 2;
L_001A0B44:
    set32(c.r[20], c.r[20].w[0] + c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0A44u | kUnwind; return; } goto L_001A0A44; } }
L_001A0B50:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_001A0B80:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], 0u + 26064u);
    set32(c.r[5], ld32((c.r[1].w[0] + 10416u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 4720u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    set32(c.r[21], c.r[4].w[0] + 4u);
    set32(c.r[4], 0u + 11200u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 2240u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 46;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A0D48; } }
    set32(c.r[22], c.r[3].w[0] << 4);
    c.budget -= 1;
L_001A0C3C:
    c.r[5].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_001A0D3C; }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C78u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x001A0C78u) [[unlikely]] return; }
L_001A0C78:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C88u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 95u, depth + 1u); else { c.pc = 0x0019EE10u; return; } if (c.pc != 0x001A0C88u) [[unlikely]] return; }
L_001A0C88:
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C98u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 162u, depth + 1u); else { c.pc = 0x001923A0u; return; } if (c.pc != 0x001A0C98u) [[unlikely]] return; }
L_001A0C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 432u);
    set32(c.r[7], c.r[29].w[0] + 496u);
    set32(c.r[9], c.r[29].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CB8u); c.r[8].d[0] = c.r[2].d[0] | 6752ull;  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x001A0CB8u) [[unlikely]] return; }
L_001A0CB8:
    set32(c.r[2], c.r[29].w[0] + 496u);
    set32(c.r[4], c.r[18].w[0] + 256u);
    set32(c.r[5], c.r[18].w[0] + 320u);
    set32(c.r[6], c.r[18].w[0] + 384u);
    set32(c.r[7], c.r[18].w[0] + 448u);
    set32(c.r[8], c.r[18].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 304u);
    set32(c.r[10], c.r[29].w[0] + 368u);
    set32(c.r[11], c.r[29].w[0] + 432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CE4u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x001A0CE4u) [[unlikely]] return; }
L_001A0CE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 560u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[18].w[0] + 560u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 572u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[7].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D08u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 94u, depth + 1u); else { c.pc = 0x001914F0u; return; } if (c.pc != 0x001A0D08u) [[unlikely]] return; }
L_001A0D08:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    set32(c.r[2], ld32((c.r[17].w[0] + 26044u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 21200u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[8], c.r[20], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D38u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C7070u; return; } if (c.pc != 0x001A0D38u) [[unlikely]] return; }
L_001A0D38:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_001A0D3C:
    set32(c.r[20], c.r[20].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0C3Cu | kUnwind; return; } goto L_001A0C3C; } }
L_001A0D48:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_001A0D70:
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
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    mmi::paddub(c.r[30], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] - 11744u);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 12256u);
    set32(c.r[22], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 12768u);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 13280u);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 13792u);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    set32(c.r[23], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0E14u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_001F(c, 362u, depth + 1u); else { c.pc = 0x0017FDE0u; return; } if (c.pc != 0x001A0E14u) [[unlikely]] return; }
L_001A0E14:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], 0u + 25u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001A0E80; } }
L_001A0E28:
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[23], c.r[23].w[0] + 4u);
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[22], c.r[22].w[0] + 4u);
    st32((c.r[21].w[0] + 8u), c.f[0]);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[19], c.r[19].w[0] + 4u);
    st32((c.r[21].w[0] + 24u), c.f[0]);
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 22;
L_001A0E80:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0E28u | kUnwind; return; } goto L_001A0E28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14336u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 14368u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[2].w[0] - 14400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 14432u);
    st32((c.r[21].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 14464u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 14496u);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], 0u + 26064u);
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[21].w[0] + 8u), c.f[0]);
    st32((c.r[21].w[0] + 12u), c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[21].w[0] + 24u), c.f[0]);
    st32((c.r[21].w[0] + 28u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[16].w[0] + 20736u);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F60u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 173u, depth + 1u); else { c.pc = 0x0019FE30u; return; } if (c.pc != 0x001A0F60u) [[unlikely]] return; }
L_001A0F60:
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[3], 0u + 11200u);
    set32(c.r[5], 0u + 155u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[18].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 26044u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8384u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 816u)));
    set32(c.r[16], c.r[9].w[0] + 21392u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 26600u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FC0u); mmi::paddub(c.r[17], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x00135080u; return; } if (c.pc != 0x001A0FC0u) [[unlikely]] return; }
L_001A0FC0:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FCCu); set32(c.r[5], 0u + 154u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001350D0u; return; } if (c.pc != 0x001A0FCCu) [[unlikely]] return; }
L_001A0FCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 8u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1008u); set32(c.r[19], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001A1008u) [[unlikely]] return; }
L_001A1008:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1014u); mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001A1014u) [[unlikely]] return; }
L_001A1014:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << 26;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    set32(c.r[4], 0u + 4u);
    set32(c.r[21], ld32((c.r[29].w[0] + 176u)));
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 32818ull;
    st64((c.r[19].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u + 1042u);
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001A1248; } }
L_001A10C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 269u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 268u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A10E4u); st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001A10E4u) [[unlikely]] return; }
L_001A10E4:
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[2] = ld32((c.r[29].w[0] + 204u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001A115C; } }
    c.f[1] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A1158; } }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A1158; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A1158; } }
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A1158; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 268u);  if (t) { goto L_001A1170; } }
L_001A1158:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A115C:
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_001A1238; } }
    set32(c.r[2], c.r[29].w[0] + 268u);
    c.budget -= 1;
L_001A1170:
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001A118C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_001A11A0; } }
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A118C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001A11A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_001A11A0; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A11A0:
    c.r[2].d[0] = c.r[16].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 10704u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 224u);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[11]);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.q);
    vu::mulbc(c.vu0, 14u, 10u, 9u, c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 11u, 11u, c.vu0.vf[5].w[0]);
    vu::ftoi(c.vu0, 15u, 12u, 10u, 4);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[11]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 560u)));
    set32(c.r[7], c.r[2].w[0] + 10688u);
    c.r[2].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    c.budget -= 38;
L_001A1238:
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.budget -= 4;
L_001A1248:
    c.r[2].d[0] = c.r[16].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A10C4u | kUnwind; return; } goto L_001A10C4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1260u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001A1260u) [[unlikely]] return; }
L_001A1260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1268u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_001F(c, 363u, depth + 1u); else { c.pc = 0x0017FE20u; return; } if (c.pc != 0x001A1268u) [[unlikely]] return; }
L_001A1268:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001A12A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01EA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34816ull;
    st32((c.r[28].w[0] - 26600u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[3].w[0] - 23952u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A13B8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[5].w[0] - 4448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[5].w[0] - 4720u);
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[7].w[0] - c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 9);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[5].w[0] + 4u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 19;
L_001A1318:
    set32(c.r[10], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001A1350; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 4720u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[8].w[0]);  if (t) { goto L_001A13B8; } }
L_001A1350:
    set32(c.r[6], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[7].w[0]);
    c.r[5].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[10].w[0] + 2u));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[10].w[0] + 2u));
    set32(c.r[10], c.r[5].w[0] << 2);
    c.budget -= 13;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  goto L_001A13AC; }
    c.budget -= 1;
L_001A1388:
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    set32(c.r[10], c.r[10].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1388u | kUnwind; return; } goto L_001A1388; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_001A13AC:
    set32(c.r[9], c.r[9].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1318u | kUnwind; return; } goto L_001A1318; } }
L_001A13B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A13C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[2].w[0] - 4708u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_001A1400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] - 24000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 9312u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4469u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A19A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A0000u < 16384u) { entry = entries_0028[(t - 0x001A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A1464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[3].w[0] - 23952u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A19A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[3].w[0] - 24176u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[12], ld32((c.r[3].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[13], ld32((c.r[12].w[0])));
    c.budget -= 8;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { goto L_001A1660; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 4832u);
    set32(c.r[11], c.r[3].w[0] + c.r[10].w[0]);
    mmi::paddub(c.r[8], c.r[11], c.r[0]);
    mmi::paddub(c.r[9], c.r[11], c.r[0]);
    c.budget -= 5;
L_001A14B4:
    set32(c.r[14], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[13].w[0])));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[9], c.r[0]);
    st32((c.r[8].w[0] + 9216u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[13].w[0] + 4u)));
    st32((c.r[8].w[0] + 9232u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[8].w[0] + 9248u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 12u)));
    st8((c.r[11].w[0] + 9280u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 13u)));
    st8((c.r[11].w[0] + 9284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 14u)));
    st8((c.r[11].w[0] + 9288u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 15u)));
    st8((c.r[11].w[0] + 9292u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 16u)));
    st8((c.r[11].w[0] + 9296u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[14].w[0] + 4u)));
    st32((c.r[8].w[0] + 9264u), c.r[6].w[0]);
    set32(c.r[15], ld32((c.r[8].w[0] + 9216u)));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_001A1578; } }
L_001A1514:
    set32(c.r[24], ld32((c.r[15].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[13], c.r[24].w[0] << 4);
    set32(c.r[14], c.r[6].w[0] + c.r[13].w[0]);
    c.f[3] = ld32((c.r[14].w[0]));
    c.f[2] = ld32((c.r[14].w[0] + 4u));
    c.f[1] = ld32((c.r[14].w[0] + 8u));
    c.f[0] = ld32((c.r[14].w[0] + 12u));
    set32(c.r[13], c.r[24].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[13], c.r[6].w[0] + c.r[13].w[0]);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    set32(c.r[15], c.r[15].w[0] + 4u);
    st32((c.r[7].w[0] + 4608u), c.f[3]);
    st32((c.r[7].w[0] + 4612u), c.f[2]);
    st32((c.r[7].w[0] + 4616u), c.f[1]);
    st32((c.r[7].w[0] + 4620u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 25;
L_001A1578:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 9292u)));
    c.r[13].d[0] = c.r[3].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1514u | kUnwind; return; } goto L_001A1514; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 9248u)));
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[13], c.r[9], c.r[0]);  if (t) { goto L_001A15C8; } }
L_001A1598:
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[13].w[0] + 2304u), c.f[3]);
    st32((c.r[13].w[0] + 2308u), c.f[2]);
    st32((c.r[13].w[0] + 2312u), c.f[1]);
    st32((c.r[13].w[0] + 2316u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.budget -= 12;
L_001A15C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 9296u)));
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1598u | kUnwind; return; } goto L_001A1598; } }
    set32(c.r[13], ld32((c.r[8].w[0] + 9232u)));
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[9], c.r[0]);  if (t) { goto L_001A1628; } }
L_001A15E8:
    set32(c.r[3], ld32((c.r[13].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[13], c.r[13].w[0] + 4u);
    st32((c.r[7].w[0] + 6912u), c.f[3]);
    st32((c.r[7].w[0] + 6916u), c.f[2]);
    st32((c.r[7].w[0] + 6920u), c.f[1]);
    st32((c.r[7].w[0] + 6924u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 16;
L_001A1628:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 9296u)));
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A15E8u | kUnwind; return; } goto L_001A15E8; } }
    set32(c.r[13], ld32((c.r[12].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 576u);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A14B4u | kUnwind; return; } goto L_001A14B4; } }
    c.budget -= 1;
L_001A1660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4468u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A19A8; } }
L_001A1674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[3].w[0] - 23952u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001A19A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[4].w[0] - 29360u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 29360u);  if (t) { goto L_001A19A8; } }
    set32(c.r[13], ld32((c.r[3].w[0])));
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_001A1998; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 4832u);
    set32(c.r[7], c.r[4].w[0] + c.r[10].w[0]);
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    c.budget -= 5;
L_001A16C8:
    set32(c.r[14], ld32((c.r[8].w[0])));
    set32(c.r[11], ld32((c.r[13].w[0] + 4u)));
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    st32((c.r[5].w[0] + 9216u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 12u)));
    st32((c.r[5].w[0] + 9232u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0])));
    st32((c.r[5].w[0] + 9224u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[5].w[0] + 9240u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 16u)));
    st32((c.r[5].w[0] + 9248u), c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 20u)));
    st8((c.r[7].w[0] + 9280u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 21u)));
    st8((c.r[7].w[0] + 9284u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 22u)));
    st8((c.r[7].w[0] + 9288u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 23u)));
    st8((c.r[7].w[0] + 9292u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 24u)));
    st8((c.r[7].w[0] + 9296u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 25u)));
    st8((c.r[7].w[0] + 9294u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 26u)));
    st8((c.r[7].w[0] + 9298u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[14].w[0] + 4u)));
    st32((c.r[5].w[0] + 9264u), c.r[11].w[0]);
    set32(c.r[15], ld32((c.r[5].w[0] + 9216u)));
    c.budget -= 32;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { goto L_001A17B0; } }
L_001A1748:
    set32(c.r[24], ld32((c.r[15].w[0])));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[13], c.r[24].w[0] << 4);
    set32(c.r[14], c.r[11].w[0] + c.r[13].w[0]);
    c.f[3] = ld32((c.r[14].w[0]));
    c.f[2] = ld32((c.r[14].w[0] + 4u));
    c.f[1] = ld32((c.r[14].w[0] + 8u));
    c.f[0] = ld32((c.r[14].w[0] + 12u));
    set32(c.r[13], c.r[24].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[13], c.r[11].w[0] + c.r[13].w[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    c.f[1] = ld32((c.r[13].w[0] + 8u));
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    set32(c.r[15], c.r[15].w[0] + 4u);
    st32((c.r[4].w[0] + 4608u), c.f[3]);
    st32((c.r[4].w[0] + 4612u), c.f[2]);
    st32((c.r[4].w[0] + 4616u), c.f[1]);
    st32((c.r[4].w[0] + 4620u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 26;
L_001A17B0:
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9292u)));
    c.r[13].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1748u | kUnwind; return; } goto L_001A1748; } }
    set32(c.r[14], ld32((c.r[5].w[0] + 9248u)));
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[6], c.r[0]);
    c.budget -= 4;
L_001A17D0:
    c.f[3] = ld32((c.r[14].w[0]));
    c.f[2] = ld32((c.r[14].w[0] + 4u));
    c.f[1] = ld32((c.r[14].w[0] + 8u));
    c.f[0] = ld32((c.r[14].w[0] + 12u));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[4].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[12].w[0] + 2304u), c.f[3]);
    st32((c.r[12].w[0] + 2308u), c.f[2]);
    st32((c.r[12].w[0] + 2312u), c.f[1]);
    st32((c.r[12].w[0] + 2316u), c.f[0]);
    set32(c.r[14], c.r[14].w[0] + 16u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A17D0u | kUnwind; return; } goto L_001A17D0; } }
    set32(c.r[13], ld32((c.r[5].w[0] + 9232u)));
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[12], c.r[6], c.r[0]);  if (t) { goto L_001A1850; } }
L_001A1814:
    set32(c.r[4], ld32((c.r[13].w[0])));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[13], c.r[13].w[0] + 4u);
    st32((c.r[12].w[0] + 6912u), c.f[3]);
    st32((c.r[12].w[0] + 6916u), c.f[2]);
    st32((c.r[12].w[0] + 6920u), c.f[1]);
    st32((c.r[12].w[0] + 6924u), c.f[0]);
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.budget -= 15;
L_001A1850:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9296u)));
    c.r[4].d[0] = c.r[14].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1814u | kUnwind; return; } goto L_001A1814; } }
    set32(c.r[14], ld32((c.r[5].w[0] + 9224u)));
    mmi::paddub(c.r[15], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[13], c.r[6], c.r[0]);  if (t) { goto L_001A18D8; } }
L_001A1870:
    set32(c.r[24], ld32((c.r[14].w[0])));
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[4], c.r[24].w[0] << 4);
    set32(c.r[12], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    set32(c.r[4], c.r[24].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    st32((c.r[13].w[0] + 1152u), c.f[3]);
    st32((c.r[13].w[0] + 1156u), c.f[2]);
    st32((c.r[13].w[0] + 1160u), c.f[1]);
    st32((c.r[13].w[0] + 1164u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[14], c.r[14].w[0] + 4u);
    st32((c.r[13].w[0] + 5760u), c.f[3]);
    st32((c.r[13].w[0] + 5764u), c.f[2]);
    st32((c.r[13].w[0] + 5768u), c.f[1]);
    st32((c.r[13].w[0] + 5772u), c.f[0]);
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.budget -= 26;
L_001A18D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9294u)));
    c.r[4].d[0] = c.r[15].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1870u | kUnwind; return; } goto L_001A1870; } }
    set32(c.r[14], ld32((c.r[5].w[0] + 9240u)));
    mmi::paddub(c.r[15], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[13], c.r[6], c.r[0]);  if (t) { goto L_001A1960; } }
L_001A18F8:
    set32(c.r[24], ld32((c.r[14].w[0])));
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[4], c.r[24].w[0] << 4);
    set32(c.r[12], c.r[11].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    set32(c.r[4], c.r[24].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    st32((c.r[13].w[0] + 3456u), c.f[3]);
    st32((c.r[13].w[0] + 3460u), c.f[2]);
    st32((c.r[13].w[0] + 3464u), c.f[1]);
    st32((c.r[13].w[0] + 3468u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[14], c.r[14].w[0] + 4u);
    st32((c.r[13].w[0] + 8064u), c.f[3]);
    st32((c.r[13].w[0] + 8068u), c.f[2]);
    st32((c.r[13].w[0] + 8072u), c.f[1]);
    st32((c.r[13].w[0] + 8076u), c.f[0]);
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.budget -= 26;
L_001A1960:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9298u)));
    c.r[4].d[0] = c.r[15].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A18F8u | kUnwind; return; } goto L_001A18F8; } }
    set32(c.r[13], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[4].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 576u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[13].d[0] != 0ull; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A16C8u | kUnwind; return; } goto L_001A16C8; } }
    c.budget -= 1;
L_001A1998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4468u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 4;
L_001A19A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A19B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[5], 0u + 26064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27600u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4469u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 26044u)));
    set32(c.r[5], 0u + 9312u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A1A70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[5].w[0] + 22928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001A0000u < 16384u) { entry = entries_0028[(t - 0x001A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A1A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A20u);  if (depth < kMaxDepth) unit_0028(c, 121u, depth + 1u); else { c.pc = 0x001A1A80u; return; } if (c.pc != 0x001A1A20u) [[unlikely]] return; }
L_001A1A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A1A74; } }
L_001A1A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A30u);  if (depth < kMaxDepth) unit_0028(c, 152u, depth + 1u); else { c.pc = 0x001A1EC0u; return; } if (c.pc != 0x001A1A30u) [[unlikely]] return; }
L_001A1A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1A70; } }
L_001A1A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A40u);  if (depth < kMaxDepth) unit_0028(c, 178u, depth + 1u); else { c.pc = 0x001A2270u; return; } if (c.pc != 0x001A1A40u) [[unlikely]] return; }
L_001A1A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1A70; } }
L_001A1A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A50u);  if (depth < kMaxDepth) unit_0028(c, 222u, depth + 1u); else { c.pc = 0x001A2B30u; return; } if (c.pc != 0x001A1A50u) [[unlikely]] return; }
L_001A1A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1A70; } }
L_001A1A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A60u);  if (depth < kMaxDepth) unit_0028(c, 225u, depth + 1u); else { c.pc = 0x001A2EE0u; return; } if (c.pc != 0x001A1A60u) [[unlikely]] return; }
L_001A1A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1A70; } }
L_001A1A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1A70u);  if (depth < kMaxDepth) unit_0028(c, 255u, depth + 1u); else { c.pc = 0x001A36A0u; return; } if (c.pc != 0x001A1A70u) [[unlikely]] return; }
L_001A1A70:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A1A74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A1A80:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 86u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1AB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001F(c, 362u, depth + 1u); else { c.pc = 0x0017FDE0u; return; } if (c.pc != 0x001A1AB8u) [[unlikely]] return; }
L_001A1AB8:
    set32(c.r[4], ld32((c.r[22].w[0] + 176u)));
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 9312u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[21], c.r[2].w[0] + 0u);
    mmi::paddub(c.r[18], c.r[21], c.r[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[21], c.r[0]);  if (t) { goto L_001A1E60; } }
L_001A1AF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9280u)));
    set32(c.r[5], c.r[17].w[0] + 1344u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B10u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A1B10u) [[unlikely]] return; }
L_001A1B10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9284u)));
    set32(c.r[5], c.r[17].w[0] + 1360u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B28u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A1B28u) [[unlikely]] return; }
L_001A1B28:
    set32(c.r[3], ld32((c.r[17].w[0] + 1360u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1344u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1364u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1348u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 1348u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1368u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1352u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1344u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 1344u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1348u));
    st32((c.r[17].w[0] + 1348u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 1352u));
    st32((c.r[17].w[0] + 1352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1352u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1344u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1348u)));
    c.budget -= 25;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001A1B94; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1B94:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001A1BB0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1BB0:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[30].d[0] = c.r[2].d[0] << 48;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_001A1BCC; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1BCC:
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9288u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BE8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A1BE8u) [[unlikely]] return; }
L_001A1BE8:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BF4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A1BF4u) [[unlikely]] return; }
L_001A1BF4:
    c.r[4].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C00u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A1C00u) [[unlikely]] return; }
L_001A1C00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C0Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A1C0Cu) [[unlikely]] return; }
L_001A1C0C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9292u)));
    set32(c.r[5], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C1Cu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1C1Cu) [[unlikely]] return; }
L_001A1C1C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9292u)));
    set32(c.r[4], c.r[21].w[0] + 4608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C2Cu); set32(c.r[5], c.r[17].w[0] + 960u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1C2Cu) [[unlikely]] return; }
L_001A1C2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9288u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C40u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A1C40u) [[unlikely]] return; }
L_001A1C40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C50u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A1C50u) [[unlikely]] return; }
L_001A1C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C58u); set32(c.r[4], c.r[17].w[0] + 1280u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A1C58u) [[unlikely]] return; }
L_001A1C58:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9292u)));
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C68u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1C68u) [[unlikely]] return; }
L_001A1C68:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9292u)));
    set32(c.r[4], c.r[17].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C78u); set32(c.r[5], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1C78u) [[unlikely]] return; }
L_001A1C78:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 4720u);
    set32(c.r[5], ld32((c.r[19].w[0] + 9216u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (t) { goto L_001A1D00; } }
L_001A1CB4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 640u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 644u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 648u));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.budget -= 19;
L_001A1D00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9292u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1CB4u | kUnwind; return; } goto L_001A1CB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9284u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D24u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A1D24u) [[unlikely]] return; }
L_001A1D24:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9296u)));
    set32(c.r[4], c.r[21].w[0] + 2304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D34u); set32(c.r[5], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1D34u) [[unlikely]] return; }
L_001A1D34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1348u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1344u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1352u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9288u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[4], 0u - c.r[4].w[0]);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.r[30].d[0] = c.r[5].d[0] << 48;
    set32(c.r[4], c.r[2].w[0] + 1984u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D78u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A1D78u) [[unlikely]] return; }
L_001A1D78:
    c.r[4].d[0] = c.r[30].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D84u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A1D84u) [[unlikely]] return; }
L_001A1D84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D90u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A1D90u) [[unlikely]] return; }
L_001A1D90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D9Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A1D9Cu) [[unlikely]] return; }
L_001A1D9C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9296u)));
    set32(c.r[4], c.r[21].w[0] + 6912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DACu); set32(c.r[5], c.r[17].w[0] + 960u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1DACu) [[unlikely]] return; }
L_001A1DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DB4u); set32(c.r[4], c.r[17].w[0] + 1280u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A1DB4u) [[unlikely]] return; }
L_001A1DB4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9296u)));
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DC4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1DC4u) [[unlikely]] return; }
L_001A1DC4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9296u)));
    set32(c.r[4], c.r[17].w[0] + 960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DD4u); set32(c.r[5], c.r[17].w[0] + 640u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A1DD4u) [[unlikely]] return; }
L_001A1DD4:
    set32(c.r[4], ld32((c.r[19].w[0] + 9232u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[17], c.r[0]);  if (t) { goto L_001A1E30; } }
L_001A1DE4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 640u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 13;
L_001A1E18:
    c.f[0] = ld32((c.r[3].w[0] + 644u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 648u));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.budget -= 6;
L_001A1E30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9296u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1DE4u | kUnwind; return; } goto L_001A1DE4; } }
    set32(c.r[2], c.r[23].w[0] + 1u);
    c.r[23].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 576u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.budget -= 8;
L_001A1E60:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[3].d[0] = c.r[23].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9300u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1AF8u | kUnwind; return; } goto L_001A1AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E84u); set32(c.r[4], 0u + 86u);  if (depth < kMaxDepth) unit_001F(c, 363u, depth + 1u); else { c.pc = 0x0017FE20u; return; } if (c.pc != 0x001A1E84u) [[unlikely]] return; }
L_001A1E84:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A1E90u) [[unlikely]] return; }
L_001A1E90:
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
L_001A1EC0:
    set32(c.r[29], c.r[29].w[0] - 1216u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 4696u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4692u)));
    c.r[3].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - c.r[5].w[0]);
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4688u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.r[8].d[0] = c.r[2].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 30;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001A1F40; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1F40:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_001A1F5C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1F5C:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001A1F78; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A1F78:
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 176u)));
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[7].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[8].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[3], 0u + 9312u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[19], c.r[0]);  if (t) { goto L_001A2220; } }
L_001A1FEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9288u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2000u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A2000u) [[unlikely]] return; }
L_001A2000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2008u); set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A2008u) [[unlikely]] return; }
L_001A2008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2010u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A2010u) [[unlikely]] return; }
L_001A2010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2018u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 240u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A2018u) [[unlikely]] return; }
L_001A2018:
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2028u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2028u) [[unlikely]] return; }
L_001A2028:
    set32(c.r[4], c.r[19].w[0] + 4608u);
    set32(c.r[5], c.r[29].w[0] + 928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2038u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2038u) [[unlikely]] return; }
L_001A2038:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9288u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A204Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A204Cu) [[unlikely]] return; }
L_001A204C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A205Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A205Cu) [[unlikely]] return; }
L_001A205C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2064u); set32(c.r[4], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A2064u) [[unlikely]] return; }
L_001A2064:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2074u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2074u) [[unlikely]] return; }
L_001A2074:
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2084u); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2084u) [[unlikely]] return; }
L_001A2084:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[21], c.r[29].w[0] + 704u);
    set32(c.r[5], ld32((c.r[18].w[0] + 9216u)));
    set32(c.r[2], c.r[2].w[0] - 4720u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[20], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[7], c.r[21], c.r[0]);
    c.budget -= 17;
L_001A20C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A20C8u | kUnwind; return; } goto L_001A20C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9284u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2130u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A2130u) [[unlikely]] return; }
L_001A2130:
    set32(c.r[4], c.r[19].w[0] + 2304u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2140u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2140u) [[unlikely]] return; }
L_001A2140:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9288u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2154u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A2154u) [[unlikely]] return; }
L_001A2154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A215Cu); set32(c.r[4], ld32((c.r[29].w[0] + 192u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A215Cu) [[unlikely]] return; }
L_001A215C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2164u); set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A2164u) [[unlikely]] return; }
L_001A2164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A216Cu); set32(c.r[4], ld32((c.r[29].w[0] + 224u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A216Cu) [[unlikely]] return; }
L_001A216C:
    set32(c.r[4], c.r[19].w[0] + 6912u);
    set32(c.r[5], c.r[29].w[0] + 928u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A217Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A217Cu) [[unlikely]] return; }
L_001A217C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2184u); set32(c.r[4], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A2184u) [[unlikely]] return; }
L_001A2184:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2194u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2194u) [[unlikely]] return; }
L_001A2194:
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[5], c.r[29].w[0] + 704u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A21A4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A21A4u) [[unlikely]] return; }
L_001A21A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 9232u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A21B0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[20], c.r[20].w[0] + 16u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A21B0u | kUnwind; return; } goto L_001A21B0; } }
    set32(c.r[2], c.r[30].w[0] + 1u);
    c.r[30].d[0] = c.r[2].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 576u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[23], c.r[23].w[0] + 12u);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);
    c.budget -= 7;
L_001A2220:
    c.r[2].d[0] = c.r[30].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1FECu | kUnwind; return; } goto L_001A1FEC; } }
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2240u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A2240u) [[unlikely]] return; }
L_001A2240:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1216u);  c.pc = t; return; }
L_001A2270:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 390u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001F(c, 362u, depth + 1u); else { c.pc = 0x0017FDE0u; return; } if (c.pc != 0x001A22A4u) [[unlikely]] return; }
L_001A22A4:
    mmi::paddub(c.r[22], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 176u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001A2AD0; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_001A22BC:
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 6208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22F8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A22F8u) [[unlikely]] return; }
L_001A22F8:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 6224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4452u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2338u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A2338u) [[unlikely]] return; }
L_001A2338:
    set32(c.r[3], ld32((c.r[22].w[0] + 6224u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 6208u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[22].w[0] + 6208u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 6232u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 6216u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[22].w[0] + 6216u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[22].w[0] + 6208u));
    st32((c.r[22].w[0] + 6208u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[22].w[0] + 6216u));
    st32((c.r[22].w[0] + 6216u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6216u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6208u)));
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_001A2380; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A2380:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 2));  if (t) { goto L_001A23A4; } }
    set32(c.r[2], c.r[19].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001A23A4:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[19].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23F4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A23F4u) [[unlikely]] return; }
L_001A23F4:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2400u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A2400u) [[unlikely]] return; }
L_001A2400:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A240Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A240Cu) [[unlikely]] return; }
L_001A240C:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 2560u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2450u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2450u) [[unlikely]] return; }
L_001A2450:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 3584u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2498u); set32(c.r[4], c.r[2].w[0] + 4608u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2498u) [[unlikely]] return; }
L_001A2498:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24A4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A24A4u) [[unlikely]] return; }
L_001A24A4:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24B0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A24B0u) [[unlikely]] return; }
L_001A24B0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 512u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24F0u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A24F0u) [[unlikely]] return; }
L_001A24F0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 1536u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2534u); set32(c.r[4], c.r[2].w[0] + 4608u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2534u) [[unlikely]] return; }
L_001A2534:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2540u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A2540u) [[unlikely]] return; }
L_001A2540:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A254Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A254Cu) [[unlikely]] return; }
L_001A254C:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 4608u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2594u); set32(c.r[4], c.r[2].w[0] + 2304u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2594u) [[unlikely]] return; }
L_001A2594:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 5632u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A25DCu); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A25DCu) [[unlikely]] return; }
L_001A25DC:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[3], 0u + 9312u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[5], c.r[6].w[0] << 2);
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4384u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4408u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4456u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A265Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A265Cu) [[unlikely]] return; }
L_001A265C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2670u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A2670u) [[unlikely]] return; }
L_001A2670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2678u); set32(c.r[4], c.r[22].w[0] + 6144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A2678u) [[unlikely]] return; }
L_001A2678:
    set32(c.r[4], c.r[22].w[0] + 512u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2688u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2688u) [[unlikely]] return; }
L_001A2688:
    set32(c.r[4], c.r[22].w[0] + 1536u);
    set32(c.r[5], c.r[22].w[0] + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2698u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2698u) [[unlikely]] return; }
L_001A2698:
    set32(c.r[4], c.r[22].w[0] + 2560u);
    set32(c.r[5], c.r[22].w[0] + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26A8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A26A8u) [[unlikely]] return; }
L_001A26A8:
    set32(c.r[4], c.r[22].w[0] + 3584u);
    set32(c.r[5], c.r[22].w[0] + 3072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26B8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A26B8u) [[unlikely]] return; }
L_001A26B8:
    set32(c.r[4], c.r[22].w[0] + 4608u);
    set32(c.r[5], c.r[22].w[0] + 4096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26C8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A26C8u) [[unlikely]] return; }
L_001A26C8:
    set32(c.r[4], c.r[22].w[0] + 5632u);
    set32(c.r[5], c.r[22].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26D8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A26D8u) [[unlikely]] return; }
L_001A26D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 8384u)));
    set32(c.r[4], c.r[2].w[0] - 4708u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 128u);
    set32(c.r[19], c.r[19].w[0] + 128u);
    set32(c.r[20], c.r[20].w[0] + 128u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A2890; } }
    set32(c.r[5], c.r[2].w[0] << 4);
    c.budget -= 1;
L_001A2738:
    set32(c.r[5], c.r[22].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1024u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1028u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 1032u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 14;
L_001A2770:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001A27A8; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2770u | kUnwind; return; } goto L_001A2770; } }
L_001A27A8:
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[22].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2048u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2052u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2056u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3072u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3076u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 3080u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 14;
L_001A27E0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001A2818; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A27E0u | kUnwind; return; } goto L_001A27E0; } }
L_001A2818:
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[22].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4096u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4100u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4104u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5120u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5124u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 5128u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 14;
L_001A2850:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_001A2888; } }
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2850u | kUnwind; return; } goto L_001A2850; } }
L_001A2888:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001A2890:
    c.r[5].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2738u | kUnwind; return; } goto L_001A2738; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6208u)));
    set32(c.r[2], 0u + 9312u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6216u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[5].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.r[18].d[0] = c.r[4].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28F8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A28F8u) [[unlikely]] return; }
L_001A28F8:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2904u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A2904u) [[unlikely]] return; }
L_001A2904:
    c.r[4].d[0] = c.r[19].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2910u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A2910u) [[unlikely]] return; }
L_001A2910:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 1536u);
    set32(c.r[6], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2954u); set32(c.r[4], c.r[2].w[0] + 6912u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A2954u) [[unlikely]] return; }
L_001A2954:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4452u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2990u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A2990u) [[unlikely]] return; }
L_001A2990:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 512u);
    set32(c.r[6], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29D4u); set32(c.r[4], c.r[2].w[0] + 2304u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A29D4u) [[unlikely]] return; }
L_001A29D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29DCu); set32(c.r[4], c.r[22].w[0] + 6144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A29DCu) [[unlikely]] return; }
L_001A29DC:
    set32(c.r[4], c.r[22].w[0] + 512u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29ECu); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A29ECu) [[unlikely]] return; }
L_001A29EC:
    set32(c.r[4], c.r[22].w[0] + 1536u);
    set32(c.r[5], c.r[22].w[0] + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A29FCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A29FCu) [[unlikely]] return; }
L_001A29FC:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4400u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A2AB8; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.budget -= 1;
L_001A2A44:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1024u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1028u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1032u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 13;
L_001A2A78:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_001A2AB0; } }
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2A78u | kUnwind; return; } goto L_001A2A78; } }
L_001A2AB0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001A2AB8:
    c.r[3].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2A44u | kUnwind; return; } goto L_001A2A44; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_001A2AD0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A22BCu | kUnwind; return; } goto L_001A22BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2AECu); set32(c.r[4], 0u + 390u);  if (depth < kMaxDepth) unit_001F(c, 363u, depth + 1u); else { c.pc = 0x0017FE20u; return; } if (c.pc != 0x001A2AECu) [[unlikely]] return; }
L_001A2AEC:
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2AF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A2AF8u) [[unlikely]] return; }
L_001A2AF8:
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
L_001A2B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 83u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001A2B54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2B60; } }
L_001A2B54:
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_001A2E0C; } }
L_001A2B60:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 811u)));
    set32(c.r[3], 0u + 50u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2DCC; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2D84; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2D00; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A2C2C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A2DCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));  if (t) { goto L_001A2DD0; } }
L_001A2C2C:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;  if (t) { goto L_001A2CA0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;  if (t) { goto L_001A2C64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2C64:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001A2C8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.budget -= 1;
L_001A2C8C:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2CA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;  if (t) { goto L_001A2CC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2CC8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001A2CF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.budget -= 1;
L_001A2CF0:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
L_001A2D00:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;  if (t) { goto L_001A2D4C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_001A2D38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.budget -= 1;
L_001A2D38:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A2D4C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_001A2D74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.budget -= 1;
L_001A2D74:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
L_001A2D84:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2DCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);  if (t) { goto L_001A2DB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A2DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.budget -= 1;
L_001A2DB8:
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_001A2DCC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.budget -= 1;
L_001A2DD0:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2E0C; } }
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 12;
L_001A2E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 4896u);
    c.f[3] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001A2EB0; } }
L_001A2E34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A2E7C; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_001A2E98; } }
L_001A2E7C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_001A2E9C; }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_001A2E98:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001A2E9C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 28u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
L_001A2EB0:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2E34u | kUnwind; return; } goto L_001A2E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2ECCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A2ECCu) [[unlikely]] return; }
L_001A2ECC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A2EE0:
    set32(c.r[29], c.r[29].w[0] - 1280u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 14u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001A3638; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.budget -= 1;
L_001A2F1C:
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 1248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F58u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A2F58u) [[unlikely]] return; }
L_001A2F58:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = ld16((c.r[29].w[0] + 1248u));
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 1264u);
    st32((c.r[29].w[0] + 1248u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4452u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 1252u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 1252u), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 1256u));
    st32((c.r[29].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2FB0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x001A2FB0u) [[unlikely]] return; }
L_001A2FB0:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1264u));
    set32(c.r[5], ld32((c.r[29].w[0] + 1248u)));
    st32((c.r[29].w[0] + 1264u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1268u));
    st32((c.r[29].w[0] + 1268u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1272u));
    st32((c.r[29].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1264u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 1268u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 1272u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 1248u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1252u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 1252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 1256u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 1256u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1248u));
    st32((c.r[29].w[0] + 1248u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1252u));
    st32((c.r[29].w[0] + 1252u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 1256u));
    st32((c.r[29].w[0] + 1256u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1256u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1248u)));
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1252u)));
    c.budget -= 29;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001A302C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A302C:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 1));  if (t) { goto L_001A3050; } }
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A3050:
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[21].w[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[22].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 1));  if (t) { goto L_001A3074; } }
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001A3074:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[22].w[0]);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A30C4u) [[unlikely]] return; }
L_001A30C4:
    c.r[4].d[0] = c.r[20].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30D0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A30D0u) [[unlikely]] return; }
L_001A30D0:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30DCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A30DCu) [[unlikely]] return; }
L_001A30DC:
    c.r[4].d[0] = c.r[22].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30E8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A30E8u) [[unlikely]] return; }
L_001A30E8:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4460u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A313Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A313Cu) [[unlikely]] return; }
L_001A313C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4460u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3194u); set32(c.r[5], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A3194u) [[unlikely]] return; }
L_001A3194:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31D0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A31D0u) [[unlikely]] return; }
L_001A31D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31E4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A31E4u) [[unlikely]] return; }
L_001A31E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31ECu); set32(c.r[4], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A31ECu) [[unlikely]] return; }
L_001A31EC:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4460u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3224u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A3224u) [[unlikely]] return; }
L_001A3224:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4460u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A325Cu); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A325Cu) [[unlikely]] return; }
L_001A325C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 4708u);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[19].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 4460u);
    set32(c.r[3], 0u + 9312u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[29].w[0] + 1216u);
    set32(c.r[10], c.r[29].w[0] + 1232u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4384u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { goto L_001A3360; } }
    set32(c.r[5], c.r[4].w[0] << 4);
    c.budget -= 1;
L_001A32EC:
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.f[5] = ld32((c.r[5].w[0] + 128u));
    c.f[2] = ld32((c.r[5].w[0] + 640u));
    c.f[4] = ld32((c.r[5].w[0] + 132u));
    c.f[1] = ld32((c.r[5].w[0] + 644u));
    c.f[3] = ld32((c.r[5].w[0] + 136u));
    c.f[0] = ld32((c.r[5].w[0] + 648u));
    st32((c.r[29].w[0] + 1216u), c.f[5]);
    st32((c.r[29].w[0] + 1232u), c.f[2]);
    st32((c.r[29].w[0] + 1220u), c.f[4]);
    st32((c.r[29].w[0] + 1236u), c.f[1]);
    st32((c.r[29].w[0] + 1224u), c.f[3]);
    st32((c.r[29].w[0] + 1240u), c.f[0]);
    c.budget -= 13;
L_001A3320:
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_001A3358; } }
    set32(c.r[5], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3320u | kUnwind; return; } goto L_001A3320; } }
L_001A3358:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_001A3360:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A32ECu | kUnwind; return; } goto L_001A32EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] + 4452u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3394u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A3394u) [[unlikely]] return; }
L_001A3394:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 2304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33ECu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A33ECu) [[unlikely]] return; }
L_001A33EC:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1252u)));
    set32(c.r[2], 0u + 9312u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1248u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 1256u)));
    set32(c.r[2], 0u - c.r[5].w[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - c.r[6].w[0]);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.r[20].d[0] = c.r[4].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3458u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A3458u) [[unlikely]] return; }
L_001A3458:
    c.r[4].d[0] = c.r[20].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3464u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001A3464u) [[unlikely]] return; }
L_001A3464:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3470u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001A3470u) [[unlikely]] return; }
L_001A3470:
    c.r[4].d[0] = c.r[22].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A347Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001A347Cu) [[unlikely]] return; }
L_001A347C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 4832u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 6912u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34D4u); set32(c.r[5], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A34D4u) [[unlikely]] return; }
L_001A34D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34DCu); set32(c.r[4], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A34DCu) [[unlikely]] return; }
L_001A34DC:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3514u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A3514u) [[unlikely]] return; }
L_001A3514:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A354Cu); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x001A354Cu) [[unlikely]] return; }
L_001A354C:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[7], c.r[29].w[0] + 1216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4400u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[9], c.r[29].w[0] + 1232u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4464u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { goto L_001A3618; } }
    set32(c.r[2], c.r[4].w[0] << 4);
    c.budget -= 1;
L_001A35A4:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 640u));
    c.f[4] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 644u));
    c.f[3] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 648u));
    st32((c.r[29].w[0] + 1216u), c.f[5]);
    st32((c.r[29].w[0] + 1232u), c.f[2]);
    st32((c.r[29].w[0] + 1220u), c.f[4]);
    st32((c.r[29].w[0] + 1236u), c.f[1]);
    st32((c.r[29].w[0] + 1224u), c.f[3]);
    st32((c.r[29].w[0] + 1240u), c.f[0]);
    c.budget -= 13;
L_001A35D8:
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_001A3610; } }
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[15]);
    vu::move(c.vu0, 14u, 4u, 14u);
    vu::move(c.vu0, 14u, 5u, 15u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A35D8u | kUnwind; return; } goto L_001A35D8; } }
L_001A3610:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_001A3618:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A35A4u | kUnwind; return; } goto L_001A35A4; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
L_001A3638:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 9312u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] + 4468u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[19].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2F1Cu | kUnwind; return; } goto L_001A2F1C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3678u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A3678u) [[unlikely]] return; }
L_001A3678:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1280u);  c.pc = t; return; }
L_001A36A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 83u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001A36C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A36D0; } }
L_001A36C4:
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_001A38F8; } }
L_001A36D0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 811u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A3870; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A37EC; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001A3718; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A38B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));  if (t) { goto L_001A38BC; } }
L_001A3718:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;  if (t) { goto L_001A378C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;  if (t) { goto L_001A3750; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A3750:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001A3778; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.budget -= 1;
L_001A3778:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A378C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;  if (t) { goto L_001A37B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < -160ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A37B4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_001A37DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.budget -= 1;
L_001A37DC:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
L_001A37EC:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;  if (t) { goto L_001A3838; } }
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_001A3824; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.budget -= 1;
L_001A3824:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 1;
L_001A3838:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);  if (t) { goto L_001A3860; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.budget -= 1;
L_001A3860:
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
L_001A3870:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A38B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);  if (t) { goto L_001A38A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001A38B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.budget -= 1;
L_001A38A4:
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBC750000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_001A38B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.budget -= 1;
L_001A38BC:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A38F8; } }
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 12;
L_001A38F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 4896u);
    c.f[3] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001A3998; } }
L_001A3920:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001A3968; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_001A3980; } }
L_001A3968:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_001A3984; }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_001A3980:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001A3984:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 28u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
L_001A3998:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3920u | kUnwind; return; } goto L_001A3920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x001A39B4u) [[unlikely]] return; }
L_001A39B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A39C0:
    set32(c.r[4], 0u + 10u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135520u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 103u, depth); }
L_001A39D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39E4u); set32(c.r[4], c.r[2].w[0] + 22960u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001A39E4u) [[unlikely]] return; }
L_001A39E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 424u, depth + 1u); else { c.pc = 0x001268F0u; return; } if (c.pc != 0x001A39ECu) [[unlikely]] return; }
L_001A39EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39F8u); set32(c.r[4], c.r[2].w[0] + 22992u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001A39F8u) [[unlikely]] return; }
L_001A39F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 402u, depth + 1u); else { c.pc = 0x00126690u; return; } if (c.pc != 0x001A3A00u) [[unlikely]] return; }
L_001A3A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A0Cu); set32(c.r[4], c.r[2].w[0] + 23024u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001A3A0Cu) [[unlikely]] return; }
L_001A3A0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 18624u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A20u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A3A20u) [[unlikely]] return; }
L_001A3A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 23056u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18624u), c.r[2].w[0]);
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18620u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18612u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 20288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18616u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A64u); set32(c.r[4], c.r[2].w[0] - 18624u);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00126738u; return; } if (c.pc != 0x001A3A64u) [[unlikely]] return; }
L_001A3A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 18640u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A3A78u) [[unlikely]] return; }
L_001A3A78:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18640u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18636u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18632u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18628u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AB4u); set32(c.r[4], c.r[2].w[0] - 18640u);  if (depth < kMaxDepth) unit_0009(c, 133u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x001A3AB4u) [[unlikely]] return; }
L_001A3AB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A3AC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124C60u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 138u, depth); }
L_001A3AD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124C68u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 139u, depth); }
L_001A3AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AF8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x001A3AF8u) [[unlikely]] return; }
L_001A3AF8:
    set32(c.r[4], 0u + 4u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B08u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x001A3B08u) [[unlikely]] return; }
L_001A3B08:
    set32(c.r[4], 0u + 5u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B18u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x001A3B18u) [[unlikely]] return; }
L_001A3B18:
    set32(c.r[4], 0u + 6u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B28u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x001A3B28u) [[unlikely]] return; }
L_001A3B28:
    set32(c.r[4], 0u + 9u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B38u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 103u, depth + 1u); else { c.pc = 0x00135520u; return; } if (c.pc != 0x001A3B38u) [[unlikely]] return; }
L_001A3B38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A3B50:
    c.budget -= 2;
    {  goto L_001A3CD0; }
L_001A3B60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0029(c, 9u, depth); }
L_001A3B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B80u); mmi::paddub(c.r[4], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 101u, depth + 1u); else { c.pc = 0x00104AD8u; return; } if (c.pc != 0x001A3B80u) [[unlikely]] return; }
L_001A3B80:
    set_interrupts(c, true);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A3BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x001A3BB4u) [[unlikely]] return; }
L_001A3BB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[5], c.r[3].w[0] + 15216u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BC8u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 364u, depth + 1u); else { c.pc = 0x00103920u; return; } if (c.pc != 0x001A3BC8u) [[unlikely]] return; }
L_001A3BC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A3BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001A3BE0; } }
L_001A3BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3BE0u);  if (depth < kMaxDepth) unit_0000(c, 416u, depth + 1u); else { c.pc = 0x00103AC0u; return; } if (c.pc != 0x001A3BE0u) [[unlikely]] return; }
L_001A3BE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A3BF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18592u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[5], c.r[3].w[0] - 18328u);
    st32((c.r[1].w[0] - 18600u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_001A3C18:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3C18u | kUnwind; return; } goto L_001A3C18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 1024u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 9;
L_001A3C64:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C70u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x001A3C70u) [[unlikely]] return; }
L_001A3C70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A3C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3CB4; } }
L_001A3C80:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A3CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 281u, depth + 1u); else { c.pc = 0x001A3BA0u; return; } if (c.pc != 0x001A3C94u) [[unlikely]] return; }
L_001A3C94:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_001A3CA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3CB4; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_001A3CA8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3C64u | kUnwind; return; } goto L_001A3C64; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3CB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A3CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26596u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A3DAC; } }
L_001A3CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CF4u);  if (depth < kMaxDepth) unit_0028(c, 285u, depth + 1u); else { c.pc = 0x001A3BF0u; return; } if (c.pc != 0x001A3CF4u) [[unlikely]] return; }
L_001A3CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 18272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 287u, depth + 1u); else { c.pc = 0x001A3C40u; return; } if (c.pc != 0x001A3D04u) [[unlikely]] return; }
L_001A3D04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A3D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3DAC; } }
L_001A3D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 18320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 287u, depth + 1u); else { c.pc = 0x001A3C40u; return; } if (c.pc != 0x001A3D24u) [[unlikely]] return; }
L_001A3D24:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A3D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3DAC; } }
L_001A3D34:
    set32(c.r[2], ld32((c.r[28].w[0] - 30536u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 36u), 0u);  if (t) { goto L_001A3D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D54u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001A3D54u) [[unlikely]] return; }
L_001A3D54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A3D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3DAC; } }
L_001A3D64:
    st32((c.r[28].w[0] - 30536u), c.r[2].w[0]);
    c.budget -= 1;
L_001A3D68:
    set32(c.r[2], ld32((c.r[28].w[0] - 30532u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A3D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D7Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001A3D7Cu) [[unlikely]] return; }
L_001A3D7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A3D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3DAC; } }
L_001A3D8C:
    st32((c.r[28].w[0] - 30532u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001A3D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] + 23072u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DA8u); st32((c.r[28].w[0] - 26596u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001A3DA8u) [[unlikely]] return; }
L_001A3DA8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3DAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A3DC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 18600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 18576u);
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[11], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; c.r[3].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_001A3DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A3EDC; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_001A3DF0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_001A3E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_001A3E08; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3E08:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001A3E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001A3E24; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3E24:
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001A3E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A3E40; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3E40:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[9], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[10].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[8], c.r[3].w[0] << 24);
    c.r[3].d[0] = c.r[4].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[3].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 18572u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 18571u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 18570u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);
    c.budget -= 33;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001A3ED0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3ED0; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A3ED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A3EDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[8].sd[0] < 0; c.r[8].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_001A3F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_0029(c, 2u, depth); } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_001A3F20:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0; mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (t) { goto L_001A3F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 1u);  if (t) { goto L_001A3F38; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3F38:
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] < 0; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_001A3F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_001A3F54; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3F54:
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] < 0; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001A3F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001A3F70; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A3F70:
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[10], c.r[8].w[0] << 2);
    c.r[8].d[0] = c.r[9].d[0] & 1ull;
    c.r[9].d[0] = c.r[8].d[0] | 8ull;
    c.r[8].d[0] = c.r[11].d[0] & 1ull;
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.r[9].d[0] = c.r[8].d[0] << 56;
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 13;
    if (c.r[9].d[0] != c.r[8].d[0]) { c.r[4].d[0] = c.r[4].d[0] << 40;  goto L_001A3FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0029(c, 2u, depth); } }
    c.r[4].d[0] = c.r[4].d[0] << 40;
    c.budget -= 1;
L_001A3FB0:
    set32(c.r[8], c.r[9].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[4].d[0] = c.r[8].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18572u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18571u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18570u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 20;
    [[clang::musttail]] return unit_0029(c, 1u, depth);
}

}
