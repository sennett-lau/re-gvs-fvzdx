#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0092[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0092(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00348000;
    case 2u: goto L_00348010;
    case 3u: goto L_00348034;
    case 4u: goto L_00348080;
    case 5u: goto L_003480D4;
    case 6u: goto L_003480E0;
    case 7u: goto L_003480F8;
    case 8u: goto L_00348130;
    case 9u: goto L_0034813C;
    case 10u: goto L_00348154;
    case 11u: goto L_003481B0;
    case 12u: goto L_003481DC;
    case 13u: goto L_003481EC;
    case 14u: goto L_00348210;
    case 15u: goto L_00348220;
    case 16u: goto L_0034822C;
    case 17u: goto L_0034825C;
    case 18u: goto L_00348274;
    case 19u: goto L_003482AC;
    case 20u: goto L_003482C4;
    case 21u: goto L_00348320;
    case 22u: goto L_003483E0;
    case 23u: goto L_003483EC;
    case 24u: goto L_00348418;
    case 25u: goto L_00348420;
    case 26u: goto L_00348440;
    case 27u: goto L_00348564;
    case 28u: goto L_00348570;
    case 29u: goto L_0034859C;
    case 30u: goto L_003485A4;
    case 31u: goto L_003485F4;
    case 32u: goto L_00348670;
    case 33u: goto L_00348680;
    case 34u: goto L_003486CC;
    case 35u: goto L_003486DC;
    case 36u: goto L_003486E8;
    case 37u: goto L_00348718;
    case 38u: goto L_00348730;
    case 39u: goto L_00348768;
    case 40u: goto L_00348780;
    case 41u: goto L_003487A0;
    case 42u: goto L_003487F8;
    case 43u: goto L_00348810;
    case 44u: goto L_00348880;
    case 45u: goto L_003488C8;
    case 46u: goto L_00348948;
    case 47u: goto L_00348958;
    case 48u: goto L_00348964;
    case 49u: goto L_00348A70;
    case 50u: goto L_00348A7C;
    case 51u: goto L_00348A88;
    case 52u: goto L_00348AF0;
    case 53u: goto L_00348B14;
    case 54u: goto L_00348B34;
    case 55u: goto L_00348B50;
    case 56u: goto L_00348B60;
    case 57u: goto L_00348B80;
    case 58u: goto L_00348BA4;
    case 59u: goto L_00348C18;
    case 60u: goto L_00348C38;
    case 61u: goto L_00348C54;
    case 62u: goto L_00348C60;
    case 63u: goto L_00348CD4;
    case 64u: goto L_00348D24;
    case 65u: goto L_00348D48;
    case 66u: goto L_00348DE0;
    case 67u: goto L_00348E08;
    case 68u: goto L_00348E80;
    case 69u: goto L_00348E8C;
    case 70u: goto L_00348EB8;
    case 71u: goto L_00348EDC;
    case 72u: goto L_00348EEC;
    case 73u: goto L_00348EF8;
    case 74u: goto L_00348F10;
    case 75u: goto L_00348F30;
    case 76u: goto L_00348FA4;
    case 77u: goto L_00348FB0;
    case 78u: goto L_00348FCC;
    case 79u: goto L_00348FE4;
    case 80u: goto L_00348FEC;
    case 81u: goto L_00349000;
    case 82u: goto L_003490E0;
    case 83u: goto L_0034915C;
    case 84u: goto L_00349178;
    case 85u: goto L_00349190;
    case 86u: goto L_003491A0;
    case 87u: goto L_003491EC;
    case 88u: goto L_00349210;
    case 89u: goto L_003492A8;
    case 90u: goto L_003492D0;
    case 91u: goto L_00349348;
    case 92u: goto L_00349354;
    case 93u: goto L_003493EC;
    case 94u: goto L_003493FC;
    case 95u: goto L_00349408;
    case 96u: goto L_00349420;
    case 97u: goto L_00349440;
    case 98u: goto L_00349454;
    case 99u: goto L_003494F0;
    case 100u: goto L_00349508;
    case 101u: goto L_0034956C;
    case 102u: goto L_00349580;
    case 103u: goto L_00349598;
    case 104u: goto L_0034960C;
    case 105u: goto L_00349690;
    case 106u: goto L_0034969C;
    case 107u: goto L_003496B4;
    case 108u: goto L_003496C8;
    case 109u: goto L_003496D4;
    case 110u: goto L_00349754;
    case 111u: goto L_00349760;
    case 112u: goto L_0034977C;
    case 113u: goto L_0034978C;
    case 114u: goto L_003497A0;
    case 115u: goto L_003497B0;
    case 116u: goto L_003497C4;
    case 117u: goto L_003497E0;
    case 118u: goto L_003498B4;
    case 119u: goto L_003498CC;
    case 120u: goto L_003498D8;
    case 121u: goto L_00349904;
    case 122u: goto L_00349960;
    case 123u: goto L_0034996C;
    case 124u: goto L_0034999C;
    case 125u: goto L_003499B0;
    case 126u: goto L_003499C0;
    case 127u: goto L_00349A64;
    case 128u: goto L_00349A74;
    case 129u: goto L_00349AE0;
    case 130u: goto L_00349AF0;
    case 131u: goto L_00349B00;
    case 132u: goto L_00349B38;
    case 133u: goto L_00349C14;
    case 134u: goto L_00349C1C;
    case 135u: goto L_00349C38;
    case 136u: goto L_00349C50;
    case 137u: goto L_00349CD0;
    case 138u: goto L_00349CD8;
    case 139u: goto L_00349CEC;
    case 140u: goto L_00349D04;
    case 141u: goto L_00349D58;
    case 142u: goto L_00349D64;
    case 143u: goto L_00349D84;
    case 144u: goto L_00349DC0;
    case 145u: goto L_00349E0C;
    case 146u: goto L_00349E1C;
    case 147u: goto L_00349E30;
    case 148u: goto L_00349E74;
    case 149u: goto L_00349EFC;
    case 150u: goto L_00349F0C;
    case 151u: goto L_00349F1C;
    case 152u: goto L_00349F24;
    case 153u: goto L_00349F48;
    case 154u: goto L_00349F94;
    case 155u: goto L_00349FA8;
    case 156u: goto L_00349FE8;
    case 157u: goto L_0034A014;
    case 158u: goto L_0034A028;
    case 159u: goto L_0034A0A0;
    case 160u: goto L_0034A0BC;
    case 161u: goto L_0034A0C8;
    case 162u: goto L_0034A0E0;
    case 163u: goto L_0034A12C;
    case 164u: goto L_0034A13C;
    case 165u: goto L_0034A150;
    case 166u: goto L_0034A194;
    case 167u: goto L_0034A204;
    case 168u: goto L_0034A210;
    case 169u: goto L_0034A21C;
    case 170u: goto L_0034A22C;
    case 171u: goto L_0034A248;
    case 172u: goto L_0034A274;
    case 173u: goto L_0034A288;
    case 174u: goto L_0034A298;
    case 175u: goto L_0034A2BC;
    case 176u: goto L_0034A308;
    case 177u: goto L_0034A35C;
    case 178u: goto L_0034A370;
    case 179u: goto L_0034A37C;
    case 180u: goto L_0034A394;
    case 181u: goto L_0034A3CC;
    case 182u: goto L_0034A3D8;
    case 183u: goto L_0034A3F0;
    case 184u: goto L_0034A44C;
    case 185u: goto L_0034A478;
    case 186u: goto L_0034A488;
    case 187u: goto L_0034A4AC;
    case 188u: goto L_0034A4BC;
    case 189u: goto L_0034A4C8;
    case 190u: goto L_0034A4F8;
    case 191u: goto L_0034A510;
    case 192u: goto L_0034A548;
    case 193u: goto L_0034A560;
    case 194u: goto L_0034A5C0;
    case 195u: goto L_0034A680;
    case 196u: goto L_0034A68C;
    case 197u: goto L_0034A6B8;
    case 198u: goto L_0034A6C0;
    case 199u: goto L_0034A6E0;
    case 200u: goto L_0034A804;
    case 201u: goto L_0034A810;
    case 202u: goto L_0034A83C;
    case 203u: goto L_0034A844;
    case 204u: goto L_0034A894;
    case 205u: goto L_0034A910;
    case 206u: goto L_0034A920;
    case 207u: goto L_0034A96C;
    case 208u: goto L_0034A97C;
    case 209u: goto L_0034A988;
    case 210u: goto L_0034A9B8;
    case 211u: goto L_0034A9D0;
    case 212u: goto L_0034AA08;
    case 213u: goto L_0034AA20;
    case 214u: goto L_0034AA40;
    case 215u: goto L_0034AA50;
    case 216u: goto L_0034AAD0;
    case 217u: goto L_0034AADC;
    case 218u: goto L_0034AB30;
    case 219u: goto L_0034ABC4;
    case 220u: goto L_0034ABE0;
    case 221u: goto L_0034AC3C;
    case 222u: goto L_0034AC4C;
    case 223u: goto L_0034AC5C;
    case 224u: goto L_0034ACAC;
    case 225u: goto L_0034ACB8;
    case 226u: goto L_0034ACD0;
    case 227u: goto L_0034ACE0;
    case 228u: goto L_0034AD1C;
    case 229u: goto L_0034AD38;
    case 230u: goto L_0034AD40;
    case 231u: goto L_0034AD4C;
    case 232u: goto L_0034AD64;
    case 233u: goto L_0034AD7C;
    case 234u: goto L_0034AD90;
    case 235u: goto L_0034ADA0;
    case 236u: goto L_0034ADFC;
    case 237u: goto L_0034AE0C;
    case 238u: goto L_0034AE3C;
    case 239u: goto L_0034AE50;
    case 240u: goto L_0034AE90;
    case 241u: goto L_0034AE98;
    case 242u: goto L_0034AEB0;
    case 243u: goto L_0034AEF0;
    case 244u: goto L_0034AEF8;
    case 245u: goto L_0034AF10;
    case 246u: goto L_0034AF30;
    case 247u: goto L_0034AF40;
    case 248u: goto L_0034AF50;
    case 249u: goto L_0034AF58;
    case 250u: goto L_0034AF7C;
    case 251u: goto L_0034AF90;
    case 252u: goto L_0034AFB0;
    case 253u: goto L_0034AFD8;
    case 254u: goto L_0034AFE8;
    case 255u: goto L_0034AFF0;
    case 256u: goto L_0034AFF8;
    case 257u: goto L_0034B07C;
    case 258u: goto L_0034B088;
    case 259u: goto L_0034B090;
    case 260u: goto L_0034B0B0;
    case 261u: goto L_0034B0D4;
    case 262u: goto L_0034B0E4;
    case 263u: goto L_0034B0EC;
    case 264u: goto L_0034B0F4;
    case 265u: goto L_0034B108;
    case 266u: goto L_0034B178;
    case 267u: goto L_0034B184;
    case 268u: goto L_0034B18C;
    case 269u: goto L_0034B1B0;
    case 270u: goto L_0034B1D4;
    case 271u: goto L_0034B1E4;
    case 272u: goto L_0034B1EC;
    case 273u: goto L_0034B1F4;
    case 274u: goto L_0034B208;
    case 275u: goto L_0034B278;
    case 276u: goto L_0034B284;
    case 277u: goto L_0034B28C;
    case 278u: goto L_0034B2B0;
    case 279u: goto L_0034B2F8;
    case 280u: goto L_0034B308;
    case 281u: goto L_0034B330;
    case 282u: goto L_0034B344;
    case 283u: goto L_0034B360;
    case 284u: goto L_0034B3A8;
    case 285u: goto L_0034B3B8;
    case 286u: goto L_0034B3E0;
    case 287u: goto L_0034B3F4;
    case 288u: goto L_0034B410;
    case 289u: goto L_0034B458;
    case 290u: goto L_0034B4A0;
    case 291u: goto L_0034B4B4;
    case 292u: goto L_0034B4D0;
    case 293u: goto L_0034B518;
    case 294u: goto L_0034B560;
    case 295u: goto L_0034B574;
    case 296u: goto L_0034B590;
    case 297u: goto L_0034B5BC;
    case 298u: goto L_0034B60C;
    case 299u: goto L_0034B620;
    case 300u: goto L_0034B640;
    case 301u: goto L_0034B660;
    case 302u: goto L_0034B668;
    case 303u: goto L_0034B670;
    case 304u: goto L_0034B690;
    case 305u: goto L_0034B6B4;
    case 306u: goto L_0034B6C0;
    case 307u: goto L_0034B6F0;
    case 308u: goto L_0034B714;
    case 309u: goto L_0034B720;
    case 310u: goto L_0034B780;
    case 311u: goto L_0034B7A4;
    case 312u: goto L_0034B7B0;
    case 313u: goto L_0034B7E0;
    case 314u: goto L_0034B800;
    case 315u: goto L_0034B80C;
    case 316u: goto L_0034B820;
    case 317u: goto L_0034B840;
    case 318u: goto L_0034B880;
    case 319u: goto L_0034B8CC;
    case 320u: goto L_0034B8D8;
    case 321u: goto L_0034B8E8;
    case 322u: goto L_0034B958;
    case 323u: goto L_0034B980;
    case 324u: goto L_0034B9C8;
    case 325u: goto L_0034B9D4;
    case 326u: goto L_0034B9E0;
    case 327u: goto L_0034BA10;
    case 328u: goto L_0034BA6C;
    case 329u: goto L_0034BAA4;
    case 330u: goto L_0034BAF4;
    case 331u: goto L_0034BB00;
    case 332u: goto L_0034BB14;
    case 333u: goto L_0034BB1C;
    case 334u: goto L_0034BB24;
    case 335u: goto L_0034BB30;
    case 336u: goto L_0034BB40;
    case 337u: goto L_0034BB9C;
    case 338u: goto L_0034BBB0;
    case 339u: goto L_0034BBC4;
    case 340u: goto L_0034BC14;
    case 341u: goto L_0034BC20;
    case 342u: goto L_0034BC2C;
    case 343u: goto L_0034BC34;
    case 344u: goto L_0034BC40;
    case 345u: goto L_0034BC70;
    case 346u: goto L_0034BD24;
    case 347u: goto L_0034BDC8;
    case 348u: goto L_0034BDF0;
    case 349u: goto L_0034BE28;
    case 350u: goto L_0034BE40;
    case 351u: goto L_0034BE84;
    case 352u: goto L_0034BE90;
    case 353u: goto L_0034BF1C;
    case 354u: goto L_0034BF30;
    case 355u: goto L_0034BF94;
    case 356u: goto L_0034BFC0;
    default: bad_entry(c, 0x00348000u); return;
    }
