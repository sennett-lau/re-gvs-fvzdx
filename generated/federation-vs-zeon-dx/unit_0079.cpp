#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0079[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0,
    0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114,
    0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    137, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180,
    0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0,
    198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0,
    219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0,
    233, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288,
    0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296,
    0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304,
    0, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0,
    343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0079(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E4000;
    case 2u: goto L_002E4030;
    case 3u: goto L_002E40E4;
    case 4u: goto L_002E4130;
    case 5u: goto L_002E4148;
    case 6u: goto L_002E41B4;
    case 7u: goto L_002E41D4;
    case 8u: goto L_002E4200;
    case 9u: goto L_002E4220;
    case 10u: goto L_002E4240;
    case 11u: goto L_002E4270;
    case 12u: goto L_002E42A8;
    case 13u: goto L_002E42E0;
    case 14u: goto L_002E4304;
    case 15u: goto L_002E43CC;
    case 16u: goto L_002E4458;
    case 17u: goto L_002E4484;
    case 18u: goto L_002E44C8;
    case 19u: goto L_002E44F0;
    case 20u: goto L_002E456C;
    case 21u: goto L_002E4590;
    case 22u: goto L_002E462C;
    case 23u: goto L_002E464C;
    case 24u: goto L_002E4670;
    case 25u: goto L_002E4690;
    case 26u: goto L_002E46B0;
    case 27u: goto L_002E46D0;
    case 28u: goto L_002E46EC;
    case 29u: goto L_002E4708;
    case 30u: goto L_002E4720;
    case 31u: goto L_002E4730;
    case 32u: goto L_002E4740;
    case 33u: goto L_002E4758;
    case 34u: goto L_002E4784;
    case 35u: goto L_002E47AC;
    case 36u: goto L_002E47BC;
    case 37u: goto L_002E47D0;
    case 38u: goto L_002E47F4;
    case 39u: goto L_002E4868;
    case 40u: goto L_002E4880;
    case 41u: goto L_002E48B0;
    case 42u: goto L_002E48F4;
    case 43u: goto L_002E4910;
    case 44u: goto L_002E4918;
    case 45u: goto L_002E4930;
    case 46u: goto L_002E4950;
    case 47u: goto L_002E49B4;
    case 48u: goto L_002E49BC;
    case 49u: goto L_002E49D8;
    case 50u: goto L_002E49E0;
    case 51u: goto L_002E49F0;
    case 52u: goto L_002E49F8;
    case 53u: goto L_002E4A00;
    case 54u: goto L_002E4A40;
    case 55u: goto L_002E4A74;
    case 56u: goto L_002E4A98;
    case 57u: goto L_002E4AD0;
    case 58u: goto L_002E4B20;
    case 59u: goto L_002E4B34;
    case 60u: goto L_002E4B6C;
    case 61u: goto L_002E4B88;
    case 62u: goto L_002E4BA0;
    case 63u: goto L_002E4BE8;
    case 64u: goto L_002E4BF8;
    case 65u: goto L_002E4C08;
    case 66u: goto L_002E4C14;
    case 67u: goto L_002E4C64;
    case 68u: goto L_002E4CCC;
    case 69u: goto L_002E4CD4;
    case 70u: goto L_002E4DD0;
    case 71u: goto L_002E4E40;
    case 72u: goto L_002E4E8C;
    case 73u: goto L_002E4E98;
    case 74u: goto L_002E4EA4;
    case 75u: goto L_002E4F10;
    case 76u: goto L_002E4F20;
    case 77u: goto L_002E4F40;
    case 78u: goto L_002E4F50;
    case 79u: goto L_002E5040;
    case 80u: goto L_002E5068;
    case 81u: goto L_002E50B0;
    case 82u: goto L_002E50E8;
    case 83u: goto L_002E50FC;
    case 84u: goto L_002E5108;
    case 85u: goto L_002E5120;
    case 86u: goto L_002E5140;
    case 87u: goto L_002E5188;
    case 88u: goto L_002E51A0;
    case 89u: goto L_002E51D0;
    case 90u: goto L_002E5250;
    case 91u: goto L_002E5370;
    case 92u: goto L_002E53B0;
    case 93u: goto L_002E53C0;
    case 94u: goto L_002E53EC;
    case 95u: goto L_002E53F4;
    case 96u: goto L_002E5404;
    case 97u: goto L_002E540C;
    case 98u: goto L_002E5414;
    case 99u: goto L_002E5430;
    case 100u: goto L_002E5458;
    case 101u: goto L_002E5498;
    case 102u: goto L_002E54B0;
    case 103u: goto L_002E54D0;
    case 104u: goto L_002E5500;
    case 105u: goto L_002E5560;
    case 106u: goto L_002E55B0;
    case 107u: goto L_002E55E0;
    case 108u: goto L_002E5638;
    case 109u: goto L_002E5650;
    case 110u: goto L_002E56AC;
    case 111u: goto L_002E5700;
    case 112u: goto L_002E5720;
    case 113u: goto L_002E5774;
    case 114u: goto L_002E577C;
    case 115u: goto L_002E5784;
    case 116u: goto L_002E579C;
    case 117u: goto L_002E57B8;
    case 118u: goto L_002E57C0;
    case 119u: goto L_002E57C8;
    case 120u: goto L_002E57D0;
    case 121u: goto L_002E57F0;
    case 122u: goto L_002E587C;
    case 123u: goto L_002E5920;
    case 124u: goto L_002E5980;
    case 125u: goto L_002E5990;
    case 126u: goto L_002E59B0;
    case 127u: goto L_002E59CC;
    case 128u: goto L_002E59D4;
    case 129u: goto L_002E59DC;
    case 130u: goto L_002E59E8;
    case 131u: goto L_002E5A00;
    case 132u: goto L_002E5A20;
    case 133u: goto L_002E5A3C;
    case 134u: goto L_002E5A48;
    case 135u: goto L_002E5A60;
    case 136u: goto L_002E5A78;
    case 137u: goto L_002E5A80;
    case 138u: goto L_002E5A88;
    case 139u: goto L_002E5A90;
    case 140u: goto L_002E5A98;
    case 141u: goto L_002E5AA4;
    case 142u: goto L_002E5AC0;
    case 143u: goto L_002E5AF4;
    case 144u: goto L_002E5B48;
    case 145u: goto L_002E5B70;
    case 146u: goto L_002E5B90;
    case 147u: goto L_002E5BB0;
    case 148u: goto L_002E5CA0;
    case 149u: goto L_002E5CC8;
    case 150u: goto L_002E5CE0;
    case 151u: goto L_002E5D50;
    case 152u: goto L_002E5D5C;
    case 153u: goto L_002E5D70;
    case 154u: goto L_002E5DAC;
    case 155u: goto L_002E5DC0;
    case 156u: goto L_002E5DFC;
    case 157u: goto L_002E5EA0;
    case 158u: goto L_002E5EB0;
    case 159u: goto L_002E5EC0;
    case 160u: goto L_002E5F40;
    case 161u: goto L_002E5F7C;
    case 162u: goto L_002E5FBC;
    case 163u: goto L_002E5FD0;
    case 164u: goto L_002E6088;
    case 165u: goto L_002E60A0;
    case 166u: goto L_002E611C;
    case 167u: goto L_002E6150;
    case 168u: goto L_002E6160;
    case 169u: goto L_002E61AC;
    case 170u: goto L_002E61C4;
    case 171u: goto L_002E61D4;
    case 172u: goto L_002E61DC;
    case 173u: goto L_002E61EC;
    case 174u: goto L_002E61F4;
    case 175u: goto L_002E6220;
    case 176u: goto L_002E624C;
    case 177u: goto L_002E6254;
    case 178u: goto L_002E625C;
    case 179u: goto L_002E6274;
    case 180u: goto L_002E627C;
    case 181u: goto L_002E6290;
    case 182u: goto L_002E62A0;
    case 183u: goto L_002E62D8;
    case 184u: goto L_002E6334;
    case 185u: goto L_002E6358;
    case 186u: goto L_002E6368;
    case 187u: goto L_002E6380;
    case 188u: goto L_002E63A0;
    case 189u: goto L_002E64C4;
    case 190u: goto L_002E64E4;
    case 191u: goto L_002E6500;
    case 192u: goto L_002E6520;
    case 193u: goto L_002E6534;
    case 194u: goto L_002E6540;
    case 195u: goto L_002E654C;
    case 196u: goto L_002E6570;
    case 197u: goto L_002E6578;
    case 198u: goto L_002E6580;
    case 199u: goto L_002E6588;
    case 200u: goto L_002E6590;
    case 201u: goto L_002E6598;
    case 202u: goto L_002E65A8;
    case 203u: goto L_002E65B8;
    case 204u: goto L_002E65F8;
    case 205u: goto L_002E6608;
    case 206u: goto L_002E6610;
    case 207u: goto L_002E661C;
    case 208u: goto L_002E662C;
    case 209u: goto L_002E664C;
    case 210u: goto L_002E6670;
    case 211u: goto L_002E66EC;
    case 212u: goto L_002E66FC;
    case 213u: goto L_002E67B4;
    case 214u: goto L_002E67D0;
    case 215u: goto L_002E67D8;
    case 216u: goto L_002E67E0;
    case 217u: goto L_002E67F0;
    case 218u: goto L_002E67F8;
    case 219u: goto L_002E6800;
    case 220u: goto L_002E6810;
    case 221u: goto L_002E6818;
    case 222u: goto L_002E6820;
    case 223u: goto L_002E6838;
    case 224u: goto L_002E6874;
    case 225u: goto L_002E688C;
    case 226u: goto L_002E6894;
    case 227u: goto L_002E69D0;
    case 228u: goto L_002E69F0;
    case 229u: goto L_002E6A38;
    case 230u: goto L_002E6AE0;
    case 231u: goto L_002E6AE8;
    case 232u: goto L_002E6AF0;
    case 233u: goto L_002E6B00;
    case 234u: goto L_002E6B08;
    case 235u: goto L_002E6B10;
    case 236u: goto L_002E6B20;
    case 237u: goto L_002E6B28;
    case 238u: goto L_002E6B30;
    case 239u: goto L_002E6BB0;
    case 240u: goto L_002E6C00;
    case 241u: goto L_002E6C10;
    case 242u: goto L_002E6C4C;
    case 243u: goto L_002E6C5C;
    case 244u: goto L_002E6C6C;
    case 245u: goto L_002E6C78;
    case 246u: goto L_002E6C84;
    case 247u: goto L_002E6C94;
    case 248u: goto L_002E6C9C;
    case 249u: goto L_002E6CAC;
    case 250u: goto L_002E6CB4;
    case 251u: goto L_002E6D08;
    case 252u: goto L_002E6D48;
    case 253u: goto L_002E6D60;
    case 254u: goto L_002E6E28;
    case 255u: goto L_002E6E38;
    case 256u: goto L_002E6E44;
    case 257u: goto L_002E6E50;
    case 258u: goto L_002E6E60;
    case 259u: goto L_002E6E80;
    case 260u: goto L_002E6ED8;
    case 261u: goto L_002E6EE8;
    case 262u: goto L_002E6F50;
    case 263u: goto L_002E6FD0;
    case 264u: goto L_002E7008;
    case 265u: goto L_002E7080;
    case 266u: goto L_002E708C;
    case 267u: goto L_002E709C;
    case 268u: goto L_002E70C0;
    case 269u: goto L_002E7118;
    case 270u: goto L_002E7124;
    case 271u: goto L_002E7188;
    case 272u: goto L_002E7194;
    case 273u: goto L_002E71B8;
    case 274u: goto L_002E71E0;
    case 275u: goto L_002E7200;
    case 276u: goto L_002E72A8;
    case 277u: goto L_002E72C8;
    case 278u: goto L_002E72E4;
    case 279u: goto L_002E7304;
    case 280u: goto L_002E7318;
    case 281u: goto L_002E7324;
    case 282u: goto L_002E7330;
    case 283u: goto L_002E7354;
    case 284u: goto L_002E735C;
    case 285u: goto L_002E7364;
    case 286u: goto L_002E736C;
    case 287u: goto L_002E7374;
    case 288u: goto L_002E737C;
    case 289u: goto L_002E738C;
    case 290u: goto L_002E739C;
    case 291u: goto L_002E73DC;
    case 292u: goto L_002E73EC;
    case 293u: goto L_002E73F4;
    case 294u: goto L_002E740C;
    case 295u: goto L_002E7468;
    case 296u: goto L_002E747C;
    case 297u: goto L_002E748C;
    case 298u: goto L_002E7498;
    case 299u: goto L_002E74B0;
    case 300u: goto L_002E752C;
    case 301u: goto L_002E75D0;
    case 302u: goto L_002E75EC;
    case 303u: goto L_002E75F4;
    case 304u: goto L_002E75FC;
    case 305u: goto L_002E760C;
    case 306u: goto L_002E7614;
    case 307u: goto L_002E761C;
    case 308u: goto L_002E762C;
    case 309u: goto L_002E7634;
    case 310u: goto L_002E763C;
    case 311u: goto L_002E765C;
    case 312u: goto L_002E7698;
    case 313u: goto L_002E76B8;
    case 314u: goto L_002E76CC;
    case 315u: goto L_002E7758;
    case 316u: goto L_002E77D8;
    case 317u: goto L_002E77E8;
    case 318u: goto L_002E77F0;
    case 319u: goto L_002E7838;
    case 320u: goto L_002E7858;
    case 321u: goto L_002E786C;
    case 322u: goto L_002E78A0;
    case 323u: goto L_002E78C0;
    case 324u: goto L_002E79A8;
    case 325u: goto L_002E79B0;
    case 326u: goto L_002E79B8;
    case 327u: goto L_002E79C8;
    case 328u: goto L_002E79D0;
    case 329u: goto L_002E79D8;
    case 330u: goto L_002E79E8;
    case 331u: goto L_002E79F0;
    case 332u: goto L_002E79F8;
    case 333u: goto L_002E7A80;
    case 334u: goto L_002E7A90;
    case 335u: goto L_002E7AA0;
    case 336u: goto L_002E7B28;
    case 337u: goto L_002E7B30;
    case 338u: goto L_002E7B40;
    case 339u: goto L_002E7B50;
    case 340u: goto L_002E7B5C;
    case 341u: goto L_002E7B68;
    case 342u: goto L_002E7B78;
    case 343u: goto L_002E7B80;
    case 344u: goto L_002E7B90;
    case 345u: goto L_002E7B98;
    case 346u: goto L_002E7C08;
    case 347u: goto L_002E7C34;
    case 348u: goto L_002E7C50;
    case 349u: goto L_002E7D20;
    case 350u: goto L_002E7D30;
    case 351u: goto L_002E7D38;
    case 352u: goto L_002E7D54;
    case 353u: goto L_002E7D68;
    case 354u: goto L_002E7D78;
    case 355u: goto L_002E7D90;
    case 356u: goto L_002E7DE4;
    case 357u: goto L_002E7DF4;
    case 358u: goto L_002E7E30;
    case 359u: goto L_002E7EA8;
    case 360u: goto L_002E7EB8;
    case 361u: goto L_002E7EC4;
    case 362u: goto L_002E7ECC;
    case 363u: goto L_002E7ED8;
    case 364u: goto L_002E7EE0;
    case 365u: goto L_002E7EE8;
    case 366u: goto L_002E7EF0;
    case 367u: goto L_002E7F1C;
    case 368u: goto L_002E7F34;
    case 369u: goto L_002E7F3C;
    case 370u: goto L_002E7F48;
    case 371u: goto L_002E7F78;
    case 372u: goto L_002E7FA8;
    case 373u: goto L_002E7FC8;
    case 374u: goto L_002E7FDC;
    default: bad_entry(c, 0x002E4000u); return;
    }
