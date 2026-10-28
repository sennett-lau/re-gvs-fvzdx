#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A5[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4,
    0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146,
    0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0,
    0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 179, 180, 181,
    182, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0,
    269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
};

void unit_00A5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00394000;
    case 2u: goto L_00394004;
    case 3u: goto L_0039406C;
    case 4u: goto L_0039407C;
    case 5u: goto L_00394084;
    case 6u: goto L_00394094;
    case 7u: goto L_0039409C;
    case 8u: goto L_00394118;
    case 9u: goto L_0039412C;
    case 10u: goto L_00394150;
    case 11u: goto L_003941A0;
    case 12u: goto L_003941B0;
    case 13u: goto L_003941B8;
    case 14u: goto L_003941CC;
    case 15u: goto L_003941D4;
    case 16u: goto L_003941DC;
    case 17u: goto L_003941E0;
    case 18u: goto L_00394284;
    case 19u: goto L_00394298;
    case 20u: goto L_003942A0;
    case 21u: goto L_003942C4;
    case 22u: goto L_003942D0;
    case 23u: goto L_003942D8;
    case 24u: goto L_00394300;
    case 25u: goto L_00394314;
    case 26u: goto L_0039431C;
    case 27u: goto L_00394340;
    case 28u: goto L_00394350;
    case 29u: goto L_00394358;
    case 30u: goto L_00394370;
    case 31u: goto L_0039438C;
    case 32u: goto L_00394394;
    case 33u: goto L_003943A4;
    case 34u: goto L_003943AC;
    case 35u: goto L_003943E8;
    case 36u: goto L_003943F0;
    case 37u: goto L_00394404;
    case 38u: goto L_0039440C;
    case 39u: goto L_00394424;
    case 40u: goto L_00394434;
    case 41u: goto L_00394444;
    case 42u: goto L_0039444C;
    case 43u: goto L_0039445C;
    case 44u: goto L_00394464;
    case 45u: goto L_003944A4;
    case 46u: goto L_003944AC;
    case 47u: goto L_003944BC;
    case 48u: goto L_003944C4;
    case 49u: goto L_00394518;
    case 50u: goto L_00394520;
    case 51u: goto L_00394534;
    case 52u: goto L_0039453C;
    case 53u: goto L_00394554;
    case 54u: goto L_00394568;
    case 55u: goto L_0039457C;
    case 56u: goto L_00394590;
    case 57u: goto L_00394598;
    case 58u: goto L_003945AC;
    case 59u: goto L_003945B4;
    case 60u: goto L_00394660;
    case 61u: goto L_00394668;
    case 62u: goto L_0039467C;
    case 63u: goto L_00394684;
    case 64u: goto L_003946A0;
    case 65u: goto L_003946A8;
    case 66u: goto L_003946B4;
    case 67u: goto L_003946BC;
    case 68u: goto L_003946D8;
    case 69u: goto L_003946E4;
    case 70u: goto L_003946F8;
    case 71u: goto L_00394700;
    case 72u: goto L_00394770;
    case 73u: goto L_00394798;
    case 74u: goto L_003947A8;
    case 75u: goto L_003947C0;
    case 76u: goto L_003947E8;
    case 77u: goto L_003947F8;
    case 78u: goto L_00394810;
    case 79u: goto L_0039485C;
    case 80u: goto L_00394890;
    case 81u: goto L_00394920;
    case 82u: goto L_00394970;
    case 83u: goto L_003949A0;
    case 84u: goto L_003949D0;
    case 85u: goto L_003949D8;
    case 86u: goto L_00394A20;
    case 87u: goto L_00394A40;
    case 88u: goto L_00394A58;
    case 89u: goto L_00394AB0;
    case 90u: goto L_00394AE0;
    case 91u: goto L_00394AE8;
    case 92u: goto L_00394B30;
    case 93u: goto L_00394B50;
    case 94u: goto L_00394B68;
    case 95u: goto L_00394BA4;
    case 96u: goto L_00394C10;
    case 97u: goto L_00394C40;
    case 98u: goto L_00394C70;
    case 99u: goto L_00394CB0;
    case 100u: goto L_00394CF0;
    case 101u: goto L_00394D20;
    case 102u: goto L_00394D60;
    case 103u: goto L_00394DA0;
    case 104u: goto L_00394E00;
    case 105u: goto L_00394E30;
    case 106u: goto L_00394E48;
    case 107u: goto L_00394E60;
    case 108u: goto L_00394E68;
    case 109u: goto L_00394E80;
    case 110u: goto L_00394E90;
    case 111u: goto L_00394EA0;
    case 112u: goto L_00394EA8;
    case 113u: goto L_00394EC8;
    case 114u: goto L_00394EE8;
    case 115u: goto L_00394EF0;
    case 116u: goto L_00394EF8;
    case 117u: goto L_00394F20;
    case 118u: goto L_00394F44;
    case 119u: goto L_00394F4C;
    case 120u: goto L_00394F58;
    case 121u: goto L_00394F90;
    case 122u: goto L_00394F9C;
    case 123u: goto L_00394FAC;
    case 124u: goto L_00394FC0;
    case 125u: goto L_00394FF0;
    case 126u: goto L_00395034;
    case 127u: goto L_0039503C;
    case 128u: goto L_00395044;
    case 129u: goto L_0039504C;
    case 130u: goto L_00395064;
    case 131u: goto L_00395070;
    case 132u: goto L_003950B0;
    case 133u: goto L_003950B8;
    case 134u: goto L_003950E0;
    case 135u: goto L_003950E8;
    case 136u: goto L_003950F0;
    case 137u: goto L_003950F8;
    case 138u: goto L_00395110;
    case 139u: goto L_00395140;
    case 140u: goto L_00395150;
    case 141u: goto L_0039517C;
    case 142u: goto L_00395184;
    case 143u: goto L_00395190;
    case 144u: goto L_003951D4;
    case 145u: goto L_003951F4;
    case 146u: goto L_003951FC;
    case 147u: goto L_00395204;
    case 148u: goto L_0039520C;
    case 149u: goto L_00395254;
    case 150u: goto L_00395264;
    case 151u: goto L_00395274;
    case 152u: goto L_003952B8;
    case 153u: goto L_003952F0;
    case 154u: goto L_00395318;
    case 155u: goto L_00395324;
    case 156u: goto L_00395330;
    case 157u: goto L_00395344;
    case 158u: goto L_00395370;
    case 159u: goto L_003953D8;
    case 160u: goto L_003953E0;
    case 161u: goto L_003953E8;
    case 162u: goto L_003953F0;
    case 163u: goto L_003953F8;
    case 164u: goto L_00395404;
    case 165u: goto L_00395410;
    case 166u: goto L_00395420;
    case 167u: goto L_00395428;
    case 168u: goto L_00395430;
    case 169u: goto L_0039543C;
    case 170u: goto L_00395450;
    case 171u: goto L_00395518;
    case 172u: goto L_00395574;
    case 173u: goto L_003955B8;
    case 174u: goto L_003955C4;
    case 175u: goto L_003955F0;
    case 176u: goto L_00395610;
    case 177u: goto L_00395630;
    case 178u: goto L_00395670;
    case 179u: goto L_00395674;
    case 180u: goto L_00395678;
    case 181u: goto L_0039567C;
    case 182u: goto L_00395680;
    case 183u: goto L_00395684;
    case 184u: goto L_00395688;
    case 185u: goto L_00395690;
    case 186u: goto L_0039571C;
    case 187u: goto L_00395750;
    case 188u: goto L_00395764;
    case 189u: goto L_00395780;
    case 190u: goto L_00395828;
    case 191u: goto L_003958B4;
    case 192u: goto L_00395920;
    case 193u: goto L_00395960;
    case 194u: goto L_00395980;
    case 195u: goto L_00395990;
    case 196u: goto L_003959A0;
    case 197u: goto L_00395A98;
    case 198u: goto L_00395AC0;
    case 199u: goto L_00395AF0;
    case 200u: goto L_00395B10;
    case 201u: goto L_00395B60;
    case 202u: goto L_00395B80;
    case 203u: goto L_00395C10;
    case 204u: goto L_00395C50;
    case 205u: goto L_00395C8C;
    case 206u: goto L_00395D04;
    case 207u: goto L_00395DD8;
    case 208u: goto L_00395E40;
    case 209u: goto L_00395E70;
    case 210u: goto L_00395F10;
    case 211u: goto L_00395F3C;
    case 212u: goto L_00395F80;
    case 213u: goto L_00395F90;
    case 214u: goto L_0039606C;
    case 215u: goto L_003960EC;
    case 216u: goto L_00396144;
    case 217u: goto L_00396190;
    case 218u: goto L_003961EC;
    case 219u: goto L_00396230;
    case 220u: goto L_00396274;
    case 221u: goto L_003962B8;
    case 222u: goto L_003962C4;
    case 223u: goto L_00396310;
    case 224u: goto L_00396328;
    case 225u: goto L_00396378;
    case 226u: goto L_003963A0;
    case 227u: goto L_003963E0;
    case 228u: goto L_0039660C;
    case 229u: goto L_00396620;
    case 230u: goto L_00396854;
    case 231u: goto L_00396860;
    case 232u: goto L_0039692C;
    case 233u: goto L_00396944;
    case 234u: goto L_00396994;
    case 235u: goto L_003969B8;
    case 236u: goto L_00396AA4;
    case 237u: goto L_00396B9C;
    case 238u: goto L_00396BD0;
    case 239u: goto L_00396C00;
    case 240u: goto L_00396CBC;
    case 241u: goto L_00396CD4;
    case 242u: goto L_00396D24;
    case 243u: goto L_00396D48;
    case 244u: goto L_00396D78;
    case 245u: goto L_00396D98;
    case 246u: goto L_00396DB0;
    case 247u: goto L_00396DEC;
    case 248u: goto L_00396ED0;
    case 249u: goto L_00396F10;
    case 250u: goto L_00396F1C;
    case 251u: goto L_00396F50;
    case 252u: goto L_00396F74;
    case 253u: goto L_00396F84;
    case 254u: goto L_00396FC0;
    case 255u: goto L_00396FE4;
    case 256u: goto L_00396FF4;
    case 257u: goto L_00397014;
    case 258u: goto L_00397050;
    case 259u: goto L_00397068;
    case 260u: goto L_003970B0;
    case 261u: goto L_003970FC;
    case 262u: goto L_00397124;
    case 263u: goto L_00397138;
    case 264u: goto L_0039714C;
    case 265u: goto L_00397154;
    case 266u: goto L_00397168;
    case 267u: goto L_00397170;
    case 268u: goto L_00397178;
    case 269u: goto L_00397180;
    case 270u: goto L_00397188;
    case 271u: goto L_0039719C;
    case 272u: goto L_003971B8;
    case 273u: goto L_003971E4;
    case 274u: goto L_0039720C;
    case 275u: goto L_00397234;
    case 276u: goto L_00397240;
    case 277u: goto L_00397290;
    case 278u: goto L_00397310;
    case 279u: goto L_00397334;
    case 280u: goto L_0039733C;
    case 281u: goto L_003973A4;
    case 282u: goto L_003973AC;
    case 283u: goto L_00397424;
    case 284u: goto L_00397438;
    case 285u: goto L_00397488;
    case 286u: goto L_00397494;
    case 287u: goto L_003974B8;
    case 288u: goto L_003974C0;
    case 289u: goto L_0039750C;
    case 290u: goto L_00397570;
    case 291u: goto L_003975C0;
    case 292u: goto L_003975C8;
    case 293u: goto L_003975FC;
    case 294u: goto L_00397610;
    case 295u: goto L_00397624;
    case 296u: goto L_00397638;
    case 297u: goto L_00397678;
    case 298u: goto L_003976CC;
    case 299u: goto L_003976D4;
    case 300u: goto L_003976F8;
    case 301u: goto L_00397700;
    case 302u: goto L_00397730;
    case 303u: goto L_0039773C;
    case 304u: goto L_0039776C;
    case 305u: goto L_003977B8;
    case 306u: goto L_003977D0;
    case 307u: goto L_003977FC;
    case 308u: goto L_00397810;
    case 309u: goto L_00397818;
    case 310u: goto L_00397850;
    case 311u: goto L_00397870;
    case 312u: goto L_00397878;
    case 313u: goto L_003978BC;
    case 314u: goto L_003978F8;
    case 315u: goto L_00397928;
    case 316u: goto L_00397960;
    case 317u: goto L_003979A8;
    case 318u: goto L_003979B0;
    case 319u: goto L_003979C0;
    case 320u: goto L_003979E4;
    case 321u: goto L_003979EC;
    case 322u: goto L_003979FC;
    case 323u: goto L_00397A30;
    case 324u: goto L_00397A44;
    case 325u: goto L_00397A58;
    case 326u: goto L_00397A78;
    case 327u: goto L_00397A9C;
    case 328u: goto L_00397AC0;
    case 329u: goto L_00397AE4;
    case 330u: goto L_00397AEC;
    case 331u: goto L_00397B10;
    case 332u: goto L_00397B18;
    case 333u: goto L_00397B48;
    case 334u: goto L_00397B50;
    case 335u: goto L_00397B64;
    case 336u: goto L_00397B84;
    case 337u: goto L_00397B98;
    case 338u: goto L_00397BBC;
    case 339u: goto L_00397C00;
    case 340u: goto L_00397C08;
    case 341u: goto L_00397C14;
    case 342u: goto L_00397C4C;
    case 343u: goto L_00397C54;
    case 344u: goto L_00397C78;
    case 345u: goto L_00397C80;
    case 346u: goto L_00397CB0;
    case 347u: goto L_00397CC8;
    case 348u: goto L_00397D20;
    case 349u: goto L_00397D68;
    case 350u: goto L_00397D90;
    case 351u: goto L_00397DE0;
    case 352u: goto L_00397E30;
    case 353u: goto L_00397E4C;
    case 354u: goto L_00397E68;
    case 355u: goto L_00397E90;
    case 356u: goto L_00397EB0;
    case 357u: goto L_00397EF0;
    case 358u: goto L_00397F48;
    case 359u: goto L_00397F80;
    case 360u: goto L_00397F8C;
    case 361u: goto L_00397FA0;
    case 362u: goto L_00397FC0;
    case 363u: goto L_00397FF0;
    default: bad_entry(c, 0x00394000u); return;
    }