L_00348000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034815C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348010u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00348010u) [[unlikely]] return; }
L_00348010:
    c.f[3] = ld32((c.r[17].w[0] + 996u));
    c.f[2] = ld32((c.r[17].w[0] + 1136u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348034u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00348034u) [[unlikely]] return; }
L_00348034:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00348064; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_00348064:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[17].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348080u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 327u, depth + 1u); else { c.pc = 0x0034BA10u; return; } if (c.pc != 0x00348080u) [[unlikely]] return; }
L_00348080:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_00348120; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480D4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x003480D4u) [[unlikely]] return; }
L_003480D4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480E0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003480E0u) [[unlikely]] return; }
L_003480E0:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480F8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003480F8u) [[unlikely]] return; }
L_003480F8:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1468u), c.f[0]);  if (t) { goto L_003481B0; } }
L_00348120:
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348130u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00348130u) [[unlikely]] return; }
L_00348130:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034813Cu); set32(c.r[5], c.r[17].w[0] + 1456u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034813Cu) [[unlikely]] return; }
L_0034813C:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348154u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00348154u) [[unlikely]] return; }
L_00348154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 52u));  if (t) { goto L_003481B4; } }
L_0034815C:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348198; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00348198:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481B0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003481B0u) [[unlikely]] return; }
L_003481B0:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_003481B4:
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003481CC; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_003481CC:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481DCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003481DCu) [[unlikely]] return; }
L_003481DC:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003481ECu) [[unlikely]] return; }
L_003481EC:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0034827C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348210u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00348210u) [[unlikely]] return; }
L_00348210:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348220u); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00348220u) [[unlikely]] return; }
L_00348220:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034822Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034822Cu) [[unlikely]] return; }
L_0034822C:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034825Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034825Cu) [[unlikely]] return; }
L_0034825C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348274u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00348274u) [[unlikely]] return; }
L_00348274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1216u));  if (t) { goto L_003482C8; } }
L_0034827C:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003482ACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003482ACu) [[unlikely]] return; }
L_003482AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003482C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x003482C4u) [[unlikely]] return; }
L_003482C4:
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.budget -= 1;
L_003482C8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00348304; } }
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00348304; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00348304:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00348320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[3].w[0] + 9792u);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00348418; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_003483E4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003483A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00348388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00348424; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00348388:
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1200u), c.f[0]);
    c.budget -= 6;
