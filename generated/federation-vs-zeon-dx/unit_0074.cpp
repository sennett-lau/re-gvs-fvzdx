#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0074[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24,
    0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0,
    51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0,
    61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313,
    0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378,
};

void unit_0074(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D0000;
    case 2u: goto L_002D000C;
    case 3u: goto L_002D0014;
    case 4u: goto L_002D0020;
    case 5u: goto L_002D0028;
    case 6u: goto L_002D002C;
    case 7u: goto L_002D003C;
    case 8u: goto L_002D0048;
    case 9u: goto L_002D0054;
    case 10u: goto L_002D005C;
    case 11u: goto L_002D0068;
    case 12u: goto L_002D006C;
    case 13u: goto L_002D00C0;
    case 14u: goto L_002D00D8;
    case 15u: goto L_002D00E0;
    case 16u: goto L_002D0120;
    case 17u: goto L_002D012C;
    case 18u: goto L_002D0134;
    case 19u: goto L_002D0144;
    case 20u: goto L_002D0150;
    case 21u: goto L_002D015C;
    case 22u: goto L_002D0164;
    case 23u: goto L_002D0174;
    case 24u: goto L_002D017C;
    case 25u: goto L_002D018C;
    case 26u: goto L_002D0198;
    case 27u: goto L_002D01A4;
    case 28u: goto L_002D01FC;
    case 29u: goto L_002D0374;
    case 30u: goto L_002D0380;
    case 31u: goto L_002D0388;
    case 32u: goto L_002D0398;
    case 33u: goto L_002D03A4;
    case 34u: goto L_002D03B0;
    case 35u: goto L_002D03BC;
    case 36u: goto L_002D03CC;
    case 37u: goto L_002D03D4;
    case 38u: goto L_002D03E4;
    case 39u: goto L_002D03F0;
    case 40u: goto L_002D03FC;
    case 41u: goto L_002D0408;
    case 42u: goto L_002D0410;
    case 43u: goto L_002D0420;
    case 44u: goto L_002D042C;
    case 45u: goto L_002D0438;
    case 46u: goto L_002D0444;
    case 47u: goto L_002D0454;
    case 48u: goto L_002D0460;
    case 49u: goto L_002D046C;
    case 50u: goto L_002D0474;
    case 51u: goto L_002D0480;
    case 52u: goto L_002D048C;
    case 53u: goto L_002D0494;
    case 54u: goto L_002D04AC;
    case 55u: goto L_002D04B8;
    case 56u: goto L_002D04C4;
    case 57u: goto L_002D04D0;
    case 58u: goto L_002D04E0;
    case 59u: goto L_002D04EC;
    case 60u: goto L_002D04F8;
    case 61u: goto L_002D0500;
    case 62u: goto L_002D050C;
    case 63u: goto L_002D0518;
    case 64u: goto L_002D0540;
    case 65u: goto L_002D05CC;
    case 66u: goto L_002D0680;
    case 67u: goto L_002D0694;
    case 68u: goto L_002D069C;
    case 69u: goto L_002D06B0;
    case 70u: goto L_002D06BC;
    case 71u: goto L_002D06C4;
    case 72u: goto L_002D06E0;
    case 73u: goto L_002D0720;
    case 74u: goto L_002D0760;
    case 75u: goto L_002D07A0;
    case 76u: goto L_002D07E0;
    case 77u: goto L_002D07F4;
    case 78u: goto L_002D0808;
    case 79u: goto L_002D0820;
    case 80u: goto L_002D0890;
    case 81u: goto L_002D089C;
    case 82u: goto L_002D08D8;
    case 83u: goto L_002D08F0;
    case 84u: goto L_002D0968;
    case 85u: goto L_002D0978;
    case 86u: goto L_002D0990;
    case 87u: goto L_002D0A64;
    case 88u: goto L_002D0A7C;
    case 89u: goto L_002D0ABC;
    case 90u: goto L_002D0AC8;
    case 91u: goto L_002D0AEC;
    case 92u: goto L_002D0B04;
    case 93u: goto L_002D0B30;
    case 94u: goto L_002D0B40;
    case 95u: goto L_002D0B7C;
    case 96u: goto L_002D0B88;
    case 97u: goto L_002D0B94;
    case 98u: goto L_002D0BA8;
    case 99u: goto L_002D0BB0;
    case 100u: goto L_002D0BC0;
    case 101u: goto L_002D0C00;
    case 102u: goto L_002D0C10;
    case 103u: goto L_002D0C20;
    case 104u: goto L_002D0CA0;
    case 105u: goto L_002D0D00;
    case 106u: goto L_002D0D10;
    case 107u: goto L_002D0D40;
    case 108u: goto L_002D0DD8;
    case 109u: goto L_002D0DF4;
    case 110u: goto L_002D0E00;
    case 111u: goto L_002D0E20;
    case 112u: goto L_002D0E28;
    case 113u: goto L_002D0E40;
    case 114u: goto L_002D0E50;
    case 115u: goto L_002D0EA8;
    case 116u: goto L_002D0EF0;
    case 117u: goto L_002D0F2C;
    case 118u: goto L_002D0F5C;
    case 119u: goto L_002D0F8C;
    case 120u: goto L_002D0FBC;
    case 121u: goto L_002D0FD0;
    case 122u: goto L_002D0FE0;
    case 123u: goto L_002D102C;
    case 124u: goto L_002D103C;
    case 125u: goto L_002D109C;
    case 126u: goto L_002D10FC;
    case 127u: goto L_002D1118;
    case 128u: goto L_002D1198;
    case 129u: goto L_002D11A4;
    case 130u: goto L_002D11DC;
    case 131u: goto L_002D1234;
    case 132u: goto L_002D1254;
    case 133u: goto L_002D12A8;
    case 134u: goto L_002D12F0;
    case 135u: goto L_002D132C;
    case 136u: goto L_002D135C;
    case 137u: goto L_002D138C;
    case 138u: goto L_002D13BC;
    case 139u: goto L_002D13D0;
    case 140u: goto L_002D13D8;
    case 141u: goto L_002D13EC;
    case 142u: goto L_002D1468;
    case 143u: goto L_002D1490;
    case 144u: goto L_002D14C0;
    case 145u: goto L_002D1514;
    case 146u: goto L_002D1524;
    case 147u: goto L_002D1530;
    case 148u: goto L_002D15B0;
    case 149u: goto L_002D15C0;
    case 150u: goto L_002D15D4;
    case 151u: goto L_002D15E8;
    case 152u: goto L_002D1600;
    case 153u: goto L_002D1638;
    case 154u: goto L_002D1640;
    case 155u: goto L_002D1650;
    case 156u: goto L_002D16A4;
    case 157u: goto L_002D16B4;
    case 158u: goto L_002D16F0;
    case 159u: goto L_002D1700;
    case 160u: goto L_002D1710;
    case 161u: goto L_002D17B4;
    case 162u: goto L_002D17C4;
    case 163u: goto L_002D1800;
    case 164u: goto L_002D1810;
    case 165u: goto L_002D1824;
    case 166u: goto L_002D1840;
    case 167u: goto L_002D18B4;
    case 168u: goto L_002D18F4;
    case 169u: goto L_002D193C;
    case 170u: goto L_002D1978;
    case 171u: goto L_002D19A8;
    case 172u: goto L_002D19D8;
    case 173u: goto L_002D1A08;
    case 174u: goto L_002D1A1C;
    case 175u: goto L_002D1A30;
    case 176u: goto L_002D1A6C;
    case 177u: goto L_002D1A7C;
    case 178u: goto L_002D1A98;
    case 179u: goto L_002D1AF8;
    case 180u: goto L_002D1B04;
    case 181u: goto L_002D1B84;
    case 182u: goto L_002D1BC4;
    case 183u: goto L_002D1C0C;
    case 184u: goto L_002D1C48;
    case 185u: goto L_002D1C78;
    case 186u: goto L_002D1CA8;
    case 187u: goto L_002D1CD8;
    case 188u: goto L_002D1CEC;
    case 189u: goto L_002D1CF4;
    case 190u: goto L_002D1D08;
    case 191u: goto L_002D1D5C;
    case 192u: goto L_002D1D98;
    case 193u: goto L_002D1DC0;
    case 194u: goto L_002D1DE0;
    case 195u: goto L_002D1E4C;
    case 196u: goto L_002D1E60;
    case 197u: goto L_002D1EA4;
    case 198u: goto L_002D1ED8;
    case 199u: goto L_002D1EE4;
    case 200u: goto L_002D2004;
    case 201u: goto L_002D2010;
    case 202u: goto L_002D2098;
    case 203u: goto L_002D20B0;
    case 204u: goto L_002D20F0;
    case 205u: goto L_002D213C;
    case 206u: goto L_002D2150;
    case 207u: goto L_002D22C8;
    case 208u: goto L_002D22E0;
    case 209u: goto L_002D22F4;
    case 210u: goto L_002D2308;
    case 211u: goto L_002D2338;
    case 212u: goto L_002D2374;
    case 213u: goto L_002D244C;
    case 214u: goto L_002D248C;
    case 215u: goto L_002D24C0;
    case 216u: goto L_002D2590;
    case 217u: goto L_002D25A4;
    case 218u: goto L_002D25E8;
    case 219u: goto L_002D2600;
    case 220u: goto L_002D2634;
    case 221u: goto L_002D2644;
    case 222u: goto L_002D2650;
    case 223u: goto L_002D266C;
    case 224u: goto L_002D2680;
    case 225u: goto L_002D26E0;
    case 226u: goto L_002D2704;
    case 227u: goto L_002D2758;
    case 228u: goto L_002D2770;
    case 229u: goto L_002D2780;
    case 230u: goto L_002D27F4;
    case 231u: goto L_002D2800;
    case 232u: goto L_002D2854;
    case 233u: goto L_002D2940;
    case 234u: goto L_002D295C;
    case 235u: goto L_002D2980;
    case 236u: goto L_002D2A28;
    case 237u: goto L_002D2A30;
    case 238u: goto L_002D2A38;
    case 239u: goto L_002D2A8C;
    case 240u: goto L_002D2A98;
    case 241u: goto L_002D2AB0;
    case 242u: goto L_002D2AC0;
    case 243u: goto L_002D2AD4;
    case 244u: goto L_002D2B00;
    case 245u: goto L_002D2B10;
    case 246u: goto L_002D2B68;
    case 247u: goto L_002D2B78;
    case 248u: goto L_002D2BA8;
    case 249u: goto L_002D2BC0;
    case 250u: goto L_002D2BD4;
    case 251u: goto L_002D2CAC;
    case 252u: goto L_002D2CC0;
    case 253u: goto L_002D2CD4;
    case 254u: goto L_002D2CE0;
    case 255u: goto L_002D2D9C;
    case 256u: goto L_002D2DA8;
    case 257u: goto L_002D2DB4;
    case 258u: goto L_002D2DC8;
    case 259u: goto L_002D2E28;
    case 260u: goto L_002D2E34;
    case 261u: goto L_002D2E40;
    case 262u: goto L_002D2E50;
    case 263u: goto L_002D2E60;
    case 264u: goto L_002D2E74;
    case 265u: goto L_002D2F40;
    case 266u: goto L_002D2F4C;
    case 267u: goto L_002D2F60;
    case 268u: goto L_002D2F74;
    case 269u: goto L_002D2F8C;
    case 270u: goto L_002D2FA0;
    case 271u: goto L_002D2FB0;
    case 272u: goto L_002D2FF4;
    case 273u: goto L_002D2FFC;
    case 274u: goto L_002D3010;
    case 275u: goto L_002D309C;
    case 276u: goto L_002D30C4;
    case 277u: goto L_002D30D8;
    case 278u: goto L_002D30EC;
    case 279u: goto L_002D3104;
    case 280u: goto L_002D3110;
    case 281u: goto L_002D3138;
    case 282u: goto L_002D314C;
    case 283u: goto L_002D3160;
    case 284u: goto L_002D31D4;
    case 285u: goto L_002D31EC;
    case 286u: goto L_002D31FC;
    case 287u: goto L_002D3210;
    case 288u: goto L_002D32B0;
    case 289u: goto L_002D32C8;
    case 290u: goto L_002D32D8;
    case 291u: goto L_002D32EC;
    case 292u: goto L_002D3300;
    case 293u: goto L_002D3318;
    case 294u: goto L_002D3340;
    case 295u: goto L_002D3348;
    case 296u: goto L_002D3360;
    case 297u: goto L_002D33C4;
    case 298u: goto L_002D33D4;
    case 299u: goto L_002D33E0;
    case 300u: goto L_002D344C;
    case 301u: goto L_002D34D0;
    case 302u: goto L_002D34E8;
    case 303u: goto L_002D34F8;
    case 304u: goto L_002D3500;
    case 305u: goto L_002D3520;
    case 306u: goto L_002D3534;
    case 307u: goto L_002D3564;
    case 308u: goto L_002D357C;
    case 309u: goto L_002D3590;
    case 310u: goto L_002D35A0;
    case 311u: goto L_002D35C0;
    case 312u: goto L_002D35F0;
    case 313u: goto L_002D35FC;
    case 314u: goto L_002D360C;
    case 315u: goto L_002D3620;
    case 316u: goto L_002D3650;
    case 317u: goto L_002D3658;
    case 318u: goto L_002D3670;
    case 319u: goto L_002D36D4;
    case 320u: goto L_002D36E0;
    case 321u: goto L_002D3720;
    case 322u: goto L_002D3730;
    case 323u: goto L_002D3740;
    case 324u: goto L_002D3758;
    case 325u: goto L_002D37D4;
    case 326u: goto L_002D37E0;
    case 327u: goto L_002D37F4;
    case 328u: goto L_002D3808;
    case 329u: goto L_002D3820;
    case 330u: goto L_002D3834;
    case 331u: goto L_002D383C;
    case 332u: goto L_002D3898;
    case 333u: goto L_002D38AC;
    case 334u: goto L_002D38C8;
    case 335u: goto L_002D38D4;
    case 336u: goto L_002D38E8;
    case 337u: goto L_002D390C;
    case 338u: goto L_002D3920;
    case 339u: goto L_002D3938;
    case 340u: goto L_002D3998;
    case 341u: goto L_002D39A8;
    case 342u: goto L_002D39C0;
    case 343u: goto L_002D3AA0;
    case 344u: goto L_002D3AB8;
    case 345u: goto L_002D3AD8;
    case 346u: goto L_002D3AFC;
    case 347u: goto L_002D3B20;
    case 348u: goto L_002D3B60;
    case 349u: goto L_002D3B6C;
    case 350u: goto L_002D3B90;
    case 351u: goto L_002D3BA8;
    case 352u: goto L_002D3BBC;
    case 353u: goto L_002D3BE0;
    case 354u: goto L_002D3C30;
    case 355u: goto L_002D3C68;
    case 356u: goto L_002D3C94;
    case 357u: goto L_002D3CC0;
    case 358u: goto L_002D3CEC;
    case 359u: goto L_002D3D00;
    case 360u: goto L_002D3D10;
    case 361u: goto L_002D3DA8;
    case 362u: goto L_002D3DE4;
    case 363u: goto L_002D3E14;
    case 364u: goto L_002D3E44;
    case 365u: goto L_002D3E74;
    case 366u: goto L_002D3E88;
    case 367u: goto L_002D3E94;
    case 368u: goto L_002D3EA8;
    case 369u: goto L_002D3EB0;
    case 370u: goto L_002D3EC0;
    case 371u: goto L_002D3ED0;
    case 372u: goto L_002D3F10;
    case 373u: goto L_002D3F20;
    case 374u: goto L_002D3F30;
    case 375u: goto L_002D3FC4;
    case 376u: goto L_002D3FD4;
    case 377u: goto L_002D3FF0;
    case 378u: goto L_002D3FFC;
    default: bad_entry(c, 0x002D0000u); return;
    }
