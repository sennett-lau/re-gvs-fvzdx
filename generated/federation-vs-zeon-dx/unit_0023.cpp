#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0023[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0,
    9, 0, 10, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0,
    0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0023(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0018C000;
    case 2u: goto L_0018C014;
    case 3u: goto L_0018C034;
    case 4u: goto L_0018C080;
    case 5u: goto L_0018C09C;
    case 6u: goto L_0018C0D8;
    case 7u: goto L_0018C0E8;
    case 8u: goto L_0018C0F8;
    case 9u: goto L_0018C100;
    case 10u: goto L_0018C108;
    case 11u: goto L_0018C10C;
    case 12u: goto L_0018C120;
    case 13u: goto L_0018C140;
    case 14u: goto L_0018C1E8;
    case 15u: goto L_0018C238;
    case 16u: goto L_0018C248;
    case 17u: goto L_0018C278;
    case 18u: goto L_0018C290;
    case 19u: goto L_0018C304;
    case 20u: goto L_0018C310;
    case 21u: goto L_0018C31C;
    case 22u: goto L_0018C328;
    case 23u: goto L_0018C334;
    case 24u: goto L_0018C38C;
    case 25u: goto L_0018C3A0;
    case 26u: goto L_0018C3CC;
    case 27u: goto L_0018C3FC;
    case 28u: goto L_0018C40C;
    case 29u: goto L_0018C41C;
    case 30u: goto L_0018C424;
    case 31u: goto L_0018C434;
    case 32u: goto L_0018C448;
    case 33u: goto L_0018C450;
    case 34u: goto L_0018C460;
    case 35u: goto L_0018C470;
    case 36u: goto L_0018C478;
    case 37u: goto L_0018C488;
    case 38u: goto L_0018C498;
    case 39u: goto L_0018C4A8;
    case 40u: goto L_0018C4B8;
    case 41u: goto L_0018C4C8;
    case 42u: goto L_0018C4E4;
    case 43u: goto L_0018C4F4;
    case 44u: goto L_0018C504;
    case 45u: goto L_0018C520;
    case 46u: goto L_0018C530;
    case 47u: goto L_0018C540;
    case 48u: goto L_0018C590;
    case 49u: goto L_0018C5CC;
    case 50u: goto L_0018C5D4;
    case 51u: goto L_0018C5DC;
    case 52u: goto L_0018C5FC;
    case 53u: goto L_0018C60C;
    case 54u: goto L_0018C650;
    case 55u: goto L_0018C694;
    case 56u: goto L_0018C69C;
    case 57u: goto L_0018C790;
    case 58u: goto L_0018C7C4;
    case 59u: goto L_0018C7CC;
    case 60u: goto L_0018C810;
    case 61u: goto L_0018C880;
    case 62u: goto L_0018C8EC;
    case 63u: goto L_0018C900;
    case 64u: goto L_0018C92C;
    case 65u: goto L_0018C934;
    case 66u: goto L_0018C948;
    case 67u: goto L_0018C958;
    case 68u: goto L_0018C968;
    case 69u: goto L_0018C97C;
    case 70u: goto L_0018C9B4;
    case 71u: goto L_0018C9F8;
    case 72u: goto L_0018CB0C;
    case 73u: goto L_0018CB14;
    case 74u: goto L_0018CB1C;
    case 75u: goto L_0018CB2C;
    case 76u: goto L_0018CB50;
    case 77u: goto L_0018CB60;
    case 78u: goto L_0018CB84;
    case 79u: goto L_0018CB94;
    case 80u: goto L_0018CBB8;
    case 81u: goto L_0018CC00;
    case 82u: goto L_0018CC48;
    case 83u: goto L_0018CD00;
    case 84u: goto L_0018CD20;
    case 85u: goto L_0018CD48;
    case 86u: goto L_0018CD58;
    case 87u: goto L_0018CDC0;
    case 88u: goto L_0018CE30;
    case 89u: goto L_0018CE98;
    case 90u: goto L_0018CEAC;
    case 91u: goto L_0018CED4;
    case 92u: goto L_0018CEF0;
    case 93u: goto L_0018CF28;
    case 94u: goto L_0018CF54;
    case 95u: goto L_0018CF64;
    case 96u: goto L_0018CF6C;
    case 97u: goto L_0018D030;
    case 98u: goto L_0018D064;
    case 99u: goto L_0018D0A8;
    case 100u: goto L_0018D0D0;
    case 101u: goto L_0018D240;
    case 102u: goto L_0018D2C8;
    case 103u: goto L_0018D32C;
    case 104u: goto L_0018D368;
    case 105u: goto L_0018D3A0;
    case 106u: goto L_0018D3E0;
    case 107u: goto L_0018D400;
    case 108u: goto L_0018D41C;
    case 109u: goto L_0018D434;
    case 110u: goto L_0018D470;
    case 111u: goto L_0018D4B4;
    case 112u: goto L_0018D4C8;
    case 113u: goto L_0018D508;
    case 114u: goto L_0018D5A8;
    case 115u: goto L_0018D5BC;
    case 116u: goto L_0018D61C;
    case 117u: goto L_0018D64C;
    case 118u: goto L_0018D664;
    case 119u: goto L_0018D678;
    case 120u: goto L_0018D690;
    case 121u: goto L_0018D6BC;
    case 122u: goto L_0018D6D0;
    case 123u: goto L_0018D6F8;
    case 124u: goto L_0018D758;
    case 125u: goto L_0018D78C;
    case 126u: goto L_0018D7A4;
    case 127u: goto L_0018D7B8;
    case 128u: goto L_0018D7E8;
    case 129u: goto L_0018D81C;
    case 130u: goto L_0018D85C;
    case 131u: goto L_0018D874;
    case 132u: goto L_0018D888;
    case 133u: goto L_0018D8A0;
    case 134u: goto L_0018D8D0;
    case 135u: goto L_0018D8E4;
    case 136u: goto L_0018D914;
    case 137u: goto L_0018D960;
    case 138u: goto L_0018D990;
    case 139u: goto L_0018D9C8;
    case 140u: goto L_0018D9F0;
    case 141u: goto L_0018DA0C;
    case 142u: goto L_0018DA50;
    case 143u: goto L_0018DA6C;
    case 144u: goto L_0018DAB0;
    case 145u: goto L_0018DB40;
    case 146u: goto L_0018DBA4;
    case 147u: goto L_0018DBB0;
    case 148u: goto L_0018DC00;
    case 149u: goto L_0018DC10;
    case 150u: goto L_0018DC20;
    case 151u: goto L_0018DC28;
    case 152u: goto L_0018DC40;
    case 153u: goto L_0018DC90;
    case 154u: goto L_0018DD04;
    case 155u: goto L_0018DD0C;
    case 156u: goto L_0018DDC0;
    case 157u: goto L_0018DDE8;
    case 158u: goto L_0018DE04;
    case 159u: goto L_0018DE24;
    case 160u: goto L_0018DE30;
    case 161u: goto L_0018DE54;
    case 162u: goto L_0018DE64;
    case 163u: goto L_0018DED0;
    case 164u: goto L_0018DEFC;
    case 165u: goto L_0018DF9C;
    case 166u: goto L_0018DFB0;
    case 167u: goto L_0018E0A0;
    case 168u: goto L_0018E104;
    case 169u: goto L_0018E10C;
    case 170u: goto L_0018E120;
    case 171u: goto L_0018E150;
    case 172u: goto L_0018E160;
    case 173u: goto L_0018E18C;
    case 174u: goto L_0018E194;
    case 175u: goto L_0018E1A0;
    case 176u: goto L_0018E1C4;
    case 177u: goto L_0018E270;
    case 178u: goto L_0018E2FC;
    case 179u: goto L_0018E368;
    case 180u: goto L_0018E374;
    case 181u: goto L_0018E390;
    case 182u: goto L_0018E468;
    case 183u: goto L_0018E4A0;
    case 184u: goto L_0018E4D8;
    case 185u: goto L_0018E57C;
    case 186u: goto L_0018E614;
    case 187u: goto L_0018E680;
    case 188u: goto L_0018E6C4;
    case 189u: goto L_0018E6F4;
    case 190u: goto L_0018E708;
    case 191u: goto L_0018E71C;
    case 192u: goto L_0018E740;
    case 193u: goto L_0018E778;
    case 194u: goto L_0018E7CC;
    case 195u: goto L_0018E7F8;
    case 196u: goto L_0018E800;
    case 197u: goto L_0018E8B4;
    case 198u: goto L_0018E8E0;
    case 199u: goto L_0018E950;
    case 200u: goto L_0018E994;
    case 201u: goto L_0018E9B8;
    case 202u: goto L_0018E9C4;
    case 203u: goto L_0018E9D4;
    case 204u: goto L_0018E9E0;
    case 205u: goto L_0018EA00;
    case 206u: goto L_0018EAD8;
    case 207u: goto L_0018EB10;
    case 208u: goto L_0018EB48;
    case 209u: goto L_0018EBF4;
    case 210u: goto L_0018ECAC;
    case 211u: goto L_0018ED10;
    case 212u: goto L_0018EE74;
    case 213u: goto L_0018EE80;
    case 214u: goto L_0018EE90;
    case 215u: goto L_0018EF14;
    case 216u: goto L_0018EF20;
    case 217u: goto L_0018EFE4;
    case 218u: goto L_0018EFF0;
    case 219u: goto L_0018EFFC;
    case 220u: goto L_0018F020;
    case 221u: goto L_0018F294;
    case 222u: goto L_0018F2CC;
    case 223u: goto L_0018F2FC;
    case 224u: goto L_0018F310;
    case 225u: goto L_0018F32C;
    case 226u: goto L_0018F388;
    case 227u: goto L_0018F394;
    case 228u: goto L_0018F3B4;
    case 229u: goto L_0018F474;
    case 230u: goto L_0018F480;
    case 231u: goto L_0018F4A8;
    case 232u: goto L_0018F4D0;
    case 233u: goto L_0018F4F0;
    case 234u: goto L_0018F560;
    case 235u: goto L_0018F658;
    case 236u: goto L_0018F6AC;
    case 237u: goto L_0018F6C0;
    case 238u: goto L_0018F7C8;
    case 239u: goto L_0018F830;
    case 240u: goto L_0018F840;
    case 241u: goto L_0018F858;
    case 242u: goto L_0018F87C;
    case 243u: goto L_0018F8B0;
    case 244u: goto L_0018F8D4;
    case 245u: goto L_0018F904;
    case 246u: goto L_0018F948;
    case 247u: goto L_0018F964;
    case 248u: goto L_0018F990;
    case 249u: goto L_0018FA88;
    case 250u: goto L_0018FAB0;
    case 251u: goto L_0018FB00;
    case 252u: goto L_0018FB0C;
    case 253u: goto L_0018FB3C;
    case 254u: goto L_0018FB98;
    case 255u: goto L_0018FBDC;
    case 256u: goto L_0018FC40;
    case 257u: goto L_0018FC60;
    case 258u: goto L_0018FC78;
    case 259u: goto L_0018FCC8;
    case 260u: goto L_0018FD14;
    case 261u: goto L_0018FD40;
    case 262u: goto L_0018FD84;
    case 263u: goto L_0018FE0C;
    case 264u: goto L_0018FE50;
    case 265u: goto L_0018FE8C;
    case 266u: goto L_0018FF08;
    case 267u: goto L_0018FF50;
    default: bad_entry(c, 0x0018C000u); return;
    }