L_003483A0:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 1200u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1200u), c.f[0]);  if (t) { goto L_00348420; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 728u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003483E0u) [[unlikely]] return; }
L_003483E0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_003483E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483ECu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003483ECu) [[unlikely]] return; }
L_003483EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348420; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 728u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348418u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00348418u) [[unlikely]] return; }
L_00348418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348420u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00348420u) [[unlikely]] return; }
L_00348420:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00348424:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_0034859C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_00348568; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00348524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003484A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 108u));  if (t) { goto L_003485F8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003484A8:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 31;
L_00348524:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_003485F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348564u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00348564u) [[unlikely]] return; }
L_00348564:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00348568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348570u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00348570u) [[unlikely]] return; }
L_00348570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003485F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034859Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034859Cu) [[unlikely]] return; }
L_0034859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x003485A4u) [[unlikely]] return; }
L_003485A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003485F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u - 73u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 1308u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485F4u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003485F4u) [[unlikely]] return; }
L_003485F4:
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 1;
L_003485F8:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348634; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_00348634:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348660; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 4;
L_00348660:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348670u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00348670u) [[unlikely]] return; }
L_00348670:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348680u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00348680u) [[unlikely]] return; }
L_00348680:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00348780; } }
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00348738; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486CCu); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x003486CCu) [[unlikely]] return; }
L_003486CC:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486DCu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x003486DCu) [[unlikely]] return; }
L_003486DC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486E8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003486E8u) [[unlikely]] return; }
L_003486E8:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348718u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00348718u) [[unlikely]] return; }
L_00348718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348730u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00348730u) [[unlikely]] return; }
L_00348730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00348784; } }
L_00348738:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348768u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00348768u) [[unlikely]] return; }
L_00348768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348780u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00348780u) [[unlikely]] return; }
L_00348780:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00348784:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003487A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003487C8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_003487F8; } }
L_003487C8:
    c.f[1] = ld32((c.r[4].w[0] + 1200u));
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_003487F8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003487F8u) [[unlikely]] return; }
L_003487F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00348894; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00348844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00348AE0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00348844:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 261u);
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 756u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348880u); st8((c.r[17].w[0] + 763u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x00348880u) [[unlikely]] return; }
L_00348880:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00348ADC; } }
L_00348894:
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00348ADC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003488C8u); c.r[5].d[0] = ld16((c.r[17].w[0] + 850u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x003488C8u) [[unlikely]] return; }
L_003488C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28288u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28284u);
    set32(c.r[16], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 8320u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28280u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348948u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 196u, depth + 1u); else { c.pc = 0x0026EC30u; return; } if (c.pc != 0x00348948u) [[unlikely]] return; }