L_002D0000:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D000Cu); set32(c.r[21], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D000Cu) [[unlikely]] return; }
L_002D000C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0014u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0014u) [[unlikely]] return; }
L_002D0014:
    set32(c.r[5], c.r[16].w[0] + 5104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0020u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D0020u) [[unlikely]] return; }
L_002D0020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0028u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002D0028u) [[unlikely]] return; }
L_002D0028:
    c.f[12] = ld32((c.r[16].w[0] + 4288u));
    c.budget -= 1;
L_002D002C:
    c.f[13] = ld32((c.r[16].w[0] + 4292u));
    c.f[14] = ld32((c.r[16].w[0] + 4296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D003Cu); set32(c.r[19], c.r[16].w[0] + 4736u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D003Cu) [[unlikely]] return; }
L_002D003C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0048u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D0048u) [[unlikely]] return; }
L_002D0048:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0054u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D0054u) [[unlikely]] return; }
L_002D0054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D005Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D005Cu) [[unlikely]] return; }
L_002D005C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0068u); set32(c.r[5], c.r[16].w[0] + 5088u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D0068u) [[unlikely]] return; }
L_002D0068:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));
    c.budget -= 1;
L_002D006C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D01AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7768u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D01AC; } }
    c.f[3] = ld32((c.r[16].w[0] + 4960u));
    c.f[2] = ld32((c.r[16].w[0] + 4964u));
    c.f[1] = ld32((c.r[16].w[0] + 4968u));
    c.f[0] = ld32((c.r[16].w[0] + 4972u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[20], c.r[29].w[0] + 144u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 4976u));
    c.f[2] = ld32((c.r[16].w[0] + 4980u));
    c.f[1] = ld32((c.r[16].w[0] + 4984u));
    c.budget -= 14;
