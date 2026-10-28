#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0093[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42,
    0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56,
    0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0,
    0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0,
    293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303,
    0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0093(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0034C000;
    case 2u: goto L_0034C028;
    case 3u: goto L_0034C074;
    case 4u: goto L_0034C090;
    case 5u: goto L_0034C108;
    case 6u: goto L_0034C120;
    case 7u: goto L_0034C180;
    case 8u: goto L_0034C190;
    case 9u: goto L_0034C230;
    case 10u: goto L_0034C240;
    case 11u: goto L_0034C2A4;
    case 12u: goto L_0034C2D0;
    case 13u: goto L_0034C328;
    case 14u: goto L_0034C340;
    case 15u: goto L_0034C388;
    case 16u: goto L_0034C3A4;
    case 17u: goto L_0034C3C4;
    case 18u: goto L_0034C3E0;
    case 19u: goto L_0034C550;
    case 20u: goto L_0034C584;
    case 21u: goto L_0034C590;
    case 22u: goto L_0034C5C8;
    case 23u: goto L_0034C5E0;
    case 24u: goto L_0034C61C;
    case 25u: goto L_0034C628;
    case 26u: goto L_0034C65C;
    case 27u: goto L_0034C680;
    case 28u: goto L_0034C6CC;
    case 29u: goto L_0034C6D4;
    case 30u: goto L_0034C6EC;
    case 31u: goto L_0034C6F8;
    case 32u: goto L_0034C710;
    case 33u: goto L_0034C7C0;
    case 34u: goto L_0034C840;
    case 35u: goto L_0034C8F4;
    case 36u: goto L_0034C920;
    case 37u: goto L_0034CA40;
    case 38u: goto L_0034CB40;
    case 39u: goto L_0034CB50;
    case 40u: goto L_0034CB60;
    case 41u: goto L_0034CB74;
    case 42u: goto L_0034CB7C;
    case 43u: goto L_0034CB88;
    case 44u: goto L_0034CB98;
    case 45u: goto L_0034CBA0;
    case 46u: goto L_0034CBC8;
    case 47u: goto L_0034CBD4;
    case 48u: goto L_0034CC48;
    case 49u: goto L_0034CC58;
    case 50u: goto L_0034CC74;
    case 51u: goto L_0034CC98;
    case 52u: goto L_0034CCD0;
    case 53u: goto L_0034CD2C;
    case 54u: goto L_0034CD6C;
    case 55u: goto L_0034CD74;
    case 56u: goto L_0034CD7C;
    case 57u: goto L_0034CD88;
    case 58u: goto L_0034CD90;
    case 59u: goto L_0034CDC0;
    case 60u: goto L_0034CE44;
    case 61u: goto L_0034CE70;
    case 62u: goto L_0034CED8;
    case 63u: goto L_0034CF18;
    case 64u: goto L_0034CF54;
    case 65u: goto L_0034CF60;
    case 66u: goto L_0034CF70;
    case 67u: goto L_0034CF80;
    case 68u: goto L_0034CF90;
    case 69u: goto L_0034CFC8;
    case 70u: goto L_0034CFD8;
    case 71u: goto L_0034CFE8;
    case 72u: goto L_0034CFF8;
    case 73u: goto L_0034D010;
    case 74u: goto L_0034D030;
    case 75u: goto L_0034D064;
    case 76u: goto L_0034D078;
    case 77u: goto L_0034D088;
    case 78u: goto L_0034D09C;
    case 79u: goto L_0034D0AC;
    case 80u: goto L_0034D0C0;
    case 81u: goto L_0034D0E0;
    case 82u: goto L_0034D110;
    case 83u: goto L_0034D120;
    case 84u: goto L_0034D12C;
    case 85u: goto L_0034D178;
    case 86u: goto L_0034D18C;
    case 87u: goto L_0034D1A0;
    case 88u: goto L_0034D520;
    case 89u: goto L_0034D560;
    case 90u: goto L_0034D570;
    case 91u: goto L_0034D57C;
    case 92u: goto L_0034D5F4;
    case 93u: goto L_0034D600;
    case 94u: goto L_0034D668;
    case 95u: goto L_0034D69C;
    case 96u: goto L_0034D6B8;
    case 97u: goto L_0034D810;
    case 98u: goto L_0034D844;
    case 99u: goto L_0034D8A4;
    case 100u: goto L_0034D8D8;
    case 101u: goto L_0034D930;
    case 102u: goto L_0034D9AC;
    case 103u: goto L_0034D9E0;
    case 104u: goto L_0034DA00;
    case 105u: goto L_0034DA70;
    case 106u: goto L_0034DAC8;
    case 107u: goto L_0034DB18;
    case 108u: goto L_0034DB54;
    case 109u: goto L_0034DB64;
    case 110u: goto L_0034DB88;
    case 111u: goto L_0034DBB0;
    case 112u: goto L_0034DBD4;
    case 113u: goto L_0034DBDC;
    case 114u: goto L_0034DC04;
    case 115u: goto L_0034DC20;
    case 116u: goto L_0034DCC0;
    case 117u: goto L_0034DCC8;
    case 118u: goto L_0034DCE0;
    case 119u: goto L_0034DCFC;
    case 120u: goto L_0034DD08;
    case 121u: goto L_0034DD10;
    case 122u: goto L_0034DD54;
    case 123u: goto L_0034DD70;
    case 124u: goto L_0034DD8C;
    case 125u: goto L_0034DD98;
    case 126u: goto L_0034DDA0;
    case 127u: goto L_0034DDB0;
    case 128u: goto L_0034DDE4;
    case 129u: goto L_0034DDF4;
    case 130u: goto L_0034DE00;
    case 131u: goto L_0034DE50;
    case 132u: goto L_0034DE5C;
    case 133u: goto L_0034DE70;
    case 134u: goto L_0034DFD4;
    case 135u: goto L_0034DFDC;
    case 136u: goto L_0034DFE4;
    case 137u: goto L_0034DFF0;
    case 138u: goto L_0034DFF8;
    case 139u: goto L_0034E008;
    case 140u: goto L_0034E010;
    case 141u: goto L_0034E01C;
    case 142u: goto L_0034E040;
    case 143u: goto L_0034E060;
    case 144u: goto L_0034E0D0;
    case 145u: goto L_0034E0F0;
    case 146u: goto L_0034E14C;
    case 147u: goto L_0034E174;
    case 148u: goto L_0034E1D0;
    case 149u: goto L_0034E1FC;
    case 150u: goto L_0034E418;
    case 151u: goto L_0034E420;
    case 152u: goto L_0034E428;
    case 153u: goto L_0034E440;
    case 154u: goto L_0034E450;
    case 155u: goto L_0034E460;
    case 156u: goto L_0034E510;
    case 157u: goto L_0034E520;
    case 158u: goto L_0034E580;
    case 159u: goto L_0034E5B8;
    case 160u: goto L_0034E5E0;
    case 161u: goto L_0034E634;
    case 162u: goto L_0034E660;
    case 163u: goto L_0034E670;
    case 164u: goto L_0034E678;
    case 165u: goto L_0034E6B8;
    case 166u: goto L_0034E6C4;
    case 167u: goto L_0034E6F0;
    case 168u: goto L_0034E750;
    case 169u: goto L_0034E778;
    case 170u: goto L_0034E7F0;
    case 171u: goto L_0034E820;
    case 172u: goto L_0034E860;
    case 173u: goto L_0034E888;
    case 174u: goto L_0034E8A8;
    case 175u: goto L_0034E8B0;
    case 176u: goto L_0034E8E0;
    case 177u: goto L_0034E8F8;
    case 178u: goto L_0034E930;
    case 179u: goto L_0034E970;
    case 180u: goto L_0034E990;
    case 181u: goto L_0034E9A0;
    case 182u: goto L_0034E9B0;
    case 183u: goto L_0034EA2C;
    case 184u: goto L_0034EA94;
    case 185u: goto L_0034EAAC;
    case 186u: goto L_0034EB00;
    case 187u: goto L_0034EB14;
    case 188u: goto L_0034EB24;
    case 189u: goto L_0034EB40;
    case 190u: goto L_0034EB4C;
    case 191u: goto L_0034EB58;
    case 192u: goto L_0034EB64;
    case 193u: goto L_0034EB70;
    case 194u: goto L_0034EB7C;
    case 195u: goto L_0034EBC0;
    case 196u: goto L_0034EBCC;
    case 197u: goto L_0034EBD8;
    case 198u: goto L_0034EBE4;
    case 199u: goto L_0034EC20;
    case 200u: goto L_0034EC38;
    case 201u: goto L_0034EC64;
    case 202u: goto L_0034ECA0;
    case 203u: goto L_0034ECBC;
    case 204u: goto L_0034ED90;
    case 205u: goto L_0034EDB0;
    case 206u: goto L_0034EDE0;
    case 207u: goto L_0034EEDC;
    case 208u: goto L_0034EEF0;
    case 209u: goto L_0034EF00;
    case 210u: goto L_0034EF20;
    case 211u: goto L_0034EF7C;
    case 212u: goto L_0034EF88;
    case 213u: goto L_0034F020;
    case 214u: goto L_0034F040;
    case 215u: goto L_0034F200;
    case 216u: goto L_0034F334;
    case 217u: goto L_0034F340;
    case 218u: goto L_0034F360;
    case 219u: goto L_0034F398;
    case 220u: goto L_0034F3E0;
    case 221u: goto L_0034F460;
    case 222u: goto L_0034F468;
    case 223u: goto L_0034F47C;
    case 224u: goto L_0034F484;
    case 225u: goto L_0034F4A0;
    case 226u: goto L_0034F4B0;
    case 227u: goto L_0034F4C0;
    case 228u: goto L_0034F57C;
    case 229u: goto L_0034F588;
    case 230u: goto L_0034F598;
    case 231u: goto L_0034F5A0;
    case 232u: goto L_0034F5A8;
    case 233u: goto L_0034F5B0;
    case 234u: goto L_0034F5C8;
    case 235u: goto L_0034F5D8;
    case 236u: goto L_0034F5E0;
    case 237u: goto L_0034F62C;
    case 238u: goto L_0034F640;
    case 239u: goto L_0034F664;
    case 240u: goto L_0034F678;
    case 241u: goto L_0034F68C;
    case 242u: goto L_0034F698;
    case 243u: goto L_0034F6A0;
    case 244u: goto L_0034F6B0;
    case 245u: goto L_0034F714;
    case 246u: goto L_0034F730;
    case 247u: goto L_0034F784;
    case 248u: goto L_0034F798;
    case 249u: goto L_0034F7A4;
    case 250u: goto L_0034F7AC;
    case 251u: goto L_0034F7D0;
    case 252u: goto L_0034F7E0;
    case 253u: goto L_0034F7F0;
    case 254u: goto L_0034F850;
    case 255u: goto L_0034F890;
    case 256u: goto L_0034F8A0;
    case 257u: goto L_0034F948;
    case 258u: goto L_0034F990;
    case 259u: goto L_0034F9B8;
    case 260u: goto L_0034FA20;
    case 261u: goto L_0034FA28;
    case 262u: goto L_0034FA30;
    case 263u: goto L_0034FA38;
    case 264u: goto L_0034FA40;
    case 265u: goto L_0034FA4C;
    case 266u: goto L_0034FA54;
    case 267u: goto L_0034FA64;
    case 268u: goto L_0034FA6C;
    case 269u: goto L_0034FA80;
    case 270u: goto L_0034FA88;
    case 271u: goto L_0034FAA0;
    case 272u: goto L_0034FAA8;
    case 273u: goto L_0034FAC4;
    case 274u: goto L_0034FACC;
    case 275u: goto L_0034FAEC;
    case 276u: goto L_0034FAF4;
    case 277u: goto L_0034FB18;
    case 278u: goto L_0034FB24;
    case 279u: goto L_0034FB40;
    case 280u: goto L_0034FB50;
    case 281u: goto L_0034FBB0;
    case 282u: goto L_0034FC00;
    case 283u: goto L_0034FC08;
    case 284u: goto L_0034FC10;
    case 285u: goto L_0034FC18;
    case 286u: goto L_0034FC20;
    case 287u: goto L_0034FC2C;
    case 288u: goto L_0034FC34;
    case 289u: goto L_0034FC44;
    case 290u: goto L_0034FC4C;
    case 291u: goto L_0034FC60;
    case 292u: goto L_0034FC68;
    case 293u: goto L_0034FC80;
    case 294u: goto L_0034FC88;
    case 295u: goto L_0034FCA4;
    case 296u: goto L_0034FCAC;
    case 297u: goto L_0034FCCC;
    case 298u: goto L_0034FCD4;
    case 299u: goto L_0034FCF8;
    case 300u: goto L_0034FD20;
    case 301u: goto L_0034FD30;
    case 302u: goto L_0034FD70;
    case 303u: goto L_0034FD7C;
    case 304u: goto L_0034FD90;
    case 305u: goto L_0034FD98;
    case 306u: goto L_0034FDAC;
    case 307u: goto L_0034FDCC;
    case 308u: goto L_0034FDE0;
    case 309u: goto L_0034FE48;
    case 310u: goto L_0034FE54;
    case 311u: goto L_0034FE80;
    case 312u: goto L_0034FE88;
    case 313u: goto L_0034FEB4;
    case 314u: goto L_0034FEE0;
    case 315u: goto L_0034FF2C;
    case 316u: goto L_0034FF50;
    case 317u: goto L_0034FF70;
    default: bad_entry(c, 0x0034C000u); return;
    }