L_0018C000:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C108; } }
L_0018C014:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018C108; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C108; } }
L_0018C034:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018C108; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
L_0018C080:
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 25708u), 0u);  if (t) { goto L_0018C108; } }
L_0018C09C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0018C100; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C0F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C0E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018C0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C108; } }
L_0018C0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C0D8u);  if (depth < kMaxDepth) unit_0023(c, 18u, depth + 1u); else { c.pc = 0x0018C290u; return; } if (c.pc != 0x0018C0D8u) [[unlikely]] return; }
L_0018C0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C108; } }
L_0018C0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C0E8u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018C790u; return; } if (c.pc != 0x0018C0E8u) [[unlikely]] return; }
L_0018C0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C108; } }
L_0018C0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C0F8u);  if (depth < kMaxDepth) unit_0023(c, 60u, depth + 1u); else { c.pc = 0x0018C810u; return; } if (c.pc != 0x0018C0F8u) [[unlikely]] return; }
L_0018C0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C108; } }
L_0018C100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C108u);  if (depth < kMaxDepth) unit_0023(c, 83u, depth + 1u); else { c.pc = 0x0018CD00u; return; } if (c.pc != 0x0018C108u) [[unlikely]] return; }
L_0018C108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018C10C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018C120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[3].w[0] + 3u);  if (t) { goto L_0018C270; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0018C140:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0018C240; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0018C1B4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0018C164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018C27C; } }
L_0018C164:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018C278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] + 25708u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25722u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018C278; } }
L_0018C1B4:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5175u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018C278; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], c.r[3].w[0] + 5168u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0018C208; } }
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0018C1E8:
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0018C208; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0018C218; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0018C208:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018C1E8u | kUnwind; return; } goto L_0018C1E8; } }
    c.budget -= 1;