L_002D00C0:
    c.f[0] = ld32((c.r[16].w[0] + 4988u));
    set32(c.r[21], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 7952u);
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.budget -= 6;
L_002D00D8:
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 7840u));
    c.budget -= 2;
L_002D00E0:
    c.f[2] = ld32((c.r[16].w[0] + 7844u));
    c.f[1] = ld32((c.r[16].w[0] + 7848u));
    c.f[0] = ld32((c.r[16].w[0] + 7852u));
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 7824u));
    c.f[2] = ld32((c.r[16].w[0] + 7828u));
    c.f[1] = ld32((c.r[16].w[0] + 7832u));
    c.f[0] = ld32((c.r[16].w[0] + 7836u));
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0120u); st32((c.r[21].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002D0120u) [[unlikely]] return; }
L_002D0120:
    set32(c.r[5], c.r[16].w[0] + 7936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D012Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002D012Cu) [[unlikely]] return; }
L_002D012C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0134u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002D0134u) [[unlikely]] return; }
L_002D0134:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0144u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D0144u) [[unlikely]] return; }
L_002D0144:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0150u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D0150u) [[unlikely]] return; }
L_002D0150:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D015Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D015Cu) [[unlikely]] return; }
L_002D015C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0164u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0164u) [[unlikely]] return; }
L_002D0164:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0174u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D0174u) [[unlikely]] return; }
L_002D0174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D017Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D017Cu) [[unlikely]] return; }
L_002D017C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 5120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D018Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 318u, depth + 1u); else { c.pc = 0x0013B9B0u; return; } if (c.pc != 0x002D018Cu) [[unlikely]] return; }
L_002D018C:
    set32(c.r[5], c.r[16].w[0] + 7872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0198u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D0198u) [[unlikely]] return; }
L_002D0198:
    set32(c.r[5], c.r[16].w[0] + 7856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D01A4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D01A4u) [[unlikely]] return; }
L_002D01A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002D051C; } }
L_002D01AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 6768u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] + 6768u);
    c.f[1] = ld32((c.r[16].w[0] + 4960u));
    set32(c.r[19], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[12], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[11], c.r[3].w[0] + 6768u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 20;
L_002D01FC:
    set32(c.r[9], c.r[3].w[0] + 6768u);
    c.f[1] = ld32((c.r[16].w[0] + 4964u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[3].w[0] + 6768u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[3].w[0] + 6768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 6768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 6768u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4968u));
    set32(c.r[2], c.r[2].w[0] + 6768u);
    set32(c.r[21], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[20], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 7952u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6768u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4976u));
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4980u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 4984u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7840u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[21].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7844u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7848u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7824u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7828u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[16].w[0] + 7832u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 94;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0374u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002D0374u) [[unlikely]] return; }
L_002D0374:
    set32(c.r[5], c.r[16].w[0] + 7936u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0380u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002D0380u) [[unlikely]] return; }
L_002D0380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0388u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002D0388u) [[unlikely]] return; }
L_002D0388:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0398u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D0398u) [[unlikely]] return; }
L_002D0398:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03A4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D03A4u) [[unlikely]] return; }
L_002D03A4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03B0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D03B0u) [[unlikely]] return; }
L_002D03B0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03BCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D03BCu) [[unlikely]] return; }
L_002D03BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03CCu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D03CCu) [[unlikely]] return; }
L_002D03CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03D4u); c.r[4].d[0] = ld16((c.r[16].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D03D4u) [[unlikely]] return; }
L_002D03D4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03E4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D03E4u) [[unlikely]] return; }
L_002D03E4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D03F0u) [[unlikely]] return; }
L_002D03F0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D03FCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D03FCu) [[unlikely]] return; }
L_002D03FC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0408u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0408u) [[unlikely]] return; }
L_002D0408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0410u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002D0410u) [[unlikely]] return; }
L_002D0410:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0420u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D0420u) [[unlikely]] return; }
L_002D0420:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D042Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D042Cu) [[unlikely]] return; }
L_002D042C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0438u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D0438u) [[unlikely]] return; }
L_002D0438:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0444u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0444u) [[unlikely]] return; }
L_002D0444:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0454u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D0454u) [[unlikely]] return; }
L_002D0454:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0460u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D0460u) [[unlikely]] return; }
L_002D0460:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D046Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D046Cu) [[unlikely]] return; }
L_002D046C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0474u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0474u) [[unlikely]] return; }
L_002D0474:
    set32(c.r[5], c.r[16].w[0] + 5136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0480u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D0480u) [[unlikely]] return; }
L_002D0480:
    set32(c.r[5], c.r[16].w[0] + 7856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D048Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D048Cu) [[unlikely]] return; }
L_002D048C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0494u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002D0494u) [[unlikely]] return; }
L_002D0494:
    c.f[12] = ld32((c.r[16].w[0] + 4144u));
    c.f[13] = ld32((c.r[16].w[0] + 4148u));
    c.f[14] = ld32((c.r[16].w[0] + 4152u));
    set32(c.r[17], c.r[16].w[0] + 4144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04ACu); set32(c.r[18], c.r[16].w[0] + 4628u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D04ACu) [[unlikely]] return; }
L_002D04AC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04B8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D04B8u) [[unlikely]] return; }
L_002D04B8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04C4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D04C4u) [[unlikely]] return; }
L_002D04C4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04D0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D04D0u) [[unlikely]] return; }
L_002D04D0:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04E0u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002D04E0u) [[unlikely]] return; }
L_002D04E0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04ECu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002D04ECu) [[unlikely]] return; }
L_002D04EC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D04F8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002D04F8u) [[unlikely]] return; }
L_002D04F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0500u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002D0500u) [[unlikely]] return; }
L_002D0500:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D050Cu); set32(c.r[5], c.r[16].w[0] + 5120u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D050Cu) [[unlikely]] return; }
L_002D050C:
    set32(c.r[5], c.r[16].w[0] + 7872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0518u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002D0518u) [[unlikely]] return; }