L_0034C000:
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 10);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_0034C020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C074; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0034C020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C028u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C028u) [[unlikely]] return; }
L_0034C028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C074; } }
L_0034C038:
    set32(c.r[5], ld32((c.r[16].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[2].w[0] + 10240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[5].w[0] >> 20);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] << 10);
    st16((c.r[16].w[0] + 850u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 724u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.budget -= 15;
L_0034C074:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C0AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C10C; } }
L_0034C0AC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C10C; } }
L_0034C0C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C10C; } }
L_0034C0D8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] << 18);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_0034C100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C10C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_0034C100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C108u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C108u) [[unlikely]] return; }
L_0034C108:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0034C10C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C180; } }
L_0034C140:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0034C178; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C16C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C174; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034C16C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0034C184; } }
L_0034C174:
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_0034C178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C180u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C180u) [[unlikely]] return; }
L_0034C180:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034C184:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 816u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C230; } }
L_0034C1AC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C230; } }
L_0034C1C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C1E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C1E8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034C1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0034C234; } }
L_0034C1E8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_0034C204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C230; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_0034C204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C21C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 794u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 13u);  if (t) { goto L_0034C228; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034C21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C230; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 1;
L_0034C228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C230u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C230u) [[unlikely]] return; }
L_0034C230:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034C234:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034C264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C2B8; } }
L_0034C264:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C288; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C2B8; } }
L_0034C288:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C2A4; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C2A4u) [[unlikely]] return; }
L_0034C2A4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0034C2B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8425u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034C2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C334; } }
L_0034C2F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C334; } }
L_0034C308:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 706u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C328u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C328u) [[unlikely]] return; }
L_0034C328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034C334; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034C334:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034C364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C3C8; } }
L_0034C364:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 18u);  if (t) { goto L_0034C380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C3C8; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 1;
L_0034C380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C388u);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C388u) [[unlikely]] return; }
L_0034C388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0034C39C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C3C8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034C39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3A4u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0034C3A4u) [[unlikely]] return; }
L_0034C3A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034C3C4u) [[unlikely]] return; }
L_0034C3C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034C3C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C3E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0034C418; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034C544; } }
L_0034C418:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[5].d[0] & 12288ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] & 65535ull;  goto L_0034C430; }
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 2;
L_0034C430:
    c.r[2].d[0] = c.r[5].d[0] & 3072ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_0034C444; } }
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 2;
L_0034C444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_0034C460; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0034C474; } }
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 1;
L_0034C460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 2048ull;  if (t) { goto L_0034C478; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034C474:
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 1;
L_0034C478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 1024ull;  if (t) { goto L_0034C494; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0034C4A8; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 1;
L_0034C494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C4A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    set32(c.r[2], c.r[2].w[0] - 256u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034C4A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 320u)));
    c.r[1].d[0] = c.r[2].sd[0] < 385ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < -384ll ? 1ull : 0ull;  if (t) { goto L_0034C4C8; } }
    set32(c.r[2], 0u + 384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0034C4D8; } }
    c.r[1].d[0] = c.r[2].sd[0] < -384ll ? 1ull : 0ull;
    c.budget -= 1;