L_002E4000:
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E4030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_002E41DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.budget -= 35;
L_002E40E4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 535u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002E414C; }
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4130u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x002E4130u) [[unlikely]] return; }
L_002E4130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4148; } }
L_002E4138:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E4148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4148u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 134u, depth + 1u); else { c.pc = 0x00265FB0u; return; } if (c.pc != 0x002E4148u) [[unlikely]] return; }
L_002E4148:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002E414C:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E40E4u | kUnwind; return; } goto L_002E40E4; } }
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E4200; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E41B4u); st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E41B4u) [[unlikely]] return; }
L_002E41B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E4200; } }
    c.r[5].d[0] = c.r[4].d[0] & 2047ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E41D4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 47u, depth + 1u); else { c.pc = 0x00240870u; return; } if (c.pc != 0x002E41D4u) [[unlikely]] return; }
L_002E41D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E4204; } }
L_002E41DC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4200; } }
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4200u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x002E4200u) [[unlikely]] return; }
L_002E4200:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E4204:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E4220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E4248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4240u);  if (depth < kMaxDepth) unit_0078(c, 353u, depth + 1u); else { c.pc = 0x002E3C10u; return; } if (c.pc != 0x002E4240u) [[unlikely]] return; }
L_002E4240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002E42D4; } }
L_002E4248:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4270u); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E4270u) [[unlikely]] return; }
L_002E4270:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E42A8u); st32((c.r[16].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E42A8u) [[unlikely]] return; }
L_002E42A8:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 22864u);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 11;
L_002E42D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E42E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E430C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4304u);  if (depth < kMaxDepth) unit_0078(c, 355u, depth + 1u); else { c.pc = 0x002E3CA0u; return; } if (c.pc != 0x002E4304u) [[unlikely]] return; }
L_002E4304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002E44D8; } }
L_002E430C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002E44D0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E43CCu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002E43CCu) [[unlikely]] return; }
L_002E43CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E4440; } }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E4440; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 14;
L_002E4440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002E447C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4458u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 103u, depth + 1u); else { c.pc = 0x001B56C0u; return; } if (c.pc != 0x002E4458u) [[unlikely]] return; }
L_002E4458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E44AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_002E44AC; } }
L_002E447C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4484u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E4484u) [[unlikely]] return; }
L_002E4484:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002E44AC; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E44AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E44D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E44C8u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E44C8u) [[unlikely]] return; }
L_002E44C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E44D4; } }
L_002E44D0:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E44D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E44D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E44F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E4540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002E454C; } }
L_002E4540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_002E454C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22864u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E456Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E456Cu) [[unlikely]] return; }
L_002E456C:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + 48u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E4590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002E4654; } }
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E45FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 91u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
L_002E45FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E465C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E462Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E462Cu) [[unlikely]] return; }
L_002E462C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E465C; } }
    c.r[5].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E464Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 47u, depth + 1u); else { c.pc = 0x00240870u; return; } if (c.pc != 0x002E464Cu) [[unlikely]] return; }