L_002D0518:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D051C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002D0540:
    c.f[0] = ld32((c.r[4].w[0] + 4052u));
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 8016u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D058C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7808u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D058C; } }
    c.f[3] = ld32((c.r[4].w[0] + 5056u));
    c.f[2] = ld32((c.r[4].w[0] + 5060u));
    c.f[1] = ld32((c.r[4].w[0] + 5064u));
    c.f[0] = ld32((c.r[4].w[0] + 5068u));
    st32((c.r[4].w[0] + 4048u), c.f[3]);
    st32((c.r[4].w[0] + 4052u), c.f[2]);
    st32((c.r[4].w[0] + 4056u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4060u), c.f[0]);  if (t) { goto L_002D05C0; } }
L_002D058C:
    c.f[0] = ld32((c.r[4].w[0] + 5056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 6672u);
    st32((c.r[4].w[0] + 4048u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[1] = ld32((c.r[4].w[0] + 5060u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4052u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 5064u));
    st32((c.r[4].w[0] + 4056u), c.f[0]);
    c.budget -= 13;
L_002D05C0:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (t) { goto L_002D0600; } }
L_002D05CC:
    c.f[3] = ld32((c.r[6].w[0] + 4992u));
    c.f[2] = ld32((c.r[6].w[0] + 4996u));
    c.f[1] = ld32((c.r[6].w[0] + 5000u));
    c.f[0] = ld32((c.r[6].w[0] + 5004u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st32((c.r[6].w[0] + 5152u), c.f[3]);
    st32((c.r[6].w[0] + 5156u), c.f[2]);
    st32((c.r[6].w[0] + 5160u), c.f[1]);
    st32((c.r[6].w[0] + 5164u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 13;
L_002D0600:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D05CCu | kUnwind; return; } goto L_002D05CC; } }
    c.f[1] = ld32((c.r[4].w[0] + 5024u));
    c.f[0] = ld32((c.r[4].w[0] + 7984u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5184u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5028u));
    c.f[0] = ld32((c.r[4].w[0] + 7988u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5188u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5032u));
    c.f[0] = ld32((c.r[4].w[0] + 7992u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5192u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5040u));
    c.f[0] = ld32((c.r[4].w[0] + 7968u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5200u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5044u));
    c.f[0] = ld32((c.r[4].w[0] + 7972u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 5204u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 5048u));
    c.f[0] = ld32((c.r[4].w[0] + 7976u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 5208u), c.f[0]);  c.pc = t; return; }
L_002D0680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0694u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 235u, depth + 1u); else { c.pc = 0x002CFB80u; return; } if (c.pc != 0x002D0694u) [[unlikely]] return; }
L_002D0694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D069Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 153u, depth + 1u); else { c.pc = 0x002CF340u; return; } if (c.pc != 0x002D069Cu) [[unlikely]] return; }
L_002D069C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D06B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 47u, depth + 1u); else { c.pc = 0x002D47F0u; return; } if (c.pc != 0x002D06B0u) [[unlikely]] return; }
L_002D06B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D06B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06BCu);  if (depth < kMaxDepth) unit_005B(c, 316u, depth + 1u); else { c.pc = 0x0026FC50u; return; } if (c.pc != 0x002D06BCu) [[unlikely]] return; }
L_002D06BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D06C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x002D06C4u) [[unlikely]] return; }
L_002D06C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D06E0:
    c.f[0] = ld32((c.r[4].w[0] + 7752u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D06FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D0718; } }
L_002D06FC:
    c.f[0] = ld32((c.r[4].w[0] + 7760u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D0714; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D0714:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002D0718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0720:
    c.f[0] = ld32((c.r[4].w[0] + 7792u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D073C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D0758; } }
L_002D073C:
    c.f[0] = ld32((c.r[4].w[0] + 7800u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D0754; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D0754:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002D0758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D0760:
    c.f[0] = ld32((c.r[4].w[0] + 7756u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D077C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D0798; } }
L_002D077C:
    c.f[0] = ld32((c.r[4].w[0] + 7764u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D0794; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D0794:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002D0798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D07A0:
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D07BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002D07D8; } }
L_002D07BC:
    c.f[0] = ld32((c.r[4].w[0] + 7804u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D07D4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002D07D4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002D07D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D07E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D07F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D07F4u) [[unlikely]] return; }
L_002D07F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0808u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002DB050u; return; } if (c.pc != 0x002D0808u) [[unlikely]] return; }
L_002D0808:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D0890; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D0894; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 771u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0890; } }
    st8((c.r[16].w[0] + 771u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32720u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002D0890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0890u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002D0890u) [[unlikely]] return; }
L_002D0890:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D0894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D089Cu);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D089Cu) [[unlikely]] return; }
L_002D089C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D08AC; } }
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D08AC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D08D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D08D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D08D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D08D8u) [[unlikely]] return; }
L_002D08D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D08F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0970; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0978; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 1308u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D0938; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D0938:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31537u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0968u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0968u) [[unlikely]] return; }
L_002D0968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D097C; } }
L_002D0970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0978u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D0978u) [[unlikely]] return; }
L_002D0978:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D097C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D0A84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D09C8; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D09C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] + 31536u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32688u);
    set32(c.r[3], c.r[7].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 1072u));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x002D0A64u) [[unlikely]] return; }
L_002D0A64:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0A7Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D0A7Cu) [[unlikely]] return; }
L_002D0A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002D0B0C; } }
L_002D0A84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.f[21] = ld32((c.r[16].w[0] + 7780u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[16].w[0] + 1004u));  if (t) { goto L_002D0AB4; } }
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 1004u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
L_002D0AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0ABCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002D0ABCu) [[unlikely]] return; }
L_002D0ABC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AC8u); st32((c.r[16].w[0] + 7780u), c.f[21]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D0AC8u) [[unlikely]] return; }
L_002D0AC8:
    c.f[1] = ld32((c.r[16].w[0] + 7792u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D0B04; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0AECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D0AECu) [[unlikely]] return; }
L_002D0AEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D0B04; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D0B04u) [[unlikely]] return; }
L_002D0B04:
    st32((c.r[16].w[0] + 1004u), c.f[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002D0B0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D0B30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCF0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 71u, depth); }
L_002D0B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D0B7C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B7Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D0B7Cu) [[unlikely]] return; }
L_002D0B7C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D0B88u) [[unlikely]] return; }
L_002D0B88:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0B94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D0B94u) [[unlikely]] return; }
L_002D0B94:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D0BA8u) [[unlikely]] return; }
L_002D0BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D0BB0u) [[unlikely]] return; }
L_002D0BB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D0C08; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31872u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C00u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0C00u) [[unlikely]] return; }
L_002D0C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D0C14; } }
L_002D0C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0C10u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D0C10u) [[unlikely]] return; }
L_002D0C10:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D0C14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D0C20:
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 1308u), 0u);
    st32((c.r[4].w[0] + 1304u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D0C68; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 741u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0C68; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002D0C78; } }
L_002D0C68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_002D0C78:
    st8((c.r[4].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  [[clang::musttail]] return unit_0076(c, 64u, depth); }
L_002D0CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D0D24; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D0D08; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D0CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D0D28; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D0CDC:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0D00u) [[unlikely]] return; }
L_002D0D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D0D24; } }
L_002D0D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0D10u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D0D10u) [[unlikely]] return; }
L_002D0D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0D24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D0D24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D0D28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 6u);  if (t) { goto L_002D0E18; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D0DD8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002D0D80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));  if (t) { goto L_002D0E2C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D0D80:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_002D0D98; } }
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 2;
L_002D0D98:
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 389u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0DD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D0DD8u) [[unlikely]] return; }
L_002D0DD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D0DF8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0DF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D0DF4u) [[unlikely]] return; }
L_002D0DF4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D0DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E00u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D0E00u) [[unlikely]] return; }
L_002D0E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0E28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
L_002D0E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D0E20u) [[unlikely]] return; }
L_002D0E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002D0E28u) [[unlikely]] return; }
L_002D0E28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 1;
L_002D0E2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D0E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D0E40u) [[unlikely]] return; }
L_002D0E40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D0EC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D0EA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D0E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D0FC8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D0E8C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EA8u); st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0EA8u) [[unlikely]] return; }
L_002D0EA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0FC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D0EC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002D0EFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D0FC4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0EF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0EF0u) [[unlikely]] return; }
L_002D0EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D0FC4; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002D0EFC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D0F68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D0F3C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F2Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0F2Cu) [[unlikely]] return; }
L_002D0F2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D0FC4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D0F3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0FC4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0F5Cu) [[unlikely]] return; }
L_002D0F5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D0FC4; } }
L_002D0F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D0F9C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0F8Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0F8Cu) [[unlikely]] return; }
L_002D0F8C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D0FC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D0F9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D0FC4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D0FBCu) [[unlikely]] return; }
L_002D0FBC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D0FC4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D0FD0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D0FD0u) [[unlikely]] return; }
L_002D0FD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D0FE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D102Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x002D102Cu) [[unlikely]] return; }
L_002D102C:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D103Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D103Cu) [[unlikely]] return; }
L_002D103C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 7u);
    st8((c.r[20].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002D1228; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002D11B8; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002D1078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 733u)));  if (t) { goto L_002D1260; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002D1078:
    st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 741u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[20].w[0] + 704u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D109Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D109Cu) [[unlikely]] return; }