L_0034C4C8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C4D8; } }
    set32(c.r[2], 0u - 384u);
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0034C4D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 322u)));
    c.r[1].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < -512ll ? 1ull : 0ull;  if (t) { goto L_0034C4F8; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0034C508; } }
    c.r[1].d[0] = c.r[2].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 1;
L_0034C4F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C508; } }
    set32(c.r[2], 0u - 512u);
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0034C508:
    st32((c.r[4].w[0] + 972u), 0u);
    st32((c.r[4].w[0] + 968u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1524u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1528u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1540u)));
    st32((c.r[4].w[0] + 1544u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 1344u));
    c.f[2] = ld32((c.r[4].w[0] + 1348u));
    c.f[1] = ld32((c.r[4].w[0] + 1352u));
    c.f[0] = ld32((c.r[4].w[0] + 1356u));
    st32((c.r[4].w[0] + 1360u), c.f[3]);
    st32((c.r[4].w[0] + 1364u), c.f[2]);
    st32((c.r[4].w[0] + 1368u), c.f[1]);
    st32((c.r[4].w[0] + 1372u), c.f[0]);
    c.budget -= 15;
L_0034C544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034C550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034C584; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7815u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C584u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034C584u) [[unlikely]] return; }
L_0034C584:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C590u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x0034C590u) [[unlikely]] return; }
L_0034C590:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0034C5C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 784u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C5BC; } }
    st8((c.r[16].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0034C5BC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034C5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C5C8u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0034C5C8u) [[unlikely]] return; }
L_0034C5C8:
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0034C61C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7815u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C61Cu); st8((c.r[17].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034C61Cu) [[unlikely]] return; }
L_0034C61C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C628u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x0034C628u) [[unlikely]] return; }
L_0034C628:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0034C654; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 784u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C650; } }
    st8((c.r[17].w[0] + 784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0034C650:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0034C654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C65Cu);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0034C65Cu) [[unlikely]] return; }
L_0034C65C:
    st16((c.r[17].w[0] + 808u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u - 29181u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 763u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6CCu); st8((c.r[4].w[0] + 779u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0034C6CCu) [[unlikely]] return; }
L_0034C6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x0034C6D4u) [[unlikely]] return; }
L_0034C6D4:
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6ECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034C6ECu) [[unlikely]] return; }
L_0034C6EC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x0034C6F8u) [[unlikely]] return; }
L_0034C6F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C710:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_0034C768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[3], c.r[2].w[0] - 1440u);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 746u));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_0034C790; } }
L_0034C768:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034C790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 7;
L_0034C790:
    set32(c.r[2], ld32((c.r[21].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C808; } }
    c.f[0] = ld32((c.r[21].w[0] + 2096u));
    set32(c.r[4], c.r[2].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 2100u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 2104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7C0u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034C7C0u) [[unlikely]] return; }
L_0034C7C0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034C808; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 1520u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 1536u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 520u)));
    st32((c.r[21].w[0] + 1548u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[21].w[0] + 1328u));
    c.f[2] = ld32((c.r[21].w[0] + 1332u));
    c.f[1] = ld32((c.r[21].w[0] + 1336u));
    c.f[0] = ld32((c.r[21].w[0] + 1340u));
    st32((c.r[21].w[0] + 1376u), c.f[3]);
    st32((c.r[21].w[0] + 1380u), c.f[2]);
    st32((c.r[21].w[0] + 1384u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1388u), c.f[0]);  if (t) { goto L_0034CA18; } }
L_0034C808:
    st32((c.r[21].w[0] + 1536u), 0u);
    st32((c.r[21].w[0] + 1548u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[2].w[0] - 7968u);
    set32(c.r[2], c.r[28].w[0] - 26444u);
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] << 10);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0034C9C8; } }
L_0034C840:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_0034C9C4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034C9C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C9C0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0034C9C0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[4].d[0];  if (t) { goto L_0034C9C0; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 531u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0034C9C0; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034C9C0; } }
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C8B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034C9C0; } }
    c.budget -= 1;
L_0034C8B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C9C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[21], c.r[0]);  goto L_0034C8EC; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9C0; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 2;
L_0034C8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C8F4u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 139u, depth + 1u); else { c.pc = 0x002DA200u; return; } if (c.pc != 0x0034C8F4u) [[unlikely]] return; }
L_0034C8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C9C0; } }
    c.f[0] = ld32((c.r[21].w[0] + 2096u));
    set32(c.r[4], c.r[20].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 2100u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 2104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C920u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034C920u) [[unlikely]] return; }
L_0034C920:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034C9C0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { mmi::paddub(c.r[16], c.r[20], c.r[0]);  goto L_0034C9BC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0034C9B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 519u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 519u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034C9B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9C0; } }
    c.budget -= 1;
L_0034C9A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C9C0; } }
L_0034C9B8:
    mmi::paddub(c.r[16], c.r[20], c.r[0]);
    c.budget -= 1;
L_0034C9BC:
    c.budget -= 1;
L_0034C9C0:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_0034C9C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0034C9C8:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034C840u | kUnwind; return; } goto L_0034C840; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034CA18; } }
    st32((c.r[21].w[0] + 1548u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 1536u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 80u));
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    st32((c.r[21].w[0] + 1376u), c.f[3]);
    st32((c.r[21].w[0] + 1380u), c.f[2]);
    st32((c.r[21].w[0] + 1384u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1388u), c.f[0]);  if (t) { goto L_0034CA18; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034CA18:
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
L_0034CA40:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; mmi::paddub(c.r[20], c.r[6], c.r[0]);  if (t) { goto L_0034CBDC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0034CBDC; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034CA9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_0034CD98; } }
L_0034CA9C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[2].w[0] + 8656u);
    c.r[3].d[0] = ld8((c.r[22].w[0] + 746u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] + 11744u);
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8055u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[22].w[0] + 1328u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[22].w[0] + 1332u));
    c.f[1] = ld32((c.r[22].w[0] + 1336u));
    c.f[0] = ld32((c.r[22].w[0] + 1340u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8352u));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[23], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8356u));
    set32(c.r[19], c.r[29].w[0] + 168u);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[20].d[0] & 128ull;
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8360u));
    c.budget -= 36;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_0034CB40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB40u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034CB40u) [[unlikely]] return; }
L_0034CB40:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB50u); set32(c.r[6], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034CB50u) [[unlikely]] return; }
L_0034CB50:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB60u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x0034CB60u) [[unlikely]] return; }
L_0034CB60:
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[22].w[0] + 8320u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB74u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0034CB74u) [[unlikely]] return; }
L_0034CB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB7Cu); set32(c.r[4], c.r[22].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034CB7Cu) [[unlikely]] return; }
L_0034CB7C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB88u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034CB88u) [[unlikely]] return; }
L_0034CB88:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB98u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0034CB98u) [[unlikely]] return; }
L_0034CB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBA0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034CBA0u) [[unlikely]] return; }
L_0034CBA0:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBC8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034CBC8u) [[unlikely]] return; }
L_0034CBC8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBD4u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034CBD4u) [[unlikely]] return; }
L_0034CBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));  if (t) { goto L_0034CC04; } }
L_0034CBDC:
    c.f[3] = ld32((c.r[22].w[0] + 1392u));
    c.f[2] = ld32((c.r[22].w[0] + 1396u));
    c.f[1] = ld32((c.r[22].w[0] + 1400u));
    c.f[0] = ld32((c.r[22].w[0] + 1404u));
    set32(c.r[2], c.r[29].w[0] + 144u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 8386u)));
    c.budget -= 10;
L_0034CC04:
    c.r[2].d[0] = c.r[21].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[20].d[0] & 128ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0034CC58; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[22].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC48u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034CC48u) [[unlikely]] return; }
L_0034CC48:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[22].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC58u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x0034CC58u) [[unlikely]] return; }
L_0034CC58:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] & 2ull;  if (t) { goto L_0034CC7C; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC74u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 252u, depth + 1u); else { c.pc = 0x0034AFB0u; return; } if (c.pc != 0x0034CC74u) [[unlikely]] return; }
L_0034CC74:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 2;
L_0034CC7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CC9C; } }
    set32(c.r[5], c.r[22].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC98u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 317u, depth + 1u); else { c.pc = 0x0034B840u; return; } if (c.pc != 0x0034CC98u) [[unlikely]] return; }
