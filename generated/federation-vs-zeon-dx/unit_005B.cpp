#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141,
    0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0,
    219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258,
    0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0,
    284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0,
    322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0,
    339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0,
    359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 367,
    0, 0, 368, 0, 0, 369, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C004;
    case 3u: goto L_0026C024;
    case 4u: goto L_0026C028;
    case 5u: goto L_0026C048;
    case 6u: goto L_0026C0A8;
    case 7u: goto L_0026C0D0;
    case 8u: goto L_0026C100;
    case 9u: goto L_0026C1E4;
    case 10u: goto L_0026C2C0;
    case 11u: goto L_0026C3A0;
    case 12u: goto L_0026C3C8;
    case 13u: goto L_0026C404;
    case 14u: goto L_0026C434;
    case 15u: goto L_0026C4C0;
    case 16u: goto L_0026C540;
    case 17u: goto L_0026C578;
    case 18u: goto L_0026C5B0;
    case 19u: goto L_0026C700;
    case 20u: goto L_0026C72C;
    case 21u: goto L_0026C744;
    case 22u: goto L_0026C76C;
    case 23u: goto L_0026C7A0;
    case 24u: goto L_0026C7C0;
    case 25u: goto L_0026C7FC;
    case 26u: goto L_0026C89C;
    case 27u: goto L_0026C8C8;
    case 28u: goto L_0026C904;
    case 29u: goto L_0026C948;
    case 30u: goto L_0026CB40;
    case 31u: goto L_0026CBC0;
    case 32u: goto L_0026CBFC;
    case 33u: goto L_0026CC54;
    case 34u: goto L_0026CCD0;
    case 35u: goto L_0026CD2C;
    case 36u: goto L_0026CD38;
    case 37u: goto L_0026CD50;
    case 38u: goto L_0026CD94;
    case 39u: goto L_0026CDB0;
    case 40u: goto L_0026CE0C;
    case 41u: goto L_0026CE20;
    case 42u: goto L_0026CEB0;
    case 43u: goto L_0026CEC0;
    case 44u: goto L_0026CF48;
    case 45u: goto L_0026CF60;
    case 46u: goto L_0026CFDC;
    case 47u: goto L_0026D000;
    case 48u: goto L_0026D04C;
    case 49u: goto L_0026D060;
    case 50u: goto L_0026D0C8;
    case 51u: goto L_0026D0D4;
    case 52u: goto L_0026D0F0;
    case 53u: goto L_0026D134;
    case 54u: goto L_0026D140;
    case 55u: goto L_0026D1BC;
    case 56u: goto L_0026D1D0;
    case 57u: goto L_0026D228;
    case 58u: goto L_0026D240;
    case 59u: goto L_0026D28C;
    case 60u: goto L_0026D2B0;
    case 61u: goto L_0026D2FC;
    case 62u: goto L_0026D320;
    case 63u: goto L_0026D340;
    case 64u: goto L_0026D380;
    case 65u: goto L_0026D388;
    case 66u: goto L_0026D3B0;
    case 67u: goto L_0026D3D4;
    case 68u: goto L_0026D40C;
    case 69u: goto L_0026D434;
    case 70u: goto L_0026D440;
    case 71u: goto L_0026D44C;
    case 72u: goto L_0026D454;
    case 73u: goto L_0026D480;
    case 74u: goto L_0026D4FC;
    case 75u: goto L_0026D518;
    case 76u: goto L_0026D530;
    case 77u: goto L_0026D590;
    case 78u: goto L_0026D5A0;
    case 79u: goto L_0026D630;
    case 80u: goto L_0026D670;
    case 81u: goto L_0026D6C0;
    case 82u: goto L_0026D718;
    case 83u: goto L_0026D730;
    case 84u: goto L_0026D774;
    case 85u: goto L_0026D780;
    case 86u: goto L_0026D79C;
    case 87u: goto L_0026D7B0;
    case 88u: goto L_0026D880;
    case 89u: goto L_0026D960;
    case 90u: goto L_0026D988;
    case 91u: goto L_0026D9CC;
    case 92u: goto L_0026D9F4;
    case 93u: goto L_0026DA00;
    case 94u: goto L_0026DA3C;
    case 95u: goto L_0026DA50;
    case 96u: goto L_0026DA90;
    case 97u: goto L_0026DAB4;
    case 98u: goto L_0026DAD4;
    case 99u: goto L_0026DAE0;
    case 100u: goto L_0026DB00;
    case 101u: goto L_0026DB20;
    case 102u: goto L_0026DB64;
    case 103u: goto L_0026DB70;
    case 104u: goto L_0026DB80;
    case 105u: goto L_0026DBA8;
    case 106u: goto L_0026DBD4;
    case 107u: goto L_0026DC20;
    case 108u: goto L_0026DC34;
    case 109u: goto L_0026DC74;
    case 110u: goto L_0026DC98;
    case 111u: goto L_0026DCB8;
    case 112u: goto L_0026DCC4;
    case 113u: goto L_0026DCE0;
    case 114u: goto L_0026DD58;
    case 115u: goto L_0026DD80;
    case 116u: goto L_0026DDB0;
    case 117u: goto L_0026DDCC;
    case 118u: goto L_0026DDE0;
    case 119u: goto L_0026DE00;
    case 120u: goto L_0026DE50;
    case 121u: goto L_0026DE58;
    case 122u: goto L_0026DE6C;
    case 123u: goto L_0026DE78;
    case 124u: goto L_0026DE80;
    case 125u: goto L_0026DE8C;
    case 126u: goto L_0026DE94;
    case 127u: goto L_0026DEA0;
    case 128u: goto L_0026DEAC;
    case 129u: goto L_0026DEB4;
    case 130u: goto L_0026DEC0;
    case 131u: goto L_0026DEE0;
    case 132u: goto L_0026DF5C;
    case 133u: goto L_0026DF70;
    case 134u: goto L_0026E1D0;
    case 135u: goto L_0026E24C;
    case 136u: goto L_0026E260;
    case 137u: goto L_0026E3B0;
    case 138u: goto L_0026E440;
    case 139u: goto L_0026E464;
    case 140u: goto L_0026E46C;
    case 141u: goto L_0026E47C;
    case 142u: goto L_0026E484;
    case 143u: goto L_0026E48C;
    case 144u: goto L_0026E49C;
    case 145u: goto L_0026E4A8;
    case 146u: goto L_0026E4B0;
    case 147u: goto L_0026E4D0;
    case 148u: goto L_0026E4F8;
    case 149u: goto L_0026E500;
    case 150u: goto L_0026E508;
    case 151u: goto L_0026E518;
    case 152u: goto L_0026E524;
    case 153u: goto L_0026E52C;
    case 154u: goto L_0026E550;
    case 155u: goto L_0026E584;
    case 156u: goto L_0026E590;
    case 157u: goto L_0026E5A8;
    case 158u: goto L_0026E5D0;
    case 159u: goto L_0026E604;
    case 160u: goto L_0026E610;
    case 161u: goto L_0026E628;
    case 162u: goto L_0026E650;
    case 163u: goto L_0026E694;
    case 164u: goto L_0026E6A0;
    case 165u: goto L_0026E6F8;
    case 166u: goto L_0026E72C;
    case 167u: goto L_0026E768;
    case 168u: goto L_0026E790;
    case 169u: goto L_0026E814;
    case 170u: goto L_0026E83C;
    case 171u: goto L_0026E844;
    case 172u: goto L_0026E850;
    case 173u: goto L_0026E858;
    case 174u: goto L_0026E870;
    case 175u: goto L_0026E898;
    case 176u: goto L_0026E8A4;
    case 177u: goto L_0026E8FC;
    case 178u: goto L_0026E930;
    case 179u: goto L_0026E96C;
    case 180u: goto L_0026E990;
    case 181u: goto L_0026E9B4;
    case 182u: goto L_0026E9BC;
    case 183u: goto L_0026EA0C;
    case 184u: goto L_0026EA54;
    case 185u: goto L_0026EA5C;
    case 186u: goto L_0026EA64;
    case 187u: goto L_0026EA6C;
    case 188u: goto L_0026EAE0;
    case 189u: goto L_0026EB04;
    case 190u: goto L_0026EB0C;
    case 191u: goto L_0026EB5C;
    case 192u: goto L_0026EBA4;
    case 193u: goto L_0026EBAC;
    case 194u: goto L_0026EBB4;
    case 195u: goto L_0026EBBC;
    case 196u: goto L_0026EC30;
    case 197u: goto L_0026EC74;
    case 198u: goto L_0026EC80;
    case 199u: goto L_0026ECE4;
    case 200u: goto L_0026ED38;
    case 201u: goto L_0026ED48;
    case 202u: goto L_0026ED50;
    case 203u: goto L_0026ED5C;
    case 204u: goto L_0026ED64;
    case 205u: goto L_0026ED80;
    case 206u: goto L_0026EDC4;
    case 207u: goto L_0026EDD0;
    case 208u: goto L_0026EE34;
    case 209u: goto L_0026EE88;
    case 210u: goto L_0026EE98;
    case 211u: goto L_0026EEA0;
    case 212u: goto L_0026EEAC;
    case 213u: goto L_0026EEB4;
    case 214u: goto L_0026EED0;
    case 215u: goto L_0026EF18;
    case 216u: goto L_0026EF64;
    case 217u: goto L_0026EF6C;
    case 218u: goto L_0026EF78;
    case 219u: goto L_0026EF80;
    case 220u: goto L_0026EF94;
    case 221u: goto L_0026EFE4;
    case 222u: goto L_0026F008;
    case 223u: goto L_0026F014;
    case 224u: goto L_0026F01C;
    case 225u: goto L_0026F054;
    case 226u: goto L_0026F05C;
    case 227u: goto L_0026F068;
    case 228u: goto L_0026F070;
    case 229u: goto L_0026F088;
    case 230u: goto L_0026F0D8;
    case 231u: goto L_0026F104;
    case 232u: goto L_0026F118;
    case 233u: goto L_0026F124;
    case 234u: goto L_0026F130;
    case 235u: goto L_0026F13C;
    case 236u: goto L_0026F144;
    case 237u: goto L_0026F14C;
    case 238u: goto L_0026F180;
    case 239u: goto L_0026F1C8;
    case 240u: goto L_0026F214;
    case 241u: goto L_0026F21C;
    case 242u: goto L_0026F228;
    case 243u: goto L_0026F230;
    case 244u: goto L_0026F244;
    case 245u: goto L_0026F294;
    case 246u: goto L_0026F2B8;
    case 247u: goto L_0026F2C4;
    case 248u: goto L_0026F2CC;
    case 249u: goto L_0026F30C;
    case 250u: goto L_0026F314;
    case 251u: goto L_0026F320;
    case 252u: goto L_0026F328;
    case 253u: goto L_0026F340;
    case 254u: goto L_0026F390;
    case 255u: goto L_0026F3DC;
    case 256u: goto L_0026F3E8;
    case 257u: goto L_0026F3F4;
    case 258u: goto L_0026F3FC;
    case 259u: goto L_0026F404;
    case 260u: goto L_0026F440;
    case 261u: goto L_0026F4E0;
    case 262u: goto L_0026F524;
    case 263u: goto L_0026F568;
    case 264u: goto L_0026F5AC;
    case 265u: goto L_0026F5B4;
    case 266u: goto L_0026F5BC;
    case 267u: goto L_0026F5C4;
    case 268u: goto L_0026F5D4;
    case 269u: goto L_0026F5DC;
    case 270u: goto L_0026F5EC;
    case 271u: goto L_0026F5F4;
    case 272u: goto L_0026F600;
    case 273u: goto L_0026F610;
    case 274u: goto L_0026F61C;
    case 275u: goto L_0026F650;
    case 276u: goto L_0026F6F0;
    case 277u: goto L_0026F734;
    case 278u: goto L_0026F73C;
    case 279u: goto L_0026F744;
    case 280u: goto L_0026F754;
    case 281u: goto L_0026F75C;
    case 282u: goto L_0026F76C;
    case 283u: goto L_0026F774;
    case 284u: goto L_0026F780;
    case 285u: goto L_0026F790;
    case 286u: goto L_0026F79C;
    case 287u: goto L_0026F7D0;
    case 288u: goto L_0026F7F4;
    case 289u: goto L_0026F804;
    case 290u: goto L_0026F814;
    case 291u: goto L_0026F830;
    case 292u: goto L_0026F85C;
    case 293u: goto L_0026F868;
    case 294u: goto L_0026F878;
    case 295u: goto L_0026F8E8;
    case 296u: goto L_0026F8FC;
    case 297u: goto L_0026F960;
    case 298u: goto L_0026F990;
    case 299u: goto L_0026F99C;
    case 300u: goto L_0026F9AC;
    case 301u: goto L_0026FA1C;
    case 302u: goto L_0026FA44;
    case 303u: goto L_0026FA94;
    case 304u: goto L_0026FAA0;
    case 305u: goto L_0026FAAC;
    case 306u: goto L_0026FAE0;
    case 307u: goto L_0026FB0C;
    case 308u: goto L_0026FB18;
    case 309u: goto L_0026FB28;
    case 310u: goto L_0026FB98;
    case 311u: goto L_0026FBAC;
    case 312u: goto L_0026FBC0;
    case 313u: goto L_0026FC10;
    case 314u: goto L_0026FC1C;
    case 315u: goto L_0026FC28;
    case 316u: goto L_0026FC50;
    case 317u: goto L_0026FC80;
    case 318u: goto L_0026FCAC;
    case 319u: goto L_0026FCD4;
    case 320u: goto L_0026FCE8;
    case 321u: goto L_0026FCF4;
    case 322u: goto L_0026FD00;
    case 323u: goto L_0026FD0C;
    case 324u: goto L_0026FD24;
    case 325u: goto L_0026FD30;
    case 326u: goto L_0026FD54;
    case 327u: goto L_0026FD6C;
    case 328u: goto L_0026FD84;
    case 329u: goto L_0026FD90;
    case 330u: goto L_0026FDA0;
    case 331u: goto L_0026FDA8;
    case 332u: goto L_0026FDB8;
    case 333u: goto L_0026FDC4;
    case 334u: goto L_0026FDD0;
    case 335u: goto L_0026FDDC;
    case 336u: goto L_0026FDE8;
    case 337u: goto L_0026FDF0;
    case 338u: goto L_0026FDF8;
    case 339u: goto L_0026FE00;
    case 340u: goto L_0026FE10;
    case 341u: goto L_0026FE1C;
    case 342u: goto L_0026FE28;
    case 343u: goto L_0026FE34;
    case 344u: goto L_0026FE40;
    case 345u: goto L_0026FE48;
    case 346u: goto L_0026FE58;
    case 347u: goto L_0026FE64;
    case 348u: goto L_0026FE70;
    case 349u: goto L_0026FE7C;
    case 350u: goto L_0026FE88;
    case 351u: goto L_0026FEA0;
    case 352u: goto L_0026FEB8;
    case 353u: goto L_0026FEC4;
    case 354u: goto L_0026FED0;
    case 355u: goto L_0026FEDC;
    case 356u: goto L_0026FEE4;
    case 357u: goto L_0026FEEC;
    case 358u: goto L_0026FEF8;
    case 359u: goto L_0026FF00;
    case 360u: goto L_0026FF10;
    case 361u: goto L_0026FF1C;
    case 362u: goto L_0026FF28;
    case 363u: goto L_0026FF34;
    case 364u: goto L_0026FF40;
    case 365u: goto L_0026FF58;
    case 366u: goto L_0026FF70;
    case 367u: goto L_0026FF7C;
    case 368u: goto L_0026FF88;
    case 369u: goto L_0026FF94;
    case 370u: goto L_0026FF9C;
    case 371u: goto L_0026FFA4;
    case 372u: goto L_0026FFB0;
    case 373u: goto L_0026FFB8;
    case 374u: goto L_0026FFC8;
    case 375u: goto L_0026FFD4;
    case 376u: goto L_0026FFE0;
    case 377u: goto L_0026FFEC;
    case 378u: goto L_0026FFF4;
    case 379u: goto L_0026FFFC;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    c.budget -= 1;
