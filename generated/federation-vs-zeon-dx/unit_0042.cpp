#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0042[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203,
    0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0,
    0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
};

void unit_0042(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00208000;
    case 2u: goto L_0020800C;
    case 3u: goto L_00208018;
    case 4u: goto L_0020807C;
    case 5u: goto L_002080A8;
    case 6u: goto L_002080B4;
    case 7u: goto L_00208154;
    case 8u: goto L_002081A8;
    case 9u: goto L_002081FC;
    case 10u: goto L_002082BC;
    case 11u: goto L_002082C8;
    case 12u: goto L_00208384;
    case 13u: goto L_00208390;
    case 14u: goto L_00208434;
    case 15u: goto L_00208438;
    case 16u: goto L_00208450;
    case 17u: goto L_00208470;
    case 18u: goto L_002084C4;
    case 19u: goto L_0020850C;
    case 20u: goto L_00208544;
    case 21u: goto L_0020859C;
    case 22u: goto L_002085F4;
    case 23u: goto L_00208630;
    case 24u: goto L_00208660;
    case 25u: goto L_00208690;
    case 26u: goto L_002086A0;
    case 27u: goto L_002086C8;
    case 28u: goto L_002086F8;
    case 29u: goto L_00208720;
    case 30u: goto L_00208788;
    case 31u: goto L_0020879C;
    case 32u: goto L_002087D0;
    case 33u: goto L_00208820;
    case 34u: goto L_00208878;
    case 35u: goto L_002088B8;
    case 36u: goto L_0020891C;
    case 37u: goto L_00208928;
    case 38u: goto L_00208958;
    case 39u: goto L_002089FC;
    case 40u: goto L_00208A44;
    case 41u: goto L_00208A8C;
    case 42u: goto L_00208AD4;
    case 43u: goto L_00208B1C;
    case 44u: goto L_00208B64;
    case 45u: goto L_00208BB0;
    case 46u: goto L_00208BFC;
    case 47u: goto L_00208C48;
    case 48u: goto L_00208C94;
    case 49u: goto L_00208CA0;
    case 50u: goto L_00208CA8;
    case 51u: goto L_00208CB0;
    case 52u: goto L_00208CB8;
    case 53u: goto L_00208D1C;
    case 54u: goto L_00208D88;
    case 55u: goto L_00208E80;
    case 56u: goto L_00208EA0;
    case 57u: goto L_00208F48;
    case 58u: goto L_00208FB8;
    case 59u: goto L_00208FCC;
    case 60u: goto L_00208FD8;
    case 61u: goto L_00208FE0;
    case 62u: goto L_00208FF0;
    case 63u: goto L_00209098;
    case 64u: goto L_002090A8;
    case 65u: goto L_002090B4;
    case 66u: goto L_002090BC;
    case 67u: goto L_002090D0;
    case 68u: goto L_002090DC;
    case 69u: goto L_0020925C;
    case 70u: goto L_00209268;
    case 71u: goto L_00209274;
    case 72u: goto L_002092B0;
    case 73u: goto L_00209358;
    case 74u: goto L_002093C8;
    case 75u: goto L_002093DC;
    case 76u: goto L_002093E8;
    case 77u: goto L_002093F0;
    case 78u: goto L_00209400;
    case 79u: goto L_00209498;
    case 80u: goto L_002094A8;
    case 81u: goto L_002094B4;
    case 82u: goto L_002094BC;
    case 83u: goto L_002094D0;
    case 84u: goto L_002094DC;
    case 85u: goto L_0020966C;
    case 86u: goto L_00209678;
    case 87u: goto L_00209684;
    case 88u: goto L_002096C0;
    case 89u: goto L_00209768;
    case 90u: goto L_002097D8;
    case 91u: goto L_002097EC;
    case 92u: goto L_002097F8;
    case 93u: goto L_00209800;
    case 94u: goto L_00209810;
    case 95u: goto L_002098C4;
    case 96u: goto L_002098D4;
    case 97u: goto L_002098E0;
    case 98u: goto L_002098E8;
    case 99u: goto L_002098FC;
    case 100u: goto L_0020990C;
    case 101u: goto L_00209A8C;
    case 102u: goto L_00209A98;
    case 103u: goto L_00209AA4;
    case 104u: goto L_00209AE0;
    case 105u: goto L_00209B88;
    case 106u: goto L_00209BF8;
    case 107u: goto L_00209C0C;
    case 108u: goto L_00209C18;
    case 109u: goto L_00209C20;
    case 110u: goto L_00209C30;
    case 111u: goto L_00209CD0;
    case 112u: goto L_00209CE0;
    case 113u: goto L_00209CEC;
    case 114u: goto L_00209CF4;
    case 115u: goto L_00209D08;
    case 116u: goto L_00209D18;
    case 117u: goto L_00209EA8;
    case 118u: goto L_00209EB4;
    case 119u: goto L_00209EC0;
    case 120u: goto L_00209F00;
    case 121u: goto L_00209FA8;
    case 122u: goto L_0020A018;
    case 123u: goto L_0020A02C;
    case 124u: goto L_0020A038;
    case 125u: goto L_0020A040;
    case 126u: goto L_0020A050;
    case 127u: goto L_0020A0F4;
    case 128u: goto L_0020A104;
    case 129u: goto L_0020A110;
    case 130u: goto L_0020A118;
    case 131u: goto L_0020A12C;
    case 132u: goto L_0020A13C;
    case 133u: goto L_0020A2CC;
    case 134u: goto L_0020A2D8;
    case 135u: goto L_0020A2E4;
    case 136u: goto L_0020A320;
    case 137u: goto L_0020A3C8;
    case 138u: goto L_0020A438;
    case 139u: goto L_0020A44C;
    case 140u: goto L_0020A458;
    case 141u: goto L_0020A460;
    case 142u: goto L_0020A470;
    case 143u: goto L_0020A504;
    case 144u: goto L_0020A514;
    case 145u: goto L_0020A520;
    case 146u: goto L_0020A528;
    case 147u: goto L_0020A53C;
    case 148u: goto L_0020A548;
    case 149u: goto L_0020A6D8;
    case 150u: goto L_0020A6E4;
    case 151u: goto L_0020A6F0;
    case 152u: goto L_0020A730;
    case 153u: goto L_0020A7D8;
    case 154u: goto L_0020A848;
    case 155u: goto L_0020A85C;
    case 156u: goto L_0020A868;
    case 157u: goto L_0020A870;
    case 158u: goto L_0020A880;
    case 159u: goto L_0020A928;
    case 160u: goto L_0020A938;
    case 161u: goto L_0020A944;
    case 162u: goto L_0020A94C;
    case 163u: goto L_0020A960;
    case 164u: goto L_0020A970;
    case 165u: goto L_0020AB00;
    case 166u: goto L_0020AB0C;
    case 167u: goto L_0020AB18;
    case 168u: goto L_0020AB90;
    case 169u: goto L_0020AC38;
    case 170u: goto L_0020ACA8;
    case 171u: goto L_0020ACBC;
    case 172u: goto L_0020ACC8;
    case 173u: goto L_0020ACD0;
    case 174u: goto L_0020ACE0;
    case 175u: goto L_0020AD88;
    case 176u: goto L_0020AD98;
    case 177u: goto L_0020ADA4;
    case 178u: goto L_0020ADAC;
    case 179u: goto L_0020ADC0;
    case 180u: goto L_0020ADCC;
    case 181u: goto L_0020AF5C;
    case 182u: goto L_0020AF68;
    case 183u: goto L_0020AF74;
    case 184u: goto L_0020AFF0;
    case 185u: goto L_0020B098;
    case 186u: goto L_0020B108;
    case 187u: goto L_0020B11C;
    case 188u: goto L_0020B128;
    case 189u: goto L_0020B130;
    case 190u: goto L_0020B140;
    case 191u: goto L_0020B1E8;
    case 192u: goto L_0020B1F8;
    case 193u: goto L_0020B204;
    case 194u: goto L_0020B20C;
    case 195u: goto L_0020B220;
    case 196u: goto L_0020B230;
    case 197u: goto L_0020B3C0;
    case 198u: goto L_0020B3CC;
    case 199u: goto L_0020B3D8;
    case 200u: goto L_0020B450;
    case 201u: goto L_0020B4F8;
    case 202u: goto L_0020B568;
    case 203u: goto L_0020B57C;
    case 204u: goto L_0020B588;
    case 205u: goto L_0020B590;
    case 206u: goto L_0020B5A0;
    case 207u: goto L_0020B648;
    case 208u: goto L_0020B658;
    case 209u: goto L_0020B664;
    case 210u: goto L_0020B66C;
    case 211u: goto L_0020B680;
    case 212u: goto L_0020B68C;
    case 213u: goto L_0020B81C;
    case 214u: goto L_0020B828;
    case 215u: goto L_0020B834;
    case 216u: goto L_0020B8B0;
    case 217u: goto L_0020B954;
    case 218u: goto L_0020B9C4;
    case 219u: goto L_0020B9D4;
    case 220u: goto L_0020B9E0;
    case 221u: goto L_0020B9E8;
    case 222u: goto L_0020B9FC;
    case 223u: goto L_0020BA08;
    case 224u: goto L_0020BB34;
    case 225u: goto L_0020BB40;
    case 226u: goto L_0020BB4C;
    case 227u: goto L_0020BBC0;
    case 228u: goto L_0020BC64;
    case 229u: goto L_0020BCD4;
    case 230u: goto L_0020BCE4;
    case 231u: goto L_0020BCF0;
    case 232u: goto L_0020BCF8;
    case 233u: goto L_0020BD0C;
    case 234u: goto L_0020BD18;
    case 235u: goto L_0020BE44;
    case 236u: goto L_0020BE50;
    case 237u: goto L_0020BE5C;
    case 238u: goto L_0020BED0;
    case 239u: goto L_0020BF68;
    case 240u: goto L_0020BF88;
    case 241u: goto L_0020BFDC;
    case 242u: goto L_0020BFF4;
    default: bad_entry(c, 0x00208000u); return;
    }