L_002E464C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002E4660; } }
L_002E4654:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E465C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E4660:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E469C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4690u);  if (depth < kMaxDepth) unit_0078(c, 361u, depth + 1u); else { c.pc = 0x002E3E30u; return; } if (c.pc != 0x002E4690u) [[unlikely]] return; }
L_002E4690:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E46B8; } }
L_002E469C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E46B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E46B0u);  if (depth < kMaxDepth) unit_0079(c, 19u, depth + 1u); else { c.pc = 0x002E44F0u; return; } if (c.pc != 0x002E46B0u) [[unlikely]] return; }
L_002E46B0:
    set32(c.r[3], 0u + 32u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E46B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E46D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E46F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E46ECu);  if (depth < kMaxDepth) unit_0078(c, 363u, depth + 1u); else { c.pc = 0x002E3EB0u; return; } if (c.pc != 0x002E46ECu) [[unlikely]] return; }
L_002E46EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E470C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E46F8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E4708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4708u);  if (depth < kMaxDepth) unit_0079(c, 21u, depth + 1u); else { c.pc = 0x002E4590u; return; } if (c.pc != 0x002E4708u) [[unlikely]] return; }
L_002E4708:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E470C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E4720:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E4730:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E4740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4758u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001B4D00u; return; } if (c.pc != 0x002E4758u) [[unlikely]] return; }
L_002E4758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002E4774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_002E477C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E4774:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 2;
L_002E477C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4784u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E4784u) [[unlikely]] return; }
L_002E4784:
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E47B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47ACu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002E47ACu) [[unlikely]] return; }
L_002E47AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002E47C0; } }
L_002E47B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47BCu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0013CE00u; return; } if (c.pc != 0x002E47BCu) [[unlikely]] return; }
L_002E47BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E47C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E47D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E47F4u) [[unlikely]] return; }
L_002E47F4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002E486C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[3], c.r[2].w[0] - 12176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 18560u);
    st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4868u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E4868u) [[unlikely]] return; }
L_002E4868:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E486C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22640u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E48B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002E4930; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002E4930; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + 2112u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E48F4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E48F4u) [[unlikely]] return; }
L_002E48F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 22720u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 22716u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4910u); c.f[14] = ld32((c.r[1].w[0] - 22712u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E4910u) [[unlikely]] return; }
L_002E4910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4918u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E4918u) [[unlikely]] return; }
L_002E4918:
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4930u); st32((c.r[17].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0079(c, 46u, depth + 1u); else { c.pc = 0x002E4950u; return; } if (c.pc != 0x002E4930u) [[unlikely]] return; }
L_002E4930:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002E4984; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E4994; } }
L_002E4984:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E4A20; } }
L_002E4994:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E49B4u) [[unlikely]] return; }
L_002E49B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49BCu); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E49BCu) [[unlikely]] return; }
L_002E49BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 22720u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 22716u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49D8u); c.f[14] = ld32((c.r[1].w[0] - 22712u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E49D8u) [[unlikely]] return; }
L_002E49D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E49E0u) [[unlikely]] return; }
L_002E49E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49F0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E49F0u) [[unlikely]] return; }
L_002E49F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49F8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E49F8u) [[unlikely]] return; }
L_002E49F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A00u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E4A00u) [[unlikely]] return; }
L_002E4A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4A20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4A20; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E4A20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A74u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002E4A74u) [[unlikely]] return; }
L_002E4A74:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A98u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002E4A98u) [[unlikely]] return; }
L_002E4A98:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E4AB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E4AB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + 320u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E4B28; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002E4B0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002E4B8C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002E4B0C:
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B20u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 185u, depth + 1u); else { c.pc = 0x0023A220u; return; } if (c.pc != 0x002E4B20u) [[unlikely]] return; }
L_002E4B20:
    set32(c.r[2], 0u + 40u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E4B28:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B34u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4F20u; return; } if (c.pc != 0x002E4B34u) [[unlikely]] return; }