L_002D109C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D10D0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D10B8; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D10B8:
    c.f[0] = ld32((c.r[20].w[0] + 1136u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 104u), c.f[0]);  if (t) { goto L_002D10E0; } }
L_002D10D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002D10E0:
    c.r[19].d[0] = c.r[16].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[18], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[18].w[0] + c.r[20].w[0]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D10FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D10FCu) [[unlikely]] return; }
L_002D10FC:
    c.f[2] = ld32((c.r[20].w[0] + 992u));
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1118u); st32((c.r[20].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D1118u) [[unlikely]] return; }
L_002D1118:
    c.f[1] = ld32((c.r[20].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D1184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] + 31535u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32684u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1228u), c.f[0]);  if (t) { goto L_002D1190; } }
L_002D1184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 1216u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1228u), 0u);
    c.budget -= 3;
L_002D1190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1198u); c.f[12] = ld32((c.r[20].w[0] + 1216u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D1198u) [[unlikely]] return; }
L_002D1198:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11A4u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x002D11A4u) [[unlikely]] return; }
L_002D11A4:
    c.f[20] = ld32((c.r[20].w[0] + 104u));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002D125C; } }
L_002D11B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = ld32((c.r[20].w[0] + 1004u));  if (t) { goto L_002D11D4; } }
    c.f[0] = ld32((c.r[20].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[20].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_002D11D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D11DCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002D11DCu) [[unlikely]] return; }
L_002D11DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 848u)));
    c.f[2] = ld32((c.r[20].w[0] + 1004u));
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 856u)));
    st32((c.r[20].w[0] + 1216u), c.f[1]);
    st32((c.r[20].w[0] + 1004u), c.f[21]);
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D125C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D125C; } }
L_002D1228:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1234u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D1234u) [[unlikely]] return; }
L_002D1234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 16384u);  if (t) { goto L_002D1248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 858u)));  if (t) { goto L_002D1248; } }
    set32(c.r[17], 0u + 16384u);
    c.budget -= 1;
L_002D1248:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1254u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D1254u) [[unlikely]] return; }
L_002D1254:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    st32((c.r[20].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 2;
L_002D125C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 733u)));
    c.budget -= 1;
L_002D1260:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D12C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D12A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D128C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002D13C8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D128C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    st8((c.r[20].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D12A8u) [[unlikely]] return; }
L_002D12A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D13C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D12C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002D12FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D13C4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D12F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D12F0u) [[unlikely]] return; }
L_002D12F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 735u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D13C4; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002D12FC:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D1368; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D133C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D132Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D132Cu) [[unlikely]] return; }
L_002D132C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D13C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D133C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D13C4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D135Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D135Cu) [[unlikely]] return; }
L_002D135C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D13C4; } }
L_002D1368:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D139C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D138Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D138Cu) [[unlikely]] return; }
L_002D138C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D13C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D139C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D13C4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D13BCu) [[unlikely]] return; }
L_002D13BC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D13C4:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_002D13C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13D0u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D13D0u) [[unlikely]] return; }
L_002D13D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D13D8u) [[unlikely]] return; }
L_002D13D8:
    c.f[1] = ld32((c.r[20].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D13ECu); st32((c.r[20].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D13ECu) [[unlikely]] return; }
L_002D13EC:
    c.f[2] = ld32((c.r[20].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D1434; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_002D1434:
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D145C; } }
    st32((c.r[20].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_002D145C:
    set32(c.r[5], ld32((c.r[20].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1468u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x002D1468u) [[unlikely]] return; }
L_002D1468:
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = ld32((c.r[20].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002D1488; } }
    st32((c.r[20].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 2;
L_002D1488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1490u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D1490u) [[unlikely]] return; }
L_002D1490:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002D14C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D151C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D14EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D1528; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D14EC:
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31936u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1514u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D1514u) [[unlikely]] return; }
L_002D1514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1524; } }
L_002D151C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1524u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D1524u) [[unlikely]] return; }
L_002D1524:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D1528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D1530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D15B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D1560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));  if (t) { goto L_002D15C4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D1560:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 65u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31936u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D15B0u) [[unlikely]] return; }
L_002D15B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D15C0; } }
L_002D15B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15C0u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D15C0u) [[unlikely]] return; }
L_002D15C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 1;
L_002D15C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D1600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15D4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D15D4u) [[unlikely]] return; }
L_002D15D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D1600; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D15E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D15E8u) [[unlikely]] return; }
L_002D15E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1600; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x002D1600u) [[unlikely]] return; }
L_002D1600:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D162C; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_002D162C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1638u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x002D1638u) [[unlikely]] return; }
L_002D1638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 31u, depth + 1u); else { c.pc = 0x002D8710u; return; } if (c.pc != 0x002D1640u) [[unlikely]] return; }
L_002D1640:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D1650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D16F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D16AC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D168C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D1704; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D168C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16A4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D16A4u) [[unlikely]] return; }
L_002D16A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1700; } }
L_002D16AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16B4u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D16B4u) [[unlikely]] return; }
L_002D16B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32032u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D16F0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D16F0u) [[unlikely]] return; }
L_002D16F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1700; } }
L_002D16F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1700u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D1700u) [[unlikely]] return; }
L_002D1700:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D1704:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D1710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D1808; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D17BC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D174C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D1828; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D174C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 73u);
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17B4u); st32((c.r[16].w[0] + 1304u), 0u);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D17B4u) [[unlikely]] return; }
L_002D17B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1824; } }
L_002D17BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D17C4u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D17C4u) [[unlikely]] return; }
L_002D17C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1824; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32032u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1800u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1800u) [[unlikely]] return; }
L_002D1800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D1824; } }
L_002D1808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1810u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D1810u) [[unlikely]] return; }
L_002D1810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1824; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1824u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D1824u) [[unlikely]] return; }
L_002D1824:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D1828:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D1840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D190C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D18F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D18B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D1888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D1A14; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D1888:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31968u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D18B4u) [[unlikely]] return; }
L_002D18B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1A10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D18F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D18F4u) [[unlikely]] return; }
L_002D18F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1A10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D190C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002D1948; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1A10; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D193Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D193Cu) [[unlikely]] return; }
L_002D193C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D1A10; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002D1948:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D19B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D1988; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1978u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D1978u) [[unlikely]] return; }
L_002D1978:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1A10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D1988:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1A10; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D19A8u) [[unlikely]] return; }
L_002D19A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1A10; } }
L_002D19B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D19E8; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D19D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D19D8u) [[unlikely]] return; }
L_002D19D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1A10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D19E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1A10; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A08u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D1A08u) [[unlikely]] return; }
L_002D1A08:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D1A10:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D1A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A1Cu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D1A1Cu) [[unlikely]] return; }
L_002D1A1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D1A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A6Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002D1A6Cu) [[unlikely]] return; }
L_002D1A6C:
    c.f[20] = c.f[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A7Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D1A7Cu) [[unlikely]] return; }