L_00208000:
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020800Cu); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020800Cu) [[unlikely]] return; }
L_0020800C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208018u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00208018u) [[unlikely]] return; }
L_00208018:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00208058; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208060; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00208058:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00208060:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00208434; } }
L_0020807C:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020811C; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080A8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002080A8u) [[unlikely]] return; }
L_002080A8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002080B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002080B4u) [[unlikely]] return; }
L_002080B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002080F4; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002080FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002080F4:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_002080FC:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00208434; } }
L_0020811C:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00208134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00208434; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00208134:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0020814C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_00208434; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0020814C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00208434; } }
L_00208154:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00208178; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00208434; } }
L_00208178:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00208434; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208434; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00208434; } }
L_002081A8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002081CC; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00208434; } }
L_002081CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208434; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00208434; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00208434; } }
L_002081FC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0020836C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002082A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00208228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208434; } }
L_00208228:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208250; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00208434; } }
L_00208250:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020826C; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_00208434; } }
L_0020826C:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00208284; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00208434; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00208284:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0020829C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_00208434; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0020829C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00208434; } }
L_002082A4:
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082BCu); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002082BCu) [[unlikely]] return; }
L_002082BC:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002082C8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002082C8u) [[unlikely]] return; }
L_002082C8:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_00208300; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208308; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_00208300:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00208308:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020833C; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00208434; } }
L_0020833C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00208434; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208434; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_00208434; } }
L_0020836C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208384u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00208384u) [[unlikely]] return; }
L_00208384:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208390u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00208390u) [[unlikely]] return; }
L_00208390:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002083C8; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002083D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002083C8:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_002083D0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00208408; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00208434; } }
L_00208408:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208434; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00208434; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_00208434:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00208438:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00208450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 12u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208470u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 200u, depth + 1u); else { c.pc = 0x001F61F0u; return; } if (c.pc != 0x00208470u) [[unlikely]] return; }
L_00208470:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_002084B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8390u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 8288u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_002084B8:
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
L_002084C4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 120u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002084C4u | kUnwind; return; } goto L_002084C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_00208714; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 24944u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00208000u < 16384u) { entry = entries_0042[(t - 0x00208000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020850C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 8240u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 8176u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00208710; } }
L_00208544:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1768u), c.f[0]);  if (t) { goto L_00208710; } }
L_0020859C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1768u), c.f[0]);  if (t) { goto L_00208710; } }
L_002085F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 8160u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 8048u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00208710; } }
L_00208630:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208660u); st8((c.r[3].w[0] + 652u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00208660u) [[unlikely]] return; }
L_00208660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0020867C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00208680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_0020867C:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_00208680:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208690u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x00208690u) [[unlikely]] return; }
L_00208690:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 332u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00208710; } }
L_002086A0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x002086C8u) [[unlikely]] return; }
L_002086C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_002086E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_002086E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_002086E4:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002086E8:
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002086F8u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_0045(c, 186u, depth + 1u); else { c.pc = 0x002173D0u; return; } if (c.pc != 0x002086F8u) [[unlikely]] return; }
L_002086F8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 332u), c.f[0]);
    st8((c.r[16].w[0] + 339u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00208710:
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_00208714:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208720u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x00208720u) [[unlikely]] return; }
L_00208720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0020877C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 20;
L_0020877C:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_00208788:
    set32(c.r[2], c.r[18].w[0] + 12u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020879Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x0020879Cu) [[unlikely]] return; }
L_0020879C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00208788u | kUnwind; return; } goto L_00208788; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002087D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7738u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_00208880; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00208810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002089A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208820u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0043(c, 11u, depth + 1u); else { c.pc = 0x0020C1F0u; return; } if (c.pc != 0x00208820u) [[unlikely]] return; }
L_00208820:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208878u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x00208878u) [[unlikely]] return; }
L_00208878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_002089AC; } }
L_00208880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 338u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208960; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002088A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002088A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002088B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002088B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x002088B8u) [[unlikely]] return; }
L_002088B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 339u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002088EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_002089A8; } }
L_002088EC:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020891Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020891Cu) [[unlikely]] return; }
L_0020891C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208928u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00208928u) [[unlikely]] return; }
L_00208928:
    c.f[1] = ld32((c.r[16].w[0] + 328u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002089A8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208958u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00208958u) [[unlikely]] return; }