L_002E4B34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4B88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B6Cu); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002E4B6Cu) [[unlikely]] return; }
L_002E4B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E4B88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B88u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002E4B88u) [[unlikely]] return; }
L_002E4B88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E4B8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 320u);  if (t) { goto L_002E4C6C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4BE8u); set32(c.r[4], c.r[18].w[0] + 2112u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E4BE8u) [[unlikely]] return; }
L_002E4BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4BF8u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E4BF8u) [[unlikely]] return; }
L_002E4BF8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C08u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002E4C08u) [[unlikely]] return; }
L_002E4C08:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C14u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002E4C14u) [[unlikely]] return; }
L_002E4C14:
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 8592u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C64u); st32((c.r[16].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00241350u; return; } if (c.pc != 0x002E4C64u) [[unlikely]] return; }
L_002E4C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E4DB4; } }
L_002E4C6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[3].w[0] - 8608u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002E4CE4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4CF4; } }
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4CCCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E4CCCu) [[unlikely]] return; }
L_002E4CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4CD4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 39u, depth + 1u); else { c.pc = 0x002EC490u; return; } if (c.pc != 0x002E4CD4u) [[unlikely]] return; }
L_002E4CD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002E4CF4; } }
L_002E4CE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E4CF4:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 44;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4DB0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E4DB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E4DB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E4DD0:
    set32(c.r[6], c.r[5].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E4E0C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002E4DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4E34; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002E4DF8:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E4E0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4E34; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E4E34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E4E40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E4EB8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 320u);  if (t) { goto L_002E4E84; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E4E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4E8Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 214u, depth + 1u); else { c.pc = 0x0021ED70u; return; } if (c.pc != 0x002E4E8Cu) [[unlikely]] return; }
L_002E4E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[19], c.r[2].w[0] - 22704u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_002E4E98:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4EA4u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002E4EA4u) [[unlikely]] return; }
L_002E4EA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4E98u | kUnwind; return; } goto L_002E4E98; } }
    c.budget -= 1;
L_002E4EB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E4EF0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E4EE4; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E4EF0; } }
L_002E4EE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E4EF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E4F10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E4F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] + 1328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4F40u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002E4F40u) [[unlikely]] return; }
L_002E4F40:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4F50u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026E5D0u; return; } if (c.pc != 0x002E4F50u) [[unlikely]] return; }
L_002E4F50:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].sd[0] < 274ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -273ll ? 1ull : 0ull;  if (t) { goto L_002E4F70; } }
    set32(c.r[3], 0u + 273u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002E4F80; } }
    c.r[1].d[0] = c.r[3].sd[0] < -273ll ? 1ull : 0ull;
    c.budget -= 1;
L_002E4F70:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E4F80; } }
    set32(c.r[3], 0u - 273u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_002E4F80:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 183ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -182ll ? 1ull : 0ull;  if (t) { goto L_002E4FA0; } }
    set32(c.r[3], 0u + 182u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002E4FB0; } }
    c.r[1].d[0] = c.r[3].sd[0] < -182ll ? 1ull : 0ull;
    c.budget -= 1;
L_002E4FA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E4FB0; } }
    set32(c.r[3], 0u - 182u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_002E4FB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7282ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -7281ll ? 1ull : 0ull;  if (t) { goto L_002E4FF0; } }
    set32(c.r[3], 0u + 7281u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_002E5000; } }
    c.r[1].d[0] = c.r[3].sd[0] < -7281ll ? 1ull : 0ull;
    c.budget -= 1;
L_002E4FF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E5000; } }
    set32(c.r[3], 0u - 7281u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_002E5000:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4552ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < -4551ll ? 1ull : 0ull;  if (t) { goto L_002E5020; } }
    set32(c.r[3], 0u + 4551u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_002E5030; } }
    c.r[1].d[0] = c.r[3].sd[0] < -4551ll ? 1ull : 0ull;
    c.budget -= 1;
L_002E5020:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E5030; } }
    set32(c.r[3], 0u - 4551u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_002E5030:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E5040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5068u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E5068u) [[unlikely]] return; }
L_002E5068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E509C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[3].w[0] + 20656u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 11;
L_002E509C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E50B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002E5100; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_002E50F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E50E8u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002E50E8u) [[unlikely]] return; }
L_002E50E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E50FC; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 1;
L_002E50F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E50FCu);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002E50FCu) [[unlikely]] return; }
L_002E50FC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E5100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5108u);  if (depth < kMaxDepth) unit_0080(c, 283u, depth + 1u); else { c.pc = 0x00303A20u; return; } if (c.pc != 0x002E5108u) [[unlikely]] return; }
L_002E5108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E5120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5140u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E5140u) [[unlikely]] return; }
L_002E5140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_002E5188; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 18u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 20896u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 21440u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5188u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E5188u) [[unlikely]] return; }
L_002E5188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E51A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 22592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 320u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E51D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E51EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5248; } }
L_002E51EC:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5248; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E5230; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5248; } }
L_002E5230:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 8192u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 6;
L_002E5248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5250:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002E526C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002E535C; } }
L_002E526C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E52F4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5294; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E535C; } }
L_002E5294:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_002E52C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002E52CC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002E52CC; } }
    set32(c.r[3], 0u + 4096u);
    c.budget -= 1;
L_002E52C8:
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_002E52CC:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 23u));
    set32(c.r[3], 0u + 129u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E5348; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E5348; } }
L_002E52F4:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E535C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002E5328; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002E5348; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), 0u);  if (t) { goto L_002E5348; } }
L_002E5328:
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5348; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E535C; } }
L_002E5348:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E535C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E535C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5370:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 742u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5390; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E53A4; } }
L_002E5390:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E53A4; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E53A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E53B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E53C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[2].w[0] - 22608u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E53ECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002E53ECu) [[unlikely]] return; }
L_002E53EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E53F4u); set32(c.r[4], c.r[16].w[0] + 3264u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E53F4u) [[unlikely]] return; }
L_002E53F4:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5404u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E5404u) [[unlikely]] return; }
L_002E5404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E540Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E540Cu) [[unlikely]] return; }
L_002E540C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5414u); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002E5414u) [[unlikely]] return; }
L_002E5414:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E5430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5458u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E5458u) [[unlikely]] return; }
L_002E5458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_002E5498; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 18u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5498u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E5498u) [[unlikely]] return; }
L_002E5498:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E54B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E54D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 22528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[5].w[0] + 320u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E5500:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002E5518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5550; } }
L_002E5518:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002E5550; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[3].w[0] + 22928u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5550; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_002E5550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5560:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002E5578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E55A4; } }
L_002E5578:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5590; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E55A4; } }
L_002E5590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E55A4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E55A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E55B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 22512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[5].w[0] + 320u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E55E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002E5600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5638; } }
L_002E5600:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002E5638; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5638; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5638u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 109u, depth + 1u); else { c.pc = 0x002E5650u; return; } if (c.pc != 0x002E5638u) [[unlikely]] return; }
L_002E5638:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E5650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[9], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_002E5670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_002E56E8; } }
L_002E5670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_002E56E8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E56C8; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_002E56B4; } }
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E56ACu); mmi::paddub(c.r[5], c.r[9], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 99u, depth + 1u); else { c.pc = 0x002E5430u; return; } if (c.pc != 0x002E56ACu) [[unlikely]] return; }
L_002E56AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E56EC; } }
L_002E56B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E56E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_002E56E8; } }
L_002E56C8:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E56E8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E56E8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_002E56E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E56EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E5700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E5720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 48u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5774u); st32((c.r[4].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E5774u) [[unlikely]] return; }
L_002E5774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E577Cu); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E577Cu) [[unlikely]] return; }
L_002E577C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5784u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E5784u) [[unlikely]] return; }
L_002E5784:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 23136u);
    set32(c.r[4], c.r[17].w[0] + 2624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E579Cu); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E579Cu) [[unlikely]] return; }