L_0034CC98:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_0034CC9C:
    set32(c.r[17], ld32((c.r[22].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0034CD94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034CD90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 779u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CD90; } }
    set32(c.r[4], c.r[22].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCD0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034CCD0u) [[unlikely]] return; }
L_0034CCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034CD90; } }
    c.f[0] = ld32((c.r[22].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8340u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 8344u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD2Cu); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x0034CD2Cu) [[unlikely]] return; }
L_0034CD2C:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[1].d[0] = c.r[17].sd[0] < -191ll ? 1ull : 0ull;  if (t) { goto L_0034CD50; } }
    c.r[2].d[0] = c.r[17].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[29].w[0] + 192u);  if (t) { goto L_0034CD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 192u);  if (t) { goto L_0034CD5C; } }
    c.r[1].d[0] = c.r[17].sd[0] < -191ll ? 1ull : 0ull;
    c.budget -= 1;
L_0034CD50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034CD5C; } }
    set32(c.r[17], 0u - 192u);
    c.budget -= 1;
L_0034CD5C:
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_0034CD60:
    set32(c.r[4], c.r[22].w[0] + 8320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD6Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0034CD6Cu) [[unlikely]] return; }
L_0034CD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD74u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034CD74u) [[unlikely]] return; }
L_0034CD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD7Cu); set32(c.r[4], c.r[22].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0034CD7Cu) [[unlikely]] return; }
L_0034CD7C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD88u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0034CD88u) [[unlikely]] return; }
L_0034CD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD90u); set32(c.r[4], c.r[22].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034CD90u) [[unlikely]] return; }
L_0034CD90:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034CD94:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034CD98:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0034CDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0034CDF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034CDFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034CE04; } }
L_0034CDF8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034CDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034CE64; } }
L_0034CE04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034CE20; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 32u);  goto L_0034CE3C; }
L_0034CE20:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034CE60; } }
L_0034CE38:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_0034CE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE44u); set32(c.r[5], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034CE44u) [[unlikely]] return; }
L_0034CE44:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_0034CE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034CE60; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0034CE60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034CE64:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034CE70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 749u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0034CECC; } }
    c.r[3].d[0] = c.r[17].d[0] ^ 1ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 7944u), 0u);
    st32((c.r[2].w[0] + 7940u), 0u);
    st32((c.r[2].w[0] + 7936u), 0u);
    st32((c.r[2].w[0] + 7976u), 0u);
    st32((c.r[2].w[0] + 7972u), 0u);
    st32((c.r[2].w[0] + 7968u), 0u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 7892u), 0u);
    st32((c.r[2].w[0] + 7888u), 0u);
    c.budget -= 13;
L_0034CECC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CED8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0034CED8u) [[unlikely]] return; }
L_0034CED8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0034CFC0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8054u));
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034CFBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034CF20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF18u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x0034CF18u) [[unlikely]] return; }
L_0034CF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034CFB4; } }
L_0034CF20:
    c.f[3] = ld32((c.r[18].w[0] + 1392u));
    c.f[2] = ld32((c.r[18].w[0] + 1396u));
    c.f[1] = ld32((c.r[18].w[0] + 1400u));
    c.f[0] = ld32((c.r[18].w[0] + 1404u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 1392u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF54u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 127u, depth + 1u); else { c.pc = 0x0034DDB0u; return; } if (c.pc != 0x0034CF54u) [[unlikely]] return; }
L_0034CF54:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF60u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 88u, depth + 1u); else { c.pc = 0x0034D520u; return; } if (c.pc != 0x0034CF60u) [[unlikely]] return; }
L_0034CF60:
    c.r[6].d[0] = c.r[16].d[0] | 128ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF70u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x0034CF70u) [[unlikely]] return; }
L_0034CF70:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF80u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x0034CF80u) [[unlikely]] return; }
L_0034CF80:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF90u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 29u, depth + 1u); else { c.pc = 0x002DC350u; return; } if (c.pc != 0x0034CF90u) [[unlikely]] return; }
L_0034CF90:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 1392u), c.f[3]);
    st32((c.r[18].w[0] + 1396u), c.f[2]);
    st32((c.r[18].w[0] + 1400u), c.f[1]);
    st32((c.r[18].w[0] + 1404u), c.f[0]);
    c.budget -= 9;
L_0034CFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0034CFFC; } }
L_0034CFBC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_0034CFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFC8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 88u, depth + 1u); else { c.pc = 0x0034D520u; return; } if (c.pc != 0x0034CFC8u) [[unlikely]] return; }
L_0034CFC8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFD8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x0034CFD8u) [[unlikely]] return; }
L_0034CFD8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFE8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x0034CFE8u) [[unlikely]] return; }
L_0034CFE8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFF8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 29u, depth + 1u); else { c.pc = 0x002DC350u; return; } if (c.pc != 0x0034CFF8u) [[unlikely]] return; }
L_0034CFF8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034CFFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034D010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D030u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0034D030u) [[unlikely]] return; }
L_0034D030:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0034D070; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);  if (t) { goto L_0034D050; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 63u);  if (t) { goto L_0034D05C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.budget -= 1;
L_0034D050:
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 63u);
    c.budget -= 3;
L_0034D05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D064u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x0034D064u) [[unlikely]] return; }
L_0034D064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0034D0C4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0034D070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D078u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 88u, depth + 1u); else { c.pc = 0x0034D520u; return; } if (c.pc != 0x0034D078u) [[unlikely]] return; }
L_0034D078:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D088u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x0034D088u) [[unlikely]] return; }
L_0034D088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 7968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D09Cu); set32(c.r[5], c.r[17].w[0] + 7936u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034D09Cu) [[unlikely]] return; }
L_0034D09C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x0034D0ACu) [[unlikely]] return; }
L_0034D0AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 7984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0C0u); set32(c.r[5], c.r[17].w[0] + 7952u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034D0C0u) [[unlikely]] return; }
L_0034D0C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034D0C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034D0E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[21].w[0] + 2048u);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D110u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034D110u) [[unlikely]] return; }
L_0034D110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D120u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0034D120u) [[unlikely]] return; }
L_0034D120:
    set32(c.r[4], c.r[21].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D12Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0034D12Cu) [[unlikely]] return; }
L_0034D12C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[2].w[0] + 2464u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_0034D164; } }
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0034D164:
    set32(c.r[19], c.r[29].w[0] + 116u);
    set32(c.r[18], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D178u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034D178u) [[unlikely]] return; }
L_0034D178:
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D18Cu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034D18Cu) [[unlikely]] return; }
L_0034D18C:
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1A0u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034D1A0u) [[unlikely]] return; }
L_0034D1A0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_0034D4BC; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_0034D48C; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0034D3C8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0034D1E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0034D1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034D4EC; } }
L_0034D1E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D260; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[20].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D238:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_0034D258; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_0034D4E8; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 1;
L_0034D258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] - c.r[2].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D260:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[20].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_0034D2A0; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_0034D4E8; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 1;
L_0034D2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] - c.r[2].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D2A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D360; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D318; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034D2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[20].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D2F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - c.r[20].w[0]);  if (t) { goto L_0034D310; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_0034D4E8; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 1;
L_0034D310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 2);  if (t) { goto L_0034D4E8; } }
L_0034D318:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[20].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D338:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0034D358; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_0034D4E8; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034D358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D4E8; } }
L_0034D360:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[20].w[0]);  if (t) { goto L_0034D4E8; } }
L_0034D380:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D39C; } }
    set32(c.r[2], 0u - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << 1);  if (t) { goto L_0034D4E8; } }
L_0034D39C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4E8; } }
L_0034D3B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    set32(c.r[17], 0u + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;  if (t) { goto L_0034D4E8; } }
L_0034D3C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034D3F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D424; } }
L_0034D3F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4E8; } }
L_0034D410:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    set32(c.r[17], 0u + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;  if (t) { goto L_0034D4E8; } }
L_0034D424:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4E8; } }
L_0034D444:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0034D4E8; } }
L_0034D45C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4E8; } }
L_0034D474:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    set32(c.r[17], 0u + 2u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] == 0) c.r[17].d[0] = 0ull;  if (t) { goto L_0034D4E8; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.budget -= 1;
L_0034D48C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4B4; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0034D4E8; } }
L_0034D4B0:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0034D4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D4E8; } }
L_0034D4BC:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_0034D4E8; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D4E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0034D4E8; } }
L_0034D4E4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0034D4E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034D4EC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_0034D4FC; } }
    st8((c.r[21].w[0] + 775u), static_cast<std::uint8_t>(c.r[17].w[0]));
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 2;
L_0034D4FC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0034D520:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D560u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034D560u) [[unlikely]] return; }
L_0034D560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D570u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0034D570u) [[unlikely]] return; }
L_0034D570:
    set32(c.r[4], c.r[18].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D57Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0034D57Cu) [[unlikely]] return; }