L_00348948:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 1408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348958u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00348958u) [[unlikely]] return; }
L_00348958:
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348964u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00348964u) [[unlikely]] return; }
L_00348964:
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[17].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00348998; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 3;
L_00348998:
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    st32((c.r[17].w[0] + 1436u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 1424u));
    c.f[2] = ld32((c.r[17].w[0] + 1428u));
    c.f[1] = ld32((c.r[17].w[0] + 1432u));
    c.f[0] = ld32((c.r[17].w[0] + 1436u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    st32((c.r[17].w[0] + 1468u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_003489EC; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_003489EC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[17].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 1300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] - 4704u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[17].w[0] + 1312u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1220u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A70u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00348A70u) [[unlikely]] return; }
L_00348A70:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x00348A7Cu) [[unlikely]] return; }
L_00348A7C:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A88u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00348A88u) [[unlikely]] return; }
L_00348A88:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00348AC0; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00348ADC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00348AC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_00348AD8; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00348ADC; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_00348AD8:
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00348ADC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00348AE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00348AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00348B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B14u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00348B14u) [[unlikely]] return; }
L_00348B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348B60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.f[20] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B34u); c.f[12] = ld32((c.r[16].w[0] + 1220u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00348B34u) [[unlikely]] return; }
L_00348B34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B50u); set32(c.r[6], c.r[3].w[0] + 11u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00348B50u) [[unlikely]] return; }
L_00348B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00348B64; } }
L_00348B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B60u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00348B60u) [[unlikely]] return; }
L_00348B60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00348B64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BA4u); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00348BA4u) [[unlikely]] return; }
L_00348BA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 9u);  if (t) { goto L_00348D1C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00348CCC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00348C58; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00348C10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00348BEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_00348D28; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00348BEC:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348C0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00348C0C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00348C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C18u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00348C18u) [[unlikely]] return; }
L_00348C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348D24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.f[20] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C38u); c.f[12] = ld32((c.r[16].w[0] + 1220u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00348C38u) [[unlikely]] return; }
L_00348C38:
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[12] = c.f[20];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C54u); set32(c.r[6], c.r[2].w[0] + 11u);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00348C54u) [[unlikely]] return; }
L_00348C54:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00348C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C60u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00348C60u) [[unlikely]] return; }
L_00348C60:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348D24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348D24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00348D24; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00348CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348CD4u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00348CD4u) [[unlikely]] return; }
L_00348CD4:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1220u), c.f[1]);  if (t) { goto L_00348D0C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348D24; } }
L_00348D0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
L_00348D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x00348D24u) [[unlikely]] return; }
L_00348D24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_00348D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00348E84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348E80; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D48u); set32(c.r[5], c.r[16].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00348D48u) [[unlikely]] return; }
L_00348D48:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348D80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u - 15360u);  if (t) { goto L_00348D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15360u);  if (t) { goto L_00348DD8; } }
    set32(c.r[17], 0u - 15360u);
    c.budget -= 1;
L_00348D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348DD8; } }
L_00348D80:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00348DB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));  if (t) { goto L_00348DD8; } }
L_00348DAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[2].w[0]);  if (t) { goto L_00348DD8; } }
L_00348DB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));  if (t) { goto L_00348DD8; } }
L_00348DD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[17], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00348DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348DE0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00348DE0u) [[unlikely]] return; }
L_00348DE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E08u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x00348E08u) [[unlikely]] return; }
L_00348E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28272u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28268u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28264u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E80u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00348E80u) [[unlikely]] return; }
L_00348E80:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00348E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00348E8Cu) [[unlikely]] return; }
L_00348E8C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EB8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00348EB8u) [[unlikely]] return; }
L_00348EB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EDCu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00348EDCu) [[unlikely]] return; }
L_00348EDC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 14);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EECu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00348EECu) [[unlikely]] return; }
L_00348EEC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EF8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00348EF8u) [[unlikely]] return; }
L_00348EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00348F10u) [[unlikely]] return; }
L_00348F10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00348F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00348FE4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00348FA8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00348F6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00348FF0; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00348F6C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 4704u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] + 15u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00348FA4u) [[unlikely]] return; }
L_00348FA4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00348FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FB0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00348FB0u) [[unlikely]] return; }
L_00348FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348FEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FCCu); c.f[12] = ld32((c.r[16].w[0] + 1220u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00348FCCu) [[unlikely]] return; }
L_00348FCC:
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FE4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00348FE4u) [[unlikely]] return; }
L_00348FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00348FECu) [[unlikely]] return; }
L_00348FEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00348FF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003491E0; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00349194; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00349140; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[7].w[0] + 1u);  if (t) { goto L_003490EC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 1u);  if (t) { goto L_00349058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_003491F0; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00349058:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[2].w[0] - 4704u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490E0u); set32(c.r[6], c.r[2].w[0] + 15u);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003490E0u) [[unlikely]] return; }
L_003490E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003491EC; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003490EC:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00349118; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0034913C; } }
L_00349118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00349134; } }
    set32(c.r[2], 0u + 48u);
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034913C; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00349134:
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0034913C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00349140:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034915Cu); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034915Cu) [[unlikely]] return; }
L_0034915C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003491EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349178u); c.f[12] = ld32((c.r[16].w[0] + 1220u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00349178u) [[unlikely]] return; }
L_00349178:
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349190u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00349190u) [[unlikely]] return; }
L_00349190:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00349194:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x003491A0u) [[unlikely]] return; }
L_003491A0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_003491EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003491EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 5;
L_003491E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003491ECu) [[unlikely]] return; }
L_003491EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_003491F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0034934C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349348; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349210u); set32(c.r[5], c.r[16].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00349210u) [[unlikely]] return; }
L_00349210:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349248; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u - 15360u);  if (t) { goto L_00349240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15360u);  if (t) { goto L_003492A0; } }
    set32(c.r[17], 0u - 15360u);
    c.budget -= 1;
L_00349240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003492A0; } }
L_00349248:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349280; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));  if (t) { goto L_003492A0; } }
L_00349274:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[2].w[0]);  if (t) { goto L_003492A0; } }
L_00349280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));  if (t) { goto L_003492A0; } }
L_00349298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[17], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_003492A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492A8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x003492A8u) [[unlikely]] return; }
L_003492A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492D0u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x003492D0u) [[unlikely]] return; }
L_003492D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28272u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28268u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28264u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349348u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00349348u) [[unlikely]] return; }
L_00349348:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0034934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00349354u) [[unlikely]] return; }
L_00349354:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349378; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00349378:
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_0034938C; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0034938C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003493ECu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003493ECu) [[unlikely]] return; }
L_003493EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 14);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003493FCu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003493FCu) [[unlikely]] return; }
L_003493FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349408u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00349408u) [[unlikely]] return; }
L_00349408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00349420u) [[unlikely]] return; }
L_00349420:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00349440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349454u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00349454u) [[unlikely]] return; }
L_00349454:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0034956C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00349510; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_00349484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00349570; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00349484:
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_0034949C; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0034949C:
    set32(c.r[2], c.r[28].w[0] - 27400u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003494C0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003494D8; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003494C0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003494D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003494F0u); st32((c.r[16].w[0] + 1200u), c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003494F0u) [[unlikely]] return; }
L_003494F0:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349508u); mmi::paddub(c.r[7], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00349508u) [[unlikely]] return; }
L_00349508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034956C; } }
L_00349510:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (t) { goto L_0034956C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1200u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034956Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034956Cu) [[unlikely]] return; }
L_0034956C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00349570:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349598u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00349598u) [[unlikely]] return; }
L_00349598:
    set32(c.r[7], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[6].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_003496C0; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_003495C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 876u)));  if (t) { goto L_00349764; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003495C4:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034960Cu); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0034960Cu) [[unlikely]] return; }
L_0034960C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_00349620; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00349620:
    set32(c.r[2], c.r[28].w[0] - 27400u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00349644; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034965C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00349644:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0034965C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349690u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00349690u) [[unlikely]] return; }