L_00208958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00208E60; } }
L_00208960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002089A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1760u));
    c.f[0] = ld32((c.r[3].w[0] + 592u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[3].w[0] + 596u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[3].w[0] + 600u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 15;
L_002089A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_002089AC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00208CB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002089FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002089F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002089F0; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 25u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_002089FC; } }
L_002089F0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002089F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002089FCu);  if (depth < kMaxDepth) unit_0042(c, 56u, depth + 1u); else { c.pc = 0x00208EA0u; return; } if (c.pc != 0x002089FCu) [[unlikely]] return; }
L_002089FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208A44; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208A3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208A38; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 97u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208A44; } }
L_00208A38:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A44u);  if (depth < kMaxDepth) unit_0042(c, 72u, depth + 1u); else { c.pc = 0x002092B0u; return; } if (c.pc != 0x00208A44u) [[unlikely]] return; }
L_00208A44:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208A8C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208A84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208A80; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208A8C; } }
L_00208A80:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208A8Cu);  if (depth < kMaxDepth) unit_0042(c, 88u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x00208A8Cu) [[unlikely]] return; }
L_00208A8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208AD4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208ACC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208AC8; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 1537u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208AD4; } }
L_00208AC8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208AD4u);  if (depth < kMaxDepth) unit_0042(c, 104u, depth + 1u); else { c.pc = 0x00209AE0u; return; } if (c.pc != 0x00208AD4u) [[unlikely]] return; }
L_00208AD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208B1C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208B14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208B10; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 6145u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208B1C; } }
L_00208B10:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B1Cu);  if (depth < kMaxDepth) unit_0042(c, 120u, depth + 1u); else { c.pc = 0x00209F00u; return; } if (c.pc != 0x00208B1Cu) [[unlikely]] return; }
L_00208B1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208B64; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208B58; } }
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 24577u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208B64; } }
L_00208B58:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208B64u);  if (depth < kMaxDepth) unit_0042(c, 136u, depth + 1u); else { c.pc = 0x0020A320u; return; } if (c.pc != 0x00208B64u) [[unlikely]] return; }
L_00208B64:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208BB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208BA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208BA4; } }
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208BB0; } }
L_00208BA4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BB0u);  if (depth < kMaxDepth) unit_0042(c, 152u, depth + 1u); else { c.pc = 0x0020A730u; return; } if (c.pc != 0x00208BB0u) [[unlikely]] return; }
L_00208BB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208BFC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208BF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208BF0; } }
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208BFC; } }
L_00208BF0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208BFCu);  if (depth < kMaxDepth) unit_0042(c, 168u, depth + 1u); else { c.pc = 0x0020AB90u; return; } if (c.pc != 0x00208BFCu) [[unlikely]] return; }
L_00208BFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208C48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208C40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208C3C; } }
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208C48; } }
L_00208C3C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C48u);  if (depth < kMaxDepth) unit_0042(c, 184u, depth + 1u); else { c.pc = 0x0020AFF0u; return; } if (c.pc != 0x00208C48u) [[unlikely]] return; }
L_00208C48:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208C98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00208C8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00208C88; } }
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_00208C94; } }
L_00208C88:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208C94u);  if (depth < kMaxDepth) unit_0042(c, 200u, depth + 1u); else { c.pc = 0x0020B450u; return; } if (c.pc != 0x00208C94u) [[unlikely]] return; }
L_00208C94:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00208C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CA0u);  if (depth < kMaxDepth) unit_0042(c, 216u, depth + 1u); else { c.pc = 0x0020B8B0u; return; } if (c.pc != 0x00208CA0u) [[unlikely]] return; }
L_00208CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0042(c, 227u, depth + 1u); else { c.pc = 0x0020BBC0u; return; } if (c.pc != 0x00208CA8u) [[unlikely]] return; }
L_00208CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CB0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0042(c, 238u, depth + 1u); else { c.pc = 0x0020BED0u; return; } if (c.pc != 0x00208CB0u) [[unlikely]] return; }
L_00208CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208CB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0043(c, 6u, depth + 1u); else { c.pc = 0x0020C060u; return; } if (c.pc != 0x00208CB8u) [[unlikely]] return; }
L_00208CB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00208E5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208E5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00208E5C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00208DC4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00208D34; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);  goto L_00208D10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00208E5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.budget -= 1;
L_00208D10:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00208D1Cu) [[unlikely]] return; }
L_00208D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00208E5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208E5C; } }
L_00208D34:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00208D64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00208D78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00208D64:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00208D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208D88u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00208D88u) [[unlikely]] return; }
L_00208D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00208E5C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00208E5C; } }
L_00208DC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208E18; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00208E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00208E5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00208E00:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00208E5C; } }
L_00208E18:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_00208E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00208E5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_00208E48:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00208E5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00208E60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00208E80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198460u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 29u, depth); }
L_00208EA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8008u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020927C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_0020923C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020917C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00208EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020929C; } }
L_00208EF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209174; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_00208F1C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00208F20; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00208F1C:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00208F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 18432u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 3u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208F48u); c.r[7].d[0] = 0ull | 47104ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00208F48u) [[unlikely]] return; }
L_00208F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00209298; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 340u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00208F98; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_00208FB0; } }
L_00208F98:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00208FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FB8u); set32(c.r[4], c.r[18].w[0] + 2176u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00208FB8u) [[unlikely]] return; }
L_00208FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FCCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00208FCCu) [[unlikely]] return; }
L_00208FCC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FD8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00208FD8u) [[unlikely]] return; }
L_00208FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FE0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00208FE0u) [[unlikely]] return; }
L_00208FE0:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00208FF0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00208FF0u) [[unlikely]] return; }
L_00208FF0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 4584u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 128u));
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020903C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209038; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_0020905C; } }
L_00209038:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020903C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020905C; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020905C; } }
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_0020905C:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4584u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0020908C; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00209090; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0020908C:
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 1;
L_00209090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209098u); set32(c.r[4], c.r[18].w[0] + 2240u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00209098u) [[unlikely]] return; }
L_00209098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002090A8u) [[unlikely]] return; }
L_002090A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090B4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002090B4u) [[unlikely]] return; }
L_002090B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002090BCu) [[unlikely]] return; }
L_002090BC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002090D0u) [[unlikely]] return; }
L_002090D0:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002090DCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002090DCu) [[unlikely]] return; }
L_002090DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4600u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00209118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_00209138; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00209118:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209138; } }
    c.r[3].d[0] = 0ull | 56434ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209138; } }
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_00209138:
    set32(c.r[4], ld32((c.r[18].w[0] + 4600u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_00209168; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00209298; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00209168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00209298; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00209298; } }
L_0020917C:
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4584u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_002091AC; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002091BC; } }
L_002091AC:
    st32((c.r[18].w[0] + 4584u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), 0u);  if (t) { goto L_002091D0; } }
L_002091BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4584u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4584u));
    st32((c.r[18].w[0] + 4584u), c.r[3].w[0]);
    c.budget -= 5;
L_002091D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4600u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002091FC; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020920C; } }
L_002091FC:
    st32((c.r[18].w[0] + 4600u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), 0u);  if (t) { goto L_00209220; } }
L_0020920C:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4600u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4600u));
    st32((c.r[18].w[0] + 4600u), c.r[3].w[0]);
    c.budget -= 5;