L_0026C004:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026C024; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C024u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x0026C024u) [[unlikely]] return; }
L_0026C024:
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026C028:
    st8((c.r[16].w[0] + 885u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 882u), static_cast<std::uint16_t>(0u));
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C048u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026C048u) [[unlikely]] return; }
L_0026C048:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1004u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[16].w[0] + 1192u);  if (t) { goto L_0026C0A0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);  if (t) { goto L_0026C094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0026C0B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.budget -= 1;
L_0026C094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0026C0AC; } }
    set32(c.r[5], c.r[16].w[0] + 1192u);
    c.budget -= 1;
L_0026C0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C0A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 88u, depth + 1u); else { c.pc = 0x002DCED0u; return; } if (c.pc != 0x0026C0A8u) [[unlikely]] return; }
L_0026C0A8:
    st32((c.r[16].w[0] + 1196u), 0u);
    c.budget -= 1;
L_0026C0AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026C0B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026C0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026C0F8; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026C108; } }
L_0026C0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C100u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 18u, depth + 1u); else { c.pc = 0x002C4510u; return; } if (c.pc != 0x0026C100u) [[unlikely]] return; }
L_0026C100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026C4B4; } }
L_0026C108:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 891u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C4B0; } }
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026C494; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026C490; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026C490; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0026C490; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026C490; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_0026C490; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026C35C; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0026C35C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026C1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C4B0; } }
L_0026C1A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0026C324; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0026C304; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[7].d[0]) { set32(c.r[5], c.r[16].w[0] + 32u);  goto L_0026C2B8; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0026C27C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_0026C1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C4B0; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0026C1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C1E4u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026C1E4u) [[unlikely]] return; }
L_0026C1E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);  if (t) { goto L_0026C228; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C4B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.budget -= 1;
L_0026C228:
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C4B0; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 30u);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[5].d[0] = c.r[5].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C27C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C2B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026C2B4:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0026C2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026C2C0u) [[unlikely]] return; }
L_0026C2C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C4B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C304:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C4B0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C324:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0026C354; }
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0026C354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C35C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026C46C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0026C3FC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0026C3C0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026C398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C4B0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026C398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3A0u);  if (depth < kMaxDepth) unit_005B(c, 16u, depth + 1u); else { c.pc = 0x0026C540u; return; } if (c.pc != 0x0026C3A0u) [[unlikely]] return; }
L_0026C3A0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026C3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3C8u);  if (depth < kMaxDepth) unit_005B(c, 16u, depth + 1u); else { c.pc = 0x0026C540u; return; } if (c.pc != 0x0026C3C8u) [[unlikely]] return; }
L_0026C3C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C3E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C3E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026C3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C404u);  if (depth < kMaxDepth) unit_005B(c, 16u, depth + 1u); else { c.pc = 0x0026C540u; return; } if (c.pc != 0x0026C404u) [[unlikely]] return; }
L_0026C404:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026C42C; } }
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0026C42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C434u);  if (depth < kMaxDepth) unit_005B(c, 15u, depth + 1u); else { c.pc = 0x0026C4C0u; return; } if (c.pc != 0x0026C434u) [[unlikely]] return; }
L_0026C434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C4B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C46C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0026C488; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0026C488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C4B0; } }
L_0026C490:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0026C494:
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0026C4B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026C4B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C4C0:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FE0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026C530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B20000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C52C; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026C52C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026C530; } }
L_0026C52C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026C530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C578u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026C578u) [[unlikely]] return; }
L_0026C578:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026C624; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5B0u); set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 19u, depth + 1u); else { c.pc = 0x0026C700u; return; } if (c.pc != 0x0026C5B0u) [[unlikely]] return; }
L_0026C5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026C5C8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
L_0026C5C8:
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 61440ull;  if (t) { goto L_0026C5F8; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5F4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C6E4; } }
L_0026C5F4:
    c.r[1].d[0] = 0ull | 61440ull;
    c.budget -= 1;