L_002D1A7C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1A98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D1A98u) [[unlikely]] return; }
L_002D1A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_002D1AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 858u)));  if (t) { goto L_002D1AAC; } }
    set32(c.r[16], 0u + 16384u);
    c.budget -= 1;
L_002D1AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1BDC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1BC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D1B84; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D1AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D1CE4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D1AE8:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1AF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D1AF8u) [[unlikely]] return; }
L_002D1AF8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D1B04u) [[unlikely]] return; }
L_002D1B04:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u - 65u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1312u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D1B58; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_002D1B58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31968u);
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1B84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1B84u) [[unlikely]] return; }
L_002D1B84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1CE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1BC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1BC4u) [[unlikely]] return; }
L_002D1BC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1CE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D1BDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002D1C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D1CE0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1C0Cu) [[unlikely]] return; }
L_002D1C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D1CE0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002D1C18:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D1C84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D1C58; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C48u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1C48u) [[unlikely]] return; }
L_002D1C48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1CE0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D1C58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1CE0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1C78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1C78u) [[unlikely]] return; }
L_002D1C78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1CE0; } }
L_002D1C84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D1CB8; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CA8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1CA8u) [[unlikely]] return; }
L_002D1CA8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D1CE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D1CB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D1CE0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D1CD8u) [[unlikely]] return; }
L_002D1CD8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D1CE0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002D1CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CECu);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D1CECu) [[unlikely]] return; }
L_002D1CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1CF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002D1CF4u) [[unlikely]] return; }
L_002D1CF4:
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D08u); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002D1D08u) [[unlikely]] return; }
L_002D1D08:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_002D1D54; } }
    fpu_div(c, 1u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_002D1D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D1D5Cu) [[unlikely]] return; }
L_002D1D5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D1D8C; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_002D1D8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1D98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x002D1D98u) [[unlikely]] return; }
L_002D1D98:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002D1DB8; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_002D1DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1DC0u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D1DC0u) [[unlikely]] return; }
L_002D1DC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D1DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D1E1C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002D1E0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D1E50; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D1E0C:
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_002D1E4C; } }
L_002D1E1C:
    c.f[1] = ld32((c.r[4].w[0] + 1200u));
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_002D1E4C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1E4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D1E4Cu) [[unlikely]] return; }
L_002D1E4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D1E50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D1E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D1EEC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_002D1E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002D209C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D1E94:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EA4u); st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D1EA4u) [[unlikely]] return; }
L_002D1EA4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[4], 0u - 261u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = c.r[5].d[0] | 128ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1ED8u); st8((c.r[17].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002D1ED8u) [[unlikely]] return; }
L_002D1ED8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D1EE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x002D1EE4u) [[unlikely]] return; }
L_002D1EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2098; } }
L_002D1EEC:
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_002D2098; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_002D1F34; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_002D1F34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3056u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    set32(c.r[6], c.r[16].w[0] + 12u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1220u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1224u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1228u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    st16((c.r[17].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 28u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1304u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2004u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D2004u) [[unlikely]] return; }
L_002D2004:
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2010u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D2010u) [[unlikely]] return; }
L_002D2010:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 32656u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D203C; } }
    st8((c.r[17].w[0] + 735u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002D203C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[3].w[0] + 32656u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D2070; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D2070:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D2098; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D2098; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2098u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002D2098u) [[unlikely]] return; }
L_002D2098:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D209C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D20B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D2134; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D211C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D20E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D2140; } }
L_002D20E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D20F0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D20F0u) [[unlikely]] return; }
L_002D20F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D210C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D213C; } }
L_002D210C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D213C; } }
L_002D211C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D213C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D2134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D213Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D213Cu) [[unlikely]] return; }
L_002D213C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2140:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D2308; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D2270; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002D222C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D21E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D21A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_002D2340; } }
L_002D21A8:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D233C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 10;
L_002D21E8:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D233C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 11;
L_002D222C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D233C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 11;
L_002D2270:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D233C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D22AC; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D22AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D230C; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002D22C8u) [[unlikely]] return; }
L_002D22C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002D2300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22E0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D22E0u) [[unlikely]] return; }
L_002D22E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D22FC; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D22F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002D22F4u) [[unlikely]] return; }
L_002D22F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2308; } }
L_002D22FC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002D2300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2308u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002D2308u) [[unlikely]] return; }
L_002D2308:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002D230C:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D233C; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2338u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D2338u) [[unlikely]] return; }
L_002D2338:
    st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_002D233C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_002D2340:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D23FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D2398; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D236C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D2444; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D236C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2374u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D2374u) [[unlikely]] return; }
L_002D2374:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D244C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D2398:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1224u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1224u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D244C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D244C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D23FC:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1228u), c.f[1]);  if (t) { goto L_002D2434; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D244C; } }
L_002D2434:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
L_002D2444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D244Cu);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D244Cu) [[unlikely]] return; }
L_002D244C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D2474; } }
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002D2474:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D248C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D248Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D248Cu) [[unlikely]] return; }
L_002D248C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2584; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002D24B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 892u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D24B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D24C0u); set32(c.r[5], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002D24C0u) [[unlikely]] return; }
L_002D24C0:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D2504; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D24F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
L_002D24F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] - 15360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
L_002D2504:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D2550; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D253C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
L_002D253C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
L_002D2550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2574; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (t) { goto L_002D2584; } }
L_002D2574:
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 4;
L_002D2584:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2590u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D2590u) [[unlikely]] return; }
L_002D2590:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D25A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D25A4u) [[unlikely]] return; }
L_002D25A4:
    set32(c.r[7], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D25E8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D25E8u) [[unlikely]] return; }
L_002D25E8:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D263C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2634u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D2634u) [[unlikely]] return; }
L_002D2634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D2648; } }
L_002D263C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2644u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D2644u) [[unlikely]] return; }
L_002D2644:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2648:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D2650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D266Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D266Cu) [[unlikely]] return; }
L_002D266C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2680u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D2680u) [[unlikely]] return; }
L_002D2680:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D26FC; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D26C4; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_002D26C8; } }
L_002D26C4:
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 1;
L_002D26C8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D26E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D26E0u) [[unlikely]] return; }
L_002D26E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002D2758; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D26FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2704u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D2704u) [[unlikely]] return; }
L_002D2704:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002D2758; } }
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 129u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2758u); st8((c.r[16].w[0] + 771u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D2758u) [[unlikely]] return; }
L_002D2758:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D2770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D2A28; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D2948; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_002D2860; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D27F8; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_002D27D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D2AA4; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002D27D4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 10u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D27F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002D27F4u) [[unlikely]] return; }
L_002D27F4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D27F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2800u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002D2800u) [[unlikely]] return; }
L_002D2800:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002D2AA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002D2854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2854u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D2854u) [[unlikely]] return; }
L_002D2854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D2AA0; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002D2860:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 389u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 759u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002D2894; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002D28A0; } }
L_002D2894:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D2AA0; } }
L_002D28A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1284u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1284u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D28F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002D2918; } }
L_002D28F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 8;
L_002D2918:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32096u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2940u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002D2940u) [[unlikely]] return; }
L_002D2940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2AA0; } }
L_002D2948:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_002D2970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D295Cu);  if (depth < kMaxDepth) unit_0062(c, 600u, depth + 1u); else { c.pc = 0x0028B910u; return; } if (c.pc != 0x002D295Cu) [[unlikely]] return; }
L_002D295C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));  if (t) { goto L_002D298C; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_002D2970:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D2988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2980u);  if (depth < kMaxDepth) unit_006F(c, 4u, depth + 1u); else { c.pc = 0x002BC020u; return; } if (c.pc != 0x002D2980u) [[unlikely]] return; }
L_002D2980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D2AA0; } }
L_002D2988:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 1;
L_002D298C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1284u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1284u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D29E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_002D2A00; } }
L_002D29E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 8464u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 8;
L_002D2A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32096u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A28u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002D2A28u) [[unlikely]] return; }
L_002D2A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002D2A30u) [[unlikely]] return; }
L_002D2A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002D2A38u) [[unlikely]] return; }
L_002D2A38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D2AA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D2AA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D2AA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A8Cu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D2A8Cu) [[unlikely]] return; }
L_002D2A8C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2A98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x002D2A98u) [[unlikely]] return; }
L_002D2A98:
    st32((c.r[16].w[0] + 972u), 0u);
    st32((c.r[16].w[0] + 968u), 0u);
    c.budget -= 2;