L_00394000:
    c.budget -= 1;
L_00394004:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00394338; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33943ull;  if (t) { goto L_003942F8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003942BC; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0039427C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00394190; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00394108; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039405C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00394758; } }
L_0039405C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00394074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039406Cu);  if (depth < kMaxDepth) unit_00A5(c, 100u, depth + 1u); else { c.pc = 0x00394CF0u; return; } if (c.pc != 0x0039406Cu) [[unlikely]] return; }
L_0039406C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039407C; } }
L_00394074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039407Cu);  if (depth < kMaxDepth) unit_00A5(c, 97u, depth + 1u); else { c.pc = 0x00394C40u; return; } if (c.pc != 0x0039407Cu) [[unlikely]] return; }
L_0039407C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394084u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394084u) [[unlikely]] return; }
L_00394084:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394094u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 207u, depth + 1u); else { c.pc = 0x00109808u; return; } if (c.pc != 0x00394094u) [[unlikely]] return; }
L_00394094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039409Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x0039409Cu) [[unlikely]] return; }
L_0039409C:
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003940E8; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003940D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003940C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));  if (t) { goto L_003940FC; } }
L_003940C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_003940D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_003940E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u - 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00394758; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 1;
L_003940FC:
    set32(c.r[2], 0u - 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00394758; } }