L_00209220:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209298; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00209298; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0020923C:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 41u);  if (t) { goto L_00209260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020925Cu); set32(c.r[5], ld32((c.r[16].w[0] + 340u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020925Cu) [[unlikely]] return; }
L_0020925C:
    set32(c.r[5], 0u + 41u);
    c.budget -= 1;
L_00209260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209268u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00209268u) [[unlikely]] return; }
L_00209268:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209274u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00209274u) [[unlikely]] return; }
L_00209274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209298; } }
L_0020927C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 286u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00209298; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209294:
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00209298:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020929C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002092B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8009u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020968C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_0020964C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020958C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00209300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002096AC; } }
L_00209300:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209584; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0020932C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00209330; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0020932C:
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00209330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 10240u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 5u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209358u); c.r[7].d[0] = 0ull | 64512ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00209358u) [[unlikely]] return; }
L_00209358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002096A8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002093A8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_002093C0; } }
L_002093A8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_002093C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093C8u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002093C8u) [[unlikely]] return; }
L_002093C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002093DCu) [[unlikely]] return; }
L_002093DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093E8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002093E8u) [[unlikely]] return; }
L_002093E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002093F0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002093F0u) [[unlikely]] return; }
L_002093F0:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209400u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00209400u) [[unlikely]] return; }
L_00209400:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 4620u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 132u));
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020944C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209448; } }
    set32(c.r[2], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_0020945C; } }
L_00209448:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020944C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020945C; } }
    st32((c.r[16].w[0] + 132u), 0u);
    c.budget -= 1;
L_0020945C:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4620u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_0020948C; } }
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_00209490; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_0020948C:
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 1;
L_00209490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209498u); set32(c.r[4], c.r[18].w[0] + 2304u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00209498u) [[unlikely]] return; }
L_00209498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002094A8u) [[unlikely]] return; }
L_002094A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094B4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002094B4u) [[unlikely]] return; }
L_002094B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002094BCu) [[unlikely]] return; }
L_002094BC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002094D0u) [[unlikely]] return; }
L_002094D0:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002094DCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002094DCu) [[unlikely]] return; }
L_002094DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4612u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00209528; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209524; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_00209548; } }
L_00209524:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00209528:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209548; } }
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209548; } }
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_00209548:
    set32(c.r[4], ld32((c.r[18].w[0] + 4612u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00209578; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_002096A8; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00209578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_002096A8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002096A8; } }
L_0020958C:
    set32(c.r[6], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4620u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_002095BC; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002095CC; } }
L_002095BC:
    st32((c.r[18].w[0] + 4620u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 228u), 0u);  if (t) { goto L_002095E0; } }
L_002095CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4620u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4620u));
    st32((c.r[18].w[0] + 4620u), c.r[3].w[0]);
    c.budget -= 5;
L_002095E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4612u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020960C; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020961C; } }
L_0020960C:
    st32((c.r[18].w[0] + 4612u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), 0u);  if (t) { goto L_00209630; } }
L_0020961C:
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4612u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4612u));
    st32((c.r[18].w[0] + 4612u), c.r[3].w[0]);
    c.budget -= 5;
L_00209630:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002096A8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002096A8; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0020964C:
    st8((c.r[16].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 42u);  if (t) { goto L_00209670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020966Cu); set32(c.r[5], ld32((c.r[16].w[0] + 344u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020966Cu) [[unlikely]] return; }
L_0020966C:
    set32(c.r[5], 0u + 42u);
    c.budget -= 1;
L_00209670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209678u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00209678u) [[unlikely]] return; }
L_00209678:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209684u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00209684u) [[unlikely]] return; }
L_00209684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002096A8; } }
L_0020968C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 287u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002096A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 273u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002096A8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002096A4:
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002096A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002096AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002096C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8010u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_00209AAC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00209A6C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002099AC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00209710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00209ACC; } }
L_00209710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002099A4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0020973C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00209740; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0020973C:
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00209740:
    set32(c.r[5], 0u + 14336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 7u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[6].d[0] = 0ull | 51200ull;
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209768u); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00209768u) [[unlikely]] return; }
L_00209768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00209AC8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002097B8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_002097D0; } }
L_002097B8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_002097D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002097D8u); set32(c.r[4], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002097D8u) [[unlikely]] return; }
L_002097D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002097ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002097ECu) [[unlikely]] return; }
L_002097EC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002097F8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002097F8u) [[unlikely]] return; }
L_002097F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209800u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00209800u) [[unlikely]] return; }
L_00209800:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209810u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00209810u) [[unlikely]] return; }
L_00209810:
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4632u)));
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_00209868; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209864; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_00209888; } }
L_00209864:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00209868:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209888; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209888; } }
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_00209888:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4632u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_002098B8; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_002098BC; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_002098B8:
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 1;
L_002098BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098C4u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002098C4u) [[unlikely]] return; }
L_002098C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098D4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002098D4u) [[unlikely]] return; }
L_002098D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098E0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002098E0u) [[unlikely]] return; }
L_002098E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002098E8u) [[unlikely]] return; }
L_002098E8:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002098FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002098FCu) [[unlikely]] return; }
L_002098FC:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020990Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020990Cu) [[unlikely]] return; }
L_0020990C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4648u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00209958; } }
    c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209954; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00209968; } }
L_00209954:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00209958:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209968; } }
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_00209968:
    set32(c.r[4], ld32((c.r[18].w[0] + 4648u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_00209998; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_00209AC8; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00209998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_00209AC8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002099A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00209AC8; } }
L_002099AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4632u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_002099DC; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002099EC; } }
L_002099DC:
    st32((c.r[18].w[0] + 4632u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 232u), 0u);  if (t) { goto L_00209A00; } }
L_002099EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4632u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4632u));
    st32((c.r[18].w[0] + 4632u), c.r[3].w[0]);
    c.budget -= 5;
L_00209A00:
    set32(c.r[6], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4648u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209A2C; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209A3C; } }
L_00209A2C:
    st32((c.r[18].w[0] + 4648u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), 0u);  if (t) { goto L_00209A50; } }
L_00209A3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4648u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4648u));
    st32((c.r[18].w[0] + 4648u), c.r[3].w[0]);
    c.budget -= 5;