L_00349690:
    st16((c.r[16].w[0] + 876u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034969Cu); c.f[12] = ld32((c.r[16].w[0] + 1216u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034969Cu) [[unlikely]] return; }
L_0034969C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003496B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003496B4u) [[unlikely]] return; }
L_003496B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349760; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003496C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003496C8u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x003496C8u) [[unlikely]] return; }
L_003496C8:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003496D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x003496D4u) [[unlikely]] return; }
L_003496D4:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00349760; } }
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9920u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349754u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00349754u) [[unlikely]] return; }
L_00349754:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349760u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x00349760u) [[unlikely]] return; }
L_00349760:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 876u)));
    c.budget -= 1;
L_00349764:
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034977Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034977Cu) [[unlikely]] return; }
L_0034977C:
    set32(c.r[5], c.r[16].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034978Cu); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 292u, depth + 1u); else { c.pc = 0x0034B4D0u; return; } if (c.pc != 0x0034978Cu) [[unlikely]] return; }
L_0034978C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003497A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCF0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 71u, depth); }
L_003497B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003497C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x003497C4u) [[unlikely]] return; }
L_003497C4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003497E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x003497E0u) [[unlikely]] return; }
L_003497E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003498A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00349844; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00349810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_003498AC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00349810:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_00349844:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349868; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00349868:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_003498A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
L_003498A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_003498AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x003498B4u) [[unlikely]] return; }
L_003498B4:
    c.f[1] = ld32((c.r[16].w[0] + 1028u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    set32(c.r[5], c.r[16].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498CCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x003498CCu) [[unlikely]] return; }
L_003498CC:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003498D8u) [[unlikely]] return; }
L_003498D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349904u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00349904u) [[unlikely]] return; }
L_00349904:
    set32(c.r[2], c.r[29].w[0] + 36u);
    c.f[0] = 0u;
    st32((c.r[2].w[0]), 0u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 1424u);  if (t) { goto L_00349994; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349960u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00349960u) [[unlikely]] return; }
L_00349960:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034996Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034996Cu) [[unlikely]] return; }
L_0034996C:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 1424u);
    c.budget -= 10;
L_00349994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034999Cu);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034999Cu) [[unlikely]] return; }
L_0034999C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003499B0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003499B0u) [[unlikely]] return; }
L_003499B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003499C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00349AE8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00349A88; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00349A6C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00349A08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00349AF4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00349A08:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 9924u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9921u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 6u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1204u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349A64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00349A64u) [[unlikely]] return; }
L_00349A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349AF0; } }
L_00349A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349A74u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00349A74u) [[unlikely]] return; }
L_00349A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00349A88:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_00349AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9922u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AE0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00349AE0u) [[unlikely]] return; }
L_00349AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349AF0; } }
L_00349AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AF0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00349AF0u) [[unlikely]] return; }
L_00349AF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00349AF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00349D64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 27728u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00349B38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[4], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 9923u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], c.r[2].w[0] + 9924u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 10u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 9921u);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00349C14u) [[unlikely]] return; }
L_00349C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));  if (t) { goto L_00349D68; } }
L_00349C1C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C38u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00349C38u) [[unlikely]] return; }
L_00349C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349D64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00349D64; } }
L_00349C50:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_00349D64; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 9922u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349CD0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00349CD0u) [[unlikely]] return; }
L_00349CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349D64; } }
L_00349CD8:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349CECu); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00349CECu) [[unlikely]] return; }
L_00349CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349D64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00349D64; } }
L_00349D04:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00349D64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u - 73u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 13;
L_00349D58:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00349D64u) [[unlikely]] return; }
L_00349D64:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));
    c.budget -= 1;
L_00349D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00349D7C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
L_00349D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00349D84u) [[unlikely]] return; }
L_00349D84:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349DA8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00349DA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349E14; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9794u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00349E0Cu) [[unlikely]] return; }
L_00349E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00349E20; } }
L_00349E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E1Cu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00349E1Cu) [[unlikely]] return; }
L_00349E1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00349E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00349E74u) [[unlikely]] return; }
L_00349E74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00349FBC; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00349FA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00349EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));  if (t) { goto L_0034A018; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00349EA4:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 794u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[4], 0u - 453u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[6].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349EFCu); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00349EFCu) [[unlikely]] return; }
L_00349EFC:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F0Cu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00349F0Cu) [[unlikely]] return; }
L_00349F0C:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F1Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00349F1Cu) [[unlikely]] return; }
L_00349F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F24u); set32(c.r[4], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00349F24u) [[unlikely]] return; }
L_00349F24:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00349F48; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00349F48u) [[unlikely]] return; }
L_00349F48:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9794u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00349F94u) [[unlikely]] return; }
L_00349F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A014; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00349FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349FA8u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x00349FA8u) [[unlikely]] return; }
L_00349FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A014; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00349FBC:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[17].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349FE8u); st32((c.r[17].w[0] + 1448u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00349FE8u) [[unlikely]] return; }
L_00349FE8:
    c.f[3] = ld32((c.r[17].w[0] + 1440u));
    c.f[2] = ld32((c.r[17].w[0] + 1444u));
    c.f[1] = ld32((c.r[17].w[0] + 1448u));
    c.f[0] = ld32((c.r[17].w[0] + 1452u));
    set32(c.r[5], 0u + 14u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A014u); st32((c.r[17].w[0] + 1468u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034A014u) [[unlikely]] return; }
L_0034A014:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 1;
L_0034A018:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A028u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0034A028u) [[unlikely]] return; }
L_0034A028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A058; } }
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_0034A070; } }
L_0034A058:
    c.f[0] = ld32((c.r[17].w[0] + 8352u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8356u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8360u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_0034A070:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0A0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034A0A0u) [[unlikely]] return; }
L_0034A0A0:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0BCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0034A0BCu) [[unlikely]] return; }
L_0034A0BC:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0034A0C8u) [[unlikely]] return; }
L_0034A0C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034A0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034A134; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9795u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A12Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034A12Cu) [[unlikely]] return; }
L_0034A12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0034A140; } }
L_0034A134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A13Cu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0034A13Cu) [[unlikely]] return; }
L_0034A13C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034A140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034A150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A194u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x0034A194u) [[unlikely]] return; }
L_0034A194:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0034A1A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0034A26C; } }
L_0034A1A8:
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 1056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + 9795u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A204u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034A204u) [[unlikely]] return; }
L_0034A204:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A210u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0034A210u) [[unlikely]] return; }
L_0034A210:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A21Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0034A21Cu) [[unlikely]] return; }
L_0034A21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A22Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0034A22Cu) [[unlikely]] return; }
L_0034A22C:
    c.f[2] = ld32((c.r[17].w[0] + 992u));
    c.f[1] = ld32((c.r[17].w[0] + 1136u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A248u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0034A248u) [[unlikely]] return; }
L_0034A248:
    c.f[1] = ld32((c.r[17].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_0034A264; } }