L_002D2AA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2AA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2AD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002D2AD4u) [[unlikely]] return; }
L_002D2AD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D2AF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.budget -= 4;
L_002D2AF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D2B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D2B70; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D2B40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D2BAC; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D2B40:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32128u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B68u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002D2B68u) [[unlikely]] return; }
L_002D2B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D2BA8; } }
L_002D2B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2B78u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002D2B78u) [[unlikely]] return; }
L_002D2B78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D2BA8; } }
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 33u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BA8u); st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D2BA8u) [[unlikely]] return; }
L_002D2BA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2BAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2BD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D2BD4u) [[unlikely]] return; }
L_002D2BD4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D2CAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D2C5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002D2C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D2CB0; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D2C04:
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D2C1C; } }
    set32(c.r[3], c.r[3].w[0] + 8191u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));
    c.budget -= 2;
L_002D2C1C:
    set32(c.r[3], c.r[28].w[0] - 28664u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_002D2C40; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D2C58; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_002D2C40:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002D2C58:
    st32((c.r[16].w[0] + 1200u), c.f[0]);
    c.budget -= 1;
L_002D2C5C:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (t) { goto L_002D2CAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32064u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D2CACu) [[unlikely]] return; }
L_002D2CAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2CB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D2CD4u) [[unlikely]] return; }
L_002D2CD4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2CE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D2CE0u) [[unlikely]] return; }
L_002D2CE0:
    set32(c.r[7], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[6].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D2DAC; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002D2D0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D2E38; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002D2D0C:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_002D2D58; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D2D58:
    set32(c.r[2], c.r[28].w[0] - 28664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002D2D7C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002D2D94; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_002D2D7C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_002D2D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2D9Cu); st32((c.r[16].w[0] + 1216u), c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002D2D9Cu) [[unlikely]] return; }
L_002D2D9C:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D9610u; return; } if (c.pc != 0x002D2DA8u) [[unlikely]] return; }
L_002D2DA8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D2DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DB4u);  if (depth < kMaxDepth) unit_0076(c, 102u, depth + 1u); else { c.pc = 0x002D9640u; return; } if (c.pc != 0x002D2DB4u) [[unlikely]] return; }
L_002D2DB4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2DC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x002D2DC8u) [[unlikely]] return; }
L_002D2DC8:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002D2E34; } }
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32064u);
    set32(c.r[6], 0u + 7u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E28u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D2E28u) [[unlikely]] return; }
L_002D2E28:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D2E34u) [[unlikely]] return; }
L_002D2E34:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D2E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E40u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D2E40u) [[unlikely]] return; }
L_002D2E40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2E50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCF0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 71u, depth); }
L_002D2E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2E74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D2E74u) [[unlikely]] return; }
L_002D2E74:
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002D2F34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D2ED0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D2EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002D2F38; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D2EB8:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002D2ED0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D2EF4; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_002D2EF4:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002D2F34; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
L_002D2F34:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_002D2F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D2F40u) [[unlikely]] return; }
L_002D2F40:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D2F4Cu) [[unlikely]] return; }
L_002D2F4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F60u); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D2F60u) [[unlikely]] return; }
L_002D2F60:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x002D2F74u) [[unlikely]] return; }
L_002D2F74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D2F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2F8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 31u, depth + 1u); else { c.pc = 0x002D8710u; return; } if (c.pc != 0x002D2F8Cu) [[unlikely]] return; }
L_002D2F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D2FA4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D2F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FA0u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D2FA0u) [[unlikely]] return; }
L_002D2FA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D2FA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D2FB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D2FF4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32192u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D2FF4u) [[unlikely]] return; }
L_002D2FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D2FFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D2FFCu) [[unlikely]] return; }
L_002D2FFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D30A4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[6], 0u - 65u);
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 10u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + 32192u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D309Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D309Cu) [[unlikely]] return; }
L_002D309C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D30BC; } }
L_002D30A4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D30B8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D30B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D30BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30C4u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D30C4u) [[unlikely]] return; }
L_002D30C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30D8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D30D8u) [[unlikely]] return; }
L_002D30D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3104; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D30ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D30ECu) [[unlikely]] return; }
L_002D30EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3104; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3104u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x002D3104u) [[unlikely]] return; }
L_002D3104:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3110u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x002D3110u) [[unlikely]] return; }
L_002D3110:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D3130; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D3144; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D3130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3138u);  if (depth < kMaxDepth) unit_0076(c, 31u, depth + 1u); else { c.pc = 0x002D8710u; return; } if (c.pc != 0x002D3138u) [[unlikely]] return; }
L_002D3138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D3150; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D3144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D314Cu);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D314Cu) [[unlikely]] return; }
L_002D314C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3150:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D31F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002D318C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D3200; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D318C:
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D31FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 850u)));
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002D31DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32160u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D31D4u) [[unlikely]] return; }
L_002D31D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D31FC; } }
L_002D31DC:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D31ECu) [[unlikely]] return; }
L_002D31EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D31FC; } }
L_002D31F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D31FCu);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D31FCu) [[unlikely]] return; }
L_002D31FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D3210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D32D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D3240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));  if (t) { goto L_002D32DC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D3240:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 453u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.budget -= 19;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002D32B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32160u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D32B0u) [[unlikely]] return; }
L_002D32B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D32D8; } }
L_002D32B8:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D32C8u) [[unlikely]] return; }
L_002D32C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D32D8; } }
L_002D32D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32D8u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D32D8u) [[unlikely]] return; }
L_002D32D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 1;
L_002D32DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D32ECu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D32ECu) [[unlikely]] return; }
L_002D32EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3318; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3300u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D3300u) [[unlikely]] return; }
L_002D3300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3318; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x002D3318u) [[unlikely]] return; }
L_002D3318:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3340u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 144u, depth + 1u); else { c.pc = 0x002D5DA0u; return; } if (c.pc != 0x002D3340u) [[unlikely]] return; }
L_002D3340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3348u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 31u, depth + 1u); else { c.pc = 0x002D8710u; return; } if (c.pc != 0x002D3348u) [[unlikely]] return; }
L_002D3348:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D33CC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 1308u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D3394; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D3394:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32320u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[6], 0u + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D33C4u) [[unlikely]] return; }
L_002D33C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D33D8; } }
L_002D33CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D33D4u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D33D4u) [[unlikely]] return; }
L_002D33D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D33D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D33E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 764u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D34F0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D341C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002D3580; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D341C:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D344Cu); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D344Cu) [[unlikely]] return; }
L_002D344C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1308u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D3460; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D3460:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[1] = ld32((c.r[2].w[0] + 1104u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32320u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_002D349C; } }
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_002D349C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x002D34D0u) [[unlikely]] return; }
L_002D34D0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34E8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D34E8u) [[unlikely]] return; }
L_002D34E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D357C; } }
L_002D34F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D34F8u);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002D34F8u) [[unlikely]] return; }
L_002D34F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3500u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D3500u) [[unlikely]] return; }
L_002D3500:
    c.f[1] = ld32((c.r[16].w[0] + 7792u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3520u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 90u, depth + 1u); else { c.pc = 0x002D52C0u; return; } if (c.pc != 0x002D3520u) [[unlikely]] return; }