L_00394108:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00394124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394118u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x00394810u; return; } if (c.pc != 0x00394118u) [[unlikely]] return; }
L_00394118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00394130; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00394124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039412Cu);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x00394810u; return; } if (c.pc != 0x0039412Cu) [[unlikely]] return; }
L_0039412C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00394130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00394170; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));  if (t) { goto L_00394184; } }
L_00394148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394150u);  if (depth < kMaxDepth) unit_00A5(c, 82u, depth + 1u); else { c.pc = 0x00394970u; return; } if (c.pc != 0x00394150u) [[unlikely]] return; }
L_00394150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_00394758; } }
L_00394160:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394170:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[2], 0u - 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00394758; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 1;
L_00394184:
    set32(c.r[2], 0u - 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00394758; } }
L_00394190:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003941A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941A0u);  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x00394D60u; return; } if (c.pc != 0x003941A0u) [[unlikely]] return; }
L_003941A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003941B0; } }
L_003941A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941B0u);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394CB0u; return; } if (c.pc != 0x003941B0u) [[unlikely]] return; }
L_003941B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941B8u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003941B8u) [[unlikely]] return; }
L_003941B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], 0u + 1538u);
    set32(c.r[6], 0u + 438u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941CCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x003941CCu) [[unlikely]] return; }
L_003941CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941D4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003941D4u) [[unlikely]] return; }
L_003941D4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00394220; } }
L_003941DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 1;
L_003941E0:
    set32(c.r[2], 0u - 13u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0039420C; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 7u);  if (t) { goto L_00394204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 50u);  if (t) { goto L_00394218; } }
    set32(c.r[2], 0u - 7u);
    c.budget -= 1;
L_00394204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0039475C; } }
L_0039420C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 8u);  if (t) { goto L_00394758; } }
    set32(c.r[2], 0u - 50u);
    c.budget -= 1;
L_00394218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394758; } }
L_00394220:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0039424C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 3540u);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00394268; } }
L_0039424C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = 0ull | 33792ull;
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
L_00394268:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_0039427C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394284u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394284u) [[unlikely]] return; }
L_00394284:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394298u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0002(c, 56u, depth + 1u); else { c.pc = 0x00108550u; return; } if (c.pc != 0x00394298u) [[unlikely]] return; }
L_00394298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942A0u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003942A0u) [[unlikely]] return; }
L_003942A0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_003942BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942C4u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003942C4u) [[unlikely]] return; }
L_003942C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x003942D0u) [[unlikely]] return; }
L_003942D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942D8u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003942D8u) [[unlikely]] return; }
L_003942D8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
    c.r[2].d[0] = 0ull | 33943ull;
    c.budget -= 1;
L_003942F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394300u); st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394300u) [[unlikely]] return; }
L_00394300:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394314u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x001099A8u; return; } if (c.pc != 0x00394314u) [[unlikely]] return; }
L_00394314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039431Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x0039431Cu) [[unlikely]] return; }
L_0039431C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_00394338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394340u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394340u) [[unlikely]] return; }
L_00394340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394350u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 250u, depth + 1u); else { c.pc = 0x00109DF8u; return; } if (c.pc != 0x00394350u) [[unlikely]] return; }
L_00394350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394358u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00394358u) [[unlikely]] return; }
L_00394358:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00394758; } }
L_00394370:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039438Cu);  if (depth < kMaxDepth) unit_00A5(c, 96u, depth + 1u); else { c.pc = 0x00394C10u; return; } if (c.pc != 0x0039438Cu) [[unlikely]] return; }
L_0039438C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394394u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394394u) [[unlikely]] return; }
L_00394394:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], 0u + 511u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943A4u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 127u, depth + 1u); else { c.pc = 0x00108F00u; return; } if (c.pc != 0x003943A4u) [[unlikely]] return; }
L_003943A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943ACu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003943ACu) [[unlikely]] return; }
L_003943AC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
    set32(c.r[2], 0u + 511u);
    c.budget -= 1;
L_003943E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943F0u); st32((c.r[4].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003943F0u) [[unlikely]] return; }
L_003943F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394404u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x001099A8u; return; } if (c.pc != 0x00394404u) [[unlikely]] return; }
L_00394404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039440Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x0039440Cu) [[unlikely]] return; }
L_0039440C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394424:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0039443C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394434u);  if (depth < kMaxDepth) unit_00A5(c, 100u, depth + 1u); else { c.pc = 0x00394CF0u; return; } if (c.pc != 0x00394434u) [[unlikely]] return; }
L_00394434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394444; } }
L_0039443C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394444u);  if (depth < kMaxDepth) unit_00A5(c, 97u, depth + 1u); else { c.pc = 0x00394C40u; return; } if (c.pc != 0x00394444u) [[unlikely]] return; }
L_00394444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039444Cu);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x0039444Cu) [[unlikely]] return; }
L_0039444C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039445Cu); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 207u, depth + 1u); else { c.pc = 0x00109808u; return; } if (c.pc != 0x0039445Cu) [[unlikely]] return; }
L_0039445C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394464u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00394464u) [[unlikely]] return; }
L_00394464:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00394490; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00394480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941E0u | kUnwind; return; } goto L_003941E0; } }
L_00394480:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394490:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_003944A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944ACu);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003944ACu) [[unlikely]] return; }
L_003944AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], 0u + 511u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944BCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 127u, depth + 1u); else { c.pc = 0x00108F00u; return; } if (c.pc != 0x003944BCu) [[unlikely]] return; }
L_003944BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944C4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003944C4u) [[unlikely]] return; }
L_003944C4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003944E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003944F0; } }
L_003944E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003944F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
    c.r[2].d[0] = 0ull | 50343ull;
    c.budget -= 1;
L_00394518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394520u); st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394520u) [[unlikely]] return; }
L_00394520:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394534u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x001099A8u; return; } if (c.pc != 0x00394534u) [[unlikely]] return; }
L_00394534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039453Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x0039453Cu) [[unlikely]] return; }
L_0039453C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394554:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00394568:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00394584; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039457Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A5(c, 101u, depth + 1u); else { c.pc = 0x00394D20u; return; } if (c.pc != 0x0039457Cu) [[unlikely]] return; }
L_0039457C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394590; } }
L_00394584:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394590u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A5(c, 98u, depth + 1u); else { c.pc = 0x00394C70u; return; } if (c.pc != 0x00394590u) [[unlikely]] return; }
L_00394590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394598u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394598u) [[unlikely]] return; }
L_00394598:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], 0u + 1538u);
    set32(c.r[6], 0u + 438u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945ACu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x003945ACu) [[unlikely]] return; }
L_003945AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945B4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003945B4u) [[unlikely]] return; }
L_003945B4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0039460C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 16816u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16832u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0039464C; } }
L_0039460C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 16864u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16880u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 16;
L_0039464C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_00394660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394668u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x00394668u) [[unlikely]] return; }
L_00394668:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039467Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0002(c, 56u, depth + 1u); else { c.pc = 0x00108550u; return; } if (c.pc != 0x0039467Cu) [[unlikely]] return; }
L_0039467C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394684u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00394684u) [[unlikely]] return; }
L_00394684:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_003946A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946A8u);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003946A8u) [[unlikely]] return; }
L_003946A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946B4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 18u)));  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x003946B4u) [[unlikely]] return; }
L_003946B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946BCu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x003946BCu) [[unlikely]] return; }
L_003946BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394754; } }
L_003946D8:
    c.r[2].d[0] = 0ull | 33943ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946E4u); st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 269u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x003946E4u) [[unlikely]] return; }
L_003946E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003946F8u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x001099A8u; return; } if (c.pc != 0x003946F8u) [[unlikely]] return; }
L_003946F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394700u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 270u, depth + 1u); else { c.pc = 0x001A3AD0u; return; } if (c.pc != 0x00394700u) [[unlikely]] return; }
L_00394700:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003941DCu | kUnwind; return; } goto L_003941DC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 2u);
    if (c.r[17].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00394748; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00394754; } }