L_0018C218:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0018C278; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C238u); st8((c.r[1].w[0] + 25722u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 83u, depth + 1u); else { c.pc = 0x00185030u; return; } if (c.pc != 0x0018C238u) [[unlikely]] return; }
L_0018C238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C278; } }
L_0018C240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C248u);  if (depth < kMaxDepth) unit_0020(c, 364u, depth + 1u); else { c.pc = 0x00183E50u; return; } if (c.pc != 0x0018C248u) [[unlikely]] return; }
L_0018C248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C278; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25722u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C278; } }
L_0018C270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C278u);  if (depth < kMaxDepth) unit_0017(c, 39u, depth + 1u); else { c.pc = 0x0015C510u; return; } if (c.pc != 0x0018C278u) [[unlikely]] return; }
L_0018C278:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018C27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018C290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[5].w[0] + 4u);  if (t) { goto L_0018C6D8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0018C658; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0018C384; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0018C334; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0018C2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C738; } }
L_0018C2F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C304u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C304u) [[unlikely]] return; }
L_0018C304:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C310u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C310u) [[unlikely]] return; }
L_0018C310:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C31Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C31Cu) [[unlikely]] return; }
L_0018C31C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C328u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C328u) [[unlikely]] return; }
L_0018C328:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C334u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C334u) [[unlikely]] return; }
L_0018C334:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018C738; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 25708u), c.r[5].w[0]);  if (t) { goto L_0018C738; } }
L_0018C384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C38Cu); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C38Cu) [[unlikely]] return; }
L_0018C38C:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    set32(c.r[6], 0u + 7u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C3A0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0018C3A0u) [[unlikely]] return; }
L_0018C3A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018C3CC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C3CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C3CCu) [[unlikely]] return; }
L_0018C3CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0018C59C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 22592u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018C3FC:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C40Cu); set32(c.r[16], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C40Cu) [[unlikely]] return; }
L_0018C40C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[6], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C41Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C41Cu) [[unlikely]] return; }
L_0018C41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C424:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C434u); mmi::paddub(c.r[16], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C434u) [[unlikely]] return; }
L_0018C434:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    set32(c.r[6], 0u + 3u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C448u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C448u) [[unlikely]] return; }
L_0018C448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C450:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C460u); set32(c.r[16], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C460u) [[unlikely]] return; }
L_0018C460:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C470u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C470u) [[unlikely]] return; }
L_0018C470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C478:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C488u); set32(c.r[16], c.r[18].w[0] + 3u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C488u) [[unlikely]] return; }
L_0018C488:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C498u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C498u) [[unlikely]] return; }
L_0018C498:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C4A8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C4B8u); set32(c.r[16], c.r[18].w[0] + 5u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C4B8u) [[unlikely]] return; }
L_0018C4B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C4C8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C4C8u) [[unlikely]] return; }
L_0018C4C8:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018C59C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C4E4:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C4F4u); set32(c.r[16], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C4F4u) [[unlikely]] return; }
L_0018C4F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C504u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C504u) [[unlikely]] return; }
L_0018C504:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018C59C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018C59C; } }
L_0018C520:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C530u); set32(c.r[16], c.r[18].w[0] + 6u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C530u) [[unlikely]] return; }
L_0018C530:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C540u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0018C540u) [[unlikely]] return; }
L_0018C540:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018C558; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018C558:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018C59C; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], 0u + 123u);  if (t) { goto L_0018C57C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0018C57C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C590u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x0018C590u) [[unlikely]] return; }
L_0018C590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C59C; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0018C59C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0018C5D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018C5D4; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 57u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C5CCu) [[unlikely]] return; }
L_0018C5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5D4u);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x0018C5D4u) [[unlikely]] return; }
L_0018C5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5DCu);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x0013A250u; return; } if (c.pc != 0x0018C5DCu) [[unlikely]] return; }
L_0018C5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C604; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C5FCu); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C5FCu) [[unlikely]] return; }
L_0018C5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C738; } }
L_0018C604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C60Cu);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x0018C60Cu) [[unlikely]] return; }
L_0018C60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C738; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018C738; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C650u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C650u) [[unlikely]] return; }
L_0018C650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C738; } }
L_0018C658:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[5].w[0] + 5u);  if (t) { goto L_0018C6A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018C678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C738; } }
L_0018C678:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C694u); st16((c.r[1].w[0] + 25702u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 139u, depth + 1u); else { c.pc = 0x00139F60u; return; } if (c.pc != 0x0018C694u) [[unlikely]] return; }
L_0018C694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C69Cu);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x0018C69Cu) [[unlikely]] return; }
L_0018C69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018C738; } }
L_0018C6A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25702u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25702u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018C738; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018C738; } }
L_0018C6D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018C738; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 25708u), 0u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_0018C738:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25702u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018C760; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018C774; } }
L_0018C760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0018C774:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018C790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018C7C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C7C4u); set32(c.r[4], ld32((c.r[1].w[0] - 19056u)));  if (depth < kMaxDepth) unit_003D(c, 245u, depth + 1u); else { c.pc = 0x001F6E70u; return; } if (c.pc != 0x0018C7C4u) [[unlikely]] return; }
L_0018C7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C7CCu);  if (depth < kMaxDepth) unit_003D(c, 248u, depth + 1u); else { c.pc = 0x001F6EF0u; return; } if (c.pc != 0x0018C7CCu) [[unlikely]] return; }
L_0018C7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C800; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_0018C800:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018C810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_0018CC50; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0018C9BC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C8E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018C894; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018C868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018C868:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], 0u + 5u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C880u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C880u) [[unlikely]] return; }
L_0018C880:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018CCB0; } }
L_0018C894:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018CCB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 25708u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018CCB0; } }
L_0018C8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C8ECu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 6u)));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C8ECu) [[unlikely]] return; }
L_0018C8EC:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    set32(c.r[6], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C900u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0018C900u) [[unlikely]] return; }
L_0018C900:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018C92C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C92Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C92Cu) [[unlikely]] return; }
L_0018C92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C934u);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x0013A250u; return; } if (c.pc != 0x0018C934u) [[unlikely]] return; }
L_0018C934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018C960; } }
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C948u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C948u) [[unlikely]] return; }
L_0018C948:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C958u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x0018C958u) [[unlikely]] return; }
L_0018C958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018C960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C968u);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x0018C968u) [[unlikely]] return; }
L_0018C968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CCB0; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C97Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018C97Cu) [[unlikely]] return; }
L_0018C97C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018CCB0; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C9B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 184u, depth + 1u); else { c.pc = 0x001DAE70u; return; } if (c.pc != 0x0018C9B4u) [[unlikely]] return; }
L_0018C9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018C9BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0018CC40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018CBC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0018CB58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018C9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018C9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018C9F8u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018C9F8u) [[unlikely]] return; }
L_0018C9F8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));  if (t) { goto L_0018CA3C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 1024ull;  if (t) { goto L_0018CA40; } }
    set32(c.r[2], 0u - 10u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018CA3C:
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 1;
L_0018CA40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_0018CA74; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018CA70; } }
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018CA70:
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 1;
L_0018CA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 4096ull;  if (t) { goto L_0018CAA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018CAA4; } }
    set32(c.r[2], 0u - 10u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018CAA4:
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 1;
L_0018CAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CAD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0018CAD8; } }
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018CAD8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_0018CB04; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018CB14; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0018CB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018CB0Cu) [[unlikely]] return; }
L_0018CB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB14u);  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x0018CB14u) [[unlikely]] return; }
L_0018CB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB1Cu);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x0013A250u; return; } if (c.pc != 0x0018CB1Cu) [[unlikely]] return; }
L_0018CB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018CB34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB2Cu);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x0018CB2Cu) [[unlikely]] return; }
L_0018CB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CB34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB50u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018CB50u) [[unlikely]] return; }
L_0018CB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB60u);  if (depth < kMaxDepth) unit_000E(c, 156u, depth + 1u); else { c.pc = 0x0013A250u; return; } if (c.pc != 0x0018CB60u) [[unlikely]] return; }
L_0018CB60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CB8C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB84u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018CB84u) [[unlikely]] return; }
L_0018CB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CB94u);  if (depth < kMaxDepth) unit_000E(c, 147u, depth + 1u); else { c.pc = 0x0013A0F0u; return; } if (c.pc != 0x0018CB94u) [[unlikely]] return; }
L_0018CB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CCB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CBB8u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018CBB8u) [[unlikely]] return; }
L_0018CBB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CBC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[8].w[0] + 5u);  if (t) { goto L_0018CC00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018CBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CBE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CC00u); st16((c.r[1].w[0] + 25702u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 139u, depth + 1u); else { c.pc = 0x00139F60u; return; } if (c.pc != 0x0018CC00u) [[unlikely]] return; }
L_0018CC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25702u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25702u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018CCB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018CCB0; } }
L_0018CC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CC48u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x0018CC48u) [[unlikely]] return; }
L_0018CC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CCB0; } }
L_0018CC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.f[1] = ld32((c.r[1].w[0] + 25708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[1].w[0] + 25708u), c.f[0]);  if (t) { goto L_0018CCB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 25708u), 0u);
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_0018CCB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25702u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018CCD8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018CCEC; } }
L_0018CCD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[3], c.r[3].w[0] + 4096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0018CCEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018CD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018CD50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CD20u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0018CD20u) [[unlikely]] return; }
L_0018CD20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018CDA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CD48u); st8((c.r[1].w[0] + 25720u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 77u, depth + 1u); else { c.pc = 0x00184FA0u; return; } if (c.pc != 0x0018CD48u) [[unlikely]] return; }
L_0018CD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018CDAC; } }
L_0018CD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CD58u);  if (depth < kMaxDepth) unit_0021(c, 86u, depth + 1u); else { c.pc = 0x00185060u; return; } if (c.pc != 0x0018CD58u) [[unlikely]] return; }
L_0018CD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018CDA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25720u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u + 2u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[2].d[0] & 6ull;
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018CDA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0018CDA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018CDAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018CDC0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3456u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0018CE1C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018CE0C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0018CE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018CE24; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0018CE00:
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018CE24; } }
L_0018CE0C:
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018CE24; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0018CE1C:
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 30u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0018CE24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018CE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 3456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 255u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 18u);
    set32(c.r[6], 0u + 6u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CE98u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0018CE98u) [[unlikely]] return; }