L_00209A50:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209AC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00209AC8; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00209A6C:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 44u);  if (t) { goto L_00209A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A8Cu); set32(c.r[5], ld32((c.r[16].w[0] + 348u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00209A8Cu) [[unlikely]] return; }
L_00209A8C:
    set32(c.r[5], 0u + 44u);
    c.budget -= 1;
L_00209A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209A98u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00209A98u) [[unlikely]] return; }
L_00209A98:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209AA4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00209AA4u) [[unlikely]] return; }
L_00209AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209AC8; } }
L_00209AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00209AC8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209AC4:
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00209AC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00209ACC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00209AE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8011u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_00209EC8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_00209E88; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00209DC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00209B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00209EE8; } }
L_00209B30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209DC0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_00209B5C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00209B60; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00209B5C:
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00209B60:
    set32(c.r[5], 0u + 22528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 9u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[6].d[0] = 0ull | 33792ull;
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209B88u); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00209B88u) [[unlikely]] return; }
L_00209B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00209EE4; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209BD8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_00209BF0; } }
L_00209BD8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_00209BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209BF8u); set32(c.r[4], c.r[18].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00209BF8u) [[unlikely]] return; }
L_00209BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209C0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00209C0Cu) [[unlikely]] return; }
L_00209C0C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209C18u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00209C18u) [[unlikely]] return; }
L_00209C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209C20u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00209C20u) [[unlikely]] return; }
L_00209C20:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209C30u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00209C30u) [[unlikely]] return; }
L_00209C30:
    set32(c.r[3], ld32((c.r[18].w[0] + 4668u)));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_00209C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_00209C94; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00209C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00209C94; } }
    c.r[2].d[0] = 0ull | 56434ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209C94; } }
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_00209C94:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4668u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_00209CC4; } }
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_00209CC8; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_00209CC4:
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 1;
L_00209CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209CD0u); set32(c.r[4], c.r[18].w[0] + 2560u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00209CD0u) [[unlikely]] return; }
L_00209CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209CE0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00209CE0u) [[unlikely]] return; }
L_00209CE0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209CECu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00209CECu) [[unlikely]] return; }
L_00209CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209CF4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00209CF4u) [[unlikely]] return; }
L_00209CF4:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D08u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00209D08u) [[unlikely]] return; }
L_00209D08:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209D18u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00209D18u) [[unlikely]] return; }
L_00209D18:
    set32(c.r[3], ld32((c.r[18].w[0] + 4660u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 92u));
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_00209D64; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209D60; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00209D84; } }
L_00209D60:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00209D64:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209D84; } }
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209D84; } }
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_00209D84:
    set32(c.r[4], ld32((c.r[18].w[0] + 4660u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00209DB4; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_00209EE4; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_00209DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_00209EE4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00209EE4; } }
L_00209DC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4668u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00209DF8; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209E08; } }
L_00209DF8:
    st32((c.r[18].w[0] + 4668u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 236u), 0u);  if (t) { goto L_00209E1C; } }
L_00209E08:
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4668u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4668u));
    st32((c.r[18].w[0] + 4668u), c.r[3].w[0]);
    c.budget -= 5;
L_00209E1C:
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4660u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00209E48; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209E58; } }
L_00209E48:
    st32((c.r[18].w[0] + 4660u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), 0u);  if (t) { goto L_00209E6C; } }
L_00209E58:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4660u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4660u));
    st32((c.r[18].w[0] + 4660u), c.r[3].w[0]);
    c.budget -= 5;
L_00209E6C:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209EE4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00209EE4; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_00209E88:
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 45u);  if (t) { goto L_00209EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209EA8u); set32(c.r[5], ld32((c.r[16].w[0] + 352u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x00209EA8u) [[unlikely]] return; }
L_00209EA8:
    set32(c.r[5], 0u + 45u);
    c.budget -= 1;
L_00209EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209EB4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00209EB4u) [[unlikely]] return; }
L_00209EB4:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209EC0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x00209EC0u) [[unlikely]] return; }
L_00209EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00209EE4; } }
L_00209EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 289u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00209EE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00209EE4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00209EE0:
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00209EE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00209EE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00209F00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8012u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020A2EC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_0020A2AC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020A1EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00209F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020A30C; } }
L_00209F50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020A1E4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_00209F7C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00209F80; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00209F7C:
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00209F80:
    set32(c.r[5], 0u + 31744u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 11u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[6].d[0] = 0ull | 43008ull;
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00209FA8u); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x00209FA8u) [[unlikely]] return; }
L_00209FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020A308; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 356u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00209FF8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020A010; } }
L_00209FF8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020A010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A018u); set32(c.r[4], c.r[18].w[0] + 2752u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A018u) [[unlikely]] return; }
L_0020A018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A02Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A02Cu) [[unlikely]] return; }
L_0020A02C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A038u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A038u) [[unlikely]] return; }
L_0020A038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A040u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A040u) [[unlikely]] return; }
L_0020A040:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A050u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A050u) [[unlikely]] return; }
L_0020A050:
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4692u)));
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020A0A8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A0A4; } }
    set32(c.r[2], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_0020A0B8; } }
L_0020A0A4:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020A0A8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A0B8; } }
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 1;
L_0020A0B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4692u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_0020A0E8; } }
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_0020A0EC; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_0020A0E8:
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 1;
L_0020A0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A0F4u); set32(c.r[4], c.r[18].w[0] + 2688u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A0F4u) [[unlikely]] return; }
L_0020A0F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A104u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A104u) [[unlikely]] return; }
L_0020A104:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A110u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A110u) [[unlikely]] return; }
L_0020A110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A118u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A118u) [[unlikely]] return; }
L_0020A118:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A12Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020A12Cu) [[unlikely]] return; }
L_0020A12C:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A13Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A13Cu) [[unlikely]] return; }
L_0020A13C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4684u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 96u));
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020A188; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A184; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0020A1A8; } }
L_0020A184:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020A188:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A1A8; } }
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A1A8; } }
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_0020A1A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4684u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_0020A1D8; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0020A308; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_0020A1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0020A308; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020A1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020A308; } }
L_0020A1EC:
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4692u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020A21C; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A22C; } }
L_0020A21C:
    st32((c.r[18].w[0] + 4692u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 240u), 0u);  if (t) { goto L_0020A240; } }
L_0020A22C:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4692u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4692u));
    st32((c.r[18].w[0] + 4692u), c.r[3].w[0]);
    c.budget -= 5;
L_0020A240:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4684u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A26C; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A27C; } }
L_0020A26C:
    st32((c.r[18].w[0] + 4684u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), 0u);  if (t) { goto L_0020A290; } }
L_0020A27C:
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4684u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4684u));
    st32((c.r[18].w[0] + 4684u), c.r[3].w[0]);
    c.budget -= 5;
L_0020A290:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A308; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020A308; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0020A2AC:
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 46u);  if (t) { goto L_0020A2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A2CCu); set32(c.r[5], ld32((c.r[16].w[0] + 356u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020A2CCu) [[unlikely]] return; }
L_0020A2CC:
    set32(c.r[5], 0u + 46u);
    c.budget -= 1;
L_0020A2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A2D8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x0020A2D8u) [[unlikely]] return; }
L_0020A2D8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A2E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020A2E4u) [[unlikely]] return; }
L_0020A2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A308; } }
L_0020A2EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 290u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020A304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020A308; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020A304:
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020A308:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020A30C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020A320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8013u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020A6F8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_0020A6B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020A5F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020A718; } }
L_0020A370:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020A5F0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0020A39C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020A3A0; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0020A39C:
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020A3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1024u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 13u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A3C8u); c.r[7].d[0] = 0ull | 55296ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020A3C8u) [[unlikely]] return; }
L_0020A3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020A714; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 360u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A418; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020A430; } }
L_0020A418:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020A430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A438u); set32(c.r[4], c.r[18].w[0] + 2880u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A438u) [[unlikely]] return; }
L_0020A438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A44Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A44Cu) [[unlikely]] return; }
L_0020A44C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A458u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A458u) [[unlikely]] return; }
L_0020A458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A460u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A460u) [[unlikely]] return; }
L_0020A460:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A470u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A470u) [[unlikely]] return; }
L_0020A470:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 4716u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 148u));
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_0020A4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 148u), 0u);  if (t) { goto L_0020A4C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020A4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A4C8; } }
    c.r[2].d[0] = 0ull | 56434ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A4C8; } }
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_0020A4C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4716u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_0020A4F8; } }
    set32(c.r[2], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_0020A4FC; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_0020A4F8:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 1;
L_0020A4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A504u); set32(c.r[4], c.r[18].w[0] + 2816u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A504u) [[unlikely]] return; }
L_0020A504:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A514u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A514u) [[unlikely]] return; }
L_0020A514:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A520u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A520u) [[unlikely]] return; }
L_0020A520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A528u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A528u) [[unlikely]] return; }
L_0020A528:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A53Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020A53Cu) [[unlikely]] return; }
L_0020A53C:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A548u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A548u) [[unlikely]] return; }
L_0020A548:
    set32(c.r[3], ld32((c.r[18].w[0] + 4708u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 100u));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020A594; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A590; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_0020A5B4; } }