L_00394748:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], 0u + 10u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00394754:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00394758:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0039475C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00394770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003947A8; } }
L_00394790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394798u);  if (depth < kMaxDepth) unit_00A5(c, 99u, depth + 1u); else { c.pc = 0x00394CB0u; return; } if (c.pc != 0x00394798u) [[unlikely]] return; }
L_00394798:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947A8u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 207u, depth + 1u); else { c.pc = 0x00109808u; return; } if (c.pc != 0x003947A8u) [[unlikely]] return; }
L_003947A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003947C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003947E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003947F8; } }
L_003947E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947E8u);  if (depth < kMaxDepth) unit_00A5(c, 102u, depth + 1u); else { c.pc = 0x00394D60u; return; } if (c.pc != 0x003947E8u) [[unlikely]] return; }
L_003947E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003947F8u); set32(c.r[5], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0002(c, 207u, depth + 1u); else { c.pc = 0x00109808u; return; } if (c.pc != 0x003947F8u) [[unlikely]] return; }
L_003947F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0039483C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003948FC; } }
L_0039483C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11528u);
    set32(c.r[5], 0u + 20481u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039485Cu); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 300u, depth + 1u); else { c.pc = 0x0010A458u; return; } if (c.pc != 0x0039485Cu) [[unlikely]] return; }
L_0039485C:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_00394870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003948FC; } }
L_00394870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11528u);
    set32(c.r[5], 0u + 20482u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394890u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 300u, depth + 1u); else { c.pc = 0x0010A458u; return; } if (c.pc != 0x00394890u) [[unlikely]] return; }
L_00394890:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_003948A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003948FC; } }
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003948A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (t) { goto L_003948B4; } }
    set32(c.r[2], c.r[2].w[0] + 1023u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_003948B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 269u);  goto L_003948F8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 119u);  goto L_003948EC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], 0u + 150u);  goto L_003948E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003948FC; } }
    set32(c.r[16], 0u + 150u);
    c.budget -= 1;
L_003948E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003948F8; } }
    set32(c.r[16], 0u + 119u);
    c.budget -= 1;
L_003948EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003948F8; } }
    set32(c.r[16], 0u + 269u);
    c.budget -= 1;
L_003948F8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003948FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00394920:
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00394940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0039495C; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_00394940:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039495C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0039495C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039495C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00394970:
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00394994; } }
L_00394988:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1024ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_00394994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003949A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_003949F8; } }
L_003949D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949D8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 86u, depth + 1u); else { c.pc = 0x00394A20u; return; } if (c.pc != 0x003949D8u) [[unlikely]] return; }
L_003949D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003949EC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_003949EC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 324u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003949D0u | kUnwind; return; } goto L_003949D0; } }
L_003949F8:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00394A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A40u); set32(c.r[5], c.r[2].w[0] - 11512u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00394A40u) [[unlikely]] return; }
L_00394A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00394A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A58u); set32(c.r[5], c.r[2].w[0] - 11504u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00394A58u) [[unlikely]] return; }
L_00394A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394A90; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00394A90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00394A90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00394AA0; } }
L_00394A90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00394A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00394AA4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00394AA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00394AA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00394B08; } }
L_00394AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394AE8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 92u, depth + 1u); else { c.pc = 0x00394B30u; return; } if (c.pc != 0x00394AE8u) [[unlikely]] return; }
L_00394AE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00394AFC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_00394AFC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 324u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394AE0u | kUnwind; return; } goto L_00394AE0; } }
L_00394B08:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00394B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B50u); set32(c.r[5], c.r[2].w[0] - 11512u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00394B50u) [[unlikely]] return; }
L_00394B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00394C00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B68u); set32(c.r[5], c.r[2].w[0] - 11504u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00394B68u) [[unlikely]] return; }
L_00394B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394BFC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull | 61440ull;
    set32(c.r[2], 0u + 4096u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_00394B9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00394BF4; } }
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_00394B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BA4u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_0006(c, 27u, depth + 1u); else { c.pc = 0x00118488u; return; } if (c.pc != 0x00394BA4u) [[unlikely]] return; }
L_00394BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394BC0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 8192u);
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00394BF0; } }
L_00394BC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 16384u);
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00394BF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00394BF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00394BFC; } }
L_00394BF0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00394BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00394C04; } }
L_00394BFC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00394C00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00394C04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[5], c.r[2].w[0] - 11496u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.budget -= 9;
    { set32(c.r[7], c.r[2].w[0] - 11488u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394C40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11472u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.budget -= 11;
    { set32(c.r[8], c.r[2].w[0] - 11464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16896u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[5].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 16;
    { set32(c.r[8], c.r[2].w[0] - 11464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11448u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[2].w[0] - 11464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { set32(c.r[9], c.r[2].w[0] - 11464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11472u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.budget -= 11;
    { set32(c.r[8], c.r[2].w[0] - 11424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16848u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30528u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[5].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 16;
    { set32(c.r[8], c.r[2].w[0] - 11424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 11448u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[2].w[0] - 11528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] - 11488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[2].w[0] - 11424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.budget -= 13;
    { set32(c.r[9], c.r[2].w[0] - 11424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_00394DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16800u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].d[0] = ld64((c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 23u);
    st64((c.r[7].w[0]), c.r[6].d[0]);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[7].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 16784u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st128((c.r[9].w[0]) & ~15u, c.r[3]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E00u); st8((c.r[9].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 106u, depth + 1u); else { c.pc = 0x00135580u; return; } if (c.pc != 0x00394E00u) [[unlikely]] return; }
L_00394E00:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 24u);  if (t) { goto L_00394E1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00394E6C; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 1;
L_00394E1C:
    set32(c.r[7], c.r[29].w[0] + 60u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E30u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 106u, depth + 1u); else { c.pc = 0x00135580u; return; } if (c.pc != 0x00394E30u) [[unlikely]] return; }
L_00394E30:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 25u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[7], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E48u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 106u, depth + 1u); else { c.pc = 0x00135580u; return; } if (c.pc != 0x00394E48u) [[unlikely]] return; }
L_00394E48:
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[4], 0u + 26u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[7], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E60u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 106u, depth + 1u); else { c.pc = 0x00135580u; return; } if (c.pc != 0x00394E60u) [[unlikely]] return; }
L_00394E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E68u);  if (depth < kMaxDepth) unit_00A5(c, 117u, depth + 1u); else { c.pc = 0x00394F20u; return; } if (c.pc != 0x00394E68u) [[unlikely]] return; }
L_00394E68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00394E6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00394E80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103BD0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 450u, depth); }
L_00394E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 4;
L_00394EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00394EA8u) [[unlikely]] return; }
L_00394EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11408u);
    set32(c.r[5], 0u + 20483u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EC8u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 300u, depth + 1u); else { c.pc = 0x0010A458u; return; } if (c.pc != 0x00394EC8u) [[unlikely]] return; }
L_00394EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 11400u);
    set32(c.r[5], 0u + 18438u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EE8u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0002(c, 300u, depth + 1u); else { c.pc = 0x0010A458u; return; } if (c.pc != 0x00394EE8u) [[unlikely]] return; }
L_00394EE8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394EC8u | kUnwind; return; } goto L_00394EC8; } }
L_00394EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EF8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0003(c, 250u, depth + 1u); else { c.pc = 0x0010E800u; return; } if (c.pc != 0x00394EF8u) [[unlikely]] return; }
L_00394EF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394EF0u | kUnwind; return; } goto L_00394EF0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394EF0u | kUnwind; return; } goto L_00394EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394EA0u | kUnwind; return; } goto L_00394EA0; } }
    c.budget -= 2;
L_00394F20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F44u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00394F44u) [[unlikely]] return; }
L_00394F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F4Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x00394F4Cu) [[unlikely]] return; }
L_00394F4C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F58u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 398u, depth + 1u); else { c.pc = 0x00103A30u; return; } if (c.pc != 0x00394F58u) [[unlikely]] return; }
L_00394F58:
    set32(c.r[2], 0u + 8192u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] + 20112u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 25264u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F90u); st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 380u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00394F90u) [[unlikely]] return; }