L_0018CE98:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 255u);
    c.budget -= 5;
L_0018CEAC:
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CEACu | kUnwind; return; } goto L_0018CEAC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CED4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 87u, depth + 1u); else { c.pc = 0x0018CDC0u; return; } if (c.pc != 0x0018CED4u) [[unlikely]] return; }
L_0018CED4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018CEF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 3520u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CF28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 465u, depth + 1u); else { c.pc = 0x0010BF40u; return; } if (c.pc != 0x0018CF28u) [[unlikely]] return; }
L_0018CF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[18], c.r[2].w[0] + 9088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[19], c.r[2].w[0] + 3392u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[20], c.r[2].w[0] + 3424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[21], c.r[28].w[0] - 26212u);
    set32(c.r[22], c.r[28].w[0] - 26208u);
    set32(c.r[23], c.r[2].w[0] + 3440u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 11;
L_0018CF54:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CF64u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 11u, depth + 1u); else { c.pc = 0x0010C1A0u; return; } if (c.pc != 0x0018CF64u) [[unlikely]] return; }
L_0018CF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018CF6Cu); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0023(c, 88u, depth + 1u); else { c.pc = 0x0018CE30u; return; } if (c.pc != 0x0018CF6Cu) [[unlikely]] return; }
L_0018CF6C:
    st8((c.r[19].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 255ull;
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 256u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[22], c.r[22].w[0] + 2u);
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018CF54u | kUnwind; return; } goto L_0018CF54; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0018D030:
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
    set32(c.r[4], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D064u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001F(c, 362u, depth + 1u); else { c.pc = 0x0017FDE0u; return; } if (c.pc != 0x0018D064u) [[unlikely]] return; }
L_0018D064:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 3520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[18], c.r[2].w[0] + 3440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[23], c.r[2].w[0] + 3456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[21], c.r[2].w[0] + 3424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[19], c.r[28].w[0] - 26212u);
    set32(c.r[20], c.r[28].w[0] - 26208u);
    set32(c.r[22], c.r[2].w[0] + 3392u);
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    c.budget -= 17;
L_0018D0A8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D0D0u); st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0003(c, 23u, depth + 1u); else { c.pc = 0x0010C4F0u; return; } if (c.pc != 0x0018D0D0u) [[unlikely]] return; }
L_0018D0D0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D214; } }
    c.r[2].d[0] = ld8((c.r[23].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018D214; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = ~(c.r[4].d[0] | c.r[3].d[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[4].d[0] = c.r[4].d[0] ^ 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 10u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018D148; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018D184; } }
    c.budget -= 1;
L_0018D148:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - 128u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D198; } }
L_0018D184:
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 5;
L_0018D198:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0018D20C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 11u));
    st8((c.r[22].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    st8((c.r[22].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    st8((c.r[22].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 15u));
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[22].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 14u));
    st8((c.r[22].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    st8((c.r[22].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[22].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    st8((c.r[22].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    st8((c.r[22].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    st8((c.r[22].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 25;
L_0018D20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0018D238; } }
L_0018D214:
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 9;
L_0018D238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D240u); c.r[4].d[0] = c.r[30].d[0] & 255ull;  if (depth < kMaxDepth) unit_0023(c, 105u, depth + 1u); else { c.pc = 0x0018D3A0u; return; } if (c.pc != 0x0018D240u) [[unlikely]] return; }
L_0018D240:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018D30C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018D320; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018D320; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.facc = fp::mul(c.f[13], c.f[13]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0018D320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D2C8u);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0018D2C8u) [[unlikely]] return; }
L_0018D2C8:
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_0018D2E0; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0018D2E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18192u);
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D320; } }
L_0018D30C:
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_0018D320:
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D32Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 142u, depth + 1u); else { c.pc = 0x0018DA50u; return; } if (c.pc != 0x0018D32Cu) [[unlikely]] return; }
L_0018D32C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[23], c.r[23].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D0A8u | kUnwind; return; } goto L_0018D0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D368u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 363u, depth + 1u); else { c.pc = 0x0017FE20u; return; } if (c.pc != 0x0018D368u) [[unlikely]] return; }
L_0018D368:
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
L_0018D3A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 3456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[19].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D3E0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 26u, depth + 1u); else { c.pc = 0x0010C570u; return; } if (c.pc != 0x0018D3E0u) [[unlikely]] return; }
L_0018D3E0:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018D408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D400u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 88u, depth + 1u); else { c.pc = 0x0018CE30u; return; } if (c.pc != 0x0018D400u) [[unlikely]] return; }
L_0018D400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018D940; } }
L_0018D408:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D41Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 38u, depth + 1u); else { c.pc = 0x0010C950u; return; } if (c.pc != 0x0018D41Cu) [[unlikely]] return; }
L_0018D41C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D434u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 38u, depth + 1u); else { c.pc = 0x0010C950u; return; } if (c.pc != 0x0018D434u) [[unlikely]] return; }
L_0018D434:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0018D440; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 1;
L_0018D440:
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0018D940; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 22624u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018D470:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018D4D4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0018D4C0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018D4BC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_0018D4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018D4CC; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_0018D4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D4B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 87u, depth + 1u); else { c.pc = 0x0018CDC0u; return; } if (c.pc != 0x0018D4B4u) [[unlikely]] return; }
L_0018D4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018D4C8; } }
L_0018D4BC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0018D4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D4C8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 87u, depth + 1u); else { c.pc = 0x0018CDC0u; return; } if (c.pc != 0x0018D4C8u) [[unlikely]] return; }
L_0018D4C8:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0018D4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018D93C; } }
L_0018D4D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018D520; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018D4F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018D93C; } }
L_0018D4F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D508u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 43u, depth + 1u); else { c.pc = 0x0010CB40u; return; } if (c.pc != 0x0018D508u) [[unlikely]] return; }
L_0018D508:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D520:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018D550; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018D550; } }
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 255ull;
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018D550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018D580; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018D580; } }
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 255ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018D580:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018D93C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0018D93C; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D5A8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 43u, depth + 1u); else { c.pc = 0x0010CB40u; return; } if (c.pc != 0x0018D5A8u) [[unlikely]] return; }
L_0018D5A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018D93C; } }
L_0018D5BC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0018D5E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0018D5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018D940; } }
L_0018D5E4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018D5E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018D608; } }
    set32(c.r[2], 0u + 9u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D608:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D61Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 38u, depth + 1u); else { c.pc = 0x0010C950u; return; } if (c.pc != 0x0018D61Cu) [[unlikely]] return; }