L_0034D57C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[4], c.r[2].w[0] + 2464u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_0034D5B4; } }
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_0034D5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] + 3072u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8054u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], ld32((c.r[3].w[0])));  if (t) { goto L_0034D5DC; } }
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.budget -= 1;
L_0034D5DC:
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[30].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5F4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0034D5F4u) [[unlikely]] return; }
L_0034D5F4:
    c.f[12] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D600u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034D600u) [[unlikely]] return; }
L_0034D600:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0034D61C; } }
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));  if (t) { goto L_0034D628; } }
L_0034D61C:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    c.budget -= 3;
L_0034D628:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0034D6AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 775u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D6A8; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D668u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x0034D668u) [[unlikely]] return; }
L_0034D668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034D688; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0034D688:
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D69Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034D69Cu) [[unlikely]] return; }
L_0034D69C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0034D6AC; } }
L_0034D6A8:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034D6AC:
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D6B8u); c.f[13] = ld32((c.r[30].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034D6B8u) [[unlikely]] return; }
L_0034D6B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 775u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_0034D7D0; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[7].d[0]) { mmi::paddub(c.r[21], c.r[0], c.r[0]);  goto L_0034D7D4; }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_0034D77C; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_0034D728; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0034D704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034D7D4; } }
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.budget -= 1;
L_0034D704:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0; mmi::paddub(c.r[23], c.r[0], c.r[0]);  if (t) { goto L_0034D71C; } }
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));  if (t) { goto L_0034D7D4; } }
L_0034D71C:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 22u)));  if (t) { goto L_0034D7D4; } }
L_0034D728:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);  goto L_0034D74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0034D754; } }
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    c.budget -= 1;
L_0034D74C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_0034D754:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 28u)));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.r[21].d[0] = c.r[8].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] - c.r[23].w[0]);
    c.r[22].d[0] = c.r[7].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);  if (t) { goto L_0034D7D4; } }
L_0034D77C:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 22u)));
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);  goto L_0034D7A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0034D7A8; } }
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    c.budget -= 1;
L_0034D7A0:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_0034D7A8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 30u)));
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.r[21].d[0] = c.r[8].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] - c.r[23].w[0]);
    c.r[22].d[0] = c.r[7].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);  if (t) { goto L_0034D7D4; } }
L_0034D7D0:
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034D7D4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0034D860; } }
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034D85C; } }
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[21].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D810u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x0034D810u) [[unlikely]] return; }
L_0034D810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034D830; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0034D830:
    c.f[1] = c.r[22].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D844u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034D844u) [[unlikely]] return; }
L_0034D844:
    c.r[3].d[0] = c.r[23].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_0034D860; } }
L_0034D85C:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034D860:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_0034D8E4; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 7928u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034D8E0; } }
    c.f[0] = c.r[19].w[0];
    c.f[20] = ld32((c.r[18].w[0] + 7752u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8A4u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034D8A4u) [[unlikely]] return; }
L_0034D8A4:
    c.f[1] = c.r[16].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D8D8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0034D8D8u) [[unlikely]] return; }
L_0034D8D8:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 2;
L_0034D8E0:
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.budget -= 1;
L_0034D8E4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[18].w[0] + 7916u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[18].w[0] + 7912u), c.r[3].w[0]);
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
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0034D930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034D958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034DA50; } }
L_0034D958:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034D97C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 811u)));
    c.r[2].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034D97C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034DA50; } }
L_0034D97C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7746u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[6].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[17], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0034D9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0034D9ACu) [[unlikely]] return; }
L_0034D9AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034D9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034D9E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034D9C0:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 36ull;  if (t) { goto L_0034D9E4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034D9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9E0u);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0034D9E0u) [[unlikely]] return; }
L_0034D9E0:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0034D9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034DA50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[2].w[0] + 10256u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA00u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 36u, depth + 1u); else { c.pc = 0x003405D0u; return; } if (c.pc != 0x0034DA00u) [[unlikely]] return; }
L_0034DA00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[4], 0u - 65u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st8((c.r[16].w[0] + 761u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034DA44; } }
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0034DA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0034DA54; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034DA50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034DA54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034DA70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 761u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_0034DB64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 15ull;  goto L_0034DB58; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAC8u); set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0034DAC8u) [[unlikely]] return; }
L_0034DAC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], 0u - 3u);  if (t) { goto L_0034DB24; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034DB54; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 576ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034DB00; } }
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0034DB00:
    c.f[12] = ld32((c.r[19].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB18u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034DB18u) [[unlikely]] return; }
L_0034DB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034DB54; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 1;
L_0034DB24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0034DB54; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7746u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0034DB54; } }
    st8((c.r[19].w[0] + 775u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[19].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB54u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0034DB54u) [[unlikely]] return; }
L_0034DB54:
    c.r[5].d[0] = c.r[17].d[0] & 15ull;
    c.budget -= 1;
L_0034DB58:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB64u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0034DB64u) [[unlikely]] return; }
L_0034DB64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034DB88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 255u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB88u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x0034DB88u) [[unlikely]] return; }
L_0034DB88:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034DBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034DBE4; } }
    st8((c.r[16].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBD4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0034DBD4u) [[unlikely]] return; }
L_0034DBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0034DBDCu) [[unlikely]] return; }
L_0034DBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034DC08; } }
L_0034DBE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034DC04u) [[unlikely]] return; }
L_0034DC04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034DC08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034DC78; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034DC78; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_0034DC94; } }
L_0034DC78:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_0034DC94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10304u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034DCC0u) [[unlikely]] return; }
L_0034DCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 118u, depth + 1u); else { c.pc = 0x0034DCE0u; return; } if (c.pc != 0x0034DCC8u) [[unlikely]] return; }
L_0034DCC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCFCu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0034DCFCu) [[unlikely]] return; }
L_0034DCFC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0034DD08u) [[unlikely]] return; }
L_0034DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034DD10u) [[unlikely]] return; }
L_0034DD10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034DD54; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 10304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.f[12] = ld32((c.r[2].w[0] + 24u));
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0034DD54u) [[unlikely]] return; }
L_0034DD54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD8Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0034DD8Cu) [[unlikely]] return; }
L_0034DD8C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0034DD98u) [[unlikely]] return; }
L_0034DD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x0034DDA0u) [[unlikely]] return; }
L_0034DDA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034DDB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[21].w[0] + 2048u);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034DDE4u) [[unlikely]] return; }
L_0034DDE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDF4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0034DDF4u) [[unlikely]] return; }
L_0034DDF4:
    set32(c.r[4], c.r[21].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE00u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0034DE00u) [[unlikely]] return; }
L_0034DE00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[2].w[0] + 2464u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_0034DE38; } }
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0034DE38:
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE50u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0034DE50u) [[unlikely]] return; }
L_0034DE50:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE5Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034DE5Cu) [[unlikely]] return; }
L_0034DE5C:
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE70u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034DE70u) [[unlikely]] return; }
L_0034DE70:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0034DE88; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_0034DE88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DE9C; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_0034DE9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034DF1C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0034DEF0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DED8; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_0034DED8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0034DFC0; } }
L_0034DEF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DF04; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_0034DF04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0034DFC0; } }
L_0034DF1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034DF98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034DF70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034DF44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_0034DFC4; } }
L_0034DF44:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DF58; } }
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_0034DF58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0034DFC0; } }
L_0034DF70:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0034DF90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0034DFC0; } }
L_0034DF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));  if (t) { goto L_0034DFC0; } }
L_0034DF98:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0034DFB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034DFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0034DFC0; } }
L_0034DFB8:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.budget -= 2;
L_0034DFC0:
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 1;
L_0034DFC4:
    st32((c.r[29].w[0] + 132u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFD4u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034DFD4u) [[unlikely]] return; }