L_00394F90:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F9Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 384u, depth + 1u); else { c.pc = 0x001039C0u; return; } if (c.pc != 0x00394F9Cu) [[unlikely]] return; }
L_00394F9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[2].w[0] + 20096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394FACu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 113u, depth + 1u); else { c.pc = 0x0010D690u; return; } if (c.pc != 0x00394FACu) [[unlikely]] return; }
L_00394FAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00394FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00394FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395034u); st8((c.r[2].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00395034u) [[unlikely]] return; }
L_00395034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039503Cu);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x0039503Cu) [[unlikely]] return; }
L_0039503C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395044u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x00395044u) [[unlikely]] return; }
L_00395044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039504Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0039504Cu) [[unlikely]] return; }
L_0039504C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395064u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 298u, depth + 1u); else { c.pc = 0x0013B660u; return; } if (c.pc != 0x00395064u) [[unlikely]] return; }
L_00395064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395070u); set32(c.r[4], c.r[2].w[0] - 14560u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00395070u) [[unlikely]] return; }
L_00395070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 14560u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[2].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950B0u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x003950B0u) [[unlikely]] return; }
L_003950B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x003950B8u) [[unlikely]] return; }
L_003950B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950E0u); set32(c.r[4], 0u + 5461u);  if (depth < kMaxDepth) unit_000E(c, 304u, depth + 1u); else { c.pc = 0x0013B740u; return; } if (c.pc != 0x003950E0u) [[unlikely]] return; }
L_003950E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x003950E8u) [[unlikely]] return; }
L_003950E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950F0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x003950F0u) [[unlikely]] return; }
L_003950F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003950F8u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x003950F8u) [[unlikely]] return; }
L_003950F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395110:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00395140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395150u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00395150u) [[unlikely]] return; }
L_00395150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395184; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039517Cu); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0039517Cu) [[unlikely]] return; }
L_0039517C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395184u);  if (depth < kMaxDepth) unit_001F(c, 194u, depth + 1u); else { c.pc = 0x0017EBA0u; return; } if (c.pc != 0x00395184u) [[unlikely]] return; }
L_00395184:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[3].w[0] + 4u);  if (t) { goto L_0039527C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00395214; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_003951CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));  if (t) { goto L_003952C4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_003951CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951D4u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x003951D4u) [[unlikely]] return; }
L_003951D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395310; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951F4u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x003951F4u) [[unlikely]] return; }
L_003951F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 176u, depth + 1u); else { c.pc = 0x00395610u; return; } if (c.pc != 0x003951FCu) [[unlikely]] return; }
L_003951FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395204u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395AF0u; return; } if (c.pc != 0x00395204u) [[unlikely]] return; }
L_00395204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039520Cu);  if (depth < kMaxDepth) unit_001F(c, 12u, depth + 1u); else { c.pc = 0x0017C170u; return; } if (c.pc != 0x0039520Cu) [[unlikely]] return; }
L_0039520C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395310; } }
L_00395214:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3268u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395310; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395254u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00395254u) [[unlikely]] return; }
L_00395254:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395264u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00395264u) [[unlikely]] return; }
L_00395264:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395274u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00395274u) [[unlikely]] return; }
L_00395274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395310; } }
L_0039527C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395310; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952B8u); st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x003952B8u) [[unlikely]] return; }
L_003952B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395310; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003952C4:
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003952E8; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_003952E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952F0u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x003952F0u) [[unlikely]] return; }
L_003952F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395310; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00395310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395318u);  if (depth < kMaxDepth) unit_00A5(c, 165u, depth + 1u); else { c.pc = 0x00395410u; return; } if (c.pc != 0x00395318u) [[unlikely]] return; }
L_00395318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395324u); set32(c.r[4], c.r[2].w[0] + 21584u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00395324u) [[unlikely]] return; }
L_00395324:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395344u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00395344u) [[unlikely]] return; }
L_00395344:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
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
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953D8u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x003953D8u) [[unlikely]] return; }
L_003953D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x003953E0u) [[unlikely]] return; }
L_003953E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953E8u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x003953E8u) [[unlikely]] return; }
L_003953E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953F0u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x003953F0u) [[unlikely]] return; }
L_003953F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953F8u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x003953F8u) [[unlikely]] return; }
L_003953F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395404u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00395404u) [[unlikely]] return; }
L_00395404:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395420u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00395420u) [[unlikely]] return; }
L_00395420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395428u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00395428u) [[unlikely]] return; }
L_00395428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395430u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00395430u) [[unlikely]] return; }
L_00395430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039543Cu); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0039543Cu) [[unlikely]] return; }
L_0039543C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 28;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003954F0; }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003954F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003954F0:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_003954F4:
    set32(c.r[2], 0u + 6u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 288u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
L_00395518:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395518u | kUnwind; return; } goto L_00395518; } }
    set32(c.r[17], c.r[29].w[0] + 83u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00395554; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039556C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00395554:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0039556C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395574u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00395574u) [[unlikely]] return; }
L_00395574:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[29].w[0] + 87u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00395598; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003955B0; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00395598:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003955B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955B8u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003955B8u) [[unlikely]] return; }
L_003955B8:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x003955C4u) [[unlikely]] return; }
L_003955C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 272u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955F0u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x003955F0u) [[unlikely]] return; }
L_003955F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00395610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395630u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00395630u) [[unlikely]] return; }
L_00395630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395660; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] + 22128u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_00395660:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00395674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00395678:
    set32(c.r[2], c.r[2].w[0] + 416u);
    c.budget -= 1;
L_0039567C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00395680:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00395684:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00395688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00395690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 432u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[7], 0u + 660u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[8], c.r[2].w[0] + 22944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41730000u);
    c.r[3].d[0] = c.r[2].d[0] | 524ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[6], 0u + 110u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC02A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 29989ull;
    set32(c.r[16], c.r[17].w[0] + 320u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039571Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0039571Cu) [[unlikely]] return; }
L_0039571C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395750u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00395750u) [[unlikely]] return; }
L_00395750:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395764u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395780u; return; } if (c.pc != 0x00395764u) [[unlikely]] return; }
L_00395764:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00395780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00395944; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039588C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395800; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003957CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00395958; } }
L_003957CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00395954; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 240u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00395800:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395828u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00395828u) [[unlikely]] return; }
L_00395828:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00395954; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 420u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_00395954; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0039588C:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003958B4u); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003958B4u) [[unlikely]] return; }
L_003958B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D20000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 330u);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00395920; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00395920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395920u); set32(c.r[4], c.r[3].w[0] + 1u);  if (depth < kMaxDepth) unit_00A5(c, 176u, depth + 1u); else { c.pc = 0x00395610u; return; } if (c.pc != 0x00395920u) [[unlikely]] return; }
L_00395920:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00395954; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
L_00395944:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00395954:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00395958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395960u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x00395960u) [[unlikely]] return; }
L_00395960:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00395980:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00395990:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_003959A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 336u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[19].w[0] + 320u);  if (t) { goto L_00395AD0; } }
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC02F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 23593ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0] + 92u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);  if (t) { goto L_00395A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00395A88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.budget -= 1;
L_00395A1C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);  if (t) { goto L_00395A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00395A88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.budget -= 1;
L_00395A40:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);  if (t) { goto L_00395A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00395A88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.budget -= 1;
L_00395A64:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], 0u + 4u);  if (t) { goto L_00395A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_00395A88; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_00395A88:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00395AD0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_00395A98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 48u);
    set32(c.r[5], c.r[19].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395AC0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x00395AC0u) [[unlikely]] return; }