L_0020A590:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020A594:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A5B4; } }
    c.r[3].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A5B4; } }
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_0020A5B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4708u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_0020A5E4; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_0020A714; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_0020A5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_0020A714; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020A5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020A714; } }
L_0020A5F8:
    set32(c.r[6], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4716u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020A628; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A638; } }
L_0020A628:
    st32((c.r[18].w[0] + 4716u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), 0u);  if (t) { goto L_0020A64C; } }
L_0020A638:
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4716u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4716u));
    st32((c.r[18].w[0] + 4716u), c.r[3].w[0]);
    c.budget -= 5;
L_0020A64C:
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4708u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A678; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A688; } }
L_0020A678:
    st32((c.r[18].w[0] + 4708u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), 0u);  if (t) { goto L_0020A69C; } }
L_0020A688:
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4708u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4708u));
    st32((c.r[18].w[0] + 4708u), c.r[3].w[0]);
    c.budget -= 5;
L_0020A69C:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A714; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020A714; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_0020A6B8:
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 291u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_0020A6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A6D8u); set32(c.r[5], ld32((c.r[16].w[0] + 360u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020A6D8u) [[unlikely]] return; }
L_0020A6D8:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0020A6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A6E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x0020A6E4u) [[unlikely]] return; }
L_0020A6E4:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A6F0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020A6F0u) [[unlikely]] return; }
L_0020A6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020A714; } }
L_0020A6F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 291u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020A710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020A714; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020A710:
    st8((c.r[16].w[0] + 291u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020A714:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020A718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020A730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8014u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020AB54; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020AAD4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020AA10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020A780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020AB74; } }
L_0020A780:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AA08; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020A7AC; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020A7B0; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020A7AC:
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020A7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 15u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].d[0] = 0ull | 34816ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A7D8u); c.r[7].d[0] = 0ull | 63488ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020A7D8u) [[unlikely]] return; }
L_0020A7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020AB70; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A828; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020A840; } }
L_0020A828:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020A840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A848u); set32(c.r[4], c.r[18].w[0] + 2944u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A848u) [[unlikely]] return; }
L_0020A848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A85Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A85Cu) [[unlikely]] return; }
L_0020A85C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A868u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A868u) [[unlikely]] return; }
L_0020A868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A870u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A870u) [[unlikely]] return; }
L_0020A870:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A880u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A880u) [[unlikely]] return; }
L_0020A880:
    set32(c.r[3], c.r[2].w[0] - 16384u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4728u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 152u));
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020A8CC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A8C8; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_0020A8EC; } }
L_0020A8C8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020A8CC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020A8EC; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020A8EC; } }
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_0020A8EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4728u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0020A91C; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_0020A920; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0020A91C:
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 1;
L_0020A920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A928u); set32(c.r[4], c.r[18].w[0] + 3008u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020A928u) [[unlikely]] return; }
L_0020A928:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A938u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020A938u) [[unlikely]] return; }
L_0020A938:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A944u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020A944u) [[unlikely]] return; }
L_0020A944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A94Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020A94Cu) [[unlikely]] return; }
L_0020A94C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A960u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020A960u) [[unlikely]] return; }
L_0020A960:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020A970u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020A970u) [[unlikely]] return; }
L_0020A970:
    set32(c.r[4], ld32((c.r[18].w[0] + 4736u)));
    set32(c.r[3], c.r[2].w[0] + 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020A9BC; } }
    c.r[3].d[0] = c.r[4].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A9B8; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_0020A9CC; } }
L_0020A9B8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020A9BC:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020A9CC; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_0020A9CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4736u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020A9FC; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_0020AB70; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020A9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_0020AB70; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020AB70; } }
L_0020AA10:
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4728u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020AA40; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AA50; } }
L_0020AA40:
    st32((c.r[18].w[0] + 4728u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), 0u);  if (t) { goto L_0020AA64; } }
L_0020AA50:
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4728u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4728u));
    st32((c.r[18].w[0] + 4728u), c.r[3].w[0]);
    c.budget -= 5;
L_0020AA64:
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4736u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020AA90; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AAA0; } }
L_0020AA90:
    st32((c.r[18].w[0] + 4736u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), 0u);  if (t) { goto L_0020AAB4; } }
L_0020AAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4736u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4736u));
    st32((c.r[18].w[0] + 4736u), c.r[3].w[0]);
    c.budget -= 5;
L_0020AAB4:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AB70; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 306u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020AB70; } }
L_0020AAD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AB4C; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 73u);  if (t) { goto L_0020AB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB00u); set32(c.r[5], ld32((c.r[16].w[0] + 364u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020AB00u) [[unlikely]] return; }
L_0020AB00:
    set32(c.r[5], 0u + 73u);
    c.budget -= 1;
L_0020AB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB0Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020AB0Cu) [[unlikely]] return; }
L_0020AB0C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AB18u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020AB18u) [[unlikely]] return; }
L_0020AB18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 306u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 306u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AB70; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020AB70; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020AB70; } }
L_0020AB54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AB6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 278u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020AB70; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AB6C:
    st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020AB70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020AB74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020AB90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8015u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020AFB0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020AF30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020AE6C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020ABE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020AFD0; } }
L_0020ABE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AE64; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020AC0C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020AC10; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020AC0C:
    st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020AC10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 30720u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 17u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AC38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020AC38u) [[unlikely]] return; }
L_0020AC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 368u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AC88; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020ACA0; } }
L_0020AC88:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020ACA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACA8u); set32(c.r[4], c.r[18].w[0] + 3072u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020ACA8u) [[unlikely]] return; }
L_0020ACA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACBCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020ACBCu) [[unlikely]] return; }
L_0020ACBC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACC8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020ACC8u) [[unlikely]] return; }
L_0020ACC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020ACD0u) [[unlikely]] return; }
L_0020ACD0:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ACE0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020ACE0u) [[unlikely]] return; }
L_0020ACE0:
    set32(c.r[3], c.r[2].w[0] + 16384u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4752u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 156u));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 156u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020AD2C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020AD28; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0020AD4C; } }
L_0020AD28:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020AD2C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020AD4C; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020AD4C; } }
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_0020AD4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4752u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0020AD7C; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_0020AD80; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0020AD7C:
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 1;
L_0020AD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD88u); set32(c.r[4], c.r[18].w[0] + 3136u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020AD88u) [[unlikely]] return; }
L_0020AD88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AD98u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020AD98u) [[unlikely]] return; }
L_0020AD98:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADA4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020ADA4u) [[unlikely]] return; }
L_0020ADA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020ADACu) [[unlikely]] return; }
L_0020ADAC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADC0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020ADC0u) [[unlikely]] return; }
L_0020ADC0:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ADCCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020ADCCu) [[unlikely]] return; }
L_0020ADCC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4760u)));
    set32(c.r[3], c.r[2].w[0] - 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 108u));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020AE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_0020AE28; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020AE08:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AE28; } }
    c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020AE28; } }
    set32(c.r[3], 0u + 8192u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 2;
L_0020AE28:
    set32(c.r[4], ld32((c.r[18].w[0] + 4760u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020AE58; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020AE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020AFCC; } }
L_0020AE6C:
    set32(c.r[6], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4752u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020AE9C; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AEAC; } }
L_0020AE9C:
    st32((c.r[18].w[0] + 4752u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 252u), 0u);  if (t) { goto L_0020AEC0; } }