L_0018D61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018D634; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D634:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D64Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 40u, depth + 1u); else { c.pc = 0x0010CA88u; return; } if (c.pc != 0x0018D64Cu) [[unlikely]] return; }
L_0018D64C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D664:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D678u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C688u; return; } if (c.pc != 0x0018D678u) [[unlikely]] return; }
L_0018D678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018D6AC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D690u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 47u, depth + 1u); else { c.pc = 0x0010CBF8u; return; } if (c.pc != 0x0018D690u) [[unlikely]] return; }
L_0018D690:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0018D6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D6BC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D6D0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C688u; return; } if (c.pc != 0x0018D6D0u) [[unlikely]] return; }
L_0018D6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018D6E8; } }
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018D93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0018D6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D6F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0018D724; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0018D720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018D940; } }
L_0018D720:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0018D724:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018D744; } }
    set32(c.r[2], 0u + 9u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D744:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D758u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 38u, depth + 1u); else { c.pc = 0x0010C950u; return; } if (c.pc != 0x0018D758u) [[unlikely]] return; }
L_0018D758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018D778; } }
    set32(c.r[2], 0u + 9u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D778:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D78Cu); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 40u, depth + 1u); else { c.pc = 0x0010CA88u; return; } if (c.pc != 0x0018D78Cu) [[unlikely]] return; }
L_0018D78C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D7A4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D7B8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C688u; return; } if (c.pc != 0x0018D7B8u) [[unlikely]] return; }
L_0018D7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018D7D4; } }
    set32(c.r[2], 0u + 6u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0018D7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D7E8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0018D810; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0018D810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0018D940; } }
L_0018D810:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D81Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 56u, depth + 1u); else { c.pc = 0x0010CE38u; return; } if (c.pc != 0x0018D81Cu) [[unlikely]] return; }
L_0018D81C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0018D838; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D850; } }
L_0018D838:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018D850; } }
    set32(c.r[2], 0u + 4u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018D850:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D85Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 58u, depth + 1u); else { c.pc = 0x0010CE98u; return; } if (c.pc != 0x0018D85Cu) [[unlikely]] return; }
L_0018D85C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D874:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D888u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C688u; return; } if (c.pc != 0x0018D888u) [[unlikely]] return; }
L_0018D888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018D8BC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[6], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D8A0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 47u, depth + 1u); else { c.pc = 0x0010CBF8u; return; } if (c.pc != 0x0018D8A0u) [[unlikely]] return; }
L_0018D8A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0018D8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D8D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018D8E4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0003(c, 31u, depth + 1u); else { c.pc = 0x0010C688u; return; } if (c.pc != 0x0018D8E4u) [[unlikely]] return; }
L_0018D8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0018D900; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0018D900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0018D93C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018D93C; } }
L_0018D914:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0018D92C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0018D93C; } }
L_0018D92C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0018D93C; } }
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0018D93C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0018D940:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018D960:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3456u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_0018D990:
    set32(c.r[3], 0u + 255u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_0018D9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0018D9AC; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0018D9AC:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018D9E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3456u);
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0018D9C8:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018D9C8u | kUnwind; return; } goto L_0018D9C8; } }
    c.budget -= 1;
L_0018D9E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018D9F0:
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 15u);
    set32(c.r[6], c.r[3].w[0] - 18116u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 7;
L_0018DA0C:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_0018DA2C; }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
L_0018DA2C:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018DA0Cu | kUnwind; return; } goto L_0018DA0C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018DA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DA6Cu); mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 140u, depth + 1u); else { c.pc = 0x0018D9F0u; return; } if (c.pc != 0x0018DA6Cu) [[unlikely]] return; }
L_0018DA6C:
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[8].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 524u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018DBA4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0018DB48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0018DBA4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DBA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5176u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DBA4; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DB40u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x0018D960u; return; } if (c.pc != 0x0018DB40u) [[unlikely]] return; }
L_0018DB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018DBA8; } }
L_0018DB48:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DBA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5176u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DBA4; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DBA4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x0018D960u; return; } if (c.pc != 0x0018DBA4u) [[unlikely]] return; }
L_0018DBA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018DBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5176u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DC00; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC00u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0023(c, 137u, depth + 1u); else { c.pc = 0x0018D960u; return; } if (c.pc != 0x0018DC00u) [[unlikely]] return; }
L_0018DC00:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC20u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 138u, depth + 1u); else { c.pc = 0x0018D990u; return; } if (c.pc != 0x0018DC20u) [[unlikely]] return; }
L_0018DC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DC28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 138u, depth + 1u); else { c.pc = 0x0018D990u; return; } if (c.pc != 0x0018DC28u) [[unlikely]] return; }
L_0018DC28:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3456u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018DC64; } }
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0018DC64:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018DC7C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0018DC7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018DC90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5104u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5105u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5106u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5107u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5116u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5117u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5119u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5118u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5128u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5129u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[16], c.r[2].w[0] + 5104u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DD04u); st8((c.r[1].w[0] + 5130u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 280u, depth + 1u); else { c.pc = 0x00196FB0u; return; } if (c.pc != 0x0018DD04u) [[unlikely]] return; }
L_0018DD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DD0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x0018DD0Cu) [[unlikely]] return; }
L_0018DD0C:
    set32(c.r[3], 0u + 18000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st16((c.r[1].w[0] + 5112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st16((c.r[1].w[0] + 5114u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5108u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5109u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5110u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5111u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] + 5105u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018DD74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 86u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018DD78; } }
L_0018DD74:
    st8((c.r[6].w[0] + 86u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0018DD78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DD90; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018DD90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DDA8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018DDA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018DDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[3].w[0] + 5104u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5129u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DDE8u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018EE90u; return; } if (c.pc != 0x0018DDE8u) [[unlikely]] return; }
L_0018DDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018DE28; } }
L_0018DDF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DE0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE04u);  if (depth < kMaxDepth) unit_0023(c, 211u, depth + 1u); else { c.pc = 0x0018ED10u; return; } if (c.pc != 0x0018DE04u) [[unlikely]] return; }
L_0018DE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018DE24; } }
L_0018DE0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE24u);  if (depth < kMaxDepth) unit_0023(c, 177u, depth + 1u); else { c.pc = 0x0018E270u; return; } if (c.pc != 0x0018DE24u) [[unlikely]] return; }
L_0018DE24:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018DE28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018DE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[16], c.r[2].w[0] + 5104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 5104u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE54u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 166u, depth + 1u); else { c.pc = 0x0018DFB0u; return; } if (c.pc != 0x0018DE54u) [[unlikely]] return; }
L_0018DE54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 5104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DE64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 166u, depth + 1u); else { c.pc = 0x0018DFB0u; return; } if (c.pc != 0x0018DE64u) [[unlikely]] return; }
L_0018DE64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018DF04; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0018DE90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0018DEAC; } }
L_0018DE90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018DF9C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0018DEAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0018DED0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DED0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 167u, depth + 1u); else { c.pc = 0x0018E0A0u; return; } if (c.pc != 0x0018DED0u) [[unlikely]] return; }
L_0018DED0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018DF9C; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DEFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 167u, depth + 1u); else { c.pc = 0x0018E0A0u; return; } if (c.pc != 0x0018DEFCu) [[unlikely]] return; }
L_0018DEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0018DFA0; } }
L_0018DF04:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018DF40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0018DF9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0018DF9C; } }
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018DF9C; } }
L_0018DF40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018DF5C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0018DF6C; } }
L_0018DF5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018DF9C; } }
L_0018DF6C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0018DF80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0018DF94; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0018DF80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0018DF9C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0018DF9C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0018DF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018DF9Cu);  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0018DF9Cu) [[unlikely]] return; }
L_0018DF9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018DFA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018DFB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 86u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E08C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[8].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E08C; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0018E020; } }
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E014; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018E08C; } }
L_0018E014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0018E020:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3348u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] - c.r[5].w[0]);  if (t) { goto L_0018E070; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[8].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0018E070:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0018E08C; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_0018E08C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0018E10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E104u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 280u, depth + 1u); else { c.pc = 0x00196FB0u; return; } if (c.pc != 0x0018E104u) [[unlikely]] return; }
L_0018E104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E10Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x0018E10Cu) [[unlikely]] return; }
L_0018E10C:
    set32(c.r[2], 0u + 18000u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E120u); st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 149u, depth + 1u); else { c.pc = 0x0018DC10u; return; } if (c.pc != 0x0018E120u) [[unlikely]] return; }