L_0026C5F8:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C6E4; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C6E4; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C6E4; } }
L_0026C624:
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C64C; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0026C660; } }
L_0026C64C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C684; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026C660:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0026C688; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C684; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026C684:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026C688:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_0026C6B0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C6AC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C6D8; } }
L_0026C6AC:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0026C6B0:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C6D8; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C6D8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026C6D8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026C6E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C72Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0026C72Cu) [[unlikely]] return; }
L_0026C72C:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C744u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0026C744u) [[unlikely]] return; }
L_0026C744:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C76Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026C76Cu) [[unlikely]] return; }
L_0026C76C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0026C798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026C7A4; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0026C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7A0u); st32((c.r[16].w[0]), c.f[1]);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x0026C7A0u) [[unlikely]] return; }
L_0026C7A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026C7A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026C7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0026C7F4; }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026C804; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026C7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7FCu);  if (depth < kMaxDepth) unit_0071(c, 113u, depth + 1u); else { c.pc = 0x002C5920u; return; } if (c.pc != 0x0026C7FCu) [[unlikely]] return; }
L_0026C7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0026CB30; } }
L_0026C804:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C818; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026C818:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 789u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0026C830; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[17].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 2;
L_0026C830:
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 716u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4000u);
    st16((c.r[17].w[0] + 718u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 888u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0026CAB0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0026CA84; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0026C8A4; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_0026C888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CB2C; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0026C888:
    st8((c.r[17].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C89Cu); st16((c.r[17].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x0026C89Cu) [[unlikely]] return; }
L_0026C89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CB2C; } }
L_0026C8A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026C8C0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
L_0026C8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8C8u);  if (depth < kMaxDepth) unit_005B(c, 30u, depth + 1u); else { c.pc = 0x0026CB40u; return; } if (c.pc != 0x0026C8C8u) [[unlikely]] return; }
L_0026C8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C8E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 888u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
L_0026C8E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C904u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026C904u) [[unlikely]] return; }
L_0026C904:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    set32(c.r[3], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026C9BC; } }
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026C9BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C948u); set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 19u, depth + 1u); else { c.pc = 0x0026C700u; return; } if (c.pc != 0x0026C948u) [[unlikely]] return; }
L_0026C948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026C960; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
L_0026C960:
    c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C97C; } }
    c.r[3].d[0] = 0ull | 61440ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_0026C990; } }
L_0026C97C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_0026C990:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C9AC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
L_0026C9AC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
L_0026C9BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C9E4; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_0026C9F8; } }
L_0026C9E4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CA1C; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026C9F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0026CA20; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CA1C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026CA1C:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026CA20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_0026CA48; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CA44; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CA70; } }
L_0026CA44:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0026CA48:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CA70; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026CA70; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026CA70:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0026CA84:
    st8((c.r[17].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 886u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 789u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_0026CAA8; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
L_0026CAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
L_0026CAB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 886u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0026CB28; }
    st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0026CAFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4000u);  if (t) { goto L_0026CB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026CB18; } }