L_0034DFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0034DFDCu) [[unlikely]] return; }
L_0034DFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFE4u); set32(c.r[4], 0u - c.r[18].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0034DFE4u) [[unlikely]] return; }
L_0034DFE4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFF0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034DFF0u) [[unlikely]] return; }
L_0034DFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFF8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0034DFF8u) [[unlikely]] return; }
L_0034DFF8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E008u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034E008u) [[unlikely]] return; }
L_0034E008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E010u); set32(c.r[4], c.r[21].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034E010u) [[unlikely]] return; }
L_0034E010:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E01Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0034E01Cu) [[unlikely]] return; }
L_0034E01C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0034E040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E060u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0034E060u) [[unlikely]] return; }
L_0034E060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E0BC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 7984u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[3], c.r[3].w[0] - 6784u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 21;
L_0034E0BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E0D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034E0F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 398u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 399u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_0034E198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034E14C:
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 50u);
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E174u); st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0034E174u) [[unlikely]] return; }
L_0034E174:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 5u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 9;
L_0034E198:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E14Cu | kUnwind; return; } goto L_0034E14C; }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034E1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[3], c.r[0]);  if (t) { goto L_0034E3D8; } }
    set32(c.r[8], c.r[3].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_0034E1FC:
    c.r[10].d[0] = ld8((c.r[8].w[0] + 78u));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[9], c.r[8].w[0] + 78u);  if (t) { goto L_0034E238; } }
    c.r[10].d[0] = ld8((c.r[8].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[12], c.r[8].w[0] + 72u);  if (t) { goto L_0034E238; } }
    c.r[10].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[10].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0034E3C4; }
    set32(c.r[10], 0u + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 3;
L_0034E238:
    set32(c.r[10], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[10].d[0];  if (t) { goto L_0034E2B8; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[10].d[0];  if (t) { goto L_0034E280; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0034E260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[8].w[0] + 75u);  if (t) { goto L_0034E2F4; } }
L_0034E260:
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[10].d[0] = c.r[10].d[0] | 39322ull;
    c.f[0] = c.r[10].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_0034E2F0; } }
L_0034E280:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBD0B0000u);
    c.r[10].d[0] = c.r[10].d[0] | 17302ull;
    c.f[0] = c.r[10].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3DE50000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[10].d[0] = c.r[10].d[0] | 24641ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[10].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_0034E2F0; } }
L_0034E2B8:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3CC40000u);
    c.r[10].d[0] = c.r[10].d[0] | 39846ull;
    c.f[0] = c.r[10].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[10].d[0] = c.r[10].d[0] | 55050ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[10].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_0034E2F0:
    set32(c.r[10], c.r[8].w[0] + 75u);
    c.budget -= 1;
L_0034E2F4:
    c.r[8].d[0] = ld8((c.r[8].w[0] + 75u));
    c.r[1].d[0] = c.r[8].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034E330; } }
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D820000u);
    c.r[8].d[0] = c.r[8].d[0] | 21448ull;
    c.f[1] = c.r[8].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_0034E358; } }
L_0034E330:
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3BFC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 4034ull;
    c.f[1] = c.r[8].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 10;
L_0034E358:
    c.r[8].d[0] = ld8((c.r[10].w[0]));
    c.r[1].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0034E388; } }
    c.f[1] = ld32((c.r[7].w[0] + 48u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[8].d[0] = c.r[8].d[0] | 55050ull;
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 48u), c.f[0]);
    c.budget -= 8;
L_0034E388:
    c.r[8].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0034E3A8; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0034E3A8:
    c.r[8].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0034E3C0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0034E3C0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0034E3C4:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_0034E3D8:
    c.r[11].d[0] = c.r[4].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[8].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[3].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E1FCu | kUnwind; return; } goto L_0034E1FC; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034E410; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034E430; } }
L_0034E410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E418u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034E418u) [[unlikely]] return; }
L_0034E418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E420u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0034E420u) [[unlikely]] return; }
L_0034E420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E428u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034E428u) [[unlikely]] return; }
L_0034E428:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0034E430:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034E450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0034E460:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0034E4A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_0034E4B0; } }
L_0034E4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034E55C; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 1;
L_0034E4B0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E510u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034E510u) [[unlikely]] return; }
L_0034E510:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E520u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0034E520u) [[unlikely]] return; }
L_0034E520:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034E548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0034E55C; } }
L_0034E548:
    fpu_div(c, 0u, c.f[20], c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
L_0034E55C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034E580:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[22], c.r[23].w[0] + 320u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0093(c, 155u, depth + 1u); else { c.pc = 0x0034E460u; return; } if (c.pc != 0x0034E5B8u) [[unlikely]] return; }
L_0034E5B8:
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[28].w[0] - 27356u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0034E5E0u) [[unlikely]] return; }
L_0034E5E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[3].w[0] + 4816u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], c.r[3].w[0] + 4768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[3].w[0] + 4864u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[22], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[22], c.r[0]);  if (t) { goto L_0034E710; } }
    set32(c.r[3], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0034E634:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 78u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_0034E6F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[23].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E660u); st32((c.r[1].w[0] - 20368u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034E660u) [[unlikely]] return; }
L_0034E660:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E670u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0034E670u) [[unlikely]] return; }
L_0034E670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E678u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034E678u) [[unlikely]] return; }
L_0034E678:
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6B8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0034E6B8u) [[unlikely]] return; }
L_0034E6B8:
    st8((c.r[28].w[0] - 27353u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6C4u); set32(c.r[4], ld32((c.r[21].w[0] + 60u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0034E6C4u) [[unlikely]] return; }
L_0034E6C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E6F0u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0034E6F0u) [[unlikely]] return; }
L_0034E6F0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0034E6F4:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 7;
L_0034E710:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[22].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E634u | kUnwind; return; } goto L_0034E634; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0034E750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.f[20] = c.f[12];
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E778u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0034E778u) [[unlikely]] return; }
L_0034E778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034E7D8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 5712u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[3], c.r[3].w[0] - 6160u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 160u), c.f[20]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 22;
L_0034E7D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034E7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5056u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034E820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_0034E860:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E860u | kUnwind; return; } goto L_0034E860; } }
    set32(c.r[16], c.r[19].w[0] + 128u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0034E888:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E888u | kUnwind; return; } goto L_0034E888; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0034E8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8B0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0034E8B0u) [[unlikely]] return; }
L_0034E8B0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E8A8u | kUnwind; return; } goto L_0034E8A8; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 2;
L_0034E8E0:
    c.r[6].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E8F8u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 199u, depth + 1u); else { c.pc = 0x0034EC20u; return; } if (c.pc != 0x0034E8F8u) [[unlikely]] return; }
L_0034E8F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034E8E0u | kUnwind; return; } goto L_0034E8E0; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034E930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0034E968; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034E978; } }
L_0034E968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E970u);  if (depth < kMaxDepth) unit_0093(c, 202u, depth + 1u); else { c.pc = 0x0034ECA0u; return; } if (c.pc != 0x0034E970u) [[unlikely]] return; }
L_0034E970:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0034E978:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034E990:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034E9A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0034E9B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 156u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[17], c.r[19].w[0] + 320u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 31;
L_0034EA2C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0034EBEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 4912u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 4944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4896u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA94u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0034EA94u) [[unlikely]] return; }
L_0034EA94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAACu); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0034EAACu) [[unlikely]] return; }
L_0034EAAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB00u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0034EB00u) [[unlikely]] return; }
L_0034EB00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB14u); st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0034EB14u) [[unlikely]] return; }
L_0034EB14:
    set32(c.r[20], c.r[29].w[0] + 136u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB24u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034EB24u) [[unlikely]] return; }
L_0034EB24:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB40u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0034EB40u) [[unlikely]] return; }
L_0034EB40:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB4Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0034EB4Cu) [[unlikely]] return; }
L_0034EB4C:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB58u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0034EB58u) [[unlikely]] return; }
L_0034EB58:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB64u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0034EB64u) [[unlikely]] return; }
L_0034EB64:
    c.r[4].d[0] = c.r[20].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB70u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0034EB70u) [[unlikely]] return; }
L_0034EB70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB7Cu); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0034EB7Cu) [[unlikely]] return; }
L_0034EB7C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[19].w[0] + 160u));
    c.f[2] = c.r[5].w[0];
    set32(c.r[2], c.r[2].w[0] + 5008u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBC0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0034EBC0u) [[unlikely]] return; }