L_0018E120:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 39u);  if (t) { goto L_0018E148; } }
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 39u);
    c.budget -= 5;
L_0018E148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E150u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E150u) [[unlikely]] return; }
L_0018E150:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0018E160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E18Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 280u, depth + 1u); else { c.pc = 0x00196FB0u; return; } if (c.pc != 0x0018E18Cu) [[unlikely]] return; }
L_0018E18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E194u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x0018E194u) [[unlikely]] return; }
L_0018E194:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018E1A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], c.r[3].w[0] + 5168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[8], c.r[3].w[0] + 5072u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[9], c.r[3].w[0] - 6128u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 10u);
    c.budget -= 9;
L_0018E1C4:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st16((c.r[8].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st8((c.r[8].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[7].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 26u));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 28u));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 30u));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 32u));
    st8((c.r[9].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 34u));
    st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 36u));
    st8((c.r[9].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 38u));
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 9u);
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018E1C4u | kUnwind; return; } goto L_0018E1C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018E270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0018E2B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0018E2B4; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018E2B8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0018E2B4:
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0018E2B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E35C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0018E2D8; } }
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_0018E2D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 16528u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E2FCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0018E2FCu) [[unlikely]] return; }
L_0018E2FC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E32C; } }
    set32(c.r[2], 0u + 18000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018E32C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E344; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018E35C; } }
L_0018E344:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018E35C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018E35C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E368u); set32(c.r[4], c.r[2].w[0] - 2720u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018E368u) [[unlikely]] return; }
L_0018E368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E374u); set32(c.r[4], c.r[2].w[0] - 2368u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018E374u) [[unlikely]] return; }
L_0018E374:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0018E390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0018E61C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0018E5AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0018E4E0; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_0018E3E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0018E664; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0018E3E4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3360u);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));  if (t) { goto L_0018E424; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018E424:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E448; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018E448:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018E468; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E468u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E468u) [[unlikely]] return; }
L_0018E468:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 3u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E4A0u); st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0018E4A0u) [[unlikely]] return; }
L_0018E4A0:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 45u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E4D8u); st8((c.r[18].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E4D8u) [[unlikely]] return; }
L_0018E4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E660; } }
L_0018E4E0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[18].w[0] + 43u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    c.r[9].d[0] = c.r[9].d[0] & 4ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    c.budget -= 22;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_0018E660; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0018E598; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0018E584; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018E574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E660; } }
L_0018E574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E57Cu); st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0018E57Cu) [[unlikely]] return; }
L_0018E57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E660; } }
L_0018E584:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018E660; } }
L_0018E598:
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 10u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018E660; } }
L_0018E5AC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018E5C0; } }
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0018E5C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018E5E4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018E660; } }
L_0018E5E4:
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E614u); st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 175u, depth + 1u); else { c.pc = 0x0018E1A0u; return; } if (c.pc != 0x0018E614u) [[unlikely]] return; }
L_0018E614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E660; } }
L_0018E61C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E660; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0018E660:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018E664:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018E680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0018E9E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018E6C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018E9E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018E9E0; } }
L_0018E6F4:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E708u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0018E708u) [[unlikely]] return; }
L_0018E708:
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E71Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 163u, depth + 1u); else { c.pc = 0x0013A460u; return; } if (c.pc != 0x0018E71Cu) [[unlikely]] return; }
L_0018E71C:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018E740; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E740u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E740u) [[unlikely]] return; }
L_0018E740:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0018E75C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E75C; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0018E75C:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E778u); st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0018E778u) [[unlikely]] return; }
L_0018E778:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 3348u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_0018E7D8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E7CCu); st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E7CCu) [[unlikely]] return; }
L_0018E7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0018E9E4; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0018E7D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018E9E0; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E7F8u); st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018E7F8u) [[unlikely]] return; }
L_0018E7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018E9E0; } }
L_0018E800:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E814; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018E814:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + 9u);
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[4], c.r[4].w[0] + 9u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 43u)));
    c.budget -= 23;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018E9E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + 9u);
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E8CC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0018E8C4; } }
    st8((c.r[5].w[0] + 512u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E8B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0018E8B4u) [[unlikely]] return; }
L_0018E8B4:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018E9E0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0018E8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018E9E0; } }
L_0018E8CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018E9E0; } }
L_0018E8E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018E9E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018E938; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018E948; } }
L_0018E938:
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0018E948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_0018E9E0; } }
L_0018E950:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0018E9E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018E988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018E98C; } }
L_0018E988:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0018E98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018E9E0; } }
L_0018E994:
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 46u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_0018E9BC; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9B8u); st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0018E9B8u) [[unlikely]] return; }
L_0018E9B8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0018E9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9C4u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0018E9C4u) [[unlikely]] return; }
L_0018E9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018E9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018E9D4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0018E9D4u) [[unlikely]] return; }
L_0018E9D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 521u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0018E9E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018E9E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018EA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_0018ECB4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0018EC24; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0018EB50; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_0018EA54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0018ECF4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0018EA54:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3360u);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));  if (t) { goto L_0018EA94; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018EA94:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EAB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018EAB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018EAD8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EAD8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018EAD8u) [[unlikely]] return; }
L_0018EAD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0018EAF4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EAF4; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0018EAF4:
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EB10u); st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 146u, depth + 1u); else { c.pc = 0x0013A0E0u; return; } if (c.pc != 0x0018EB10u) [[unlikely]] return; }
L_0018EB10:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018ECF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 45u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EB48u); st8((c.r[18].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018EB48u) [[unlikely]] return; }
L_0018EB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018ECF0; } }
L_0018EB50:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[18].w[0] + 43u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    c.r[9].d[0] = c.r[9].d[0] & 4ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 43u)));
    c.budget -= 22;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_0018ECF0; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[18].w[0] + 48u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0018EC10; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0018EBFC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0018EBFC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0018EBEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018ECF0; } }