L_0026CAFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CB18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CB18; } }
    st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026CB18:
    set32(c.r[3], 0u + 4000u);
    c.budget -= 1;
L_0026CB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026CB2C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0026CB28:
    st16((c.r[17].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0026CB2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026CB30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026CB40:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CBAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CBA8; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CBA8; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026CBAC; } }
L_0026CBA8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026CBAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026CBF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 616u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_0026CBF4; } }
    st16((c.r[16].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 616u), 0u);
    c.budget -= 2;
L_0026CBF0:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0026CBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026CBFCu) [[unlikely]] return; }
L_0026CBFC:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[3] = ld32((c.r[16].w[0] + 8028u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CC5C; } }
    st32((c.r[16].w[0] + 36u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0026CC44; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026CC48; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0026CC44:
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026CC48:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026DCE0u; return; } if (c.pc != 0x0026CC54u) [[unlikely]] return; }
L_0026CC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026CCC0; } }
L_0026CC5C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CCC0; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CC9C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CCBC; } }
L_0026CC9C:
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_0026CCBC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026CCC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026CCF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CD38; } }
L_0026CCF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CD0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CD38; } }
L_0026CD0C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CD24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CD38; } }
L_0026CD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD2Cu);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026CD2Cu) [[unlikely]] return; }
L_0026CD2C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026CD38u) [[unlikely]] return; }
L_0026CD38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CD98; } }
L_0026CD70:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0026CD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CD98; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026CD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD94u);  if (depth < kMaxDepth) unit_005B(c, 104u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x0026CD94u) [[unlikely]] return; }
L_0026CD94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026CD98:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CE0C; } }
L_0026CDD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CE0C; } }
L_0026CDE8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0026CE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CE0C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0026CE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE0Cu);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026CE0Cu) [[unlikely]] return; }
L_0026CE0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CE20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CEB0; } }
L_0026CE40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CEB0; } }
L_0026CE58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CEB0; } }
L_0026CE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CE8C; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0026CEA8; } }
L_0026CE8C:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CEA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CEB0; } }
L_0026CEA4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0026CEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEB0u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026CEB0u) [[unlikely]] return; }
L_0026CEB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CEC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CF48; } }
L_0026CEE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_0026CF40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CF24; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CF24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026CF24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CF48; } }
L_0026CF24:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CF3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CF48; } }
L_0026CF3C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0026CF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF48u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026CF48u) [[unlikely]] return; }
L_0026CF48:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CFE8; } }
L_0026CF80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CFE8; } }
L_0026CF98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CFE8; } }
L_0026CFAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CFE8; } }
L_0026CFC4:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026CFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFDCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026CFDCu) [[unlikely]] return; }
L_0026CFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CFE8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026CFE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D03C; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D034; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D03C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0026D050; } }
L_0026D03C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 836u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D04Cu); st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D04Cu) [[unlikely]] return; }
L_0026D04C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026D050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026D088; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026D090; } }
L_0026D088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D0D4; } }
L_0026D090:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D0D4; } }
L_0026D0A8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[5].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D0D4; } }
L_0026D0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0C8u);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026D0C8u) [[unlikely]] return; }
L_0026D0C8:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D0D4u) [[unlikely]] return; }
L_0026D0D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D134; } }
L_0026D110:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_0026D12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D134; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_0026D12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D134u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D134u) [[unlikely]] return; }
L_0026D134:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026D160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D1BC; } }
L_0026D160:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D180; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D188; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0026D1C0; } }
L_0026D188:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D1A8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_0026D1B4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D1BC; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0026D1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1BCu);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D1BCu) [[unlikely]] return; }
L_0026D1BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026D1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D228; } }
L_0026D1F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D214; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D228; } }
L_0026D214:
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 836u)));
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D228u); st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D228u) [[unlikely]] return; }
L_0026D228:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D298; } }
L_0026D25C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D298; } }
L_0026D274:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 708u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D28Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D28Cu) [[unlikely]] return; }
L_0026D28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D298; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D298:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D2CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D308; } }
L_0026D2CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D308; } }
L_0026D2E4:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D2FCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D2FCu) [[unlikely]] return; }
L_0026D2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D308; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D308:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D340u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0026D340u) [[unlikely]] return; }
L_0026D340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D458; } }
L_0026D350:
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_0026D444; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_0026D42C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[18], c.r[2].w[0] + 8192u);
    c.budget -= 3;
L_0026D380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D388u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0026D388u) [[unlikely]] return; }
L_0026D388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[19], c.r[29].w[0] + 84u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3B0u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0026D3B0u) [[unlikely]] return; }
L_0026D3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3D4u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0026D3D4u) [[unlikely]] return; }
L_0026D3D4:
    st32((c.r[19].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026D414; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D40Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0026D40Cu) [[unlikely]] return; }
L_0026D40C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0026D414:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D380u | kUnwind; return; } goto L_0026D380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 11u);  if (t) { goto L_0026D438; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0026D42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D434u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0026D434u) [[unlikely]] return; }
L_0026D434:
    set32(c.r[5], 0u + 11u);
    c.budget -= 1;
L_0026D438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D440u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x0026D440u) [[unlikely]] return; }
L_0026D440:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_0026D444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D44Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D44Cu) [[unlikely]] return; }
L_0026D44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D454u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0026D454u) [[unlikely]] return; }
L_0026D454:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026D458:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026D480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026D4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D51C; } }
L_0026D4A0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D51C; } }
L_0026D4B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D4CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D51C; } }
L_0026D4CC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 14u);  if (t) { goto L_0026D4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D51C; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 1;
L_0026D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4FCu);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D4FCu) [[unlikely]] return; }
L_0026D4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D51C; } }
L_0026D50C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D518u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026D518u) [[unlikely]] return; }
L_0026D518:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026D51C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D590; } }
L_0026D550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0026D588; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D57C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D584; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0026D594; } }
L_0026D584:
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_0026D588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D590u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D590u) [[unlikely]] return; }
L_0026D590:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026D594:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026D5CC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026D5D4; } }
L_0026D5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D6A4; } }
L_0026D5D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D6A4; } }
L_0026D5EC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D6A4; } }
L_0026D600:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 17u);  if (t) { goto L_0026D628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D6A4; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 1;
L_0026D628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D630u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D630u) [[unlikely]] return; }
L_0026D630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D6A4; } }
L_0026D640:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14112u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] >> 20);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[2].w[0] << 10);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D670u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0026D670u) [[unlikely]] return; }
L_0026D670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D688; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[16].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 4;
L_0026D688:
    st16((c.r[16].w[0] + 850u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 7;
L_0026D6A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8425u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D724; } }
L_0026D6E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D724; } }
L_0026D6F8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 706u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D718u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D718u) [[unlikely]] return; }
L_0026D718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D724; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026D724:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026D754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D7A0; } }
L_0026D754:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D76C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D7A0; } }
L_0026D76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D774u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0026D774u) [[unlikely]] return; }
L_0026D774:
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D780u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026D780u) [[unlikely]] return; }
L_0026D780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 22u);  if (t) { goto L_0026D794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D7A0; } }
    set32(c.r[5], 0u + 22u);
    c.budget -= 1;
L_0026D794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D79Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0026D79Cu) [[unlikely]] return; }
L_0026D79C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026D7A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026D7B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_0026D7FC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 21344u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] != 0) c.r[5].d[0] = 0ull;  if (t) { goto L_0026D834; } }
L_0026D7FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 21488u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    if (c.r[1].d[0] != 0) c.r[5].d[0] = 0ull;
    c.budget -= 14;