L_0034A258:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 992u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_0034A264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_0034A274; } }
L_0034A26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A274u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034A274u) [[unlikely]] return; }
L_0034A274:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A288u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0034A288u) [[unlikely]] return; }
L_0034A288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A298u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0034A298u) [[unlikely]] return; }
L_0034A298:
    c.f[3] = ld32((c.r[17].w[0] + 996u));
    c.f[2] = ld32((c.r[17].w[0] + 1136u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2BCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0034A2BCu) [[unlikely]] return; }
L_0034A2BC:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034A2EC; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_0034A2EC:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[17].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A308u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 327u, depth + 1u); else { c.pc = 0x0034BA10u; return; } if (c.pc != 0x0034A308u) [[unlikely]] return; }
L_0034A308:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0034A3BC; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A35Cu); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034A35Cu) [[unlikely]] return; }
L_0034A35C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A370u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034A370u) [[unlikely]] return; }
L_0034A370:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A37Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034A37Cu) [[unlikely]] return; }
L_0034A37C:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A394u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A394u) [[unlikely]] return; }
L_0034A394:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1468u), c.f[0]);  if (t) { goto L_0034A44C; } }
L_0034A3BC:
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A3CCu); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034A3CCu) [[unlikely]] return; }
L_0034A3CC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A3D8u); set32(c.r[5], c.r[17].w[0] + 1456u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034A3D8u) [[unlikely]] return; }
L_0034A3D8:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A3F0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A3F0u) [[unlikely]] return; }
L_0034A3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 52u));  if (t) { goto L_0034A450; } }
L_0034A3F8:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034A434; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_0034A434:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A44Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A44Cu) [[unlikely]] return; }
L_0034A44C:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_0034A450:
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034A468; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_0034A468:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A478u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0034A478u) [[unlikely]] return; }
L_0034A478:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A488u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0034A488u) [[unlikely]] return; }
L_0034A488:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0034A518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4ACu); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034A4ACu) [[unlikely]] return; }
L_0034A4AC:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4BCu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034A4BCu) [[unlikely]] return; }
L_0034A4BC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4C8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034A4C8u) [[unlikely]] return; }
L_0034A4C8:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4F8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A4F8u) [[unlikely]] return; }
L_0034A4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A510u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0034A510u) [[unlikely]] return; }
L_0034A510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1216u));  if (t) { goto L_0034A564; } }
L_0034A518:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A548u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A548u) [[unlikely]] return; }
L_0034A548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A560u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0034A560u) [[unlikely]] return; }
L_0034A560:
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.budget -= 1;
L_0034A564:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0034A5A0; } }
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_0034A5A0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0034A5A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034A5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[3].w[0] + 9792u);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0034A6B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0034A684; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034A640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0034A628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0034A6C4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0034A628:
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1200u), c.f[0]);
    c.budget -= 6;
L_0034A640:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 1200u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1200u), c.f[0]);  if (t) { goto L_0034A6C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 728u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A680u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034A680u) [[unlikely]] return; }
L_0034A680:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0034A684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A68Cu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0034A68Cu) [[unlikely]] return; }
L_0034A68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A6C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 728u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A6B8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034A6B8u) [[unlikely]] return; }
L_0034A6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A6C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0034A6C0u) [[unlikely]] return; }
L_0034A6C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034A6C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034A6E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_0034A83C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0034A808; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0034A7C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0034A748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 108u));  if (t) { goto L_0034A898; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0034A748:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 31;
L_0034A7C4:
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_0034A894; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A804u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034A804u) [[unlikely]] return; }
L_0034A804:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0034A808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A810u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034A810u) [[unlikely]] return; }
L_0034A810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A894; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A83Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034A83Cu) [[unlikely]] return; }
L_0034A83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A844u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034A844u) [[unlikely]] return; }
L_0034A844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A894; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u - 73u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 1308u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A894u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0034A894u) [[unlikely]] return; }
L_0034A894:
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 1;
L_0034A898:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034A8D4; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_0034A8D4:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034A900; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 4;
L_0034A900:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A910u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0034A910u) [[unlikely]] return; }
L_0034A910:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A920u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0034A920u) [[unlikely]] return; }
L_0034A920:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034AA20; } }
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034A9D8; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A96Cu); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034A96Cu) [[unlikely]] return; }
L_0034A96C:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A97Cu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034A97Cu) [[unlikely]] return; }
L_0034A97C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A988u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034A988u) [[unlikely]] return; }
L_0034A988:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9B8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034A9B8u) [[unlikely]] return; }
L_0034A9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0034A9D0u) [[unlikely]] return; }
L_0034A9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0034AA24; } }
L_0034A9D8:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA08u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0034AA08u) [[unlikely]] return; }
L_0034AA08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x0034AA20u) [[unlikely]] return; }
L_0034AA20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034AA24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034AA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034AC3C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0034ABCC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0034AB3C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0034AAD4; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_0034AAA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034ACC4; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0034AAA4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 10u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAD0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0034AAD0u) [[unlikely]] return; }
L_0034AAD0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034AAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AADCu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0034AADCu) [[unlikely]] return; }
L_0034AADC:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_0034ACC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0034AB30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0034AB30u) [[unlikely]] return; }
L_0034AB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0034ACC0; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0034AB3C:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 389u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 759u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0034AB70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034ACC0; } }
L_0034AB70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8464u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10032u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], 0u + 21u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0034ABC4u) [[unlikely]] return; }
L_0034ABC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ACC0; } }
L_0034ABCC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034ABE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABE0u);  if (depth < kMaxDepth) unit_008B(c, 125u, depth + 1u); else { c.pc = 0x0032CBF0u; return; } if (c.pc != 0x0034ABE0u) [[unlikely]] return; }
L_0034ABE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034ACC0; } }
L_0034ABE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8464u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10032u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], 0u + 21u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0034AC3Cu) [[unlikely]] return; }
L_0034AC3C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0034AC4Cu) [[unlikely]] return; }
L_0034AC4C:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[16].w[0] + 1328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 283u, depth + 1u); else { c.pc = 0x0034B360u; return; } if (c.pc != 0x0034AC5Cu) [[unlikely]] return; }
L_0034AC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034ACC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034ACC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034ACC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 17u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ACACu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034ACACu) [[unlikely]] return; }
L_0034ACAC:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ACB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0034ACB8u) [[unlikely]] return; }
L_0034ACB8:
    st32((c.r[16].w[0] + 972u), 0u);
    st32((c.r[16].w[0] + 968u), 0u);
    c.budget -= 2;