L_002E579C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 22560u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 22556u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57B8u); c.f[14] = ld32((c.r[1].w[0] - 22552u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E57B8u) [[unlikely]] return; }
L_002E57B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57C0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E57C0u) [[unlikely]] return; }
L_002E57C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57C8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E57C8u) [[unlikely]] return; }
L_002E57C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 121u, depth + 1u); else { c.pc = 0x002E57F0u; return; } if (c.pc != 0x002E57D0u) [[unlikely]] return; }
L_002E57D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E57F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E5828; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5908; } }
L_002E5828:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E587Cu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E587Cu) [[unlikely]] return; }
L_002E587C:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E58C8; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 9;
L_002E58C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E58F0; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.budget -= 6;
L_002E58F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5908; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E5908:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E5920:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E5964; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E594C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5970; } }
L_002E594C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E5970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E5970; } }
L_002E5964:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E5970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5980:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E5990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59B0u); set32(c.r[4], c.r[16].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E59B0u) [[unlikely]] return; }
L_002E59B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 22576u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 22572u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59CCu); c.f[14] = ld32((c.r[1].w[0] - 22568u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E59CCu) [[unlikely]] return; }
L_002E59CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59D4u); set32(c.r[4], 0u - 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E59D4u) [[unlikely]] return; }
L_002E59D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59DCu); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E59DCu) [[unlikely]] return; }
L_002E59DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002E59E8u) [[unlikely]] return; }
L_002E59E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E5A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A20u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E5A20u) [[unlikely]] return; }
L_002E5A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 22560u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 22556u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A3Cu); c.f[14] = ld32((c.r[1].w[0] - 22552u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E5A3Cu) [[unlikely]] return; }
L_002E5A3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002E5A48u) [[unlikely]] return; }
L_002E5A48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E5A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A78u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E5A78u) [[unlikely]] return; }
L_002E5A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A80u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E5A80u) [[unlikely]] return; }
L_002E5A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A88u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E5A88u) [[unlikely]] return; }
L_002E5A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A90u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E5A90u) [[unlikely]] return; }
L_002E5A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A98u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002E5A98u) [[unlikely]] return; }
L_002E5A98:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5AA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002E5AA4u) [[unlikely]] return; }
L_002E5AA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E5AC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5AF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E5AF4u) [[unlikely]] return; }
L_002E5AF4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E5B70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + 23440u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 25120u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5B48u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E5B48u) [[unlikely]] return; }
L_002E5B48:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5B70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E5B70u) [[unlikely]] return; }
L_002E5B70:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E5B90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E5BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[5].w[0] - 22480u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[5].w[0] - 22224u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], c.r[5].w[0] - 22159u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[5].w[0] - 22158u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[5], 0u + 81u);
    st32((c.r[4].w[0] + 80u), c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 52;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[16].w[0] + 320u);  if (t) { goto L_002E5C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E5C90; } }
L_002E5C88:
    set32(c.r[2], 0u + 16u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E5C90:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5CA0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0047(c, 141u, depth + 1u); else { c.pc = 0x0021DE50u; return; } if (c.pc != 0x002E5CA0u) [[unlikely]] return; }
L_002E5CA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E5CC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E5CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5CC8u); c.r[4].d[0] = ld8((c.r[2].w[0] + 8384u));  if (depth < kMaxDepth) unit_0024(c, 121u, depth + 1u); else { c.pc = 0x00191B10u; return; } if (c.pc != 0x002E5CC8u) [[unlikely]] return; }
L_002E5CC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E5CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E5D2C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5D2C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E5D5C; } }
L_002E5D2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21168u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5D50u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5D50u) [[unlikely]] return; }
L_002E5D50:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5D5Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 168u, depth + 1u); else { c.pc = 0x002E6160u; return; } if (c.pc != 0x002E5D5Cu) [[unlikely]] return; }
L_002E5D5C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E5D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 803u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_002E5DAC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DACu); st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E5DC0u; return; } if (c.pc != 0x002E5DACu) [[unlikely]] return; }
L_002E5DAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E5DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 803u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002E5DEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E5E04; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002E5DEC:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DFCu); st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0079(c, 159u, depth + 1u); else { c.pc = 0x002E5EC0u; return; } if (c.pc != 0x002E5DFCu) [[unlikely]] return; }
L_002E5DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E5EB4; } }
L_002E5E04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002E5E78; } }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E5E8C; } }
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E5E8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E5E78:
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002E5E8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5EA0u);  if (depth < kMaxDepth) unit_0079(c, 163u, depth + 1u); else { c.pc = 0x002E5FD0u; return; } if (c.pc != 0x002E5EA0u) [[unlikely]] return; }
L_002E5EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E5EB0; } }
L_002E5EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5EB0u);  if (depth < kMaxDepth) unit_0079(c, 160u, depth + 1u); else { c.pc = 0x002E5F40u; return; } if (c.pc != 0x002E5EB0u) [[unlikely]] return; }
L_002E5EB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E5EB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E5EC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5F24; } }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5F34; } }
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E5F34; } }
L_002E5F24:
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E5F34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E5F40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 803u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_002E5F68; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E5F84; } }
L_002E5F68:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F7Cu); st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0079(c, 159u, depth + 1u); else { c.pc = 0x002E5EC0u; return; } if (c.pc != 0x002E5F7Cu) [[unlikely]] return; }
L_002E5F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E5FC0; } }
L_002E5F84:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7744u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E5FA4; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7746u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E5FBC; } }
L_002E5FA4:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7744u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7746u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5FBCu); st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0079(c, 163u, depth + 1u); else { c.pc = 0x002E5FD0u; return; } if (c.pc != 0x002E5FBCu) [[unlikely]] return; }
L_002E5FBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E5FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E5FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7744u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_002E6088; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E601C; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] - 21248u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7746u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_002E603C; } }
L_002E601C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] - 21664u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7746u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 8;
L_002E603C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002E6088; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7744u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7746u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 520u)));
    st32((c.r[4].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 524u)));
    st32((c.r[4].w[0] + 524u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6088u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E6088u) [[unlikely]] return; }
L_002E6088:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E60A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_002E6124; } }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);  goto L_002E60F0; }
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E613C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.budget -= 1;
L_002E60F0:
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E611Cu); st32((c.r[4].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0079(c, 168u, depth + 1u); else { c.pc = 0x002E6160u; return; } if (c.pc != 0x002E611Cu) [[unlikely]] return; }
L_002E611C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E6140; } }
L_002E6124:
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002E613C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E6140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E6150:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E6160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E6208; } }
    st32((c.r[16].w[0] + 160u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 6);  if (t) { goto L_002E61B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61ACu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E61ACu) [[unlikely]] return; }