L_0026D834:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D84C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D874; } }
L_0026D84C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026D868; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026D868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D874; } }
L_0026D868:
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 728u), 0u);
    c.budget -= 3;
L_0026D874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D880:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_0026D8CC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21344u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;  if (t) { goto L_0026D904; } }
L_0026D8CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 21488u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    if (c.r[1].d[0] != 0) c.r[7].d[0] = 0ull;
    c.budget -= 14;
L_0026D904:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026D91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D950; } }
L_0026D91C:
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 811u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026D940; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026D940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D950; } }
L_0026D940:
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 732u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0026D950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0026D990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D988u);  if (depth < kMaxDepth) unit_0086(c, 201u, depth + 1u); else { c.pc = 0x0031B120u; return; } if (c.pc != 0x0026D988u) [[unlikely]] return; }
L_0026D988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0026DAE4; } }
L_0026D990:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026D9C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 784u));
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026D9C0; } }
    st8((c.r[17].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026D9C0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026D9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9CCu);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0026D9CCu) [[unlikely]] return; }
L_0026D9CC:
    st32((c.r[17].w[0] + 1308u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 31229u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9F4u); st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0026D9F4u) [[unlikely]] return; }
L_0026D9F4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0026DA00u) [[unlikely]] return; }
L_0026DA00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026DA48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0026DA2C; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DA30; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0026DA2C:
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026DA30:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA3Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026DCE0u; return; } if (c.pc != 0x0026DA3Cu) [[unlikely]] return; }
L_0026DA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DAE0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA50u);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x0026DA50u) [[unlikely]] return; }
L_0026DA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DAE0; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0026DA9C; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA90u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0026DA90u) [[unlikely]] return; }
L_0026DA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (t) { goto L_0026DAB8; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0026DA9C:
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAB4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0026DAB4u) [[unlikely]] return; }
L_0026DAB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 1;
L_0026DAB8:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026DAD8; } }
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAD4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x0026DAD4u) [[unlikely]] return; }
L_0026DAD4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026DAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAE0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026DAE0u) [[unlikely]] return; }
L_0026DAE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026DAE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0026DB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB20u);  if (depth < kMaxDepth) unit_0086(c, 207u, depth + 1u); else { c.pc = 0x0031B260u; return; } if (c.pc != 0x0026DB20u) [[unlikely]] return; }
L_0026DB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0026DB74; } }
L_0026DB28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026DB5C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 784u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DB58; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0026DB58:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026DB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB64u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0026DB64u) [[unlikely]] return; }
L_0026DB64:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0026DB70u) [[unlikely]] return; }
L_0026DB70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026DB74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DB80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 762u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0026DBB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBA8u);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x0026DBA8u) [[unlikely]] return; }
L_0026DBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0026DCC8; } }
L_0026DBB0:
    st32((c.r[17].w[0] + 1308u), 0u);
    st32((c.r[17].w[0] + 1304u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 31229u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBD4u); st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0026DBD4u) [[unlikely]] return; }
L_0026DBD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026DC2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DC28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0026DC10; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DC14; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0026DC10:
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0026DC14:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026DCE0u; return; } if (c.pc != 0x0026DC20u) [[unlikely]] return; }
L_0026DC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DCC4; } }
L_0026DC28:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026DC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC34u);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x0026DC34u) [[unlikely]] return; }
L_0026DC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DCC4; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0026DC80; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC74u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0026DC74u) [[unlikely]] return; }
L_0026DC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (t) { goto L_0026DC9C; } }
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0026DC80:
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC98u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x0026DC98u) [[unlikely]] return; }
L_0026DC98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 1;
L_0026DC9C:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0026DCBC; } }
    set32(c.r[5], 0u + 18u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x0026DCB8u) [[unlikely]] return; }
L_0026DCB8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0026DCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026DCC4u) [[unlikely]] return; }
L_0026DCC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026DCC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DCE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_0026DD88; } }
    set32(c.r[2], 0u - 31232u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 784u));
    c.r[16].d[0] = c.r[17].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DD38; } }
    st8((c.r[18].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0026DD38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 13472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD58u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DD58u) [[unlikely]] return; }
L_0026DD58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DD94; } }
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD80u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x0026DD80u) [[unlikely]] return; }
L_0026DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1308u), 0u);  if (t) { goto L_0026DD98; } }
L_0026DD88:
    set32(c.r[2], 0u - 31231u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026DD94:
    st32((c.r[18].w[0] + 1308u), 0u);
    c.budget -= 1;
L_0026DD98:
    st32((c.r[18].w[0] + 1304u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDB0u); st16((c.r[18].w[0] + 850u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0026DDB0u) [[unlikely]] return; }
L_0026DDB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8433u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0026DDD8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDCCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026DDCCu) [[unlikely]] return; }
L_0026DDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0026DDE4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0026DDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDE0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0026DDE0u) [[unlikely]] return; }
L_0026DDE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0026DDE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026DE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st8((c.r[4].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 741u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DE50u) [[unlikely]] return; }
L_0026DE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE58u); set32(c.r[17], c.r[16].w[0] + 4580u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026DE58u) [[unlikely]] return; }
L_0026DE58:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE6Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026DE6Cu) [[unlikely]] return; }
L_0026DE6C:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE78u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026DE78u) [[unlikely]] return; }
L_0026DE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE80u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026DE80u) [[unlikely]] return; }
L_0026DE80:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE8Cu); set32(c.r[5], c.r[16].w[0] + 5168u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026DE8Cu) [[unlikely]] return; }
L_0026DE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE94u); set32(c.r[17], c.r[16].w[0] + 4616u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026DE94u) [[unlikely]] return; }
L_0026DE94:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEA0u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026DEA0u) [[unlikely]] return; }
L_0026DEA0:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEACu); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026DEACu) [[unlikely]] return; }
L_0026DEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEB4u); c.r[4].d[0] = ld16((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026DEB4u) [[unlikely]] return; }
L_0026DEB4:
    set32(c.r[5], c.r[16].w[0] + 5152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEC0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026DEC0u) [[unlikely]] return; }
L_0026DEC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026DEE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[16], c.r[19].w[0] + 4052u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8024u));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF5Cu); c.f[21] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x0026DF5Cu) [[unlikely]] return; }
L_0026DF5C:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF70u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x0026DF70u) [[unlikely]] return; }
L_0026DF70:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    c.f[2] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0026E038; } }
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E038; } }
    set32(c.r[3], 0u + 2u);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026DFD8; } }
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026DFFC; } }
    c.f[5] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026DFFC; } }
L_0026DFD8:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026DFFC; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026DFFC:
    c.f[3] = ld32((c.r[19].w[0] + 8016u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_0026E158; } }
L_0026E038:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E0C8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E074; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026E074:
    c.f[2] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[4], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[2] = fp::sub(c.f[4], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0]), c.f[1]);  if (t) { goto L_0026E158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_0026E158; } }
L_0026E0C8:
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 96u);  if (t) { goto L_0026E15C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 8028u));
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E108; } }
    c.f[5] = 0u;
    st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026E108:
    c.f[2] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[4], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_0026E158; } }
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_0026E158:
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0026E15C:
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5088u), c.f[3]);
    st32((c.r[19].w[0] + 5092u), c.f[2]);
    st32((c.r[19].w[0] + 5096u), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st32((c.r[19].w[0] + 5100u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5104u), c.f[3]);
    st32((c.r[19].w[0] + 5108u), c.f[2]);
    st32((c.r[19].w[0] + 5112u), c.f[1]);
    st32((c.r[19].w[0] + 5116u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026E1D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[16], c.r[19].w[0] + 4052u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 8024u));
    c.f[0] = ld32((c.r[4].w[0] + 8020u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E24Cu); c.f[21] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x0026E24Cu) [[unlikely]] return; }