L_0034EBC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBCCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0034EBCCu) [[unlikely]] return; }
L_0034EBCC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBD8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0034EBD8u) [[unlikely]] return; }
L_0034EBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBE4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0034EBE4u) [[unlikely]] return; }
L_0034EBE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0034EBEC:
    c.r[3].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EA2Cu | kUnwind; return; } goto L_0034EA2C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0034EC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 6;
L_0034EC38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0034EC84; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 4980u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC64u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0034EC64u) [[unlikely]] return; }
L_0034EC64:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034EC90; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0034EC84:
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EC38u | kUnwind; return; } goto L_0034EC38; } }
L_0034EC90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034ECA0:
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[3].w[0] + 4976u);
    c.f[5] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
L_0034ECBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0034ED7C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    c.f[4] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[5]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034ED08; } }
    c.f[3] = ld32((c.r[8].w[0] - 8u));
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_0034ED08:
    c.f[2] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034ED50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034ED50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0034ED50:
    c.f[0] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034ED78; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0034ED78:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0034ED7C:
    c.r[3].d[0] = c.r[9].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ECBCu | kUnwind; return; } goto L_0034ECBC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034ED90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 15360u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0034EDB0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15352u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15348u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15344u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 15356u), c.r[6].w[0]);  c.pc = t; return; }
L_0034EDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 15360u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034EEDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 15348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034EE14; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15348u), c.r[3].w[0]);
    c.budget -= 3;
L_0034EE14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 15348u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0034EE40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 15356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034EE40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 15360u), 0u);  if (t) { goto L_0034EEDC; } }
L_0034EE40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 15356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034EE78; } }
    set32(c.r[2], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 15344u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034EE9C; } }
L_0034EE78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 15344u)));
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 9;
L_0034EE9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 15352u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[4], c.r[2].w[0] - 4352u);
    c.r[2].d[0] = c.r[5].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 15352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 15352u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EEDCu); st32((c.r[1].w[0] - 15352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0034EEDCu) [[unlikely]] return; }
L_0034EEDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034EEF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 15348u)));  c.pc = t; return; }
L_0034EF00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 15352u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26584u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 26588u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0034EF20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 5169u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_0034EF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0034F004; } }
L_0034EF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0034EFE8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0034EF7C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF88u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0034EF88u) [[unlikely]] return; }
L_0034EF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0034EFDC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] - 4064u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[3], c.r[3].w[0] - 2880u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 397u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 19;
L_0034EFDC:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0034EFE8:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EF7Cu | kUnwind; return; } goto L_0034EF7C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_0034F004:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034F020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034F040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 388u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 397u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_0034F080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), 0u);  if (t) { goto L_0034F214; } }
L_0034F080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[3].w[0] + 5072u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 5073u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[11], c.r[3].w[0] + 5076u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], c.r[3].w[0] + 5080u);
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[9], c.r[3].w[0] + 5084u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[8], c.r[3].w[0] + 5088u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[7], c.r[3].w[0] + 5094u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[3].w[0] + 5092u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[3].w[0] + 5096u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 5097u);
    set32(c.r[3], c.r[12].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 94;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034F210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F200u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0034F200u) [[unlikely]] return; }
L_0034F200:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 4;
L_0034F210:
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 1;
L_0034F214:
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[3].w[0] + 5168u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 5172u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[8], c.r[3].w[0] + 5176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[7], c.r[3].w[0] + 5180u);
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[3].w[0] + 5184u);
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] + 5188u);
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 77u)));
    c.budget -= 65;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034F320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034F344; } }
L_0034F320:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F334u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034F334u) [[unlikely]] return; }
L_0034F334:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F340u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0034F340u) [[unlikely]] return; }
L_0034F340:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034F344:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034F360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 392u)));
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 27352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F398u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034F398u) [[unlikely]] return; }
L_0034F398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034F3C0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034F3BC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0034F3BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034F3C0:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034F3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0034F40C; } }
    st8((c.r[5].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0034F40C:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 77u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 192u);  if (t) { goto L_0034F474; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F460u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034F460u) [[unlikely]] return; }
L_0034F460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F468u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034F468u) [[unlikely]] return; }
L_0034F468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034F488; } }
    set32(c.r[4], c.r[7].w[0] + 192u);
    c.budget -= 1;
L_0034F474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F47Cu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034F47Cu) [[unlikely]] return; }
L_0034F47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F484u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034F484u) [[unlikely]] return; }
L_0034F484:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034F488:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034F4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034F4B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0034F4C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 394u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0034F62C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19464u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[7], c.r[2].w[0] + 5216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 73u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 5312u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[8].w[0] - 118u);
    set32(c.r[8], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], c.r[28].w[0] - 27348u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 5264u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F57Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0034F57Cu) [[unlikely]] return; }
L_0034F57C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F588u); st8((c.r[28].w[0] - 27345u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0034F588u) [[unlikely]] return; }
L_0034F588:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F598u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0034F598u) [[unlikely]] return; }
L_0034F598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5A0u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0034F5A0u) [[unlikely]] return; }
L_0034F5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5A8u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0034F5A8u) [[unlikely]] return; }
L_0034F5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5B0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0034F5B0u) [[unlikely]] return; }
L_0034F5B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    set32(c.r[2], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034F5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5C8u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0034F5C8u) [[unlikely]] return; }
L_0034F5C8:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5D8u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0034F5D8u) [[unlikely]] return; }
L_0034F5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5E0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0034F5E0u) [[unlikely]] return; }
L_0034F5E0:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 73u));
    set32(c.r[2], 0u + 120u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034F60C; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0034F614; } }
L_0034F60C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0034F614:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F62Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0034F62Cu) [[unlikely]] return; }
L_0034F62C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0034F640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 13600u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[28].w[0] - 25180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    set32(c.r[6], 0u + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F664u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0034F664u) [[unlikely]] return; }
L_0034F664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 13664u);
    set32(c.r[6], 0u + 8192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F678u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0034F678u) [[unlikely]] return; }
L_0034F678:
    set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034F690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F68Cu);  if (depth < kMaxDepth) unit_0008(c, 313u, depth + 1u); else { c.pc = 0x00123510u; return; } if (c.pc != 0x0034F68Cu) [[unlikely]] return; }
L_0034F68C:
    st32((c.r[28].w[0] - 26840u), 0u);
    c.budget -= 1;
L_0034F690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F698u);  if (depth < kMaxDepth) unit_0093(c, 251u, depth + 1u); else { c.pc = 0x0034F7D0u; return; } if (c.pc != 0x0034F698u) [[unlikely]] return; }
L_0034F698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6A0u);  if (depth < kMaxDepth) unit_0093(c, 252u, depth + 1u); else { c.pc = 0x0034F7E0u; return; } if (c.pc != 0x0034F6A0u) [[unlikely]] return; }
L_0034F6A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0034F714; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 13664u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    set32(c.r[2], c.r[2].w[0] + 5344u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F714u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034F714u) [[unlikely]] return; }
L_0034F714:
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 13600u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[28].w[0] - 25180u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25180u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034F75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034F7C0; } }
L_0034F75C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 13664u);
    set32(c.r[6], 0u + 8192u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F784u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0034F784u) [[unlikely]] return; }
L_0034F784:
    set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034F79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F798u);  if (depth < kMaxDepth) unit_0008(c, 313u, depth + 1u); else { c.pc = 0x00123510u; return; } if (c.pc != 0x0034F798u) [[unlikely]] return; }
L_0034F798:
    st32((c.r[28].w[0] - 26840u), 0u);
    c.budget -= 1;
L_0034F79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7A4u);  if (depth < kMaxDepth) unit_0093(c, 251u, depth + 1u); else { c.pc = 0x0034F7D0u; return; } if (c.pc != 0x0034F7A4u) [[unlikely]] return; }
L_0034F7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7ACu);  if (depth < kMaxDepth) unit_0093(c, 252u, depth + 1u); else { c.pc = 0x0034F7E0u; return; } if (c.pc != 0x0034F7ACu) [[unlikely]] return; }
L_0034F7AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0034F7C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034F7D0:
    st32((c.r[28].w[0] - 25184u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25188u), 0u);  c.pc = t; return; }
L_0034F7E0:
    st32((c.r[28].w[0] - 25192u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25196u), 0u);  c.pc = t; return; }