L_002E61AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_002E61C8; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    c.budget -= 1;
L_002E61B8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E61C4u) [[unlikely]] return; }
L_002E61C4:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_002E61C8:
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61D4u); c.f[13] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E61D4u) [[unlikely]] return; }
L_002E61D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61DCu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E61DCu) [[unlikely]] return; }
L_002E61DC:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61ECu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002E61ECu) [[unlikely]] return; }
L_002E61EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61F4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E61F4u) [[unlikely]] return; }
L_002E61F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E6208; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E6208:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E6220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E6290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E624Cu); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0079(c, 168u, depth + 1u); else { c.pc = 0x002E6160u; return; } if (c.pc != 0x002E624Cu) [[unlikely]] return; }
L_002E624C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6254u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E6254u) [[unlikely]] return; }
L_002E6254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E625Cu); c.f[12] = ld32((c.r[16].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013D010u; return; } if (c.pc != 0x002E625Cu) [[unlikely]] return; }
L_002E625C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6274u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0013D020u; return; } if (c.pc != 0x002E6274u) [[unlikely]] return; }
L_002E6274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E627Cu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002E627Cu) [[unlikely]] return; }
L_002E627C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[13] = ld32((c.r[2].w[0] + 40u));
    c.f[14] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6290u); c.f[12] = ld32((c.r[2].w[0] + 36u));  if (depth < kMaxDepth) unit_000F(c, 49u, depth + 1u); else { c.pc = 0x0013D020u; return; } if (c.pc != 0x002E6290u) [[unlikely]] return; }
L_002E6290:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E62A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002E6360; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E62D8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E62D8u) [[unlikely]] return; }
L_002E62D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E6368; } }
    c.r[3].d[0] = ld64((c.r[28].w[0] - 28496u));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[2].w[0] + 25472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 27664u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6334u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E6334u) [[unlikely]] return; }
L_002E6334:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6358u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E6358u) [[unlikely]] return; }
L_002E6358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002E636C; } }
L_002E6360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6368u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 192u, depth + 1u); else { c.pc = 0x002EDDC0u; return; } if (c.pc != 0x002E6368u) [[unlikely]] return; }
L_002E6368:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E636C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E6380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 8320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E63A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] - 21136u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 74u);
    set32(c.r[3], 0u + 224u);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 48u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 35;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002E6438; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002E6438:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6494; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002E6464; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002E647C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_002E6464:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002E647C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    st8((c.r[18].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 520u), 0u);
    st32((c.r[18].w[0] + 524u), 0u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_002E6494:
    st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E6500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002E64D0; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64C4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E64C4u) [[unlikely]] return; }
L_002E64C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_002E6504; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002E64D0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002E64F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64E4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E64E4u) [[unlikely]] return; }
L_002E64E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6500; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002E64F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6500u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E6500u) [[unlikely]] return; }
L_002E6500:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_002E6504:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E6528; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6520u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E6520u) [[unlikely]] return; }
L_002E6520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002E6538; } }
L_002E6528:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6534u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E6534u) [[unlikely]] return; }
L_002E6534:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E6538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6540u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6540u) [[unlikely]] return; }
L_002E6540:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E654Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E654Cu) [[unlikely]] return; }
L_002E654C:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6570u); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E6570u) [[unlikely]] return; }
L_002E6570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6578u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E6578u) [[unlikely]] return; }
L_002E6578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6580u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6580u) [[unlikely]] return; }
L_002E6580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6588u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E6588u) [[unlikely]] return; }
L_002E6588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6590u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E6590u) [[unlikely]] return; }
L_002E6590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6598u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E6598u) [[unlikely]] return; }
L_002E6598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 8336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65A8u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E65A8u) [[unlikely]] return; }
L_002E65A8:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002E65B8u) [[unlikely]] return; }
L_002E65B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E6644; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6640; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65F8u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E65F8u) [[unlikely]] return; }
L_002E65F8:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6608u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E6608u) [[unlikely]] return; }
L_002E6608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6610u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E6610u) [[unlikely]] return; }
L_002E6610:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E661Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E661Cu) [[unlikely]] return; }
L_002E661C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E662Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002E662Cu) [[unlikely]] return; }
L_002E662C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6640; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 3;
L_002E6640:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002E6644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E664Cu);  if (depth < kMaxDepth) unit_0079(c, 210u, depth + 1u); else { c.pc = 0x002E6670u; return; } if (c.pc != 0x002E664Cu) [[unlikely]] return; }
L_002E664C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E6670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21136u);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 26;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_002E66EC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E66EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66ECu);  if (depth < kMaxDepth) unit_0079(c, 253u, depth + 1u); else { c.pc = 0x002E6D60u; return; } if (c.pc != 0x002E66ECu) [[unlikely]] return; }
L_002E66EC:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002E66FCu) [[unlikely]] return; }
L_002E66FC:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_002E6760; } }
    st32((c.r[19].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002E6760:
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_002E6784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002E6788; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002E6784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002E6788:
    c.f[1] = c.r[2].w[0];
    st32((c.r[19].w[0] + 72u), c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_002E67C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67B4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 259u, depth + 1u); else { c.pc = 0x002E6E80u; return; } if (c.pc != 0x002E67B4u) [[unlikely]] return; }
L_002E67B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E67C0; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E67C0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_002E67C4:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67D0u); set32(c.r[6], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E67D0u) [[unlikely]] return; }
L_002E67D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67D8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E67D8u) [[unlikely]] return; }
L_002E67D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67E0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E67E0u) [[unlikely]] return; }
L_002E67E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 8336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E67F0u) [[unlikely]] return; }
L_002E67F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E67F8u) [[unlikely]] return; }
L_002E67F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6800u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E6800u) [[unlikely]] return; }
L_002E6800:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6810u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E6810u) [[unlikely]] return; }
L_002E6810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6818u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E6818u) [[unlikely]] return; }
L_002E6818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6820u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6820u) [[unlikely]] return; }
L_002E6820:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 575u));
    c.r[2].d[0] = c.r[2].d[0] & 166ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E684C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6838u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E6838u) [[unlikely]] return; }
L_002E6838:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E690C; } }
L_002E684C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6874u); st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002E6874u) [[unlikely]] return; }
L_002E6874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E68BC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8389u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E688Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0047(c, 268u, depth + 1u); else { c.pc = 0x0021FEB0u; return; } if (c.pc != 0x002E688Cu) [[unlikely]] return; }
L_002E688C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6894u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0047(c, 236u, depth + 1u); else { c.pc = 0x0021F240u; return; } if (c.pc != 0x002E6894u) [[unlikely]] return; }
L_002E6894:
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 44u), c.f[0]);  if (t) { goto L_002E68DC; } }
L_002E68BC:
    c.f[3] = ld32((c.r[19].w[0] + 144u));
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[0] = ld32((c.r[19].w[0] + 156u));
    st32((c.r[19].w[0] + 32u), c.f[3]);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002E68DC:
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 116u), c.f[0]);  if (t) { goto L_002E69AC; } }
L_002E690C:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E6994; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44E70000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E6994; } }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E6994; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E6994; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E69B0; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = ld32((c.r[19].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E69AC; } }
L_002E6994:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002E69AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E69B0:
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E69D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E69F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 21136u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A38u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002E6A38u) [[unlikely]] return; }
L_002E6A38:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[18].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002E6A9C; } }
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002E6A9C:
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_002E6AC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002E6AC4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002E6AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002E6AC4:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AE0u); st32((c.r[17].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E6AE0u) [[unlikely]] return; }
L_002E6AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AE8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E6AE8u) [[unlikely]] return; }
L_002E6AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AF0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E6AF0u) [[unlikely]] return; }
L_002E6AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 8336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B00u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E6B00u) [[unlikely]] return; }
L_002E6B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6B08u) [[unlikely]] return; }
L_002E6B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B10u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E6B10u) [[unlikely]] return; }
L_002E6B10:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B20u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E6B20u) [[unlikely]] return; }
L_002E6B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E6B28u) [[unlikely]] return; }
L_002E6B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B30u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6B30u) [[unlikely]] return; }
L_002E6B30:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_002E6B80; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002E6B8C; } }
L_002E6B80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E6B8C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E6BB0:
    c.f[3] = ld32((c.r[4].w[0] + 104u));
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_002E6BF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E6BF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E6C00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E6C10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C4Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E6C4Cu) [[unlikely]] return; }
L_002E6C4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002E6C5Cu) [[unlikely]] return; }
L_002E6C5C:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C6Cu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E6C6Cu) [[unlikely]] return; }
L_002E6C6C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E6C78u) [[unlikely]] return; }
L_002E6C78:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C84u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E6C84u) [[unlikely]] return; }
L_002E6C84:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C94u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E6C94u) [[unlikely]] return; }
L_002E6C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E6C9Cu) [[unlikely]] return; }
L_002E6C9C:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6CACu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002E6CACu) [[unlikely]] return; }
L_002E6CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6CB4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E6CB4u) [[unlikely]] return; }
L_002E6CB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 6128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002E6CE8; } }
L_002E6CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 8304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);
    c.budget -= 4;