L_0020AEAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4752u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4752u));
    st32((c.r[18].w[0] + 4752u), c.r[3].w[0]);
    c.budget -= 5;
L_0020AEC0:
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4760u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020AEEC; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AEFC; } }
L_0020AEEC:
    st32((c.r[18].w[0] + 4760u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 204u), 0u);  if (t) { goto L_0020AF10; } }
L_0020AEFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4760u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4760u));
    st32((c.r[18].w[0] + 4760u), c.r[3].w[0]);
    c.budget -= 5;
L_0020AF10:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020AFCC; } }
L_0020AF30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 293u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AFA8; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_0020AF60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF5Cu); set32(c.r[5], ld32((c.r[16].w[0] + 368u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020AF5Cu) [[unlikely]] return; }
L_0020AF5C:
    set32(c.r[5], 0u + 75u);
    c.budget -= 1;
L_0020AF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF68u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020AF68u) [[unlikely]] return; }
L_0020AF68:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020AF74u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020AF74u) [[unlikely]] return; }
L_0020AF74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 307u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 307u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 307u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020AFCC; } }
L_0020AFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 293u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020AFC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 279u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020AFCC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020AFC8:
    st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020AFCC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020AFD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020AFF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8016u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020B414; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020B394; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020B2D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020B040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020B434; } }
L_0020B040:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B2C8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020B06C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020B070; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020B06C:
    st16((c.r[16].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020B070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 19u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].d[0] = 0ull | 34816ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B098u); c.r[7].d[0] = 0ull | 63488ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020B098u) [[unlikely]] return; }
L_0020B098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020B430; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 372u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B0E8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020B100; } }
L_0020B0E8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020B100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B108u); set32(c.r[4], c.r[18].w[0] + 3200u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020B108u) [[unlikely]] return; }
L_0020B108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B11Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020B11Cu) [[unlikely]] return; }
L_0020B11C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B128u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020B128u) [[unlikely]] return; }
L_0020B128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B130u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020B130u) [[unlikely]] return; }
L_0020B130:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B140u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020B140u) [[unlikely]] return; }
L_0020B140:
    set32(c.r[3], c.r[2].w[0] - 16384u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4776u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 160u));
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020B18C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B188; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0020B1AC; } }
L_0020B188:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020B18C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B1AC; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020B1AC; } }
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_0020B1AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4776u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0020B1DC; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_0020B1E0; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0020B1DC:
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_0020B1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1E8u); set32(c.r[4], c.r[18].w[0] + 3264u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020B1E8u) [[unlikely]] return; }
L_0020B1E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B1F8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020B1F8u) [[unlikely]] return; }
L_0020B1F8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B204u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020B204u) [[unlikely]] return; }
L_0020B204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B20Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020B20Cu) [[unlikely]] return; }
L_0020B20C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B220u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020B220u) [[unlikely]] return; }
L_0020B220:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B230u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020B230u) [[unlikely]] return; }
L_0020B230:
    set32(c.r[4], ld32((c.r[18].w[0] + 4784u)));
    set32(c.r[3], c.r[2].w[0] + 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020B27C; } }
    c.r[3].d[0] = c.r[4].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B278; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0020B28C; } }
L_0020B278:
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020B27C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B28C; } }
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 1;
L_0020B28C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4784u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020B2BC; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0020B430; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020B2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0020B430; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020B430; } }
L_0020B2D0:
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4776u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020B300; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B310; } }
L_0020B300:
    st32((c.r[18].w[0] + 4776u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 256u), 0u);  if (t) { goto L_0020B324; } }
L_0020B310:
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4776u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4776u));
    st32((c.r[18].w[0] + 4776u), c.r[3].w[0]);
    c.budget -= 5;
L_0020B324:
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4784u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020B350; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B360; } }
L_0020B350:
    st32((c.r[18].w[0] + 4784u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 208u), 0u);  if (t) { goto L_0020B374; } }
L_0020B360:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4784u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4784u));
    st32((c.r[18].w[0] + 4784u), c.r[3].w[0]);
    c.budget -= 5;
L_0020B374:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B430; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 294u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 308u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020B430; } }
L_0020B394:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 294u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B40C; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 294u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 77u);  if (t) { goto L_0020B3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3C0u); set32(c.r[5], ld32((c.r[16].w[0] + 372u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020B3C0u) [[unlikely]] return; }
L_0020B3C0:
    set32(c.r[5], 0u + 77u);
    c.budget -= 1;
L_0020B3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3CCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020B3CCu) [[unlikely]] return; }
L_0020B3CC:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B3D8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020B3D8u) [[unlikely]] return; }
L_0020B3D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 308u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B430; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020B430; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020B430; } }
L_0020B414:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 294u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B42C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020B430; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B42C:
    st8((c.r[16].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020B430:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020B434:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020B450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8017u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 7736u);  if (t) { goto L_0020B870; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020B7F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020B72C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020B4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0020B890; } }
L_0020B4A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 70u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B724; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020B4CC; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020B4D0; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020B4CC:
    st16((c.r[16].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020B4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 30720u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 21u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B4F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020B4F8u) [[unlikely]] return; }
L_0020B4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020B88C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B548; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0020B560; } }
L_0020B548:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_0020B560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B568u); set32(c.r[4], c.r[18].w[0] + 3328u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020B568u) [[unlikely]] return; }
L_0020B568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B57Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020B57Cu) [[unlikely]] return; }
L_0020B57C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B588u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020B588u) [[unlikely]] return; }
L_0020B588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B590u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020B590u) [[unlikely]] return; }
L_0020B590:
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B5A0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020B5A0u) [[unlikely]] return; }
L_0020B5A0:
    set32(c.r[3], c.r[2].w[0] + 16384u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4800u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 164u));
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_0020B5EC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B5E8; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_0020B60C; } }
L_0020B5E8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020B5EC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020B60C; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020B60C; } }
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_0020B60C:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4800u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0020B63C; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_0020B640; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0020B63C:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_0020B640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B648u); set32(c.r[4], c.r[18].w[0] + 3392u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020B648u) [[unlikely]] return; }
L_0020B648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B658u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020B658u) [[unlikely]] return; }
L_0020B658:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B664u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020B664u) [[unlikely]] return; }
L_0020B664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B66Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020B66Cu) [[unlikely]] return; }
L_0020B66C:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B680u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020B680u) [[unlikely]] return; }
L_0020B680:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B68Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020B68Cu) [[unlikely]] return; }
L_0020B68C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4808u)));
    set32(c.r[3], c.r[2].w[0] - 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 116u));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_0020B6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_0020B6E8; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0020B6C8:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B6E8; } }
    c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020B6E8; } }
    set32(c.r[3], 0u + 8192u);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0020B6E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4808u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020B718; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_0020B88C; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020B718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_0020B88C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 70u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020B88C; } }