L_0026E24C:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E260u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x0026E260u) [[unlikely]] return; }
L_0026E260:
    c.f[1] = ld32((c.r[19].w[0] + 8024u));
    c.f[2] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0026E294; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E294; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0]), c.f[20]);
    st8((c.r[19].w[0] + 8048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026E294:
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E2C4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E2C4; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0]), c.f[3]);
    st8((c.r[19].w[0] + 8049u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026E2C4:
    c.f[1] = ld32((c.r[19].w[0] + 8016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[2] = c.r[3].w[0];
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E324; } }
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 1;
L_0026E324:
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 96u);  if (t) { goto L_0026E340; } }
    st32((c.r[18].w[0]), c.f[3]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_0026E340:
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5088u), c.f[3]);
    st32((c.r[19].w[0] + 5092u), c.f[2]);
    st32((c.r[19].w[0] + 5096u), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st32((c.r[19].w[0] + 5100u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 5104u), c.f[3]);
    st32((c.r[19].w[0] + 5108u), c.f[2]);
    st32((c.r[19].w[0] + 5112u), c.f[1]);
    st32((c.r[19].w[0] + 5116u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026E3B0:
    c.f[0] = ld32((c.r[4].w[0] + 2352u));
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[29].w[0]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2356u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2360u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2544u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    st32((c.r[4].w[0] + 5088u), c.f[3]);
    st32((c.r[4].w[0] + 5092u), c.f[2]);
    st32((c.r[4].w[0] + 5096u), c.f[1]);
    st32((c.r[4].w[0] + 5100u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 5104u), c.f[3]);
    st32((c.r[4].w[0] + 5108u), c.f[2]);
    st32((c.r[4].w[0] + 5112u), c.f[1]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5116u), c.f[0]);  c.pc = t; return; }
L_0026E440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E464u); mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026E464u) [[unlikely]] return; }
L_0026E464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E46Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x0026E46Cu) [[unlikely]] return; }
L_0026E46C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E47Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026E47Cu) [[unlikely]] return; }
L_0026E47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E484u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026E484u) [[unlikely]] return; }
L_0026E484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E48Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0026E48Cu) [[unlikely]] return; }
L_0026E48C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E49Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x0026E49Cu) [[unlikely]] return; }
L_0026E49C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4A8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0026E4A8u) [[unlikely]] return; }
L_0026E4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E4B0u) [[unlikely]] return; }
L_0026E4B0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026E4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026E4F8u) [[unlikely]] return; }
L_0026E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E500u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026E500u) [[unlikely]] return; }
L_0026E500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E508u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0026E508u) [[unlikely]] return; }
L_0026E508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E518u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x0026E518u) [[unlikely]] return; }
L_0026E518:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E524u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026E524u) [[unlikely]] return; }
L_0026E524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E52Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E52Cu) [[unlikely]] return; }
L_0026E52C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E584u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x0026E584u) [[unlikely]] return; }
L_0026E584:
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E590u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026E590u) [[unlikely]] return; }
L_0026E590:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5A8u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026E5A8u) [[unlikely]] return; }
L_0026E5A8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E604u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x0026E604u) [[unlikely]] return; }
L_0026E604:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E610u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026E610u) [[unlikely]] return; }
L_0026E610:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E628u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026E628u) [[unlikely]] return; }
L_0026E628:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E694u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026E694u) [[unlikely]] return; }
L_0026E694:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6A0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0026E6A0u) [[unlikely]] return; }
L_0026E6A0:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0026E6F0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E6EC; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E6EC; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E700; } }
L_0026E6EC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0026E6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6F8u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E6F8u) [[unlikely]] return; }
L_0026E6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026E76C; } }
L_0026E700:
    fpu_div(c, 0u, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E72Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E72Cu) [[unlikely]] return; }
L_0026E72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026E76C; } }
L_0026E734:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E768u); st32((c.r[16].w[0] + 8u), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E768u) [[unlikely]] return; }
L_0026E768:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026E76C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_0026E7C0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E7C8; } }
L_0026E7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026E85C; } }
L_0026E7C8:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::add(c.f[12], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28368u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[6], 0u + 8u);
    fpu_div(c, 0u, c.f[0], c.f[13]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[13]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[12]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
L_0026E814:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E814u | kUnwind; return; } goto L_0026E814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E83Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 19u, depth + 1u); else { c.pc = 0x0013C900u; return; } if (c.pc != 0x0026E83Cu) [[unlikely]] return; }
L_0026E83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E844u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026E844u) [[unlikely]] return; }
L_0026E844:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E850u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0026E850u) [[unlikely]] return; }
L_0026E850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E858u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E858u) [[unlikely]] return; }
L_0026E858:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026E85C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026E870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[4].w[0] + 80u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E898u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026E898u) [[unlikely]] return; }
L_0026E898:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8A4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0026E8A4u) [[unlikely]] return; }
L_0026E8A4:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0026E8F4; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E8F0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026E8F0; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E904; } }
L_0026E8F0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0026E8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8FCu);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E8FCu) [[unlikely]] return; }
L_0026E8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026E970; } }
L_0026E904:
    fpu_div(c, 0u, c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026E938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E930u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E930u) [[unlikely]] return; }
L_0026E930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026E970; } }
L_0026E938:
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E96Cu); st32((c.r[16].w[0] + 8u), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026E96Cu) [[unlikely]] return; }
L_0026E96C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026E970:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9B4u); mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026E9B4u) [[unlikely]] return; }
L_0026E9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9BCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026E9BCu) [[unlikely]] return; }
L_0026E9BC:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA0Cu); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EA0Cu) [[unlikely]] return; }
L_0026EA0C:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026EAC0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA54u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EA54u) [[unlikely]] return; }
L_0026EA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA5Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EA5Cu) [[unlikely]] return; }
L_0026EA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA64u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EA64u) [[unlikely]] return; }
L_0026EA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA6Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EA6Cu) [[unlikely]] return; }
L_0026EA6C:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 21;
L_0026EAC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026EAE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB04u); mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026EB04u) [[unlikely]] return; }
L_0026EB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB0Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026EB0Cu) [[unlikely]] return; }
L_0026EB0C:
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB5Cu); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EB5Cu) [[unlikely]] return; }
L_0026EB5C:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026EC10; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBA4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EBA4u) [[unlikely]] return; }
L_0026EBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EBACu) [[unlikely]] return; }
L_0026EBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBB4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EBB4u) [[unlikely]] return; }
L_0026EBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBBCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EBBCu) [[unlikely]] return; }
L_0026EBBC:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 21;
L_0026EC10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026EC30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC74u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026EC74u) [[unlikely]] return; }
L_0026EC74:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC80u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026EC80u) [[unlikely]] return; }
L_0026EC80:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026ECB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0026ECD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0026ECB4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026ECD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0026ECD4; } }
L_0026ECD4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECE4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026ECE4u) [[unlikely]] return; }
L_0026ECE4:
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026ED30; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
L_0026ED30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED38u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026ED38u) [[unlikely]] return; }
L_0026ED38:
    set32(c.r[5], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED48u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026ED48u) [[unlikely]] return; }
L_0026ED48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026ED50u) [[unlikely]] return; }
L_0026ED50:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED5Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026ED5Cu) [[unlikely]] return; }
L_0026ED5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED64u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026ED64u) [[unlikely]] return; }
L_0026ED64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026ED80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDC4u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026EDC4u) [[unlikely]] return; }
L_0026EDC4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDD0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026EDD0u) [[unlikely]] return; }
L_0026EDD0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026EE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0026EE24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0026EE04:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0026EE24; } }
L_0026EE24:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE34u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EE34u) [[unlikely]] return; }
L_0026EE34:
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026EE80; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
L_0026EE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE88u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026EE88u) [[unlikely]] return; }
L_0026EE88:
    set32(c.r[5], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE98u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026EE98u) [[unlikely]] return; }