L_0018EBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EBF4u); st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 172u, depth + 1u); else { c.pc = 0x0018E160u; return; } if (c.pc != 0x0018EBF4u) [[unlikely]] return; }
L_0018EBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018ECF0; } }
L_0018EBFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 45u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0018ECF0; } }
L_0018EC10:
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 10u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018ECF0; } }
L_0018EC24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018EC44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0018EC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018ECF0; } }
L_0018EC44:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0018EC68; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0018ECF0; } }
L_0018EC68:
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 18000u);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018ECA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018ECF0; } }
L_0018ECA0:
    st8((c.r[18].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018ECACu); st8((c.r[18].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 175u, depth + 1u); else { c.pc = 0x0018E1A0u; return; } if (c.pc != 0x0018ECACu) [[unlikely]] return; }
L_0018ECAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018ECF0; } }
L_0018ECB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018ECF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0018ECF0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018ECF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018ED10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018EE40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018EE18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0018ED74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018ED54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018EE68; } }
L_0018ED54:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018EE68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EE68; } }
L_0018ED74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0018ED84; } }
    mmi::paddub(c.r[3], c.r[5], c.r[0]);
    c.budget -= 1;
L_0018ED84:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33776ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EDB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018EDB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3344u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 18000u);  if (t) { goto L_0018EDDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3364u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EDE4; } }
    set32(c.r[2], 0u + 18000u);
    c.budget -= 1;
L_0018EDDC:
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018EDE4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EDFC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018EE68; } }
L_0018EDFC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018EE68; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EE68; } }
L_0018EE18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018EE68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EE68; } }
L_0018EE40:
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st32((c.r[4].w[0] + 48u), 0u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0018EE68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EE74u); set32(c.r[4], c.r[2].w[0] - 2720u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018EE74u) [[unlikely]] return; }
L_0018EE74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EE80u); set32(c.r[4], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018EE80u) [[unlikely]] return; }
L_0018EE80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0018EE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0018EFB8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0018EF90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018EF08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0018EEE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018EFE4; } }
L_0018EEE4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0018EF00; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0018EF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
L_0018EF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[18], c.r[2].w[0] + 5072u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0018EF14:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EF20u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 220u, depth + 1u); else { c.pc = 0x0018F020u; return; } if (c.pc != 0x0018EF20u) [[unlikely]] return; }
L_0018EF20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018EF14u | kUnwind; return; } goto L_0018EF14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3344u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 18000u);  if (t) { goto L_0018EF54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3364u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EF5C; } }
    set32(c.r[2], 0u + 18000u);
    c.budget -= 1;
L_0018EF54:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018EF5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018EF74; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
L_0018EF74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018EFE4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
L_0018EF90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0018EFB0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0018EFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018EFE4; } }
L_0018EFB8:
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 18000u);
    st32((c.r[16].w[0] + 48u), 0u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EFE4u); st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 232u, depth + 1u); else { c.pc = 0x0018F4D0u; return; } if (c.pc != 0x0018EFE4u) [[unlikely]] return; }
L_0018EFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EFF0u); set32(c.r[4], c.r[2].w[0] - 2720u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018EFF0u) [[unlikely]] return; }
L_0018EFF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018EFFCu); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0018EFFCu) [[unlikely]] return; }
L_0018EFFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018F020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_0018F080; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[20].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018F4A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0018F080; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018F4A8; } }
L_0018F080:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], c.r[3].w[0] + 3348u);
    set32(c.r[4], c.r[4].w[0] + 3360u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[19].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[19].d[0] & 8192ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0018F0EC; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0018F248; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018F244; } }
L_0018F0EC:
    c.r[4].d[0] = c.r[19].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0018F108; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018F244; } }
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_0018F108:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0018F12C; } }
    c.r[5].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018F234; } }
L_0018F128:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0018F12C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 2u);  goto L_0018F14C; }
    c.r[5].d[0] = c.r[19].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F148:
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_0018F14C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 3u);  goto L_0018F16C; }
    c.r[5].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F168:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_0018F16C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_0018F18C; }
    c.r[5].d[0] = c.r[19].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F188:
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_0018F18C:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 5u);  goto L_0018F1AC; }
    c.r[5].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F1A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F1A8:
    set32(c.r[6], 0u + 5u);
    c.budget -= 1;
L_0018F1AC:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 6u);  goto L_0018F1CC; }
    c.r[5].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F1C8:
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_0018F1CC:
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 7u);  goto L_0018F1EC; }
    c.r[5].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F1E8:
    set32(c.r[6], 0u + 7u);
    c.budget -= 1;
L_0018F1EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; c.r[5].d[0] = c.r[19].d[0] & 16384ull;  if (t) { goto L_0018F20C; } }
    c.r[5].d[0] = c.r[19].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0018F234; } }
L_0018F208:
    c.r[5].d[0] = c.r[19].d[0] & 16384ull;
    c.budget -= 1;
L_0018F20C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_0018F224; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0018F234; } }
    c.r[5].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 1;
L_0018F224:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0018F234; } }
    set32(c.r[5], 0u + 10u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0018F234:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0018F244; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 1;
L_0018F244:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_0018F248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018F294; } }
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018F278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018F284; } }
L_0018F278:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], 0u + 43u);  if (t) { goto L_0018F288; } }
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0018F284:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0018F288:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F294u); st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018F294u) [[unlikely]] return; }
L_0018F294:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018F3BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0018C000u < 16384u) { entry = entries_0023[(t - 0x0018C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018F2CC:
    set32(c.r[3], 0u + 20u);
    st8((c.r[20].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 16592u);
    set32(c.r[16], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + 3u);  if (t) { goto L_0018F3BC; } }
L_0018F2FC:
    set32(c.r[2], 0u + 32u);
    st8((c.r[20].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F310u); set32(c.r[17], c.r[20].w[0] + 2u);  if (depth < kMaxDepth) unit_0023(c, 152u, depth + 1u); else { c.pc = 0x0018DC40u; return; } if (c.pc != 0x0018F310u) [[unlikely]] return; }
L_0018F310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0018F324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0018F3BC; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_0018F324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0018F3BC; } }
L_0018F32C:
    set32(c.r[3], 0u + 10u);
    st8((c.r[20].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[19].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0018F3BC; } }
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], 0u + 6u);
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    st8((c.r[20].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F388u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018F388u) [[unlikely]] return; }
L_0018F388:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018F3BC; } }
L_0018F394:
    set32(c.r[3], 0u + 10u);
    st8((c.r[20].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0018F3BC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F3B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018F3B4u) [[unlikely]] return; }
L_0018F3B4:
    set32(c.r[3], 0u + 32u);
    st8((c.r[20].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018F3BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0018F4A8; } }
    c.r[3].d[0] = c.r[19].d[0] & 12288ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (t) { goto L_0018F3FC; } }
    c.r[3].d[0] = c.r[19].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[19].d[0] & 1024ull;  if (t) { goto L_0018F3EC; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0018F3FC; } }
    c.r[3].d[0] = c.r[19].d[0] & 1024ull;
    c.budget -= 1;
L_0018F3EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_0018F400; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0018F3FC:
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_0018F400:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018F43C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0018F43C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0018F43C; } }
    c.r[3].d[0] = c.r[19].d[0] & 1020ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018F43C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018F43C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018F4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F474u);  if (depth < kMaxDepth) unit_0023(c, 232u, depth + 1u); else { c.pc = 0x0018F4D0u; return; } if (c.pc != 0x0018F474u) [[unlikely]] return; }