L_0034ACC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034ACC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034ACD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ACE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034AD04; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0034AD04:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD1Cu); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0034AD1Cu) [[unlikely]] return; }
L_0034AD1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0034AD58; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_006C(c, 546u, depth + 1u); else { c.pc = 0x002B3740u; return; } if (c.pc != 0x0034AD38u) [[unlikely]] return; }
L_0034AD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_008F(c, 259u, depth + 1u); else { c.pc = 0x0033DB80u; return; } if (c.pc != 0x0034AD40u) [[unlikely]] return; }
L_0034AD40:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 73u, depth + 1u); else { c.pc = 0x0034D010u; return; } if (c.pc != 0x0034AD4Cu) [[unlikely]] return; }
L_0034AD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_0034AD68; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0034AD58:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD64u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0034AD64u) [[unlikely]] return; }
L_0034AD64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.budget -= 1;
L_0034AD68:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 278u, depth + 1u); else { c.pc = 0x0034B2B0u; return; } if (c.pc != 0x0034AD7Cu) [[unlikely]] return; }
L_0034AD7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AD90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ADA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034AE04; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0034ADD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034AE40; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0034ADD0:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10033u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ADFCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0034ADFCu) [[unlikely]] return; }
L_0034ADFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AE3C; } }
L_0034AE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE0Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0034AE0Cu) [[unlikely]] return; }
L_0034AE0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034AE3C; } }
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 33u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE3Cu); st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0034AE3Cu) [[unlikely]] return; }
L_0034AE3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034AE40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034AE90; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AE90u) [[unlikely]] return; }
L_0034AE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AE98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003459B0u; return; } if (c.pc != 0x0034AE98u) [[unlikely]] return; }
L_0034AE98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034AEF0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AEF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AEF0u) [[unlikely]] return; }
L_0034AEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AEF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 315u, depth + 1u); else { c.pc = 0x00343E10u; return; } if (c.pc != 0x0034AEF8u) [[unlikely]] return; }
L_0034AEF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF30u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034AF30u) [[unlikely]] return; }
L_0034AF30:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF40u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034AF40u) [[unlikely]] return; }
L_0034AF40:
    set32(c.r[4], c.r[16].w[0] + 1424u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF50u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x0034AF50u) [[unlikely]] return; }
L_0034AF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF58u); set32(c.r[4], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034AF58u) [[unlikely]] return; }
L_0034AF58:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_0034AF7C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AF7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0034AF7Cu) [[unlikely]] return; }
L_0034AF7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034AF90:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[4].w[0] + 8368u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[4].w[0] + 8372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8376u), c.f[0]);  c.pc = t; return; }
L_0034AFB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFD8u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034AFD8u) [[unlikely]] return; }
L_0034AFD8:
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFE8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x0034AFE8u) [[unlikely]] return; }
L_0034AFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFF0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x0034AFF0u) [[unlikely]] return; }
L_0034AFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AFF8u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0034AFF8u) [[unlikely]] return; }
L_0034AFF8:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0034B010; } }
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0034B010:
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[0] = 0u;
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 8320u);  if (t) { goto L_0034B074; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 5;
L_0034B074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B07Cu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034B07Cu) [[unlikely]] return; }
L_0034B07C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B088u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034B088u) [[unlikely]] return; }
L_0034B088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B090u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034B090u) [[unlikely]] return; }
L_0034B090:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0034B0B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0D4u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B0D4u) [[unlikely]] return; }
L_0034B0D4:
    set32(c.r[4], c.r[17].w[0] + 8320u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0E4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x0034B0E4u) [[unlikely]] return; }
L_0034B0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x0034B0ECu) [[unlikely]] return; }
L_0034B0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0F4u); c.f[12] = ld32((c.r[29].w[0] + 72u));  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0034B0F4u) [[unlikely]] return; }
L_0034B0F4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B108u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034B108u) [[unlikely]] return; }
L_0034B108:
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[0] = 0u;
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 8320u);  if (t) { goto L_0034B170; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 5;
L_0034B170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B178u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034B178u) [[unlikely]] return; }
L_0034B178:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B184u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034B184u) [[unlikely]] return; }
L_0034B184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B18Cu); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034B18Cu) [[unlikely]] return; }
L_0034B18C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034B1B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B1D4u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B1D4u) [[unlikely]] return; }
L_0034B1D4:
    set32(c.r[4], c.r[17].w[0] + 8320u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B1E4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0034B1E4u) [[unlikely]] return; }
L_0034B1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B1ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x0034B1ECu) [[unlikely]] return; }
L_0034B1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B1F4u); c.f[12] = ld32((c.r[29].w[0] + 72u));  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0034B1F4u) [[unlikely]] return; }
L_0034B1F4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B208u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034B208u) [[unlikely]] return; }
L_0034B208:
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[0] = 0u;
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 8320u);  if (t) { goto L_0034B270; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 5;
L_0034B270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B278u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034B278u) [[unlikely]] return; }
L_0034B278:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B284u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034B284u) [[unlikely]] return; }
L_0034B284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B28Cu); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034B28Cu) [[unlikely]] return; }
L_0034B28C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034B2B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B2F8u); set32(c.r[18], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B2F8u) [[unlikely]] return; }
L_0034B2F8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B308u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034B308u) [[unlikely]] return; }
L_0034B308:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B330u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026E990u; return; } if (c.pc != 0x0034B330u) [[unlikely]] return; }
L_0034B330:
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B344u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 214u, depth + 1u); else { c.pc = 0x0026EED0u; return; } if (c.pc != 0x0034B344u) [[unlikely]] return; }
L_0034B344:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034B360:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B3A8u); set32(c.r[19], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B3A8u) [[unlikely]] return; }
L_0034B3A8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B3B8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034B3B8u) [[unlikely]] return; }
L_0034B3B8:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B3E0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026E990u; return; } if (c.pc != 0x0034B3E0u) [[unlikely]] return; }
L_0034B3E0:
    set32(c.r[4], c.r[18].w[0] + 8320u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B3F4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 238u, depth + 1u); else { c.pc = 0x0026F180u; return; } if (c.pc != 0x0034B3F4u) [[unlikely]] return; }
L_0034B3F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034B410:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B458u); set32(c.r[18], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B458u) [[unlikely]] return; }
L_0034B458:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B4A0u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026E990u; return; } if (c.pc != 0x0034B4A0u) [[unlikely]] return; }
L_0034B4A0:
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B4B4u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 214u, depth + 1u); else { c.pc = 0x0026EED0u; return; } if (c.pc != 0x0034B4B4u) [[unlikely]] return; }
L_0034B4B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034B4D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B518u); set32(c.r[19], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B518u) [[unlikely]] return; }
L_0034B518:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B560u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026E990u; return; } if (c.pc != 0x0034B560u) [[unlikely]] return; }
L_0034B560:
    set32(c.r[4], c.r[18].w[0] + 8320u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B574u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 238u, depth + 1u); else { c.pc = 0x0026F180u; return; } if (c.pc != 0x0034B574u) [[unlikely]] return; }
L_0034B574:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034B590:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B5BCu); mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 251u, depth + 1u); else { c.pc = 0x0034AF90u; return; } if (c.pc != 0x0034B5BCu) [[unlikely]] return; }
L_0034B5BC:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B60Cu); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 180u, depth + 1u); else { c.pc = 0x0026E990u; return; } if (c.pc != 0x0034B60Cu) [[unlikely]] return; }
L_0034B60C:
    set32(c.r[4], c.r[18].w[0] + 8320u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B620u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 214u, depth + 1u); else { c.pc = 0x0026EED0u; return; } if (c.pc != 0x0034B620u) [[unlikely]] return; }