L_002D3520:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3534u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x002D3534u) [[unlikely]] return; }
L_002D3534:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D355C; } }
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002D355C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3564u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D3564u) [[unlikely]] return; }
L_002D3564:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D357C; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D357Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D357Cu) [[unlikely]] return; }
L_002D357C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3580:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D3590:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCF0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 71u, depth); }
L_002D35A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35C0u); st8((c.r[4].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D35C0u) [[unlikely]] return; }
L_002D35C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D35E4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 14u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1140u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_002D35E4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D35F0u) [[unlikely]] return; }
L_002D35F0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D35FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D35FCu) [[unlikely]] return; }
L_002D35FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D360Cu); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 90u, depth + 1u); else { c.pc = 0x002D52C0u; return; } if (c.pc != 0x002D360Cu) [[unlikely]] return; }
L_002D360C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3620u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x002D3620u) [[unlikely]] return; }
L_002D3620:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D3648; } }
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002D3648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3650u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D3650u) [[unlikely]] return; }
L_002D3650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D3658u) [[unlikely]] return; }
L_002D3658:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D3728; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D36D8; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002D36AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D3734; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002D36AC:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32224u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D36D4u) [[unlikely]] return; }
L_002D36D4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D36D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D36E0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D36E0u) [[unlikely]] return; }
L_002D36E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    set32(c.r[6], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002D3730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32256u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3720u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3720u) [[unlikely]] return; }
L_002D3720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3730; } }
L_002D3728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3730u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D3730u) [[unlikely]] return; }
L_002D3730:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3734:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3758u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x002D3758u) [[unlikely]] return; }
L_002D3758:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D38E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002D37D8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002D3788; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002D3910; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002D3788:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32224u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D37D4u) [[unlikely]] return; }
L_002D37D4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D37D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37E0u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D37E0u) [[unlikely]] return; }
L_002D37E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D37F4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002D37F4u) [[unlikely]] return; }
L_002D37F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3820; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3808u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D3808u) [[unlikely]] return; }
L_002D3808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3820; } }
    c.f[12] = ld32((c.r[16].w[0] + 1036u));
    set32(c.r[5], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 129u, depth + 1u); else { c.pc = 0x002D5B30u; return; } if (c.pc != 0x002D3820u) [[unlikely]] return; }
L_002D3820:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3834u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 148u, depth + 1u); else { c.pc = 0x002D5E70u; return; } if (c.pc != 0x002D3834u) [[unlikely]] return; }
L_002D3834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D383Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002D383Cu) [[unlikely]] return; }
L_002D383C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D390C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002D38A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32256u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 25u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3898u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3898u) [[unlikely]] return; }
L_002D3898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D390C; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002D38A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002D38ACu) [[unlikely]] return; }
L_002D38AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_002D38CC; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002D38C8u) [[unlikely]] return; }
L_002D38C8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002D38CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D38D4u) [[unlikely]] return; }
L_002D38D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D390C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D38E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D38E8u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D38E8u) [[unlikely]] return; }
L_002D38E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D390C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D390Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D390Cu) [[unlikely]] return; }
L_002D390C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3910:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D39A0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D3938:
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8059u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D39A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7815u)));
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 1308u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D3968; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D3968:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31537u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3998u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3998u) [[unlikely]] return; }
L_002D3998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D39AC; } }
L_002D39A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D39A8u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D39A8u) [[unlikely]] return; }
L_002D39A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D39AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D39C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002D3B28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002D39F8; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002D39F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 31536u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32688u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 1136u));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 1228u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 1312u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AA0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 95u, depth + 1u); else { c.pc = 0x002D9500u; return; } if (c.pc != 0x002D3AA0u) [[unlikely]] return; }
L_002D3AA0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AB8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3AB8u) [[unlikely]] return; }
L_002D3AB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_002D3AE4; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AD8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002D3AD8u) [[unlikely]] return; }
L_002D3AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D3BB0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_002D3AE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_002D3B08; } }
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3AFCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002D3AFCu) [[unlikely]] return; }
L_002D3AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3BAC; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002D3B08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3BAC; } }
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B20u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002D3B20u) [[unlikely]] return; }
L_002D3B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D3BAC; } }
L_002D3B28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.f[21] = ld32((c.r[17].w[0] + 7780u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[17].w[0] + 1004u));  if (t) { goto L_002D3B58; } }
    c.f[0] = ld32((c.r[17].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
L_002D3B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B60u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D9540u; return; } if (c.pc != 0x002D3B60u) [[unlikely]] return; }
L_002D3B60:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B6Cu); st32((c.r[17].w[0] + 7780u), c.f[21]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D3B6Cu) [[unlikely]] return; }
L_002D3B6C:
    c.f[1] = ld32((c.r[17].w[0] + 7792u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D3BA8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3B90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D3B90u) [[unlikely]] return; }
L_002D3B90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3BA8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002D3BA8u) [[unlikely]] return; }
L_002D3BA8:
    st32((c.r[17].w[0] + 1004u), c.f[20]);
    c.budget -= 1;
L_002D3BAC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D3BB0:
    st8((c.r[17].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3BBCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D3BBCu) [[unlikely]] return; }
L_002D3BBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D3BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1308u)));
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D3C0C; } }
    c.r[1].d[0] = 0ull | 49153ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_002D3C3C; } }
L_002D3C0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002D3CF8; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 28u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3C30u) [[unlikely]] return; }
L_002D3C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D3CF4; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002D3C3C:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D3CA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D3C78; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C68u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3C68u) [[unlikely]] return; }
L_002D3C68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3CF4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D3C78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3CF4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3C94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3C94u) [[unlikely]] return; }
L_002D3C94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3CF4; } }
L_002D3CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 731u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D3CD0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 27u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3CC0u) [[unlikely]] return; }
L_002D3CC0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3CF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D3CD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3CF4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 27u);
    set32(c.r[7], 0u + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3CECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3CECu) [[unlikely]] return; }
L_002D3CEC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 731u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D3CF4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002D3CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3D00u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D3D00u) [[unlikely]] return; }
L_002D3D00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D3D64; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002D3D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_002D3E80; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002D3D40:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 9;
L_002D3D64:
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3D84; } }
    c.r[1].d[0] = 0ull | 49153ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_002D3DB4; } }
L_002D3D84:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3E7C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 28u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DA8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3DA8u) [[unlikely]] return; }
L_002D3DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D3E7C; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002D3DB4:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D3E20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D3DF4; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3DE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3DE4u) [[unlikely]] return; }
L_002D3DE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3E7C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002D3DF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3E7C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E14u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3E14u) [[unlikely]] return; }
L_002D3E14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3E7C; } }
L_002D3E20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 735u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D3E54; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 27u);
    set32(c.r[7], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E44u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3E44u) [[unlikely]] return; }
L_002D3E44:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D3E7C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002D3E54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D3E7C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 27u);
    set32(c.r[7], 0u + 36u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3E74u) [[unlikely]] return; }
L_002D3E74:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D3E7C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_002D3E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x002D3E88u) [[unlikely]] return; }
L_002D3E88:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3E94u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 165u, depth + 1u); else { c.pc = 0x002D61C0u; return; } if (c.pc != 0x002D3E94u) [[unlikely]] return; }
L_002D3E94:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D3EA8u) [[unlikely]] return; }
L_002D3EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D3EB0u) [[unlikely]] return; }
L_002D3EB0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 738u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3EC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002D3EC0u) [[unlikely]] return; }
L_002D3EC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D3ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D3F18; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31872u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F10u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002D3F10u) [[unlikely]] return; }
L_002D3F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002D3F24; } }
L_002D3F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3F20u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002D3F20u) [[unlikely]] return; }
L_002D3F20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002D3F24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D3F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002D3FCC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    set32(c.r[2], 0u + 18u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 31872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3FA0; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_002D3FA8; } }
L_002D3FA0:
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002D3FA8:
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.f[12] = 0u;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FC4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002D3FC4u) [[unlikely]] return; }
L_002D3FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (t) { goto L_002D3FF4; } }
L_002D3FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FD4u);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002D3FD4u) [[unlikely]] return; }
L_002D3FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D3FF0; } }
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FF0u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002D3FF0u) [[unlikely]] return; }
L_002D3FF0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 1;
L_002D3FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D3FFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 132u, depth + 1u); else { c.pc = 0x002D5BB0u; return; } if (c.pc != 0x002D3FFCu) [[unlikely]] return; }
L_002D3FFC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0075(c, 1u, depth);
}

}