L_0018F474:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F480u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0018F480u) [[unlikely]] return; }
L_0018F480:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018F4A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018F4A8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F4A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0018DBB0u; return; } if (c.pc != 0x0018F4A8u) [[unlikely]] return; }
L_0018F4A8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018F4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], c.r[3].w[0] + 5168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[7], c.r[3].w[0] + 5072u);
    st16((c.r[1].w[0] + 5176u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    c.budget -= 8;
L_0018F4F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    st16((c.r[8].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    st16((c.r[8].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    st16((c.r[8].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    st16((c.r[8].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 7u)));
    st16((c.r[8].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8u)));
    st16((c.r[8].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 9u)));
    st16((c.r[8].w[0] + 36u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 10u)));
    st16((c.r[8].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F4F0u | kUnwind; return; } goto L_0018F4F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0018F560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[16], c.r[3].w[0] + 5104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018F6AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 16512u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[6].w[0] + 76u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 40;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018F634; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018F650; } }
L_0018F634:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0018F650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F658u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0018F658u) [[unlikely]] return; }
L_0018F658:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F684; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0018F684:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0018F6A0; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018F6A4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_0018F6A0:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0018F6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F6ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0018F6ACu) [[unlikely]] return; }
L_0018F6AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0018F6C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[2].w[0] + 5104u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5114u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0018F708; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));  if (t) { goto L_0018F73C; } }
L_0018F708:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 13;
L_0018F73C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0018F758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 43u)));  if (t) { goto L_0018F77C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0018F758:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 43u)));
    c.budget -= 9;
L_0018F77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018F794; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 54u));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0018F7A0; } }
L_0018F794:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 54u));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st16((c.r[16].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0018F7A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 54u));
    set32(c.r[2], c.r[2].w[0] - 16736u);
    c.f[12] = c.f[21];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F7C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0023(c, 248u, depth + 1u); else { c.pc = 0x0018F990u; return; } if (c.pc != 0x0018F7C8u) [[unlikely]] return; }
L_0018F7C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018F81C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018F810; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018F804; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018F804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_0018F828; } }
L_0018F804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 17904u);  if (t) { goto L_0018F824; } }
L_0018F810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] - 17760u);  if (t) { goto L_0018F824; } }
L_0018F81C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[19], c.r[2].w[0] - 17616u);
    c.budget -= 2;
L_0018F824:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_0018F828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F830u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0024(c, 34u, depth + 1u); else { c.pc = 0x00190690u; return; } if (c.pc != 0x0018F830u) [[unlikely]] return; }
L_0018F830:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.f[12] = c.f[20];
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0018F840:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F858u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 34u, depth + 1u); else { c.pc = 0x00190690u; return; } if (c.pc != 0x0018F858u) [[unlikely]] return; }
L_0018F858:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 3u);  if (t) { goto L_0018F870; } }
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_0018F870:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_0018F8C8; } }
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 1;
L_0018F87C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[2].d[0] | 51711ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F8B0u); st32((c.r[19].w[0] + 68u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0024(c, 34u, depth + 1u); else { c.pc = 0x00190690u; return; } if (c.pc != 0x0018F8B0u) [[unlikely]] return; }
L_0018F8B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F87Cu | kUnwind; return; } goto L_0018F87C; } }
    c.budget -= 1;
L_0018F8C8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F8D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0023(c, 267u, depth + 1u); else { c.pc = 0x0018FF50u; return; } if (c.pc != 0x0018F8D4u) [[unlikely]] return; }
L_0018F8D4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0018F964; } }
    set32(c.r[4], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018F964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[17], c.r[2].w[0] - 17984u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_0018F904:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_0018F930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 51711ull;  if (t) { goto L_0018F938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_0018F930:
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.budget -= 2;
L_0018F938:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F948u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0024(c, 34u, depth + 1u); else { c.pc = 0x00190690u; return; } if (c.pc != 0x0018F948u) [[unlikely]] return; }
L_0018F948:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018F904u | kUnwind; return; } goto L_0018F904; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018F964u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0023(c, 267u, depth + 1u); else { c.pc = 0x0018FF50u; return; } if (c.pc != 0x0018F964u) [[unlikely]] return; }
L_0018F964:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0018F990:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20416u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.f[21] = c.f[12];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 316u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[16], c.r[29].w[0] + 315u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 50;
    { const bool t = c.r[2].sd[0] < 0; st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0018FA64; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018FA80; } }
L_0018FA64:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0018FA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FA88u); c.f[12] = fp::mul(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0018FA88u) [[unlikely]] return; }
L_0018FA88:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], 0u - 1u);
    c.f[20] = fp::sub(c.f[0], c.f[21]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st16((c.r[29].w[0] + 316u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    st16((c.r[29].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0018FAB0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    set32(c.r[18], c.r[29].w[0] + 228u);
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FB00u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0018FB00u) [[unlikely]] return; }
L_0018FB00:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FB0Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0018FB0Cu) [[unlikely]] return; }
L_0018FB0C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FAB0u | kUnwind; return; } goto L_0018FAB0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st16((c.r[2].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
L_0018FB3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[30], c.r[29].w[0] + 320u);
    set32(c.r[23], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[21].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 16496u);
    set32(c.r[3], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], 0u + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[18], c.r[30], c.r[0]);
    mmi::paddub(c.r[19], c.r[23], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[22] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 23;
L_0018FB98:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0018FBBC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018FBD4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0018FBBC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0018FBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FBDCu); c.f[12] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0018FBDCu) [[unlikely]] return; }
L_0018FBDC:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    c.r[7].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::mult(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    mmi::mult(c, 1, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FC40u); c.f[12] = fp::add(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0018FC40u) [[unlikely]] return; }
L_0018FC40:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
L_0018FC60:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FB98u | kUnwind; return; } goto L_0018FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FC78u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0018FC78u) [[unlikely]] return; }
L_0018FC78:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FB3Cu | kUnwind; return; } goto L_0018FB3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0018FF08; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 222u));
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FCC8u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0018FCC8u) [[unlikely]] return; }
L_0018FCC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    c.f[1] = fp::add(c.f[20], c.f[0]);
    st16((c.r[2].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[21], c.r[2].w[0] - 16432u);
    c.f[0] = c.r[6].w[0];
    set32(c.r[3], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.f[20] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 19;
L_0018FD14:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[30], c.r[0]);
    mmi::paddub(c.r[18], c.r[23], c.r[0]);
    st32((c.r[2].w[0] + 48u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 16464u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_0018FD40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0018FD64; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018FD7C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0018FD64:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0018FD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FD84u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0018FD84u) [[unlikely]] return; }
L_0018FD84:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] | 65304ull;
    set32(c.r[2], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    mmi::mult(c, 1, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FD40u | kUnwind; return; } goto L_0018FD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FE0Cu); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_001C(c, 30u, depth + 1u); else { c.pc = 0x00170A40u; return; } if (c.pc != 0x0018FE0Cu) [[unlikely]] return; }
L_0018FE0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FD14u | kUnwind; return; } goto L_0018FD14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 16400u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 13;
L_0018FE50:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0018FE6C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0018FE84; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0018FE6C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0018FE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FE8Cu); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0018FE8Cu) [[unlikely]] return; }
L_0018FE8C:
    st8((c.r[30].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[23].w[0]), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    c.r[3].d[0] = c.r[2].d[0] | 65304ull;
    set32(c.r[2], 0u + 1u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    set32(c.r[30], c.r[30].w[0] + 4u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[23].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[23].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018FE50u | kUnwind; return; } goto L_0018FE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018FF08u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_001C(c, 11u, depth + 1u); else { c.pc = 0x00170250u; return; } if (c.pc != 0x0018FF08u) [[unlikely]] return; }
L_0018FF08:
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
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0018FF50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[2].w[0] - 20416u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[20] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 36;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018FFF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018FFF8; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0018FFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 16288u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0024(c, 1u, depth);
}

}