L_002E6CE8:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D08u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002E6D08u) [[unlikely]] return; }
L_002E6D08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 34u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D48u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002E6D48u) [[unlikely]] return; }
L_002E6D48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E6D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E6E60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] - 21136u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E6DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E6DEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E6DFC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6DFC; } }
L_002E6DE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E6DEC:
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 520u), 0u);  if (t) { goto L_002E6E60; } }
L_002E6DFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E28u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E6E28u) [[unlikely]] return; }
L_002E6E28:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E38u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E6E38u) [[unlikely]] return; }
L_002E6E38:
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E44u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E6E44u) [[unlikely]] return; }
L_002E6E44:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E50u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E6E50u) [[unlikely]] return; }
L_002E6E50:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E60u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002E6E60u) [[unlikely]] return; }
L_002E6E60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E6E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[16], ld32((c.r[4].w[0] + 520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21136u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[19].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E6F20; } }
    c.f[12] = ld32((c.r[18].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6ED8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002E6ED8u) [[unlikely]] return; }
L_002E6ED8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6EE8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E6EE8u) [[unlikely]] return; }
L_002E6EE8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E6EFC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E6EFC:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002E6F1C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E6F1C:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002E6F20:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E6F50:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_002E6FBC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E6F80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6FB8; } }
L_002E6F80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E6FB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6FB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E6FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 4;
L_002E6FB8:
    c.f[0] = c.f[12];
    c.budget -= 1;
L_002E6FBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002E7094; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7008u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E7008u) [[unlikely]] return; }
L_002E7008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E709C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29152u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7080u); set32(c.r[5], c.r[2].w[0] - 11344u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E7080u) [[unlikely]] return; }
L_002E7080:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E708Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E708Cu) [[unlikely]] return; }
L_002E708C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002E70A0; } }
L_002E7094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E709Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007B(c, 192u, depth + 1u); else { c.pc = 0x002EDDC0u; return; } if (c.pc != 0x002E709Cu) [[unlikely]] return; }
L_002E709C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E70A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E70C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_002E71B0; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
L_002E7118:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7124u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E7124u) [[unlikely]] return; }
L_002E7124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E7198; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st32((c.r[16].w[0] + 28u), c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29152u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7188u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E7188u) [[unlikely]] return; }
L_002E7188:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7194u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E7194u) [[unlikely]] return; }
L_002E7194:
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E7198:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7118u | kUnwind; return; } goto L_002E7118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002E71BC; } }
L_002E71B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71B8u);  if (depth < kMaxDepth) unit_007B(c, 197u, depth + 1u); else { c.pc = 0x002EDEF0u; return; } if (c.pc != 0x002E71B8u) [[unlikely]] return; }
L_002E71B8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E71BC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E71E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 7824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E7200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] - 3952u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[3], 0u + 224u);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 36;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002E72E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002E72B4; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72A8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E72A8u) [[unlikely]] return; }
L_002E72A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_002E72E8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002E72B4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002E72D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72C8u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E72C8u) [[unlikely]] return; }
L_002E72C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E72E4; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002E72D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E72E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72E4u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E72E4u) [[unlikely]] return; }
L_002E72E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002E72E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E730C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7304u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E7304u) [[unlikely]] return; }
L_002E7304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 192u);  if (t) { goto L_002E731C; } }
L_002E730C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7318u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E7318u) [[unlikely]] return; }
L_002E7318:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 1;
L_002E731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7324u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7324u) [[unlikely]] return; }
L_002E7324:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7330u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7330u) [[unlikely]] return; }
L_002E7330:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7354u); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E7354u) [[unlikely]] return; }
L_002E7354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E735Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E735Cu) [[unlikely]] return; }
L_002E735C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7364u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7364u) [[unlikely]] return; }
L_002E7364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E736Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E736Cu) [[unlikely]] return; }
L_002E736C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7374u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E7374u) [[unlikely]] return; }
L_002E7374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E737Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E737Cu) [[unlikely]] return; }
L_002E737C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 7808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E738Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E738Cu) [[unlikely]] return; }
L_002E738C:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E739Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002E739Cu) [[unlikely]] return; }
L_002E739C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E7490; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E748C; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73DCu); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E73DCu) [[unlikely]] return; }
L_002E73DC:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73ECu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E73ECu) [[unlikely]] return; }
L_002E73EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73F4u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E73F4u) [[unlikely]] return; }
L_002E73F4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[2], 0u + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_002E7474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E740Cu); set32(c.r[16], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E740Cu) [[unlikely]] return; }
L_002E740C:
    c.r[3].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 7ull;  goto L_002E7434; }
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002E7454; } }
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 1;
L_002E7434:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 8;
L_002E7454:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 4u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7468u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7468u) [[unlikely]] return; }
L_002E7468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  if (t) { goto L_002E7480; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002E7474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E747Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E747Cu) [[unlikely]] return; }
L_002E747C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_002E7480:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E748Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002E748Cu) [[unlikely]] return; }
L_002E748C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002E7490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7498u);  if (depth < kMaxDepth) unit_0079(c, 299u, depth + 1u); else { c.pc = 0x002E74B0u; return; } if (c.pc != 0x002E7498u) [[unlikely]] return; }
L_002E7498:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E74B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 26;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_002E752C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E752C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E752Cu);  if (depth < kMaxDepth) unit_0079(c, 348u, depth + 1u); else { c.pc = 0x002E7C50u; return; } if (c.pc != 0x002E752Cu) [[unlikely]] return; }
L_002E752C:
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E75BC; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E75BC; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.budget -= 3;
L_002E75BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002E75E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75D0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 355u, depth + 1u); else { c.pc = 0x002E7D90u; return; } if (c.pc != 0x002E75D0u) [[unlikely]] return; }
L_002E75D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E75DC; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E75DC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002E75E0:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75ECu); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E75ECu) [[unlikely]] return; }
L_002E75EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75F4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E75F4u) [[unlikely]] return; }
L_002E75F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75FCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E75FCu) [[unlikely]] return; }
L_002E75FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 7808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E760Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E760Cu) [[unlikely]] return; }
L_002E760C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7614u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7614u) [[unlikely]] return; }
L_002E7614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E761Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E761Cu) [[unlikely]] return; }
L_002E761C:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E762Cu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E762Cu) [[unlikely]] return; }
L_002E762C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7634u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E7634u) [[unlikely]] return; }
L_002E7634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E763Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E763Cu) [[unlikely]] return; }
L_002E763C:
    set32(c.r[18], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002E7780; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E7670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E765Cu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E765Cu) [[unlikely]] return; }