L_0026EE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026EEA0u) [[unlikely]] return; }
L_0026EEA0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEACu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026EEACu) [[unlikely]] return; }
L_0026EEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026EEB4u) [[unlikely]] return; }
L_0026EEB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026EED0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026EF18u) [[unlikely]] return; }
L_0026EF18:
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    set32(c.r[30], c.r[29].w[0] + 180u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    set32(c.r[17], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 36u));
    set32(c.r[18], c.r[29].w[0] + 196u);
    set32(c.r[19], c.r[29].w[0] + 200u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF64u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EF64u) [[unlikely]] return; }
L_0026EF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF6Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026EF6Cu) [[unlikely]] return; }
L_0026EF6C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF78u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026EF78u) [[unlikely]] return; }
L_0026EF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF80u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026EF80u) [[unlikely]] return; }
L_0026EF80:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF94u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026EF94u) [[unlikely]] return; }
L_0026EF94:
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026EFEC; } }
    set32(c.r[5], c.r[29].w[0] + 208u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFE4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026EFE4u) [[unlikely]] return; }
L_0026EFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_0026F000; } }
L_0026EFEC:
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 5;
L_0026F000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F008u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026F008u) [[unlikely]] return; }
L_0026F008:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F014u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F014u) [[unlikely]] return; }
L_0026F014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F01Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026F01Cu) [[unlikely]] return; }
L_0026F01C:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F054u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F054u) [[unlikely]] return; }
L_0026F054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F05Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F05Cu) [[unlikely]] return; }
L_0026F05C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F068u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F068u) [[unlikely]] return; }
L_0026F068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F070u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026F070u) [[unlikely]] return; }
L_0026F070:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[17], c.r[29].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F088u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F088u) [[unlikely]] return; }
L_0026F088:
    set32(c.r[3], c.r[29].w[0] + 228u);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026F0E0; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0D8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026F0D8u) [[unlikely]] return; }
L_0026F0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F0F0; } }
L_0026F0E0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026F0F0:
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F104u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026F104u) [[unlikely]] return; }
L_0026F104:
    c.f[0] = c.r[18].w[0];
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F118u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026F118u) [[unlikely]] return; }
L_0026F118:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F124u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026F124u) [[unlikely]] return; }
L_0026F124:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F130u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F130u) [[unlikely]] return; }
L_0026F130:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F13Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F13Cu) [[unlikely]] return; }
L_0026F13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F144u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026F144u) [[unlikely]] return; }
L_0026F144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F14Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026F14Cu) [[unlikely]] return; }
L_0026F14C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0026F180:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026F1C8u) [[unlikely]] return; }
L_0026F1C8:
    c.f[0] = ld32((c.r[22].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 164u);
    set32(c.r[18], c.r[29].w[0] + 176u);
    set32(c.r[30], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 36u));
    set32(c.r[23], c.r[29].w[0] + 184u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 40u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F214u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F214u) [[unlikely]] return; }
L_0026F214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F21Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F21Cu) [[unlikely]] return; }
L_0026F21C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F228u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F228u) [[unlikely]] return; }
L_0026F228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F230u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026F230u) [[unlikely]] return; }
L_0026F230:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F244u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F244u) [[unlikely]] return; }
L_0026F244:
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026F29C; } }
    set32(c.r[5], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F294u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026F294u) [[unlikely]] return; }
L_0026F294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_0026F2B0; } }
L_0026F29C:
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 5;
L_0026F2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2B8u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026F2B8u) [[unlikely]] return; }
L_0026F2B8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2C4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F2C4u) [[unlikely]] return; }
L_0026F2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2CCu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026F2CCu) [[unlikely]] return; }
L_0026F2CC:
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[2], c.r[29].w[0] + 164u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 24u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F30Cu); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F30Cu) [[unlikely]] return; }
L_0026F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F314u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F314u) [[unlikely]] return; }
L_0026F314:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F320u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F320u) [[unlikely]] return; }
L_0026F320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F328u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026F328u) [[unlikely]] return; }
L_0026F328:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[18], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F340u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F340u) [[unlikely]] return; }
L_0026F340:
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026F398; } }
    set32(c.r[4], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F390u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0026F390u) [[unlikely]] return; }
L_0026F390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0026F3AC; } }
L_0026F398:
    st32((c.r[18].w[0]), 0u);
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0026F3AC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;  if (t) { goto L_0026F3C0; } }
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0026F3C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_0026F3D4; } }
    mmi::paddub(c.r[21], c.r[19], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
L_0026F3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3DCu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0026F3DCu) [[unlikely]] return; }
L_0026F3DC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3E8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F3E8u) [[unlikely]] return; }
L_0026F3E8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3F4u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026F3F4u) [[unlikely]] return; }
L_0026F3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3FCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026F3FCu) [[unlikely]] return; }
L_0026F3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F404u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026F404u) [[unlikely]] return; }
L_0026F404:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0026F440:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[16], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    set32(c.r[19], c.r[29].w[0] + 148u);
    set32(c.r[20], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2000u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2004u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2008u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4E0u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F4E0u) [[unlikely]] return; }
L_0026F4E0:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 1920u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1924u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1928u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F524u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F524u) [[unlikely]] return; }
L_0026F524:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 1936u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1940u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1944u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F568u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F568u) [[unlikely]] return; }
L_0026F568:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 1952u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 1956u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1960u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5ACu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F5ACu) [[unlikely]] return; }
L_0026F5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5B4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F5B4u) [[unlikely]] return; }
L_0026F5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5BCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F5BCu) [[unlikely]] return; }
L_0026F5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5C4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F5C4u) [[unlikely]] return; }
L_0026F5C4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5D4u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F5D4u) [[unlikely]] return; }
L_0026F5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5DCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F5DCu) [[unlikely]] return; }
L_0026F5DC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5ECu); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F5ECu) [[unlikely]] return; }
L_0026F5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5F4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F5F4u) [[unlikely]] return; }
L_0026F5F4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F600u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F600u) [[unlikely]] return; }
L_0026F600:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F610u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F610u) [[unlikely]] return; }
L_0026F610:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F61Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026F61Cu) [[unlikely]] return; }
L_0026F61C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0026F650:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[16], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    set32(c.r[19], c.r[29].w[0] + 148u);
    set32(c.r[20], c.r[29].w[0] + 152u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1920u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1924u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1928u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6F0u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F6F0u) [[unlikely]] return; }
L_0026F6F0:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[2].w[0] + 2000u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 2004u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 2008u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F734u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0026F734u) [[unlikely]] return; }
L_0026F734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F73Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F73Cu) [[unlikely]] return; }
L_0026F73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F744u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F744u) [[unlikely]] return; }
L_0026F744:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F754u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F754u) [[unlikely]] return; }
L_0026F754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F75Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F75Cu) [[unlikely]] return; }
L_0026F75C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F76Cu); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F76Cu) [[unlikely]] return; }
L_0026F76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F774u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026F774u) [[unlikely]] return; }
L_0026F774:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F780u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F780u) [[unlikely]] return; }
L_0026F780:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F790u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F790u) [[unlikely]] return; }
L_0026F790:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F79Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026F79Cu) [[unlikely]] return; }
L_0026F79C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0026F7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[4].w[0] + 4u));
    c.f[13] = ld32((c.r[4].w[0]));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7F4u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026F7F4u) [[unlikely]] return; }