L_00395AC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395A98u | kUnwind; return; } goto L_00395A98; } }
L_00395AD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00395AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00395B10u) [[unlikely]] return; }
L_00395B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395B44; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 23392u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
L_00395B44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00395B80:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[3], c.r[2].w[0] + 24464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[5], c.r[28].w[0] - 26904u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[28].w[0] - 26912u);
    set32(c.r[2], c.r[28].w[0] - 26888u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st8((c.r[4].w[0] + 328u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 329u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 34;
    { st8((c.r[4].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00395C10; }
L_00395C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00395EEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00395C50:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[3].w[0] - 16752u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00395C8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00395EF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[3].w[0] - 16624u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00395D04; } }
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] - 4968u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D04u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00395D04u) [[unlikely]] return; }
L_00395D04:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00395D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00395D78; } }
L_00395D5C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00395D78; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00395D78:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00395DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00395DBC; } }
L_00395DA0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00395DBC; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00395DBC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00395EEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00395DD8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395E08; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00395EEC; } }
L_00395E08:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[3].w[0] - 16738u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00395EEC; } }
L_00395E40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00395EEC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00395E70:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00395EB0; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00395EB0:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00395ED0; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00395ED0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00395EEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00395EEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00395EF0:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00395F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00395F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F3Cu); set32(c.r[4], c.r[4].w[0] + 1u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395AF0u; return; } if (c.pc != 0x00395F3Cu) [[unlikely]] return; }
L_00395F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00395F6C; } }
L_00395F44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395F68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00395F68:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00395F6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395F80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00395F90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[3].w[0] - 20416u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[28].w[0] - 26896u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[21].d[0] = ld16((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    set32(c.r[3], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 330u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[4], c.r[3].w[0] - 20336u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    st32((c.r[1].w[0] - 20364u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 55;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (t) { goto L_003962D0; } }
L_0039606C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003962E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[19].d[0];  if (t) { goto L_00396090; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003960A0; } }
L_00396090:
    c.f[21] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[17].w[0]));  if (t) { goto L_003960B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003960A0:
    c.f[21] = c.r[2].w[0];
    c.f[20] = c.f[21];
    c.budget -= 4;
L_003960B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003960ECu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003960ECu) [[unlikely]] return; }
L_003960EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] + 484u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] + 468u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 16688u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396144u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00396144u) [[unlikely]] return; }
L_00396144:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] + 516u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 144u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[1].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[3], 0u + 512u);
    st16((c.r[29].w[0] + 146u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[29].w[0] + 148u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 150u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[2], c.r[21].w[0] + 24u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 158u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 528u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 19;
L_00396190:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396190u | kUnwind; return; } goto L_00396190; } }
    set32(c.r[22], c.r[29].w[0] + 163u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003961CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003961E4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003961CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003961E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003961ECu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003961ECu) [[unlikely]] return; }
L_003961EC:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[22], c.r[29].w[0] + 167u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00396210; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00396228; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00396210:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00396228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396230u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00396230u) [[unlikely]] return; }
L_00396230:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[22], c.r[29].w[0] + 171u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00396254; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039626C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00396254:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0039626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396274u); c.f[12] = fp::mul(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00396274u) [[unlikely]] return; }
L_00396274:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[22], c.r[29].w[0] + 175u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00396298; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003962B0; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00396298:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003962B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003962B8u); c.f[12] = fp::mul(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x003962B8u) [[unlikely]] return; }
L_003962B8:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003962C4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x003962C4u) [[unlikely]] return; }
L_003962C4:
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 24u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
L_003962D0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039606Cu | kUnwind; return; } goto L_0039606C; } }
L_003962E0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00396310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003963B0; } }
L_00396328:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 432u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396350; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 436u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 436u);  if (t) { goto L_00396350; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00396350:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396378; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00396378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396378u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 227u, depth + 1u); else { c.pc = 0x003963E0u; return; } if (c.pc != 0x00396378u) [[unlikely]] return; }
L_00396378:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_003963A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_003963A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003963A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 229u, depth + 1u); else { c.pc = 0x00396620u; return; } if (c.pc != 0x003963A0u) [[unlikely]] return; }
L_003963A0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003963A4:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_003963B0:
    c.r[17].d[0] = c.r[16].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396328u | kUnwind; return; } goto L_00396328; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003963E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[6].w[0] + 436u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 436u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003965DC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], c.r[3].w[0] << 1);  if (t) { goto L_00396560; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[8], c.r[3].w[0] << 1);  if (t) { goto L_00396514; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00396478; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00396444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_003965E0; } }
L_00396444:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[9], 0u + 10u);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[5].w[0]), 0u);
    c.budget -= 13;
L_00396478:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[11], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[11].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003964E0; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 436u)));
    set32(c.r[8], 0u + 120u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[9].w[0] + 1u);
    st8((c.r[10].w[0] + 436u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { goto L_003965DC; } }
L_003964E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_003965DC; } }
    set32(c.r[8], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00396514:
    set32(c.r[6], c.r[8].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003965DC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 436u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0] + 436u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 440u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003965DC; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00396560:
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003965B0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u - 128u);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 436u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0] + 436u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 432u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003965DC; } }
L_003965B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 11;
L_003965DC:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_003965E0:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0039660C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 17008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039660Cu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A5(c, 231u, depth + 1u); else { c.pc = 0x00396860u; return; } if (c.pc != 0x0039660Cu) [[unlikely]] return; }
L_0039660C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[11], c.r[6].w[0] + 436u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 436u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00396824; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], c.r[3].w[0] << 1);  if (t) { goto L_003967A4; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[8], c.r[3].w[0] << 1);  if (t) { goto L_00396758; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003966BC; } }
    set32(c.r[10], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[10].d[0];  if (t) { goto L_00396684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_00396828; } }
L_00396684:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[9], 0u + 10u);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[5].w[0]), 0u);
    st8((c.r[28].w[0] - 25680u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 14;
L_003966BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[11], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[11].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00396724; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 436u)));
    set32(c.r[8], 0u + 600u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[9].w[0] + 1u);
    st8((c.r[10].w[0] + 436u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { goto L_00396824; } }
L_00396724:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00396824; } }
    set32(c.r[8], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00396758:
    set32(c.r[6], c.r[8].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00396824; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 436u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0] + 436u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 440u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00396824; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_003967A4:
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 440u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0] + 440u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003967F8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u - 128u);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 436u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0] + 436u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 432u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25680u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00396824; } }
L_003967F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[5].w[0] - 17008u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 11;
L_00396824:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_00396828:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 436u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00396854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 17008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396854u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A5(c, 239u, depth + 1u); else { c.pc = 0x00396C00u; return; } if (c.pc != 0x00396854u) [[unlikely]] return; }
L_00396854:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396860:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.f[20] = c.f[12];
    c.r[22].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[21], c.r[29].w[0] + 232u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] + 832u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20392u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[21].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] + 736u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[20], c.r[2].w[0] + 784u);
    c.budget -= 51;
L_0039692C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396944u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00396944u) [[unlikely]] return; }
L_00396944:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00396970; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039698C; } }
L_00396970:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_0039698C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396994u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00396994u) [[unlikely]] return; }
L_00396994:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039692Cu | kUnwind; return; } goto L_0039692C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x003969B8u) [[unlikely]] return; }
L_003969B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 436u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00396BD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[8], 0u + 2u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 201u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] + 820u);
    set32(c.r[9], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 432u)));
    set32(c.r[5], 0u + 80u);
    set32(c.r[10], c.r[29].w[0] + 282u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65300ull;
    c.r[2].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[29].w[0] + 280u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[9].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[7].w[0] + 96u);
    st32((c.r[29].w[0] + 160u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] + 12u);
    st32((c.r[29].w[0] + 164u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    set32(c.r[5], c.r[5].w[0] + 96u);
    st16((c.r[29].w[0] + 284u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] + 24u);
    st16((c.r[29].w[0] + 286u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396AA4u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00396AA4u) [[unlikely]] return; }
L_00396AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 880u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 232u);
    set32(c.r[10], c.r[29].w[0] + 230u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[2].d[0] | 32896ull;
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 228u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 226u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[8], c.r[3].w[0] + 820u);
    set32(c.r[4], 0u + 279u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[5].w[0] + 160u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[9], c.r[9].w[0] + 22u);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], c.r[22].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 432u)));
    set32(c.r[4], c.r[4].w[0] - 20416u);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[3].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[8], c.r[8].w[0] + 160u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 11u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26276u)));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B9Cu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00396B9Cu) [[unlikely]] return; }