L_0034B620:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0034B640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B660u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034B660u) [[unlikely]] return; }
L_0034B660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B668u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0034B668u) [[unlikely]] return; }
L_0034B668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B670u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034B670u) [[unlikely]] return; }
L_0034B670:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 7780u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6B4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034B6B4u) [[unlikely]] return; }
L_0034B6B4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B6C0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034B6C0u) [[unlikely]] return; }
L_0034B6C0:
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 7780u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B714u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034B714u) [[unlikely]] return; }
L_0034B714:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B720u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034B720u) [[unlikely]] return; }
L_0034B720:
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[3] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034B76C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_0034B76C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034B76C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 1004u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B7A4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034B7A4u) [[unlikely]] return; }
L_0034B7A4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B7B0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034B7B0u) [[unlikely]] return; }
L_0034B7B0:
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 1004u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B800u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0034B800u) [[unlikely]] return; }
L_0034B800:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B80Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034B80Cu) [[unlikely]] return; }
L_0034B80C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B820:
    c.f[0] = ld32((c.r[4].w[0] + 8352u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8356u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8360u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0034B840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[2].w[0] + 32u);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B880u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034B880u) [[unlikely]] return; }
L_0034B880:
    set32(c.r[16], c.r[29].w[0] + 132u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[29].w[0] + 136u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_0034B8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034B9E4; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_0034B8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B8CCu);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034B8CCu) [[unlikely]] return; }
L_0034B8CC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B8D8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034B8D8u) [[unlikely]] return; }
L_0034B8D8:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B8E8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0034B8E8u) [[unlikely]] return; }
L_0034B8E8:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0034B914; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034B914:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0034B930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0034B930:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034B950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0034B950; } }
L_0034B950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B958u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0034B958u) [[unlikely]] return; }
L_0034B958:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_0034B970; } }
    mmi::paddub(c.r[20], c.r[18], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 2;
L_0034B970:
    set32(c.r[5], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B980u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0034B980u) [[unlikely]] return; }
L_0034B980:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034B9C0; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0034B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9C8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034B9C8u) [[unlikely]] return; }
L_0034B9C8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9D4u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034B9D4u) [[unlikely]] return; }
L_0034B9D4:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9E0u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034B9E0u) [[unlikely]] return; }
L_0034B9E0:
    mmi::paddub(c.r[2], c.r[21], c.r[0]);
    c.budget -= 1;
L_0034B9E4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0034BA10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.f[20] = c.f[12];
    set32(c.r[16], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA6Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0034BA6Cu) [[unlikely]] return; }
L_0034BA6C:
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034BC40; } }
    set32(c.r[6], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAA4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0034BAA4u) [[unlikely]] return; }
L_0034BAA4:
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0034BAEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0034BB0C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0034BAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAF4u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034BAF4u) [[unlikely]] return; }
L_0034BAF4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB00u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034BB00u) [[unlikely]] return; }
L_0034BB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_0034BC44; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0034BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB14u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0034BB14u) [[unlikely]] return; }
L_0034BB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0034BB1Cu) [[unlikely]] return; }
L_0034BB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB24u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034BB24u) [[unlikely]] return; }
L_0034BB24:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034BB30u) [[unlikely]] return; }
L_0034BB30:
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB40u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0034BB40u) [[unlikely]] return; }
L_0034BB40:
    fpu_div(c, 12u, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0034BB74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0034BB94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0034BB74:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034BB94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0034BB94; } }
L_0034BB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB9Cu);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0034BB9Cu) [[unlikely]] return; }
L_0034BB9C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBB0u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034BBB0u) [[unlikely]] return; }
L_0034BBB0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBC4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0034BBC4u) [[unlikely]] return; }
L_0034BBC4:
    set32(c.r[3], c.r[29].w[0] + 132u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 136u);
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034BC0C; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0034BC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC14u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034BC14u) [[unlikely]] return; }
L_0034BC14:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC20u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034BC20u) [[unlikely]] return; }
L_0034BC20:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC2Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034BC2Cu) [[unlikely]] return; }
L_0034BC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034BC34u) [[unlikely]] return; }
L_0034BC34:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC40u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034BC40u) [[unlikely]] return; }
L_0034BC40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034BC44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0034BC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] & 2048ull;
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0034BCC8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] | 1ull;  goto L_0034BCC0; }
    set32(c.r[2], 0u + 8192u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 3;
L_0034BCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 1308u)));  if (t) { goto L_0034BD2C; } }
L_0034BCC8:
    c.r[2].d[0] = c.r[17].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BD04; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    set32(c.r[2], c.r[2].w[0] - 512u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1308u)));
    c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[16].d[0] | 1ull;  goto L_0034BCFC; }
    set32(c.r[2], 0u - 8192u);
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 3;
L_0034BCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BD28; } }
L_0034BD04:
    c.f[1] = ld32((c.r[18].w[0] + 1308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD24u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034BD24u) [[unlikely]] return; }
L_0034BD24:
    st32((c.r[18].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 1;
L_0034BD28:
    set32(c.r[3], ld32((c.r[18].w[0] + 1308u)));
    c.budget -= 1;
L_0034BD2C:
    c.r[2].d[0] = c.r[17].d[0] & 8192ull;
    st32((c.r[18].w[0] + 1304u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 1300u), c.r[3].w[0]);  if (t) { goto L_0034BD6C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] | 2ull;  goto L_0034BD64; }
    set32(c.r[2], 0u + 8192u);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 3;
L_0034BD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0034BDD0; } }
L_0034BD6C:
    c.r[2].d[0] = c.r[17].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BDA8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] - 512u);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.r[1].d[0] = c.r[2].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[16].d[0] | 2ull;  goto L_0034BDA0; }
    set32(c.r[2], 0u - 8192u);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 3;
L_0034BDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BDCC; } }
L_0034BDA8:
    c.f[1] = ld32((c.r[18].w[0] + 92u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDC8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034BDC8u) [[unlikely]] return; }
L_0034BDC8:
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_0034BDCC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034BDD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034BDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BE34; } }
L_0034BE10:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BE34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034BE28u) [[unlikely]] return; }
L_0034BE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BE34; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034BE34:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034BE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BE84; } }
L_0034BE60:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0034BE7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BE84; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0034BE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE84u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034BE84u) [[unlikely]] return; }
L_0034BE84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034BE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034BEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BF1C; } }
L_0034BEAC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BF1C; } }
L_0034BEC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BEE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BEE8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034BEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0034BF20; } }
L_0034BEE8:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BF08; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_0034BF14; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034BF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BF1C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_0034BF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF1Cu);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034BF1Cu) [[unlikely]] return; }
L_0034BF1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034BF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034BF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034BF54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BFA8; } }
L_0034BF54:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BF78; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034BFA8; } }
L_0034BF78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034BF94; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034BF94u) [[unlikely]] return; }
L_0034BF94:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0034BFA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034BFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0093(c, 3u, depth); } }
L_0034BFE4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0093(c, 3u, depth); } }
L_0034BFF8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_0093(c, 1u, depth);
}

}