L_0026F7F4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F804u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 283u, depth + 1u); else { c.pc = 0x0013B3D0u; return; } if (c.pc != 0x0026F804u) [[unlikely]] return; }
L_0026F804:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F814u); c.f[12] = ld32((c.r[17].w[0] + 24u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0026F814u) [[unlikely]] return; }
L_0026F814:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F85Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026F85Cu) [[unlikely]] return; }
L_0026F85C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F868u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026F868u) [[unlikely]] return; }
L_0026F868:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F878u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F878u) [[unlikely]] return; }
L_0026F878:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0026F8A4; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026F8A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026F8C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F8E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0026F8C0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026F8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026F8E0; } }
L_0026F8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8E8u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026F8E8u) [[unlikely]] return; }
L_0026F8E8:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8FCu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026F8FCu) [[unlikely]] return; }
L_0026F8FC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0026F940; } }
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 5;
L_0026F940:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026F960:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F990u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026F990u) [[unlikely]] return; }
L_0026F990:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F99Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026F99Cu) [[unlikely]] return; }
L_0026F99C:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9ACu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026F9ACu) [[unlikely]] return; }
L_0026F9AC:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0026F9D8; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026F9D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026F9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FA14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0026F9F4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026FA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026FA14; } }
L_0026FA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA1Cu);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026FA1Cu) [[unlikely]] return; }
L_0026FA1C:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_0026FA34; } }
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 2;
L_0026FA34:
    set32(c.r[6], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA44u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026FA44u) [[unlikely]] return; }
L_0026FA44:
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026FA8C; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026FA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA94u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026FA94u) [[unlikely]] return; }
L_0026FA94:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAA0u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026FAA0u) [[unlikely]] return; }
L_0026FAA0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAACu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026FAACu) [[unlikely]] return; }
L_0026FAAC:
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026FAE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.f[21] = c.f[12];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB0Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026FB0Cu) [[unlikely]] return; }
L_0026FB0C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB18u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0026FB18u) [[unlikely]] return; }
L_0026FB18:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB28u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x0026FB28u) [[unlikely]] return; }
L_0026FB28:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0026FB54; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026FB54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026FB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FB90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_0026FB70:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026FB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_0026FB90; } }
L_0026FB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB98u);  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026FB98u) [[unlikely]] return; }
L_0026FB98:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBACu); c.f[12] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026FBACu) [[unlikely]] return; }
L_0026FBAC:
    set32(c.r[6], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0026FBC0u) [[unlikely]] return; }
L_0026FBC0:
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026FC08; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026FC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC10u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026FC10u) [[unlikely]] return; }
L_0026FC10:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC1Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0026FC1Cu) [[unlikely]] return; }
L_0026FC1C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC28u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0026FC28u) [[unlikely]] return; }
L_0026FC28:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026FC50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14224u);
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 4544u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0026C000u < 16384u) { entry = entries_005B[(t - 0x0026C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026FC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCACu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0026FCACu) [[unlikely]] return; }
L_0026FCAC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCD4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FCD4u) [[unlikely]] return; }
L_0026FCD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCE8u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0026FCE8u) [[unlikely]] return; }
L_0026FCE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FCF4u) [[unlikely]] return; }
L_0026FCF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FD00u) [[unlikely]] return; }
L_0026FD00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FD0Cu) [[unlikely]] return; }
L_0026FD0C:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD24u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FD24u) [[unlikely]] return; }
L_0026FD24:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD30u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FD30u) [[unlikely]] return; }
L_0026FD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));  if (t) { goto L_0026FD94; } }
L_0026FD38:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD54u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FD54u) [[unlikely]] return; }
L_0026FD54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD6Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FD6Cu) [[unlikely]] return; }
L_0026FD6C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD84u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FD84u) [[unlikely]] return; }
L_0026FD84:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD90u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FD90u) [[unlikely]] return; }
L_0026FD90:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.budget -= 1;
L_0026FD94:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDA0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FDA0u) [[unlikely]] return; }
L_0026FDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDA8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FDA8u) [[unlikely]] return; }
L_0026FDA8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDB8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FDB8u) [[unlikely]] return; }
L_0026FDB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FDC4u) [[unlikely]] return; }
L_0026FDC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FDD0u) [[unlikely]] return; }
L_0026FDD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FDDCu) [[unlikely]] return; }
L_0026FDDC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FDE8u) [[unlikely]] return; }
L_0026FDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026FDF0u) [[unlikely]] return; }
L_0026FDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDF8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7916u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FDF8u) [[unlikely]] return; }
L_0026FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE00u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FE00u) [[unlikely]] return; }
L_0026FE00:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE10u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FE10u) [[unlikely]] return; }
L_0026FE10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FE1Cu) [[unlikely]] return; }
L_0026FE1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FE28u) [[unlikely]] return; }
L_0026FE28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FE34u) [[unlikely]] return; }
L_0026FE34:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FE40u) [[unlikely]] return; }
L_0026FE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE48u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0026FE48u) [[unlikely]] return; }
L_0026FE48:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE58u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FE58u) [[unlikely]] return; }
L_0026FE58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FE64u) [[unlikely]] return; }
L_0026FE64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FE70u) [[unlikely]] return; }
L_0026FE70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FE7Cu) [[unlikely]] return; }
L_0026FE7C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE88u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FE88u) [[unlikely]] return; }
L_0026FE88:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEA0u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x0026FEA0u) [[unlikely]] return; }
L_0026FEA0:
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEB8u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FEB8u) [[unlikely]] return; }
L_0026FEB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FEC4u) [[unlikely]] return; }
L_0026FEC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FED0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FED0u) [[unlikely]] return; }
L_0026FED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FEDCu) [[unlikely]] return; }
L_0026FEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEE4u); set32(c.r[4], ld32((c.r[19].w[0] + 7888u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FEE4u) [[unlikely]] return; }
L_0026FEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEECu); set32(c.r[4], ld32((c.r[19].w[0] + 7892u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FEECu) [[unlikely]] return; }
L_0026FEEC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEF8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FEF8u) [[unlikely]] return; }
L_0026FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0026FF00u) [[unlikely]] return; }
L_0026FF00:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF10u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FF10u) [[unlikely]] return; }
L_0026FF10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FF1Cu) [[unlikely]] return; }
L_0026FF1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FF28u) [[unlikely]] return; }
L_0026FF28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FF34u) [[unlikely]] return; }
L_0026FF34:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FF40u) [[unlikely]] return; }
L_0026FF40:
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[8], 0u + 2u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF58u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x0026FF58u) [[unlikely]] return; }
L_0026FF58:
    c.f[12] = ld32((c.r[17].w[0] + 160u));
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF70u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FF70u) [[unlikely]] return; }
L_0026FF70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FF7Cu) [[unlikely]] return; }
L_0026FF7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FF88u) [[unlikely]] return; }
L_0026FF88:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF94u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FF94u) [[unlikely]] return; }
L_0026FF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF9Cu); set32(c.r[4], ld32((c.r[19].w[0] + 7896u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FF9Cu) [[unlikely]] return; }
L_0026FF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFA4u); set32(c.r[4], ld32((c.r[19].w[0] + 7900u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FFA4u) [[unlikely]] return; }
L_0026FFA4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFB0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0026FFB0u) [[unlikely]] return; }
L_0026FFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0026FFB8u) [[unlikely]] return; }
L_0026FFB8:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFC8u); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0026FFC8u) [[unlikely]] return; }
L_0026FFC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0026FFD4u) [[unlikely]] return; }
L_0026FFD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FFE0u) [[unlikely]] return; }
L_0026FFE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FFECu) [[unlikely]] return; }
L_0026FFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFF4u); set32(c.r[4], ld32((c.r[19].w[0] + 7908u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0026FFF4u) [[unlikely]] return; }
L_0026FFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFFCu); set32(c.r[4], ld32((c.r[19].w[0] + 7904u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0026FFFCu) [[unlikely]] return; }
L_0026FFFC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