L_0034F7F0:
    set32(c.r[3], 0u + 2u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 88u), c.r[11].d[0]);  if (t) { goto L_0034F828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0034F834; } }
L_0034F828:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_0034F834:
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 13088u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0034F878; } }
L_0034F850:
    set32(c.r[9], ld32((c.r[28].w[0] - 25184u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[5], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st32((c.r[28].w[0] - 25184u), c.r[2].w[0]);
    c.budget -= 10;
L_0034F878:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F850u | kUnwind; return; } goto L_0034F850; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F890u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0094(c, 48u, depth + 1u); else { c.pc = 0x00350470u; return; } if (c.pc != 0x0034F890u) [[unlikely]] return; }
L_0034F890:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0034F8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[3].w[0] + 12576u);
    set32(c.r[7], ld32((c.r[28].w[0] - 25192u)));
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] + 12576u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st32((c.r[28].w[0] - 25192u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 25192u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25192u), c.r[5].w[0]);  if (t) { goto L_0034F920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0034F92C; } }
L_0034F920:
    set32(c.r[3], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.budget -= 3;
L_0034F92C:
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] + 12576u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0034F970; } }
L_0034F948:
    set32(c.r[9], ld32((c.r[28].w[0] - 25192u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[5], ld32((c.r[6].w[0] - 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st32((c.r[28].w[0] - 25192u), c.r[3].w[0]);
    c.budget -= 10;
L_0034F970:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F948u | kUnwind; return; } goto L_0034F948; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034F990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 13088u);  if (t) { goto L_0034F9E8; } }
L_0034F9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25188u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25188u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st32((c.r[28].w[0] - 25188u), c.r[3].w[0]);
    c.budget -= 12;
L_0034F9E8:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034F9B8u | kUnwind; return; } goto L_0034F9B8; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0034FB1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 27760u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034FA20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA28u) [[unlikely]] return; }
L_0034FA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA38u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA38u) [[unlikely]] return; }
L_0034FA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FA40:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA4Cu); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA4Cu) [[unlikely]] return; }
L_0034FA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FA54:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA64u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA64u) [[unlikely]] return; }
L_0034FA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FA6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FA80u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FA80u) [[unlikely]] return; }
L_0034FA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FA88:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAA0u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FAA0u) [[unlikely]] return; }
L_0034FAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FAA8:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAC4u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FAC4u) [[unlikely]] return; }
L_0034FAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FACC:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FAECu); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FAECu) [[unlikely]] return; }
L_0034FAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FB18; } }
L_0034FAF4:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB18u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FB18u) [[unlikely]] return; }
L_0034FB18:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0034FB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB24u);  if (depth < kMaxDepth) unit_0094(c, 49u, depth + 1u); else { c.pc = 0x00350500u; return; } if (c.pc != 0x0034FB24u) [[unlikely]] return; }
L_0034FB24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034FB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0034FCF8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0034FB50:
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] & 127ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 12576u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[4].w[0] + 12576u);
    st32((c.r[28].w[0] - 25196u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25196u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    st32((c.r[28].w[0] - 25196u), c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 25196u)));
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0034FBD8; } }
    set32(c.r[10], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[4].w[0] + 12576u);
    c.budget -= 4;
L_0034FBB0:
    set32(c.r[4], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[4].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FBB0u | kUnwind; return; } goto L_0034FBB0; } }
L_0034FBD8:
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25196u), c.r[9].w[0]);  if (t) { goto L_0034FCF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27808u);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0034C000u < 16384u) { entry = entries_0093[(t - 0x0034C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034FC00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC08u) [[unlikely]] return; }
L_0034FC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25192u)));  if (t) { goto L_0034FCFC; } }
L_0034FC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC18u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC18u) [[unlikely]] return; }
L_0034FC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FC20:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC2Cu); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC2Cu) [[unlikely]] return; }
L_0034FC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FC34:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC44u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC44u) [[unlikely]] return; }
L_0034FC44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FC4C:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC60u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC60u) [[unlikely]] return; }
L_0034FC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FC68:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC80u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FC80u) [[unlikely]] return; }
L_0034FC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FC88:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCA4u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FCA4u) [[unlikely]] return; }
L_0034FCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FCAC:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCCCu); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FCCCu) [[unlikely]] return; }
L_0034FCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034FCF8; } }
L_0034FCD4:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCF8u); set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034FCF8u) [[unlikely]] return; }
L_0034FCF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25192u)));
    c.budget -= 1;
L_0034FCFC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FB50u | kUnwind; return; } goto L_0034FB50; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034FD20:
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_0034FD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034FD90; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0034FD64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0034FDD0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0034FD64:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD70u); set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0008(c, 302u, depth + 1u); else { c.pc = 0x001233F0u; return; } if (c.pc != 0x0034FD70u) [[unlikely]] return; }
L_0034FD70:
    st32((c.r[28].w[0] - 26840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD7Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 392u, depth + 1u); else { c.pc = 0x00123D18u; return; } if (c.pc != 0x0034FD7Cu) [[unlikely]] return; }
L_0034FD7C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD90u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0008(c, 364u, depth + 1u); else { c.pc = 0x001239E8u; return; } if (c.pc != 0x0034FD90u) [[unlikely]] return; }
L_0034FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD98u); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 400u, depth + 1u); else { c.pc = 0x00123DF0u; return; } if (c.pc != 0x0034FD98u) [[unlikely]] return; }
L_0034FD98:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0034FDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDACu); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 313u, depth + 1u); else { c.pc = 0x00123510u; return; } if (c.pc != 0x0034FDACu) [[unlikely]] return; }
L_0034FDAC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25180u)));
    st32((c.r[28].w[0] - 26840u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDCCu); st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 49u, depth + 1u); else { c.pc = 0x00350500u; return; } if (c.pc != 0x0034FDCCu) [[unlikely]] return; }
L_0034FDCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0034FDD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034FDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034FE80; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0034FE14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0094(c, 8u, depth); } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0034FE14:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034FE3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0034FE3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 302u, depth + 1u); else { c.pc = 0x001233F0u; return; } if (c.pc != 0x0034FE48u) [[unlikely]] return; }
L_0034FE48:
    st32((c.r[28].w[0] - 26840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE54u); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 392u, depth + 1u); else { c.pc = 0x00123D18u; return; } if (c.pc != 0x0034FE54u) [[unlikely]] return; }
L_0034FE54:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 17536u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 364u, depth + 1u); else { c.pc = 0x001239E8u; return; } if (c.pc != 0x0034FE80u) [[unlikely]] return; }
L_0034FE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE88u); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 400u, depth + 1u); else { c.pc = 0x00123DF0u; return; } if (c.pc != 0x0034FE88u) [[unlikely]] return; }
L_0034FE88:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0094(c, 7u, depth); } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 128ull;  if (t) { goto L_0034FEC8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEB4u); c.r[4].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_00A6(c, 175u, depth + 1u); else { c.pc = 0x0039A610u; return; } if (c.pc != 0x0034FEB4u) [[unlikely]] return; }
L_0034FEB4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0034FEEC; } }
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 1;
L_0034FEC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FEEC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEE0u); c.r[4].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_00A6(c, 171u, depth + 1u); else { c.pc = 0x0039A560u; return; } if (c.pc != 0x0034FEE0u) [[unlikely]] return; }
L_0034FEE0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0034FEEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 2048u);
    set32(c.r[3], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0034FF2C; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 17600u);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0034FF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034FF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF50u); set32(c.r[4], ld32((c.r[28].w[0] - 26840u)));  if (depth < kMaxDepth) unit_0008(c, 313u, depth + 1u); else { c.pc = 0x00123510u; return; } if (c.pc != 0x0034FF50u) [[unlikely]] return; }
L_0034FF50:
    set32(c.r[5], ld32((c.r[28].w[0] - 25180u)));
    st32((c.r[28].w[0] - 26840u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF70u); st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 49u, depth + 1u); else { c.pc = 0x00350500u; return; } if (c.pc != 0x0034FF70u) [[unlikely]] return; }
L_0034FF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0094(c, 7u, depth); } }
L_0034FF78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 17536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0034FFDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034FFB8; } }
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0034FFB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034FF2Cu | kUnwind; return; } goto L_0034FF2C; } }
L_0034FFDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0094(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0094(c, 1u, depth);
}

}