L_002E765C:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E76D4; } }
L_002E7670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7698u); st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002E7698u) [[unlikely]] return; }
L_002E7698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[19].w[0] + 192u);  if (t) { goto L_002E7754; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002E76C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E76B8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_004A(c, 197u, depth + 1u); else { c.pc = 0x0022B140u; return; } if (c.pc != 0x002E76B8u) [[unlikely]] return; }
L_002E76B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7750; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002E76C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E76CCu);  if (depth < kMaxDepth) unit_0047(c, 236u, depth + 1u); else { c.pc = 0x0021F240u; return; } if (c.pc != 0x002E76CCu) [[unlikely]] return; }
L_002E76CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7750; } }
L_002E76D4:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43DB0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E7738; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E7738; } }
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E7738; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E7750; } }
L_002E7738:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002E7750:
    set32(c.r[6], c.r[19].w[0] + 192u);
    c.budget -= 1;
L_002E7754:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002E7758:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7758u | kUnwind; return; } goto L_002E7758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E7870; } }
L_002E7780:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[20], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E77D8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E77D8u) [[unlikely]] return; }
L_002E77D8:
    c.f[14] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E77E8u); c.f[13] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E77E8u) [[unlikely]] return; }
L_002E77E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E77F0u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E77F0u) [[unlikely]] return; }
L_002E77F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E786C; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E7824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E786C; } }
L_002E7824:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7838u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002E7838u) [[unlikely]] return; }
L_002E7838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E786C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002E7864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7858u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_004A(c, 197u, depth + 1u); else { c.pc = 0x0022B140u; return; } if (c.pc != 0x002E7858u) [[unlikely]] return; }
L_002E7858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E786C; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002E7864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E786Cu);  if (depth < kMaxDepth) unit_0047(c, 236u, depth + 1u); else { c.pc = 0x0021F240u; return; } if (c.pc != 0x002E786Cu) [[unlikely]] return; }
L_002E786C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E7870:
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002E78A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E78C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[4] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 3952u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 46;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002E7998; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[2].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_002E799C; } }
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_002E7998:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002E799C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79A8u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E79A8u) [[unlikely]] return; }
L_002E79A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79B0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E79B0u) [[unlikely]] return; }
L_002E79B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E79B8u) [[unlikely]] return; }
L_002E79B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 7808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79C8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E79C8u) [[unlikely]] return; }
L_002E79C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E79D0u) [[unlikely]] return; }
L_002E79D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79D8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E79D8u) [[unlikely]] return; }
L_002E79D8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79E8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E79E8u) [[unlikely]] return; }
L_002E79E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E79F0u) [[unlikely]] return; }
L_002E79F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E79F8u) [[unlikely]] return; }
L_002E79F8:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_002E7A48; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002E7A54; } }
L_002E7A48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E7A54:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E7A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E7A90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E7AA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[19].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    set32(c.r[4], c.r[2].w[0] - 28448u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 68u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002E7B10; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002E7B10:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E7B20; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_002E7B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B28u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E7B28u) [[unlikely]] return; }
L_002E7B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E7B30u) [[unlikely]] return; }
L_002E7B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B40u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002E7B40u) [[unlikely]] return; }
L_002E7B40:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B50u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E7B50u) [[unlikely]] return; }
L_002E7B50:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E7B5Cu) [[unlikely]] return; }
L_002E7B5C:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B68u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E7B68u) [[unlikely]] return; }
L_002E7B68:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E7B78u) [[unlikely]] return; }
L_002E7B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B80u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E7B80u) [[unlikely]] return; }
L_002E7B80:
    c.f[13] = ld32((c.r[19].w[0] + 116u));
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B90u); c.f[12] = ld32((c.r[19].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002E7B90u) [[unlikely]] return; }
L_002E7B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B98u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7B98u) [[unlikely]] return; }
L_002E7B98:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 7840u);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20344u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C08u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002E7C08u) [[unlikely]] return; }
L_002E7C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8032u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C34u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00172FD0u; return; } if (c.pc != 0x002E7C34u) [[unlikely]] return; }
L_002E7C34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002E7C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E7D78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] - 3952u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E7CDC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E7CE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E7CF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E7CF0; } }
L_002E7CDC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E7CE0:
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 520u), 0u);  if (t) { goto L_002E7D78; } }
L_002E7CF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[17].w[0] + 320u);
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D20u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E7D20u) [[unlikely]] return; }
L_002E7D20:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D30u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E7D30u) [[unlikely]] return; }
L_002E7D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D38u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E7D38u) [[unlikely]] return; }
L_002E7D38:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_002E7D60; } }
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D54u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7D54u) [[unlikely]] return; }
L_002E7D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_002E7D6C; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_002E7D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D68u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7D68u) [[unlikely]] return; }
L_002E7D68:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_002E7D6C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002E7D78u) [[unlikely]] return; }
L_002E7D78:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E7D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[16], ld32((c.r[4].w[0] + 520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 3952u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[18].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E7E0C; } }
    c.f[12] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7DE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002E7DE4u) [[unlikely]] return; }
L_002E7DE4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7DF4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E7DF4u) [[unlikely]] return; }
L_002E7DF4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E7E08; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E7E08:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002E7E0C:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E7E30:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { [[clang::musttail]] return unit_007A(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { [[clang::musttail]] return unit_007A(c, 7u, depth); } }
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007A(c, 7u, depth); } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8096u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_002E7EB0; } }
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EA8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E7EA8u) [[unlikely]] return; }
L_002E7EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002E7EBC; } }
L_002E7EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EB8u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E7EB8u) [[unlikely]] return; }
L_002E7EB8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002E7EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EC4u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7EC4u) [[unlikely]] return; }
L_002E7EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7ECCu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E7ECCu) [[unlikely]] return; }
L_002E7ECC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7ED8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7ED8u) [[unlikely]] return; }
L_002E7ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EE0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E7EE0u) [[unlikely]] return; }
L_002E7EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EE8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E7EE8u) [[unlikely]] return; }
L_002E7EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EF0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E7EF0u) [[unlikely]] return; }
L_002E7EF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F1Cu); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E7F1Cu) [[unlikely]] return; }
L_002E7F1C:
    set32(c.r[19], c.r[29].w[0] + 180u);
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[14] = ld32((c.r[18].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F34u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E7F34u) [[unlikely]] return; }
L_002E7F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F3Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E7F3Cu) [[unlikely]] return; }
L_002E7F3C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F48u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E7F48u) [[unlikely]] return; }
L_002E7F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E7F5C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { mmi::paddub(c.r[17], c.r[0], c.r[0]);  goto L_002E7FBC; }
L_002E7F5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_002E7FB8; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002D(c, 42u, depth + 1u); else { c.pc = 0x001B4B60u; return; } if (c.pc != 0x002E7F78u) [[unlikely]] return; }
L_002E7F78:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_002E7FC0; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_002E7FBC; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7FA8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002E7FA8u) [[unlikely]] return; }
L_002E7FA8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];  if (t) { goto L_002E7FBC; } }
L_002E7FB8:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E7FBC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_002E7FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7FC8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002E7FC8u) [[unlikely]] return; }
L_002E7FC8:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7FDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E7FDCu) [[unlikely]] return; }
L_002E7FDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { [[clang::musttail]] return unit_007A(c, 1u, depth); } }
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_007A(c, 1u, depth);
}

}