L_00396B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80200000u);
    c.r[3].d[0] = c.r[2].d[0] | 8224ull;
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396BD0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00396BD0u) [[unlikely]] return; }
L_00396BD0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00396C00:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 544u);
    c.f[20] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[30], c.r[29].w[0] + 232u);
    set32(c.r[2], c.r[2].w[0] + 1072u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[30].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] + 896u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[20], c.r[2].w[0] + 944u);
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[30], c.r[0]);
    c.budget -= 47;
L_00396CBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396CD4u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00396CD4u) [[unlikely]] return; }
L_00396CD4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00396D00; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00396D1C; } }
L_00396D00:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_00396D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D24u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00396D24u) [[unlikely]] return; }
L_00396D24:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396CBCu | kUnwind; return; } goto L_00396CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00396D48u) [[unlikely]] return; }
L_00396D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1072u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[22], c.r[2].w[0] + 1008u);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.budget -= 12;
L_00396D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[19], c.r[2].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] + 992u);
    mmi::paddub(c.r[20], c.r[22], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[30], c.r[0]);
    c.budget -= 8;
L_00396D98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396DB0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00396DB0u) [[unlikely]] return; }
L_00396DB0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396D98u | kUnwind; return; } goto L_00396D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396DECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00396DECu) [[unlikely]] return; }
L_00396DEC:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[3].d[0] = c.r[23].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396D78u | kUnwind; return; } goto L_00396D78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 191u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 436u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00396ED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80300000u);
    c.r[2].d[0] = c.r[2].d[0] | 29312ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[7], 0u + 15u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[5], c.r[29].w[0] + 280u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], 0u + 192u);
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], 0u + 100u);
    set32(c.r[6], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65300ull;
    set32(c.r[2], 0u + 256u);
    set32(c.r[7], c.r[29].w[0] + 282u);
    set32(c.r[5], c.r[5].w[0] + 256u);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 24u);
    st32((c.r[29].w[0] + 212u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] + 256u);
    st16((c.r[29].w[0] + 284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396ED0u); st16((c.r[29].w[0] + 286u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00396ED0u) [[unlikely]] return; }
L_00396ED0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00396F10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[3].w[0] - 16992u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_00396F1C:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00396F34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396F44; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00396F34:
    c.r[3].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396F1Cu | kUnwind; return; } goto L_00396F1C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00396F44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00396F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] - 16992u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
L_00396F74:
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F84u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00396F84u) [[unlikely]] return; }
L_00396F84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00396F98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00396FA8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00396F98:
    c.r[2].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396F74u | kUnwind; return; } goto L_00396F74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00396FA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00396FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] - 15392u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
L_00396FE4:
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FF4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00396FF4u) [[unlikely]] return; }
L_00396FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00397038; } }
L_00397004:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397014u); set32(c.r[4], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00397014u) [[unlikely]] return; }
L_00397014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00397028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00397038; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00397028:
    c.r[2].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396FE4u | kUnwind; return; } goto L_00396FE4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00397038:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00397050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[7], c.r[2].w[0] - 15392u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00397068:
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039707C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003970A0; } }
L_0039707C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0039708C; }
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0039708C:
    c.r[3].d[0] = c.r[5].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397068u | kUnwind; return; } goto L_00397068; } }
    set32(c.r[2], 0u + 2u);
    if (c.r[6].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_003970A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003970B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00397938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 11360u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003970FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 16992u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    set32(c.r[6], 0u + 1600u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397124u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00397124u) [[unlikely]] return; }
L_00397124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 31072u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397138u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00397138u) [[unlikely]] return; }
L_00397138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039714Cu); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0039714Cu) [[unlikely]] return; }
L_0039714C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397154u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009B(c, 87u, depth + 1u); else { c.pc = 0x0036CE00u; return; } if (c.pc != 0x00397154u) [[unlikely]] return; }
L_00397154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[2].w[0] + 32144u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397168u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00397168u) [[unlikely]] return; }
L_00397168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397170u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00397170u) [[unlikely]] return; }
L_00397170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397178u);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00397178u) [[unlikely]] return; }
L_00397178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397180u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x00397180u) [[unlikely]] return; }
L_00397180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397188u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x00397188u) [[unlikely]] return; }
L_00397188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 15392u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039719Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0039719Cu) [[unlikely]] return; }
L_0039719C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st32((c.r[28].w[0] - 25148u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_003972F8; } }
L_003971B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25148u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_003972EC; } }
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 400u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003972E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003971E4u);  if (depth < kMaxDepth) unit_00A5(c, 254u, depth + 1u); else { c.pc = 0x00396FC0u; return; } if (c.pc != 0x003971E4u) [[unlikely]] return; }
L_003971E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003972E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 15392u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25148u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039720Cu); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0039720Cu) [[unlikely]] return; }
L_0039720C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 15392u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25148u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397234u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00397234u) [[unlikely]] return; }
L_00397234:
    set32(c.r[2], ld32((c.r[28].w[0] - 25148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397240u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 251u, depth + 1u); else { c.pc = 0x00396F50u; return; } if (c.pc != 0x00397240u) [[unlikely]] return; }
L_00397240:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 5);  if (t) { goto L_0039726C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15392u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_003972D8; } }
    set32(c.r[4], c.r[2].w[0] << 5);
    c.budget -= 1;
L_0039726C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 16992u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397290u); set32(c.r[5], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00397290u) [[unlikely]] return; }
L_00397290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003972B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15392u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_003972D8; } }
L_003972B8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15392u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 8;
L_003972D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003972E8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003972EC:
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 17u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_003972F8:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003971B8u | kUnwind; return; } goto L_003971B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397310u);  if (depth < kMaxDepth) unit_00A5(c, 249u, depth + 1u); else { c.pc = 0x00396F10u; return; } if (c.pc != 0x00397310u) [[unlikely]] return; }
L_00397310:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 50u);  if (t) { goto L_00397328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_00397328:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00397938; } }
L_00397334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039733Cu);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0039733Cu) [[unlikely]] return; }
L_0039733C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039734C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039793C; } }
L_0039734C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397384; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00397370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039793C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00397370:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
L_00397384:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0039748C; } }
    set32(c.r[4], c.r[16].w[0] + 9u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003973A4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 10u, depth + 1u); else { c.pc = 0x003780F0u; return; } if (c.pc != 0x003973A4u) [[unlikely]] return; }
L_003973A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003973ACu); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003973ACu) [[unlikely]] return; }
L_003973AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00397430; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00397488; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15364u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397488; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15364u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397424u); st32((c.r[2].w[0]), c.r[7].w[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00397424u) [[unlikely]] return; }
L_00397424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397488; } }
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_00397430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397438u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00397438u) [[unlikely]] return; }
L_00397438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397488; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[2].w[0] - 15364u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00397488; } }
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397488u); st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00397488u) [[unlikely]] return; }
L_00397488:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0039748C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397494u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00397494u) [[unlikely]] return; }
L_00397494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397938; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003974B8u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003974B8u) [[unlikely]] return; }
L_003974B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_003974C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397680; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00397640; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003975B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397588; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00397504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039750Cu);  if (depth < kMaxDepth) unit_00A5(c, 258u, depth + 1u); else { c.pc = 0x00397050u; return; } if (c.pc != 0x0039750Cu) [[unlikely]] return; }
L_0039750C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0039757C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00397544; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00397538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00397538:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
L_00397544:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397570u); set32(c.r[5], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00397570u) [[unlikely]] return; }
L_00397570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0039757C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
L_00397588:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00397938; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00397938; } }
L_003975B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003975C0u); set32(c.r[4], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003975C0u) [[unlikely]] return; }
L_003975C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003975C8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003975C8u) [[unlikely]] return; }
L_003975C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00397608; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003975FCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003975FCu) [[unlikely]] return; }
L_003975FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00397608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397610u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00397610u) [[unlikely]] return; }
L_00397610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397624u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00397624u) [[unlikely]] return; }
L_00397624:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397638u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00397638u) [[unlikely]] return; }
L_00397638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397640:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00397938; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397678u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00397678u) [[unlikely]] return; }
L_00397678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397680:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00397938; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5510u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003976C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003976C0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
L_003976CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003976D4u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 249u, depth + 1u); else { c.pc = 0x00396F10u; return; } if (c.pc != 0x003976D4u) [[unlikely]] return; }
L_003976D4:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[19], c.r[2].w[0] - 15392u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_00397780; } }
L_003976F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397700u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_00A5(c, 251u, depth + 1u); else { c.pc = 0x00396F50u; return; } if (c.pc != 0x00397700u) [[unlikely]] return; }
L_00397700:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[2].w[0] << 5);  goto L_00397750; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] + 1u);  if (t) { goto L_00397774; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_00397770; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397730u); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00397730u) [[unlikely]] return; }
L_00397730:
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039773Cu); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0039773Cu) [[unlikely]] return; }
L_0039773C:
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00397770; } }
    set32(c.r[3], c.r[2].w[0] << 5);
    c.budget -= 1;