L_0020B72C:
    set32(c.r[6], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4800u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0020B75C; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B76C; } }
L_0020B75C:
    st32((c.r[18].w[0] + 4800u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 260u), 0u);  if (t) { goto L_0020B780; } }
L_0020B76C:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4800u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4800u));
    st32((c.r[18].w[0] + 4800u), c.r[3].w[0]);
    c.budget -= 5;
L_0020B780:
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4808u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020B7AC; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B7BC; } }
L_0020B7AC:
    st32((c.r[18].w[0] + 4808u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), 0u);  if (t) { goto L_0020B7D0; } }
L_0020B7BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 4808u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4808u));
    st32((c.r[18].w[0] + 4808u), c.r[3].w[0]);
    c.budget -= 5;
L_0020B7D0:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B88C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 295u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 309u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020B88C; } }
L_0020B7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 295u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B868; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 295u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 79u);  if (t) { goto L_0020B820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B81Cu); set32(c.r[5], ld32((c.r[16].w[0] + 376u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020B81Cu) [[unlikely]] return; }
L_0020B81C:
    set32(c.r[5], 0u + 79u);
    c.budget -= 1;
L_0020B820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B828u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020B828u) [[unlikely]] return; }
L_0020B828:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B834u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020B834u) [[unlikely]] return; }
L_0020B834:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 309u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 309u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B88C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020B88C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020B88C; } }
L_0020B870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 295u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020B888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020B88C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020B888:
    st8((c.r[16].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020B88C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020B890:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020B8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8018u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_0020BB88; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020BB08; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020BAA4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020B8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0020BBA8; } }
L_0020B8FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BA9C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020B928; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020B92C; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020B928:
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020B92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 4096u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 1u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B954u); c.r[7].d[0] = 0ull | 63488ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020B954u) [[unlikely]] return; }
L_0020B954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020B9A4; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_0020B9BC; } }
L_0020B9A4:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_0020B9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9C4u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020B9C4u) [[unlikely]] return; }
L_0020B9C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9D4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020B9D4u) [[unlikely]] return; }
L_0020B9D4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9E0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020B9E0u) [[unlikely]] return; }
L_0020B9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9E8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020B9E8u) [[unlikely]] return; }
L_0020B9E8:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020B9FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020B9FCu) [[unlikely]] return; }
L_0020B9FC:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BA08u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020BA08u) [[unlikely]] return; }
L_0020BA08:
    set32(c.r[3], ld32((c.r[17].w[0] + 4564u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 120u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_0020BA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), 0u);  if (t) { goto L_0020BA60; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020BA44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BA60; } }
    c.r[3].d[0] = 0ull | 52793ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020BA60; } }
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 1;
L_0020BA60:
    set32(c.r[4], ld32((c.r[17].w[0] + 4564u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020BA90; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020BA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020BBA4; } }
L_0020BAA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4564u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020BAD4; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BAF0; } }
L_0020BAD4:
    st32((c.r[17].w[0] + 4564u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 216u), 0u);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 310u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020BBA4; } }
L_0020BAF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4564u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4564u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4564u), c.r[3].w[0]);  if (t) { goto L_0020BBA4; } }
L_0020BB08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BB80; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 69u);  if (t) { goto L_0020BB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB34u); set32(c.r[5], ld32((c.r[16].w[0] + 380u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020BB34u) [[unlikely]] return; }
L_0020BB34:
    set32(c.r[5], 0u + 69u);
    c.budget -= 1;
L_0020BB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB40u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020BB40u) [[unlikely]] return; }
L_0020BB40:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BB4Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020BB4Cu) [[unlikely]] return; }
L_0020BB4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 310u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 310u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BBA4; } }
L_0020BB88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020BBA4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BBA0:
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020BBA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020BBA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020BBC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8019u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { goto L_0020BE98; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0020BE18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020BDB4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020BC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0020BEB8; } }
L_0020BC0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 74u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BDAC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_0020BC38; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020BC3C; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_0020BC38:
    st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020BC3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2048u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 2u);
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BC64u); c.r[7].d[0] = 0ull | 61440ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020BC64u) [[unlikely]] return; }
L_0020BC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BCB4; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_0020BCCC; } }
L_0020BCB4:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_0020BCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCD4u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0020BCD4u) [[unlikely]] return; }
L_0020BCD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCE4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0020BCE4u) [[unlikely]] return; }
L_0020BCE4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCF0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0020BCF0u) [[unlikely]] return; }
L_0020BCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BCF8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0020BCF8u) [[unlikely]] return; }
L_0020BCF8:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD0Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0020BD0Cu) [[unlikely]] return; }
L_0020BD0C:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BD18u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0020BD18u) [[unlikely]] return; }
L_0020BD18:
    set32(c.r[3], ld32((c.r[17].w[0] + 4576u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 124u));
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_0020BD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_0020BD70; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0020BD54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BD70; } }
    c.r[3].d[0] = 0ull | 52793ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020BD70; } }
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 1;
L_0020BD70:
    set32(c.r[4], ld32((c.r[17].w[0] + 4576u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0020BDA0; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_0020BDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020BEB4; } }
L_0020BDB4:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4576u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020BDE4; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BE00; } }
L_0020BDE4:
    st32((c.r[17].w[0] + 4576u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 220u), 0u);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 311u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020BEB4; } }
L_0020BE00:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4576u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4576u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4576u), c.r[3].w[0]);  if (t) { goto L_0020BEB4; } }
L_0020BE18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 297u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BE90; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 71u);  if (t) { goto L_0020BE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE44u); set32(c.r[5], ld32((c.r[16].w[0] + 384u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020BE44u) [[unlikely]] return; }
L_0020BE44:
    set32(c.r[5], 0u + 71u);
    c.budget -= 1;
L_0020BE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0020BE50u) [[unlikely]] return; }
L_0020BE50:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BE5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x0020BE5Cu) [[unlikely]] return; }
L_0020BE5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 311u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 311u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 311u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020BEB4; } }
L_0020BE98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 297u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020BEB4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BEB0:
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020BEB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0020BEB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020BED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8020u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 7736u);  if (t) { [[clang::musttail]] return unit_0043(c, 3u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020BFB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020BF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0043(c, 5u, depth); } }
L_0020BF10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0020BFA8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0020BF3C; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020BF40; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0020BF3C:
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020BF40:
    set32(c.r[5], 0u + 4096u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 18432u);
    set32(c.r[9], 0u + 8192u);
    set32(c.r[10], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF68u); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x0020BF68u) [[unlikely]] return; }
L_0020BF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0043(c, 4u, depth); } }
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BF88u); st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0020BF88u) [[unlikely]] return; }
L_0020BF88:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 326u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0043(c, 4u, depth); } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020BFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0043(c, 4u, depth); } }
L_0020BFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 298u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  [[clang::musttail]] return unit_0043(c, 2u, depth); }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0020BFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFDCu); set32(c.r[5], ld32((c.r[16].w[0] + 388u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x0020BFDCu) [[unlikely]] return; }
L_0020BFDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 326u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 312u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 81u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020BFF4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x0020BFF4u) [[unlikely]] return; }
L_0020BFF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_0043(c, 1u, depth);
}

}