L_00397750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039776Cu); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0039776Cu) [[unlikely]] return; }
L_0039776C:
    c.budget -= 1;
L_00397770:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00397774:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00397780:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003976F8u | kUnwind; return; } goto L_003976F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00397808; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26144u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003977DC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977B8u); st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0020(c, 80u, depth + 1u); else { c.pc = 0x00180B50u; return; } if (c.pc != 0x003977B8u) [[unlikely]] return; }
L_003977B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 16992u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977D0u); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x003977D0u) [[unlikely]] return; }
L_003977D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003977DC:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 16992u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977FCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x003977FCu) [[unlikely]] return; }
L_003977FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00397808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00397938; } }
L_00397810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397818u);  if (depth < kMaxDepth) unit_0020(c, 81u, depth + 1u); else { c.pc = 0x00180B60u; return; } if (c.pc != 0x00397818u) [[unlikely]] return; }
L_00397818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 16992u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397850u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00397850u) [[unlikely]] return; }
L_00397850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 16992u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397870u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00397870u) [[unlikely]] return; }
L_00397870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397878:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397900; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003978C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003978A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003978A8:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    set32(c.r[4], 0u + 131u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003978BCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x003978BCu) [[unlikely]] return; }
L_003978BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_003978C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00397938; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003978F8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003978F8u) [[unlikely]] return; }
L_003978F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397938; } }
L_00397900:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00397938; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00397938; } }
L_00397928:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25892u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0039793C; } }
L_00397938:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0039793C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00397960:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[2].w[0] - 6576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979A8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003979A8u) [[unlikely]] return; }
L_003979A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979B0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003979B0u) [[unlikely]] return; }
L_003979B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979C0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003979C0u) [[unlikely]] return; }
L_003979C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1092u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979E4u); set32(c.r[4], c.r[2].w[0] - 11296u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003979E4u) [[unlikely]] return; }
L_003979E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979ECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003979ECu) [[unlikely]] return; }
L_003979EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003979FCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003979FCu) [[unlikely]] return; }
L_003979FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 6569u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00397A3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1164u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A30u); set32(c.r[4], c.r[2].w[0] - 11280u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397A30u) [[unlikely]] return; }
L_00397A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));  if (t) { goto L_00397BC0; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00397A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A44u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397A44u) [[unlikely]] return; }
L_00397A44:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A58u); set32(c.r[5], c.r[2].w[0] - 11256u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00397A58u) [[unlikely]] return; }
L_00397A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1100u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A78u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397A78u) [[unlikely]] return; }
L_00397A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1108u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A9Cu); set32(c.r[4], c.r[2].w[0] - 11240u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397A9Cu) [[unlikely]] return; }
L_00397A9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1116u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AC0u); set32(c.r[4], c.r[2].w[0] - 11232u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397AC0u) [[unlikely]] return; }
L_00397AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1124u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AE4u); set32(c.r[4], c.r[2].w[0] - 11224u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397AE4u) [[unlikely]] return; }
L_00397AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397AECu) [[unlikely]] return; }
L_00397AEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1156u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B10u); set32(c.r[4], c.r[2].w[0] - 11216u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397B10u) [[unlikely]] return; }
L_00397B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397B18u) [[unlikely]] return; }
L_00397B18:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 2u);  if (t) { goto L_00397B90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1132u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B48u); set32(c.r[4], c.r[2].w[0] - 11168u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397B48u) [[unlikely]] return; }
L_00397B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B50u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397B50u) [[unlikely]] return; }
L_00397B50:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B64u); set32(c.r[5], c.r[2].w[0] - 11144u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00397B64u) [[unlikely]] return; }
L_00397B64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1140u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B84u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397B84u) [[unlikely]] return; }
L_00397B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397BBC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00397B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397B98u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397B98u) [[unlikely]] return; }
L_00397B98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1148u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397BBCu); set32(c.r[4], c.r[2].w[0] - 11136u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397BBCu) [[unlikely]] return; }
L_00397BBC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 1;
L_00397BC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00397D68; } }
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 9u));  if (t) { goto L_00397BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_00397BE8; } }
L_00397BE0:
    set32(c.r[19], 0u + 5u);
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00397BE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00397CC0; } }
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 15392u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00397C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C08u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397C08u) [[unlikely]] return; }
L_00397C08:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C14u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00397C14u) [[unlikely]] return; }
L_00397C14:
    c.f[1] = c.r[16].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 1188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = ld32((c.r[1].w[0] + 1184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C4Cu); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397C4Cu) [[unlikely]] return; }
L_00397C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C54u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397C54u) [[unlikely]] return; }
L_00397C54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = ld32((c.r[1].w[0] + 1196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1192u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C78u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397C78u) [[unlikely]] return; }
L_00397C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C80u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397C80u) [[unlikely]] return; }
L_00397C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.f[0] = ld32((c.r[1].w[0] + 1204u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1200u));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CB0u); c.f[13] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397CB0u) [[unlikely]] return; }
L_00397CB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397C00u | kUnwind; return; } goto L_00397C00; } }
L_00397CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CC8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00397CC8u) [[unlikely]] return; }
L_00397CC8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00397CF0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00397CFC; } }
L_00397CF0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00397D20; } }
L_00397CFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1168u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1172u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D20u); set32(c.r[4], c.r[2].w[0] - 11104u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397D20u) [[unlikely]] return; }
L_00397D20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00397D68; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] - 6u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00397D68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[12] = ld32((c.r[1].w[0] + 1176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[13] = ld32((c.r[1].w[0] + 1180u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D68u); set32(c.r[4], c.r[2].w[0] - 11096u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00397D68u) [[unlikely]] return; }
L_00397D68:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00397D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[16], c.r[3].w[0] - 6576u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00397E54; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00397DE4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00397DD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00397E78; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00397DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397DE0u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00397DE0u) [[unlikely]] return; }
L_00397DE0:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_00397DE4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397DFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00397E00; } }
L_00397DFC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00397E00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00397E30u) [[unlikely]] return; }
L_00397E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397E74; } }
L_00397E38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E4Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00397E4Cu) [[unlikely]] return; }
L_00397E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397E74; } }
L_00397E54:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00397E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E68u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00397E68u) [[unlikely]] return; }
L_00397E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397E74; } }
L_00397E70:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00397E74:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00397E78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397EB0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00397EB0u) [[unlikely]] return; }
L_00397EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397EE0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[3], c.r[3].w[0] + 32496u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_00397EE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00397F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00397F90; } }
L_00397F1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00397F5C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 120u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 60u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F48u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00397F48u) [[unlikely]] return; }
L_00397F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00397F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00397F90; } }
L_00397F5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F80u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00397F80u) [[unlikely]] return; }
L_00397F80:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F8Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0025(c, 283u, depth + 1u); else { c.pc = 0x00197030u; return; } if (c.pc != 0x00397F8Cu) [[unlikely]] return; }
L_00397F8C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00397F90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00397FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397FA0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 283u, depth + 1u); else { c.pc = 0x00303A20u; return; } if (c.pc != 0x00397FA0u) [[unlikely]] return; }
L_00397FA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397FC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24580u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 1264u);
    set32(c.r[4], c.r[28].w[0] - 24580u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00397FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_00A6(c, 1u, depth);
}

}
