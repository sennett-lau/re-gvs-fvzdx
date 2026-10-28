#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 2, 3, 4, 5, 0, 6, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163,
    0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231,
    0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247,
    0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334,
    0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E0000;
    case 2u: goto L_001E0008;
    case 3u: goto L_001E000C;
    case 4u: goto L_001E0010;
    case 5u: goto L_001E0014;
    case 6u: goto L_001E001C;
    case 7u: goto L_001E0020;
    case 8u: goto L_001E0028;
    case 9u: goto L_001E003C;
    case 10u: goto L_001E0044;
    case 11u: goto L_001E0058;
    case 12u: goto L_001E008C;
    case 13u: goto L_001E00A0;
    case 14u: goto L_001E00D8;
    case 15u: goto L_001E0128;
    case 16u: goto L_001E0148;
    case 17u: goto L_001E0158;
    case 18u: goto L_001E0160;
    case 19u: goto L_001E019C;
    case 20u: goto L_001E01D0;
    case 21u: goto L_001E0244;
    case 22u: goto L_001E0250;
    case 23u: goto L_001E02A4;
    case 24u: goto L_001E02D8;
    case 25u: goto L_001E0308;
    case 26u: goto L_001E0314;
    case 27u: goto L_001E0330;
    case 28u: goto L_001E03AC;
    case 29u: goto L_001E03B8;
    case 30u: goto L_001E03C4;
    case 31u: goto L_001E03D0;
    case 32u: goto L_001E03DC;
    case 33u: goto L_001E0410;
    case 34u: goto L_001E0420;
    case 35u: goto L_001E0434;
    case 36u: goto L_001E043C;
    case 37u: goto L_001E0450;
    case 38u: goto L_001E0470;
    case 39u: goto L_001E0498;
    case 40u: goto L_001E04A4;
    case 41u: goto L_001E04D0;
    case 42u: goto L_001E04E0;
    case 43u: goto L_001E0504;
    case 44u: goto L_001E0520;
    case 45u: goto L_001E0530;
    case 46u: goto L_001E0560;
    case 47u: goto L_001E0590;
    case 48u: goto L_001E0600;
    case 49u: goto L_001E0674;
    case 50u: goto L_001E06B0;
    case 51u: goto L_001E06BC;
    case 52u: goto L_001E0710;
    case 53u: goto L_001E08B0;
    case 54u: goto L_001E0920;
    case 55u: goto L_001E0940;
    case 56u: goto L_001E09A0;
    case 57u: goto L_001E0A10;
    case 58u: goto L_001E0A80;
    case 59u: goto L_001E0AA0;
    case 60u: goto L_001E0AE8;
    case 61u: goto L_001E0AF4;
    case 62u: goto L_001E0B0C;
    case 63u: goto L_001E0B28;
    case 64u: goto L_001E0B4C;
    case 65u: goto L_001E0B58;
    case 66u: goto L_001E0BA0;
    case 67u: goto L_001E0BE0;
    case 68u: goto L_001E0BF0;
    case 69u: goto L_001E0C20;
    case 70u: goto L_001E0C64;
    case 71u: goto L_001E0C8C;
    case 72u: goto L_001E0C98;
    case 73u: goto L_001E0CAC;
    case 74u: goto L_001E0CC0;
    case 75u: goto L_001E0CE0;
    case 76u: goto L_001E0DC8;
    case 77u: goto L_001E0DD4;
    case 78u: goto L_001E0DEC;
    case 79u: goto L_001E0DF8;
    case 80u: goto L_001E0E08;
    case 81u: goto L_001E0E20;
    case 82u: goto L_001E0E34;
    case 83u: goto L_001E0E40;
    case 84u: goto L_001E0E50;
    case 85u: goto L_001E0E88;
    case 86u: goto L_001E0E94;
    case 87u: goto L_001E0EA8;
    case 88u: goto L_001E0EB8;
    case 89u: goto L_001E0EF0;
    case 90u: goto L_001E0EFC;
    case 91u: goto L_001E0F24;
    case 92u: goto L_001E0F34;
    case 93u: goto L_001E0F3C;
    case 94u: goto L_001E0F80;
    case 95u: goto L_001E0FA0;
    case 96u: goto L_001E0FB0;
    case 97u: goto L_001E0FC0;
    case 98u: goto L_001E0FD4;
    case 99u: goto L_001E1018;
    case 100u: goto L_001E103C;
    case 101u: goto L_001E104C;
    case 102u: goto L_001E1068;
    case 103u: goto L_001E1080;
    case 104u: goto L_001E1098;
    case 105u: goto L_001E10C0;
    case 106u: goto L_001E10EC;
    case 107u: goto L_001E1100;
    case 108u: goto L_001E1110;
    case 109u: goto L_001E1138;
    case 110u: goto L_001E1180;
    case 111u: goto L_001E1200;
    case 112u: goto L_001E1288;
    case 113u: goto L_001E12D8;
    case 114u: goto L_001E1390;
    case 115u: goto L_001E143C;
    case 116u: goto L_001E1460;
    case 117u: goto L_001E15E0;
    case 118u: goto L_001E163C;
    case 119u: goto L_001E1674;
    case 120u: goto L_001E17B0;
    case 121u: goto L_001E1808;
    case 122u: goto L_001E183C;
    case 123u: goto L_001E1894;
    case 124u: goto L_001E18C0;
    case 125u: goto L_001E1900;
    case 126u: goto L_001E19C4;
    case 127u: goto L_001E1A1C;
    case 128u: goto L_001E1A70;
    case 129u: goto L_001E1A94;
    case 130u: goto L_001E1AC8;
    case 131u: goto L_001E1AD8;
    case 132u: goto L_001E1B30;
    case 133u: goto L_001E1B78;
    case 134u: goto L_001E1BA0;
    case 135u: goto L_001E1BB8;
    case 136u: goto L_001E1C3C;
    case 137u: goto L_001E1C40;
    case 138u: goto L_001E1C80;
    case 139u: goto L_001E1CB4;
    case 140u: goto L_001E1D68;
    case 141u: goto L_001E1D80;
    case 142u: goto L_001E1DB0;
    case 143u: goto L_001E1DC8;
    case 144u: goto L_001E1E00;
    case 145u: goto L_001E1E28;
    case 146u: goto L_001E1E3C;
    case 147u: goto L_001E1E70;
    case 148u: goto L_001E1E80;
    case 149u: goto L_001E1E88;
    case 150u: goto L_001E1E90;
    case 151u: goto L_001E1EA0;
    case 152u: goto L_001E1EB8;
    case 153u: goto L_001E1EE4;
    case 154u: goto L_001E1F10;
    case 155u: goto L_001E1F44;
    case 156u: goto L_001E1FA0;
    case 157u: goto L_001E1FF0;
    case 158u: goto L_001E1FFC;
    case 159u: goto L_001E2010;
    case 160u: goto L_001E2024;
    case 161u: goto L_001E2030;
    case 162u: goto L_001E2068;
    case 163u: goto L_001E207C;
    case 164u: goto L_001E208C;
    case 165u: goto L_001E2094;
    case 166u: goto L_001E20A8;
    case 167u: goto L_001E20B8;
    case 168u: goto L_001E2130;
    case 169u: goto L_001E2150;
    case 170u: goto L_001E2170;
    case 171u: goto L_001E219C;
    case 172u: goto L_001E21A4;
    case 173u: goto L_001E21B0;
    case 174u: goto L_001E21C4;
    case 175u: goto L_001E21D4;
    case 176u: goto L_001E21E4;
    case 177u: goto L_001E222C;
    case 178u: goto L_001E2248;
    case 179u: goto L_001E2250;
    case 180u: goto L_001E2258;
    case 181u: goto L_001E2260;
    case 182u: goto L_001E2268;
    case 183u: goto L_001E2280;
    case 184u: goto L_001E22B0;
    case 185u: goto L_001E22DC;
    case 186u: goto L_001E22E4;
    case 187u: goto L_001E2314;
    case 188u: goto L_001E231C;
    case 189u: goto L_001E2340;
    case 190u: goto L_001E23A8;
    case 191u: goto L_001E23B0;
    case 192u: goto L_001E23B8;
    case 193u: goto L_001E23C0;
    case 194u: goto L_001E23C8;
    case 195u: goto L_001E23E0;
    case 196u: goto L_001E2430;
    case 197u: goto L_001E243C;
    case 198u: goto L_001E24AC;
    case 199u: goto L_001E258C;
    case 200u: goto L_001E2594;
    case 201u: goto L_001E259C;
    case 202u: goto L_001E25A4;
    case 203u: goto L_001E25AC;
    case 204u: goto L_001E25B4;
    case 205u: goto L_001E25BC;
    case 206u: goto L_001E25D0;
    case 207u: goto L_001E2628;
    case 208u: goto L_001E263C;
    case 209u: goto L_001E265C;
    case 210u: goto L_001E2664;
    case 211u: goto L_001E2674;
    case 212u: goto L_001E267C;
    case 213u: goto L_001E2698;
    case 214u: goto L_001E26E8;
    case 215u: goto L_001E2700;
    case 216u: goto L_001E2710;
    case 217u: goto L_001E2730;
    case 218u: goto L_001E273C;
    case 219u: goto L_001E276C;
    case 220u: goto L_001E27A0;
    case 221u: goto L_001E27BC;
    case 222u: goto L_001E27F0;
    case 223u: goto L_001E2830;
    case 224u: goto L_001E2980;
    case 225u: goto L_001E2A14;
    case 226u: goto L_001E2A24;
    case 227u: goto L_001E2A38;
    case 228u: goto L_001E2A48;
    case 229u: goto L_001E2A58;
    case 230u: goto L_001E2A6C;
    case 231u: goto L_001E2A7C;
    case 232u: goto L_001E2A8C;
    case 233u: goto L_001E2AA0;
    case 234u: goto L_001E2AB0;
    case 235u: goto L_001E2AC0;
    case 236u: goto L_001E2AD4;
    case 237u: goto L_001E2B00;
    case 238u: goto L_001E2B40;
    case 239u: goto L_001E2B48;
    case 240u: goto L_001E2B60;
    case 241u: goto L_001E2B90;
    case 242u: goto L_001E2BC0;
    case 243u: goto L_001E2BDC;
    case 244u: goto L_001E2BE4;
    case 245u: goto L_001E2BEC;
    case 246u: goto L_001E2BF4;
    case 247u: goto L_001E2BFC;
    case 248u: goto L_001E2C04;
    case 249u: goto L_001E2C0C;
    case 250u: goto L_001E2C14;
    case 251u: goto L_001E2C20;
    case 252u: goto L_001E2C30;
    case 253u: goto L_001E2C38;
    case 254u: goto L_001E2C40;
    case 255u: goto L_001E2C48;
    case 256u: goto L_001E2C50;
    case 257u: goto L_001E2C58;
    case 258u: goto L_001E2C60;
    case 259u: goto L_001E2C70;
    case 260u: goto L_001E2C80;
    case 261u: goto L_001E2C98;
    case 262u: goto L_001E2CE0;
    case 263u: goto L_001E2D00;
    case 264u: goto L_001E2D48;
    case 265u: goto L_001E2DE0;
    case 266u: goto L_001E2E20;
    case 267u: goto L_001E2E3C;
    case 268u: goto L_001E2FBC;
    case 269u: goto L_001E2FF0;
    case 270u: goto L_001E303C;
    case 271u: goto L_001E3044;
    case 272u: goto L_001E3054;
    case 273u: goto L_001E305C;
    case 274u: goto L_001E3080;
    case 275u: goto L_001E3090;
    case 276u: goto L_001E30A0;
    case 277u: goto L_001E30B0;
    case 278u: goto L_001E30E0;
    case 279u: goto L_001E30F0;
    case 280u: goto L_001E310C;
    case 281u: goto L_001E3120;
    case 282u: goto L_001E3160;
    case 283u: goto L_001E31B8;
    case 284u: goto L_001E31DC;
    case 285u: goto L_001E31E8;
    case 286u: goto L_001E321C;
    case 287u: goto L_001E3284;
    case 288u: goto L_001E328C;
    case 289u: goto L_001E3294;
    case 290u: goto L_001E329C;
    case 291u: goto L_001E32B0;
    case 292u: goto L_001E32C0;
    case 293u: goto L_001E32E8;
    case 294u: goto L_001E3360;
    case 295u: goto L_001E3380;
    case 296u: goto L_001E33E0;
    case 297u: goto L_001E34F0;
    case 298u: goto L_001E3574;
    case 299u: goto L_001E36BC;
    case 300u: goto L_001E36CC;
    case 301u: goto L_001E36D4;
    case 302u: goto L_001E36F0;
    case 303u: goto L_001E3700;
    case 304u: goto L_001E3710;
    case 305u: goto L_001E3748;
    case 306u: goto L_001E37B8;
    case 307u: goto L_001E3844;
    case 308u: goto L_001E389C;
    case 309u: goto L_001E38F0;
    case 310u: goto L_001E391C;
    case 311u: goto L_001E3970;
    case 312u: goto L_001E39A0;
    case 313u: goto L_001E3A10;
    case 314u: goto L_001E3A30;
    case 315u: goto L_001E3A50;
    case 316u: goto L_001E3AE4;
    case 317u: goto L_001E3B00;
    case 318u: goto L_001E3B20;
    case 319u: goto L_001E3B40;
    case 320u: goto L_001E3C04;
    case 321u: goto L_001E3C18;
    case 322u: goto L_001E3C20;
    case 323u: goto L_001E3C30;
    case 324u: goto L_001E3C50;
    case 325u: goto L_001E3C6C;
    case 326u: goto L_001E3D98;
    case 327u: goto L_001E3DB4;
    case 328u: goto L_001E3DC0;
    case 329u: goto L_001E3DE0;
    case 330u: goto L_001E3DFC;
    case 331u: goto L_001E3E3C;
    case 332u: goto L_001E3E54;
    case 333u: goto L_001E3E74;
    case 334u: goto L_001E3E7C;
    case 335u: goto L_001E3E90;
    case 336u: goto L_001E3EA0;
    case 337u: goto L_001E3EB4;
    case 338u: goto L_001E3EC0;
    case 339u: goto L_001E3EE0;
    case 340u: goto L_001E3EFC;
    case 341u: goto L_001E3F74;
    case 342u: goto L_001E3FA0;
    case 343u: goto L_001E3FAC;
    case 344u: goto L_001E3FD0;
    default: bad_entry(c, 0x001E0000u); return;
    }
L_001E0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0008u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001E0008u) [[unlikely]] return; }
L_001E0008:
    set32(c.r[2], 0u + 135u);
    c.budget -= 1;
L_001E000C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001E0010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001E0014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E001Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001E001Cu) [[unlikely]] return; }
L_001E001C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.budget -= 1;
L_001E0020:
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_001E0028:
    set32(c.r[2], 0u + 214u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 91u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
L_001E003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0044u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001E0044u) [[unlikely]] return; }
L_001E0044:
    set32(c.r[2], 0u + 424u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0058u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001E0058u) [[unlikely]] return; }
L_001E0058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x26000000u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E007C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E0094; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E007C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_001E008C:
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 2;
L_001E0094:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00A0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E00A0u) [[unlikely]] return; }
L_001E00A0:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 216u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 91u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 208ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00D8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001E00D8u) [[unlikely]] return; }
L_001E00D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 19044u)));
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E0124; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E013C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E0124:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 1;
L_001E0128:
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 5;
L_001E013C:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0148u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E0148u) [[unlikely]] return; }
L_001E0148:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[2].w[0] + 2784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 4;
L_001E0158:
    set32(c.r[19], c.r[2].w[0] + 2816u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_001E0160:
    st32((c.r[16].w[0] + 48u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[1].w[0] + 912u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[1].w[0] + 916u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[1].w[0] + 928u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E019Cu); st32((c.r[1].w[0] + 932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001E019Cu) [[unlikely]] return; }
L_001E019C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0160u | kUnwind; return; } goto L_001E0160; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E01D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 131u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E0314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[17], c.r[29].w[0] + 79u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E0220; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E0238; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001E0220:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001E0238:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0244u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E0244u) [[unlikely]] return; }
L_001E0244:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0250u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x001E0250u) [[unlikely]] return; }
L_001E0250:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E02E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 386u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[2].w[0] + 24336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 385u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1044u)));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 391u));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 390u));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 389u));
    c.r[11].d[0] = ld8((c.r[16].w[0] + 387u));
    set32(c.r[2], c.r[2].w[0] + 17u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02A4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E430u; return; } if (c.pc != 0x001E02A4u) [[unlikely]] return; }
L_001E02A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 394u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);  if (t) { goto L_001E030C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1044u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[2].w[0] + 24384u);
    set32(c.r[4], 0u + 80u);
    set32(c.r[2], c.r[3].w[0] + 17u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02D8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E430u; return; } if (c.pc != 0x001E02D8u) [[unlikely]] return; }
L_001E02D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0308; } }
L_001E02E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 1044u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[2].w[0] + 24432u);
    set32(c.r[4], 0u + 80u);
    set32(c.r[2], c.r[3].w[0] + 17u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0308u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 243u, depth + 1u); else { c.pc = 0x0015E430u; return; } if (c.pc != 0x001E0308u) [[unlikely]] return; }
L_001E0308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 1;
L_001E030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0314u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x001E0314u) [[unlikely]] return; }
L_001E0314:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E03A4; } }
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E03A4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_001E039C; } }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_001E03A4; } }
L_001E039C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 2;
L_001E03A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03ACu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E03ACu) [[unlikely]] return; }
L_001E03AC:
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03B8u); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E03B8u) [[unlikely]] return; }
L_001E03B8:
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03C4u); c.f[12] = ld32((c.r[16].w[0] + 48u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E03C4u) [[unlikely]] return; }
L_001E03C4:
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03D0u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E03D0u) [[unlikely]] return; }
L_001E03D0:
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03DCu); c.f[12] = ld32((c.r[16].w[0] + 52u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E03DCu) [[unlikely]] return; }
L_001E03DC:
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[7], 0u + 3u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[8], 0u + 6u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0410u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0037(c, 153u, depth + 1u); else { c.pc = 0x001DEB90u; return; } if (c.pc != 0x001E0410u) [[unlikely]] return; }
L_001E0410:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E0420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29844u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0434u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_00A6(c, 125u, depth + 1u); else { c.pc = 0x00399900u; return; } if (c.pc != 0x001E0434u) [[unlikely]] return; }
L_001E0434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E043Cu);  if (depth < kMaxDepth) unit_001F(c, 265u, depth + 1u); else { c.pc = 0x0017F6A0u; return; } if (c.pc != 0x001E043Cu) [[unlikely]] return; }
L_001E043C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x012B0000u);
    c.r[4].d[0] = c.r[2].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x012D0000u);
    c.budget -= 5;
    { c.r[5].d[0] = c.r[2].d[0] | 7136ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A57E0u | kUnwind; return; } [[clang::musttail]] return unit_0029(c, 110u, depth); }
L_001E0470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29852u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[16], c.r[2].w[0] - 16784u);
    st16((c.r[1].w[0] - 16784u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0498u); set32(c.r[5], c.r[4].w[0] + 20480u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x001E0498u) [[unlikely]] return; }
L_001E0498:
    set32(c.r[2], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], c.r[2].w[0] + 19840u);
    c.budget -= 3;
L_001E04A4:
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 640u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E04A4u | kUnwind; return; } goto L_001E04A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29848u)));
    c.r[1].d[0] = 0ull | 61440ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04D0u); set32(c.r[5], c.r[4].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x001E04D0u) [[unlikely]] return; }
L_001E04D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29848u)));
    c.r[1].d[0] = 0ull | 60800ull;
    set32(c.r[4], 0u + 95u);
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_001E04E0:
    set32(c.r[2], c.r[4].w[0] + 128u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 640u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E04E0u | kUnwind; return; } goto L_001E04E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0504u);  if (depth < kMaxDepth) unit_0038(c, 44u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E0504u) [[unlikely]] return; }
L_001E0504:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0520:
    set32(c.r[3], ld32((c.r[28].w[0] - 29848u)));
    c.r[1].d[0] = 0ull | 60800ull;
    set32(c.r[4], 0u + 95u);
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_001E0530:
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 640u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0530u | kUnwind; return; } goto L_001E0530; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[6], c.r[2].w[0] - 16784u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 16784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 16782u);  if (t) { goto L_001E0588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E05F8; } }
L_001E0588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001E05E0; } }
L_001E0590:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_001E05D0; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001E05F8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001E05D0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
L_001E05E0:
    c.r[7].d[0] = c.r[4].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0590u | kUnwind; return; } goto L_001E0590; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001E05F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0600:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[10], c.r[4], c.r[0]);  if (t) { goto L_001E0624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E06A0; } }
L_001E0624:
    set32(c.r[2], 0u + 19280u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x012B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 22528ull;
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E064C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E06A0; } }
L_001E064C:
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    c.r[9].d[0] = c.r[6].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E066C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E06A0; } }
L_001E066C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0674u);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0560u; return; } if (c.pc != 0x001E0674u) [[unlikely]] return; }
L_001E0674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 4);  if (t) { goto L_001E0688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E06A0; } }
    set32(c.r[3], c.r[9].w[0] << 4);
    c.budget -= 1;
L_001E0688:
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[2].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
L_001E06A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E06B0:
    set32(c.r[5], ld32((c.r[28].w[0] - 29848u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001E06E8; } }
L_001E06BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_001E06DC; }
    set32(c.r[3], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 592u), c.f[12]);  if (t) { goto L_001E0700; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001E06DC:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], c.r[5].w[0] + 640u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_001E06E8:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E06BCu | kUnwind; return; } goto L_001E06BC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001E0700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0710:
    set32(c.r[7], ld32((c.r[28].w[0] - 29848u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[3].w[0] << 7);
    set32(c.r[8], c.r[3].w[0] << 9);
    set32(c.r[3], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld16((c.r[9].w[0] + 6u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] | 34ull;
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 69u));
    c.budget -= 26;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + 4u);  if (t) { goto L_001E07C8; } }
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[5], 0u - 3841u);
    set32(c.r[6], c.r[9].w[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[6].w[0] << 24);
    c.r[6].d[0] = c.r[9].d[0] << 40;
    c.r[6].d[0] = c.r[6].d[0] >> 40;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 8ull;
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 69u));
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[7].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[6], c.r[7].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.budget -= 20;
L_001E07C8:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 16u)));
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 20u)));
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E087C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 30u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 30u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 29;
L_001E087C:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  c.pc = t; return; }
L_001E08B0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29848u)));
    set32(c.r[5], c.r[2].w[0] << 7);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29840u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 13);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; return; }
L_001E0920:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29848u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001E0940:
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[3].w[0] - 16784u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], c.r[3].w[0] - 16782u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 16784u)));
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001E098C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001E098C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E09A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001E09B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E0A00; } }
L_001E09B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E09C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E0A00; } }
L_001E09C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 17296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 17808u);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 26248u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001E0A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0A10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001E0A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E0A70; } }
L_001E0A20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001E0A70; } }
L_001E0A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 17296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 17808u);
    c.f[0] = ld32((c.r[4].w[0] + 592u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 26248u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001E0A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0A80:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_001E0AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[12], c.r[6], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const bool t = c.r[12].d[0] == c.r[3].d[0]; mmi::paddub(c.r[13], c.r[4], c.r[0]);  if (t) { goto L_001E0B88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[12].w[0] - 1u);  if (t) { goto L_001E0AFC; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] + 4u);  if (t) { goto L_001E0B88; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AE8u); mmi::paddub(c.r[5], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0A80u; return; } if (c.pc != 0x001E0AE8u) [[unlikely]] return; }
L_001E0AE8:
    set32(c.r[5], c.r[13].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AF4u); mmi::paddub(c.r[4], c.r[13], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0A80u; return; } if (c.pc != 0x001E0AF4u) [[unlikely]] return; }
L_001E0AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001E0B8C; } }
L_001E0AFC:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_001E0B88; } }
L_001E0B0C:
    set32(c.r[3], c.r[12].w[0] - 1u);
    set32(c.r[7], c.r[13].w[0] + 4u);
    set32(c.r[9], c.r[8].w[0] + 4u);
    c.r[1].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[11], c.r[10], c.r[0]);  if (t) { goto L_001E0B70; } }
    c.budget -= 1;
L_001E0B28:
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_001E0B5C; }
    mmi::paddub(c.r[4], c.r[8], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B4Cu); mmi::paddub(c.r[5], c.r[9], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0A80u; return; } if (c.pc != 0x001E0B4Cu) [[unlikely]] return; }
L_001E0B4C:
    mmi::paddub(c.r[4], c.r[13], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B58u); mmi::paddub(c.r[5], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0A80u; return; } if (c.pc != 0x001E0B58u) [[unlikely]] return; }
L_001E0B58:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_001E0B5C:
    set32(c.r[3], c.r[12].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0B28u | kUnwind; return; } goto L_001E0B28; } }
L_001E0B70:
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[12].w[0] - 1u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0B0Cu | kUnwind; return; } goto L_001E0B0C; } }
L_001E0B88:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E0B8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0BA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BE0u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001E0BE0u) [[unlikely]] return; }
L_001E0BE0:
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0BF0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 112u, depth + 1u); else { c.pc = 0x00135690u; return; } if (c.pc != 0x001E0BF0u) [[unlikely]] return; }
L_001E0BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[2].d[0] | 6688ull;
    set32(c.r[4], c.r[17].w[0] + 272u);
    set32(c.r[5], c.r[17].w[0] + 336u);
    set32(c.r[6], c.r[17].w[0] + 400u);
    set32(c.r[7], c.r[17].w[0] + 464u);
    set32(c.r[8], c.r[17].w[0] + 144u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[9].d[0] = c.r[2].d[0] | 6496ull;
    c.r[10].d[0] = c.r[2].d[0] | 6560ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C20u); c.r[11].d[0] = c.r[2].d[0] | 6624ull;  if (depth < kMaxDepth) unit_000D(c, 129u, depth + 1u); else { c.pc = 0x00135A80u; return; } if (c.pc != 0x001E0C20u) [[unlikely]] return; }
L_001E0C20:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[17].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[17].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    st32((c.r[17].w[0] + 392u), c.f[0]);
    st32((c.r[17].w[0] + 396u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C64u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102680u; return; } if (c.pc != 0x001E0C64u) [[unlikely]] return; }
L_001E0C64:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C8Cu); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 122u, depth + 1u); else { c.pc = 0x00135810u; return; } if (c.pc != 0x001E0C8Cu) [[unlikely]] return; }
L_001E0C8C:
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C98u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 222u, depth + 1u); else { c.pc = 0x001026C0u; return; } if (c.pc != 0x001E0C98u) [[unlikely]] return; }
L_001E0C98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CACu); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x001E0CACu) [[unlikely]] return; }
L_001E0CAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CC0u); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x001E0CC0u) [[unlikely]] return; }
L_001E0CC0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E0CE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[1].w[0] + 10416u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29856u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[6].w[0] + c.r[4].w[0]);  if (t) { goto L_001E0E08; } }
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[28].w[0] - 26180u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.f[0] = ld32((c.r[8].w[0] + 96u));
    set32(c.r[6], 0u + 4080u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[17].w[0] + 576u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 588u), c.f[0]);
    st32((c.r[17].w[0] + 576u), c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[8], c.r[17].w[0] + 272u);
    set32(c.r[9], c.r[17].w[0] + 336u);
    set32(c.r[10], c.r[17].w[0] + 400u);
    set32(c.r[11], c.r[17].w[0] + 464u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135E40u; return; } if (c.pc != 0x001E0DC8u) [[unlikely]] return; }
L_001E0DC8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001E0DD4u) [[unlikely]] return; }
L_001E0DD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26180u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E0DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DECu); st32((c.r[28].w[0] - 26180u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_000D(c, 147u, depth + 1u); else { c.pc = 0x00135DF0u; return; } if (c.pc != 0x001E0DECu) [[unlikely]] return; }
L_001E0DEC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0DF8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001E0DF8u) [[unlikely]] return; }
L_001E0DF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001E0E08u) [[unlikely]] return; }
L_001E0E08:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E0E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E34u); c.r[4].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_0038(c, 53u, depth + 1u); else { c.pc = 0x001E08B0u; return; } if (c.pc != 0x001E0E34u) [[unlikely]] return; }
L_001E0E34:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E40u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001E0E40u) [[unlikely]] return; }
L_001E0E40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E0F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 17296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E88u); set32(c.r[5], c.r[2].w[0] - 17808u);  if (depth < kMaxDepth) unit_0038(c, 59u, depth + 1u); else { c.pc = 0x001E0AA0u; return; } if (c.pc != 0x001E0E88u) [[unlikely]] return; }
L_001E0E88:
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E94u); st32((c.r[28].w[0] - 26180u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 132u, depth + 1u); else { c.pc = 0x00399AC0u; return; } if (c.pc != 0x001E0E94u) [[unlikely]] return; }
L_001E0E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10304u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EA8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x001E0EA8u) [[unlikely]] return; }
L_001E0EA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[19], c.r[3].w[0] - 17296u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001E0F48; } }
L_001E0EB8:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0F04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001E0EF4; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10384u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EF0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x001E0EF0u) [[unlikely]] return; }
L_001E0EF0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001E0EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0EFCu);  if (depth < kMaxDepth) unit_0038(c, 81u, depth + 1u); else { c.pc = 0x001E0E20u; return; } if (c.pc != 0x001E0EFCu) [[unlikely]] return; }
L_001E0EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001E0F44; } }
L_001E0F04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001E0F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10352u);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F24u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x001E0F24u) [[unlikely]] return; }
L_001E0F24:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_001E0F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F34u);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0BA0u; return; } if (c.pc != 0x001E0F34u) [[unlikely]] return; }
L_001E0F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 75u, depth + 1u); else { c.pc = 0x001E0CE0u; return; } if (c.pc != 0x001E0F3Cu) [[unlikely]] return; }
L_001E0F3C:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 2;
L_001E0F44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E0F48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26248u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0EB8u | kUnwind; return; } goto L_001E0EB8; } }
L_001E0F58:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E0F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[16], c.r[2].w[0] - 16784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 8;
L_001E0FA0:
    set32(c.r[4], c.r[2].w[0] - 17296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FB0u); set32(c.r[5], c.r[2].w[0] - 16784u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x001E0FB0u) [[unlikely]] return; }
L_001E0FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 17808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0FC0u); set32(c.r[5], c.r[4].w[0] + 512u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x001E0FC0u) [[unlikely]] return; }
L_001E0FC0:
    st16((c.r[28].w[0] - 26248u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001E1078; } }
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001E0FD4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_001E106C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1068; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E1068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1018u);  if (depth < kMaxDepth) unit_0038(c, 55u, depth + 1u); else { c.pc = 0x001E0940u; return; } if (c.pc != 0x001E1018u) [[unlikely]] return; }
L_001E1018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1068; } }
L_001E1020:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[3], 0u + 19280u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x012B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 22528ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
L_001E103C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E1054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E104Cu);  if (depth < kMaxDepth) unit_0038(c, 55u, depth + 1u); else { c.pc = 0x001E0940u; return; } if (c.pc != 0x001E104Cu) [[unlikely]] return; }
L_001E104C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1068; } }
L_001E1054:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1068u);  if (depth < kMaxDepth) unit_0038(c, 56u, depth + 1u); else { c.pc = 0x001E09A0u; return; } if (c.pc != 0x001E1068u) [[unlikely]] return; }
L_001E1068:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E106C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] + 640u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
L_001E1078:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_001E1080:
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E0FD4u | kUnwind; return; } goto L_001E0FD4; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001E10D0; } }
L_001E1098:
    set32(c.r[2], ld32((c.r[28].w[0] - 29848u)));
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_001E10C4; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E10C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10C0u);  if (depth < kMaxDepth) unit_0038(c, 57u, depth + 1u); else { c.pc = 0x001E0A10u; return; } if (c.pc != 0x001E10C0u) [[unlikely]] return; }
L_001E10C0:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E10C4:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], c.r[5].w[0] + 640u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_001E10D0:
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1098u | kUnwind; return; } goto L_001E1098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E10ECu);  if (depth < kMaxDepth) unit_0038(c, 84u, depth + 1u); else { c.pc = 0x001E0E50u; return; } if (c.pc != 0x001E10ECu) [[unlikely]] return; }
L_001E10EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E1100:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
    c.pc = 0x001E1104u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001E1110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001E15B0; } }
L_001E1138:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001E15AC; }
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[18], c.r[17].w[0] + 1552u);
    set32(c.r[8], c.r[17].w[0] + 1612u);
    set32(c.r[7], 0u + 6u);
    mmi::paddub(c.r[9], c.r[18], c.r[0]);
    c.budget -= 11;
L_001E1180:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1180u | kUnwind; return; } goto L_001E1180; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E11BC; } }
    c.f[0] = 0u;
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E1208; } }
L_001E11BC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 20u)));
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1200u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E1200u) [[unlikely]] return; }
L_001E1200:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 2;
L_001E1208:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1230; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);  goto L_001E1244; }
    c.budget -= 1;
L_001E1230:
    c.f[0] = 0u;
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E1290; } }
    set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_001E1244:
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 21u, c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1288u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E1288u) [[unlikely]] return; }
L_001E1288:
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    c.budget -= 2;
L_001E1290:
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[9].d[0] = c.r[7].d[0] | 34953ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[7].w[0] + 16080u);
    set32(c.r[10], ld32((c.r[8].w[0] + 516u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 184u)));
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[10].w[0] >> 31);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));
    set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 18;
L_001E12D8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 2u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { goto L_001E1300; } }
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E12D8u | kUnwind; return; } goto L_001E12D8; } }
L_001E1300:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 580u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_001E1328; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_001E1328; } }
    set32(c.r[9], 0u + 100u);
    c.budget -= 2;
L_001E1328:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 513u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E1380; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E1380; } }
    set32(c.r[6], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[17].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1264u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1268u)));
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_001E1380; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[17].w[0] + 8412u), c.r[3].w[0]);
    c.budget -= 4;
L_001E1380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 15888u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001E13B0; } }
L_001E1390:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 8;
L_001E13B0:
    c.r[1].d[0] = c.r[8].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E13D8; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 8412u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1390u | kUnwind; return; } goto L_001E1390; } }
L_001E13D8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[1].d[0] = c.r[8].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_001E13EC; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[1].d[0] = c.r[8].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
L_001E13EC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E13F8; } }
    set32(c.r[8], 0u + 14u);
    c.budget -= 1;
L_001E13F8:
    st8((c.r[17].w[0] + 8434u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 396u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001E1440; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1440; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_001E143C:
    c.f[21] = c.r[3].w[0];
    c.budget -= 1;
L_001E1440:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[9], c.r[7].w[0] + 16112u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[7].w[0] + 16114u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001E14B8; } }
    set32(c.r[10], c.r[6].w[0] << 2);
    c.budget -= 1;
L_001E1460:
    set32(c.r[7], c.r[9].w[0] + c.r[10].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001E14B4; }
    set32(c.r[7], c.r[8].w[0] + c.r[10].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E14B0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_001E14B0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E14B4:
    c.budget -= 1;
L_001E14B8:
    c.r[7].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[10], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1460u | kUnwind; return; } goto L_001E1460; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_001E1530; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E14FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 22u)));  if (t) { goto L_001E1504; } }
L_001E14FC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 22u)));
    c.budget -= 2;
L_001E1504:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E1520; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 18u)));
    c.r[1].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1528; } }
    c.budget -= 1;
L_001E1520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8435u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E1578; } }
L_001E1528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8435u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E1578; } }
L_001E1530:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E1568; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[6].w[0] + 16336u);
    set32(c.r[8], ld32((c.r[17].w[0] + 1280u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1570; } }
    c.budget -= 1;
L_001E1568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 8435u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E1578; } }
L_001E1570:
    st8((c.r[17].w[0] + 8435u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E1578:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1264u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1268u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st16((c.r[3].w[0] + 414u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001E15A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st16((c.r[3].w[0] + 414u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_001E15A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E15AC:
    c.budget -= 1;
L_001E15B0:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1138u | kUnwind; return; } goto L_001E1138; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E15E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25312u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E179C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001E160C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E179C; } }
L_001E160C:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[12], c.r[5].w[0] + c.r[7].w[0]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 12;
L_001E163C:
    set32(c.r[3], c.r[4].w[0] + c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 272u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1552u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1558u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[11].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[12].w[0] + 272u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E163Cu | kUnwind; return; } goto L_001E163C; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[9], c.r[6].w[0] << 4);
    c.budget -= 2;
L_001E1674:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 304u));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[12].w[0] + 280u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = c.r[10].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1674u | kUnwind; return; } goto L_001E1674; } }
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] << 1);
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 260u)));
    st8((c.r[3].w[0] + 256u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 264u)));
    st8((c.r[3].w[0] + 258u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 265u)));
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 272u)));
    st8((c.r[3].w[0] + 260u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 273u)));
    st8((c.r[3].w[0] + 261u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 280u)));
    st8((c.r[3].w[0] + 262u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 281u)));
    st8((c.r[3].w[0] + 263u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 35;
    { const bool t = c.r[8].d[0] != c.r[9].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E173C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);  goto L_001E1760; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001E173C:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);  goto L_001E1770; }
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001E176C; } }
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001E1760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 257u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 257u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001E176C:
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001E1770:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8435u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 3904u);
    set32(c.r[5], ld32((c.r[6].w[0] + 264u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8412u)));
    st32((c.r[6].w[0] + 268u), c.r[3].w[0]);
    c.budget -= 11;
L_001E179C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E17B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 121u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[6].w[0] + 25580u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 25312u);  if (t) { goto L_001E1A68; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[12], c.r[3], c.r[0]);  if (t) { goto L_001E1858; } }
L_001E1808:
    set32(c.r[8], ld32((c.r[12].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 268u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[9].w[0] + 1u);  if (t) { goto L_001E1848; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[10].d[0] = c.r[9].d[0] << 56;
    set32(c.r[8], 0u + 3u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0] + 121u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 8;
L_001E183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 131u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_001E1870; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001E1848:
    c.r[9].d[0] = c.r[7].d[0] << 56;
    set32(c.r[12], c.r[12].w[0] + 32u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 4;
L_001E1858:
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[7].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1808u | kUnwind; return; } goto L_001E1808; } }
    c.budget -= 1;
L_001E1870:
    c.r[4].d[0] = c.r[11].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1A68; } }
    c.r[8].d[0] = c.r[10].d[0] << 56;
    set32(c.r[9], 0u + 7u);
    set32(c.r[7], c.r[3].w[0] + 224u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_001E18E8; } }
L_001E1894:
    c.f[3] = ld32((c.r[7].w[0] - 32u));
    c.f[2] = ld32((c.r[7].w[0] - 28u));
    c.f[1] = ld32((c.r[7].w[0] - 24u));
    c.f[0] = ld32((c.r[7].w[0] - 20u));
    set32(c.r[4], c.r[9].w[0] - 1u);
    c.r[9].d[0] = c.r[4].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.budget -= 11;
L_001E18C0:
    c.f[3] = ld32((c.r[7].w[0] - 16u));
    c.f[2] = ld32((c.r[7].w[0] - 12u));
    c.f[1] = ld32((c.r[7].w[0] - 8u));
    c.f[0] = ld32((c.r[7].w[0] - 4u));
    st32((c.r[7].w[0] + 16u), c.f[3]);
    st32((c.r[7].w[0] + 20u), c.f[2]);
    st32((c.r[7].w[0] + 24u), c.f[1]);
    st32((c.r[7].w[0] + 28u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] - 32u);
    c.budget -= 10;
L_001E18E8:
    c.r[4].d[0] = c.r[9].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1894u | kUnwind; return; } goto L_001E1894; } }
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001E1900:
    set32(c.r[4], c.r[8].w[0] << 5);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 256u)));
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], 0u + 4u);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 258u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 259u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 258u)));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[11], c.r[10].w[0] + 259u);  if (t) { goto L_001E1948; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 262u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001E194C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 3u);  if (t) { goto L_001E1954; } }
L_001E1948:
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001E194C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 260u)));
    c.budget -= 2;
L_001E1954:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    set32(c.r[7], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001E1984; } }
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 263u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_001E1980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 3u);  if (t) { goto L_001E198C; } }
L_001E1980:
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001E1984:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 261u)));
    c.budget -= 2;
L_001E198C:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 257u)));
    set32(c.r[11], c.r[7].w[0] + 0u);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[6], c.r[0]);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 272u)));
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[9].w[0] + 268u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[8].w[0]);  if (t) { goto L_001E19E0; } }
L_001E19C4:
    c.r[9].d[0] = ld8((c.r[10].w[0] + 280u));
    set32(c.r[8], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[8].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    st8((c.r[11].w[0] + 16u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 7;
L_001E19E0:
    c.r[8].d[0] = c.r[12].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[8].d[0] = c.r[8].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E19C4u | kUnwind; return; } goto L_001E19C4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1A68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[3].w[0] + 3936u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001E1A50; } }
L_001E1A1C:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 264u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E1A68; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001E1A50:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1A1Cu | kUnwind; return; } goto L_001E1A1C; } }
    c.budget -= 1;
L_001E1A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[2].w[0] - 3872u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 9;
L_001E1A94:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[5].w[0]), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1A94u | kUnwind; return; } goto L_001E1A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[16], c.r[2].w[0] - 7456u);
    st32((c.r[28].w[0] - 26388u), 0u);
    st32((c.r[28].w[0] - 26384u), 0u);
    st32((c.r[28].w[0] - 26336u), c.r[16].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_001E1AC8:
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E1AD8u) [[unlikely]] return; }
L_001E1AD8:
    c.r[1].d[0] = c.r[17].sd[0] < 319ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E1AF0; } }
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001E1AF8; } }
L_001E1AF0:
    st32((c.r[28].w[0] - 26320u), c.r[16].w[0]);
    c.budget -= 2;
L_001E1AF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 320ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1AC8u | kUnwind; return; } goto L_001E1AC8; } }
    set32(c.r[3], 0u + 320u);
    st32((c.r[28].w[0] - 26460u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E1B84; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 26336u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001E1B7C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26460u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 26460u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);  if (t) { goto L_001E1B68; } }
    st32((c.r[28].w[0] - 26320u), 0u);
    c.budget -= 1;
L_001E1B68:
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E1B78u) [[unlikely]] return; }
L_001E1B78:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001E1B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001E1B8C; } }
L_001E1B84:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 2;
L_001E1B8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 132u, depth + 1u); else { c.pc = 0x001E1B30u; return; } if (c.pc != 0x001E1BB8u) [[unlikely]] return; }
L_001E1BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1C30; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E1C00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 3604u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 3604u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_001E1BF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 3860u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_001E1C30; } }
L_001E1BF4:
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001E1C30; } }
L_001E1C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 3860u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 3860u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_001E1C28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 3604u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_001E1C30; } }
L_001E1C28:
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_001E1C30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1C3C:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001E1C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 26320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1C58; } }
    st32((c.r[28].w[0] - 26320u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26336u), c.r[4].w[0]);  if (t) { goto L_001E1C60; } }
L_001E1C58:
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26320u), c.r[4].w[0]);
    c.budget -= 2;
L_001E1C60:
    set32(c.r[3], ld32((c.r[28].w[0] - 26460u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26460u), c.r[3].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_001E1C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1CB4u);  if (depth < kMaxDepth) unit_0038(c, 55u, depth + 1u); else { c.pc = 0x001E0940u; return; } if (c.pc != 0x001E1CB4u) [[unlikely]] return; }
L_001E1CB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E1CF8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001E1CF8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], c.r[3].w[0] - 3616u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_001E1D60; } }
L_001E1CF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E1D28; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001E1D28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 16u), 0u);  if (t) { goto L_001E1D60; } }
L_001E1D28:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E1D58; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001E1D58; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_001E1D60; } }
L_001E1D58:
    st32((c.r[17].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 2;
L_001E1D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 137u, depth + 1u); else { c.pc = 0x001E1C40u; return; } if (c.pc != 0x001E1D68u) [[unlikely]] return; }
L_001E1D68:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E1D80:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E1DE8; } }
L_001E1DB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1DD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1DC8u) [[unlikely]] return; }
L_001E1DC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26472u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 26472u), c.r[3].w[0]);
    c.budget -= 4;
L_001E1DD8:
    set32(c.r[16], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1DB0u | kUnwind; return; } goto L_001E1DB0; } }
    c.budget -= 1;
L_001E1DE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1E00:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 3616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E1E60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E1E28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E1E50; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));
    st32((c.r[5].w[0] + 172u), 0u);
    c.budget -= 2;
L_001E1E3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[28].w[0] - 26388u), c.r[5].w[0]);  if (t) { goto L_001E1E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 26384u), c.r[5].w[0]);  if (t) { goto L_001E1E50; } }
L_001E1E4C:
    st32((c.r[4].w[0] + 172u), c.r[5].w[0]);
    c.budget -= 1;
L_001E1E50:
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1E28u | kUnwind; return; } goto L_001E1E28; } }
    c.budget -= 1;
L_001E1E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E80u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001E1E80u) [[unlikely]] return; }
L_001E1E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E88u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 141u, depth + 1u); else { c.pc = 0x001E1D80u; return; } if (c.pc != 0x001E1E88u) [[unlikely]] return; }
L_001E1E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E90u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 144u, depth + 1u); else { c.pc = 0x001E1E00u; return; } if (c.pc != 0x001E1E90u) [[unlikely]] return; }
L_001E1E90:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E1EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 26384u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E1EF8; } }
L_001E1EB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1EE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1EE8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E1EE8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1EE4u) [[unlikely]] return; }
L_001E1EE4:
    c.budget -= 1;
L_001E1EE8:
    set32(c.r[16], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1EB8u | kUnwind; return; } goto L_001E1EB8; } }
    c.budget -= 1;
L_001E1EF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1F10:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 19280u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x012B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 22528ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F44u); st32((c.r[4].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 48u, depth + 1u); else { c.pc = 0x001E0600u; return; } if (c.pc != 0x001E1F44u) [[unlikely]] return; }
L_001E1F44:
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] - 9360u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] - 9356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[1].w[0] - 9352u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[1].w[0] - 9348u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[28].w[0] - 25304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FF0u);  if (depth < kMaxDepth) unit_0029(c, 96u, depth + 1u); else { c.pc = 0x001A5340u; return; } if (c.pc != 0x001E1FF0u) [[unlikely]] return; }
L_001E1FF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1FFCu); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 85u, depth + 1u); else { c.pc = 0x001A5160u; return; } if (c.pc != 0x001E1FFCu) [[unlikely]] return; }
L_001E1FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6256ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2010u); set32(c.r[5], c.r[2].w[0] + 3968u);  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001E2010u) [[unlikely]] return; }
L_001E2010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6368ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2024u); set32(c.r[5], c.r[2].w[0] + 3968u);  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001E2024u) [[unlikely]] return; }
L_001E2024:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2030:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 25304u));
    set32(c.r[17], c.r[29].w[0] + 136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2068u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001E2068u) [[unlikely]] return; }
L_001E2068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.f[12] = ld32((c.r[1].w[0] - 9360u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E207Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 233u, depth + 1u); else { c.pc = 0x00102870u; return; } if (c.pc != 0x001E207Cu) [[unlikely]] return; }
L_001E207C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E208Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001E208Cu) [[unlikely]] return; }
L_001E208C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2094u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001E2094u) [[unlikely]] return; }
L_001E2094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.f[12] = ld32((c.r[1].w[0] - 9356u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102918u; return; } if (c.pc != 0x001E20A8u) [[unlikely]] return; }
L_001E20A8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20B8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001E20B8u) [[unlikely]] return; }
L_001E20B8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[11].d[0] = c.r[9].d[0] | 5296ull;
    c.f[1] = ld32((c.r[11].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[10].d[0] = c.r[9].d[0] | 5280ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[9].d[0] | 4896ull;
    c.r[2].d[0] = c.r[9].d[0] | 5312ull;
    c.r[7].d[0] = c.r[9].d[0] | 6752ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[9].d[0] | 5088ull;
    c.r[5].d[0] = c.r[9].d[0] | 5152ull;
    c.r[6].d[0] = c.r[9].d[0] | 5216ull;
    st32((c.r[10].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] + 5300u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[8].d[0] = c.r[9].d[0] | 4960ull;
    c.r[9].d[0] = c.r[9].d[0] | 5024ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 5284u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[1] = ld32((c.r[1].w[0] + 5304u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 5288u), c.f[0]);
    st32((c.r[28].w[0] - 26224u), c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2130u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 134u, depth + 1u); else { c.pc = 0x00135C30u; return; } if (c.pc != 0x001E2130u) [[unlikely]] return; }
L_001E2130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6496ull;
    c.r[5].d[0] = c.r[2].d[0] | 6560ull;
    c.r[6].d[0] = c.r[2].d[0] | 6624ull;
    c.r[7].d[0] = c.r[2].d[0] | 6688ull;
    c.r[8].d[0] = c.r[2].d[0] | 6752ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2150u); c.r[9].d[0] = c.r[2].d[0] | 6256ull;  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x001E2150u) [[unlikely]] return; }
L_001E2150:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E2170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4080u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E219Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E219Cu) [[unlikely]] return; }
L_001E219C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21A4u);  if (depth < kMaxDepth) unit_0038(c, 215u, depth + 1u); else { c.pc = 0x001E2700u; return; } if (c.pc != 0x001E21A4u) [[unlikely]] return; }
L_001E21A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E21B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[28].w[0] - 25756u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21C4u); st8((c.r[28].w[0] - 25760u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037F180u; return; } if (c.pc != 0x001E21C4u) [[unlikely]] return; }
L_001E21C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E222C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21D4u);  if (depth < kMaxDepth) unit_0096(c, 212u, depth + 1u); else { c.pc = 0x0035A990u; return; } if (c.pc != 0x001E21D4u) [[unlikely]] return; }
L_001E21D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E222C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 319u, depth + 1u); else { c.pc = 0x0037F150u; return; } if (c.pc != 0x001E21E4u) [[unlikely]] return; }
L_001E21E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E2268; } }
L_001E222C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2248u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0038(c, 128u, depth + 1u); else { c.pc = 0x001E1A70u; return; } if (c.pc != 0x001E2248u) [[unlikely]] return; }
L_001E2248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2250u);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0420u; return; } if (c.pc != 0x001E2250u) [[unlikely]] return; }
L_001E2250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2258u);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E0450u; return; } if (c.pc != 0x001E2258u) [[unlikely]] return; }
L_001E2258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2260u);  if (depth < kMaxDepth) unit_0038(c, 38u, depth + 1u); else { c.pc = 0x001E0470u; return; } if (c.pc != 0x001E2260u) [[unlikely]] return; }
L_001E2260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2268u);  if (depth < kMaxDepth) unit_0038(c, 156u, depth + 1u); else { c.pc = 0x001E1FA0u; return; } if (c.pc != 0x001E2268u) [[unlikely]] return; }
L_001E2268:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25756u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001E230C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E230C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E230C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22B0u);  if (depth < kMaxDepth) unit_00A0(c, 38u, depth + 1u); else { c.pc = 0x00380620u; return; } if (c.pc != 0x001E22B0u) [[unlikely]] return; }
L_001E22B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E22EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E230C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E22D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E230C; } }
L_001E22D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22DCu);  if (depth < kMaxDepth) unit_0038(c, 94u, depth + 1u); else { c.pc = 0x001E0F80u; return; } if (c.pc != 0x001E22DCu) [[unlikely]] return; }
L_001E22DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22E4u);  if (depth < kMaxDepth) unit_0038(c, 151u, depth + 1u); else { c.pc = 0x001E1EA0u; return; } if (c.pc != 0x001E22E4u) [[unlikely]] return; }
L_001E22E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001E23CC; } }
L_001E22EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 25760u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[2].w[0] + 5u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001E230C; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001E230C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2314u);  if (depth < kMaxDepth) unit_0038(c, 44u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E2314u) [[unlikely]] return; }
L_001E2314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E231Cu);  if (depth < kMaxDepth) unit_0096(c, 260u, depth + 1u); else { c.pc = 0x0035B130u; return; } if (c.pc != 0x001E231Cu) [[unlikely]] return; }
L_001E231C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E2388; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001E2338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E23A0; } }
L_001E2338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2340u);  if (depth < kMaxDepth) unit_009F(c, 319u, depth + 1u); else { c.pc = 0x0037F150u; return; } if (c.pc != 0x001E2340u) [[unlikely]] return; }
L_001E2340:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E23A0; } }
L_001E2388:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001E23A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23A8u);  if (depth < kMaxDepth) unit_0093(c, 206u, depth + 1u); else { c.pc = 0x0034EDE0u; return; } if (c.pc != 0x001E23A8u) [[unlikely]] return; }
L_001E23A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23B0u);  if (depth < kMaxDepth) unit_0038(c, 147u, depth + 1u); else { c.pc = 0x001E1E70u; return; } if (c.pc != 0x001E23B0u) [[unlikely]] return; }
L_001E23B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23B8u);  if (depth < kMaxDepth) unit_0038(c, 161u, depth + 1u); else { c.pc = 0x001E2030u; return; } if (c.pc != 0x001E23B8u) [[unlikely]] return; }
L_001E23B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23C0u);  if (depth < kMaxDepth) unit_0038(c, 94u, depth + 1u); else { c.pc = 0x001E0F80u; return; } if (c.pc != 0x001E23C0u) [[unlikely]] return; }
L_001E23C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23C8u);  if (depth < kMaxDepth) unit_0038(c, 151u, depth + 1u); else { c.pc = 0x001E1EA0u; return; } if (c.pc != 0x001E23C8u) [[unlikely]] return; }
L_001E23C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E23CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E23E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 11u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001E2430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
L_001E243C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25868u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[28].w[0] - 25872u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E24E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_001E24BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001E24B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[28].w[0] - 25900u);  if (t) { goto L_001E248C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001E2510; } }
    set32(c.r[4], c.r[28].w[0] - 25900u);
    c.budget -= 1;
L_001E248C:
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E24ACu); st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 414u, depth + 1u); else { c.pc = 0x00357F60u; return; } if (c.pc != 0x001E24ACu) [[unlikely]] return; }
L_001E24AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E250C; } }
L_001E24B4:
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 2;
L_001E24BC:
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 31u);
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E250C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001E24E4:
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 30u);
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_001E250C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001E2510:
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 5u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] - 9392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9391u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[1].w[0] - 9388u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E258Cu); st8((c.r[1].w[0] - 9387u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001E258Cu) [[unlikely]] return; }
L_001E258C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2594u);  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x001E2594u) [[unlikely]] return; }
L_001E2594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E259Cu);  if (depth < kMaxDepth) unit_0038(c, 128u, depth + 1u); else { c.pc = 0x001E1A70u; return; } if (c.pc != 0x001E259Cu) [[unlikely]] return; }
L_001E259C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25A4u);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0420u; return; } if (c.pc != 0x001E25A4u) [[unlikely]] return; }
L_001E25A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25ACu);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E0450u; return; } if (c.pc != 0x001E25ACu) [[unlikely]] return; }
L_001E25AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25B4u);  if (depth < kMaxDepth) unit_0038(c, 38u, depth + 1u); else { c.pc = 0x001E0470u; return; } if (c.pc != 0x001E25B4u) [[unlikely]] return; }
L_001E25B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E25BCu);  if (depth < kMaxDepth) unit_0038(c, 156u, depth + 1u); else { c.pc = 0x001E1FA0u; return; } if (c.pc != 0x001E25BCu) [[unlikely]] return; }
L_001E25BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E25D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E26B4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E2690; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E2654; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001E26EC; } }
L_001E2614:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E2630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2628u);  if (depth < kMaxDepth) unit_0017(c, 118u, depth + 1u); else { c.pc = 0x0015D080u; return; } if (c.pc != 0x001E2628u) [[unlikely]] return; }
L_001E2628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001E2644; } }
L_001E2630:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
L_001E263C:
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 2;
L_001E2644:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E26E8; } }
L_001E2654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E265Cu); st8((c.r[5].w[0] + 330u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001E265Cu) [[unlikely]] return; }
L_001E265C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2664u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001E2664u) [[unlikely]] return; }
L_001E2664:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2674u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 139u, depth + 1u); else { c.pc = 0x0015B6B0u; return; } if (c.pc != 0x001E2674u) [[unlikely]] return; }
L_001E2674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E267Cu);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001E267Cu) [[unlikely]] return; }
L_001E267C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E26E8; } }
L_001E2690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2698u);  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x001E2698u) [[unlikely]] return; }
L_001E2698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E26E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E26E8; } }
L_001E26B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 523u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26E8u); st8((c.r[28].w[0] - 25664u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0038(c, 196u, depth + 1u); else { c.pc = 0x001E2430u; return; } if (c.pc != 0x001E26E8u) [[unlikely]] return; }
L_001E26E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E26EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E2710:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st8((c.r[28].w[0] - 26772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 26768u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E2730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[7], c.r[3].w[0] + 5192u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E273C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E273Cu | kUnwind; return; } goto L_001E273C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[6], c.r[3].w[0] + 84u);
    c.budget -= 3;
L_001E276C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E276Cu | kUnwind; return; } goto L_001E276C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E27A0:
    c.r[9].d[0] = c.r[5].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 28976u);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
L_001E27BC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E27BCu | kUnwind; return; } goto L_001E27BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 29040u);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 4;
L_001E27F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[3].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E27F0u | kUnwind; return; } goto L_001E27F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[28].w[0] - 25684u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001E2830:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[28].w[0] - 25580u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[28].w[0] - 25584u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    st8((c.r[28].w[0] - 25588u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st8((c.r[28].w[0] - 25592u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    st8((c.r[28].w[0] - 25596u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    st8((c.r[28].w[0] - 25600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[28].w[0] - 25624u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 9u));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[28].w[0] - 25628u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    st8((c.r[28].w[0] - 25604u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    st8((c.r[28].w[0] - 25608u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    st8((c.r[28].w[0] - 25676u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    st8((c.r[28].w[0] - 25616u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    st8((c.r[28].w[0] - 25620u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 15u)));
    st8((c.r[28].w[0] - 25640u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 25644u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 21u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 22u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 23u));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 20u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 25648u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    st8((c.r[28].w[0] - 25652u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 25u)));
    st8((c.r[28].w[0] - 25656u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    st8((c.r[28].w[0] - 25668u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 27u)));
    st8((c.r[28].w[0] - 25672u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    st8((c.r[28].w[0] - 25632u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 33u)));
    st8((c.r[28].w[0] - 25631u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 34u)));
    st8((c.r[28].w[0] - 25630u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 35u)));
    st8((c.r[28].w[0] - 25629u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 36u)));
    st8((c.r[28].w[0] - 25636u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[28].w[0] - 25868u), c.r[3].w[0]);
    c.budget -= 83;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 25680u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001E2980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[28].w[0] - 25580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25596u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 25632u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25588u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25631u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25630u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25600u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25629u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 600u);
    st16((c.r[28].w[0] - 25624u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 25628u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    set32(c.r[6], 0u + 16u);
    st32((c.r[28].w[0] - 25644u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 25648u), c.r[2].w[0]);
    st8((c.r[28].w[0] - 25672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[28].w[0] - 25592u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25604u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25608u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25676u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25616u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25620u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25640u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25652u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25656u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25636u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25668u), static_cast<std::uint8_t>(0u));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A14u); st8((c.r[28].w[0] - 25680u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E2A14u) [[unlikely]] return; }
L_001E2A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A24u); set32(c.r[5], c.r[2].w[0] + 24480u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001E2A24u) [[unlikely]] return; }
L_001E2A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 29040u);
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A38u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001E2A38u) [[unlikely]] return; }
L_001E2A38:
    set32(c.r[4], c.r[29].w[0] + 28u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A48u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E2A48u) [[unlikely]] return; }
L_001E2A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A58u); set32(c.r[5], c.r[2].w[0] + 24512u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001E2A58u) [[unlikely]] return; }
L_001E2A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 29024u);
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A6Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001E2A6Cu) [[unlikely]] return; }
L_001E2A6C:
    set32(c.r[4], c.r[29].w[0] + 28u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A7Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E2A7Cu) [[unlikely]] return; }
L_001E2A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A8Cu); set32(c.r[5], c.r[2].w[0] + 24544u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001E2A8Cu) [[unlikely]] return; }
L_001E2A8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 29008u);
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AA0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001E2AA0u) [[unlikely]] return; }
L_001E2AA0:
    set32(c.r[4], c.r[29].w[0] + 28u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001E2AB0u) [[unlikely]] return; }
L_001E2AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AC0u); set32(c.r[5], c.r[2].w[0] + 24576u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001E2AC0u) [[unlikely]] return; }
L_001E2AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28992u);
    set32(c.r[5], c.r[29].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AD4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001E2AD4u) [[unlikely]] return; }
L_001E2AD4:
    set32(c.r[3], 0u + 8u);
    st8((c.r[28].w[0] - 25681u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25682u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25683u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 25684u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E2B00:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 5);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25668u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001E2B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B40u);  if (depth < kMaxDepth) unit_0053(c, 196u, depth + 1u); else { c.pc = 0x0024F370u; return; } if (c.pc != 0x001E2B40u) [[unlikely]] return; }
L_001E2B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 240u, depth + 1u); else { c.pc = 0x001E2B60u; return; } if (c.pc != 0x001E2B48u) [[unlikely]] return; }
L_001E2B48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E2B60:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25660u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25660u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 25660u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E2B90:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E2BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BDCu); st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 128u, depth + 1u); else { c.pc = 0x001E1A70u; return; } if (c.pc != 0x001E2BDCu) [[unlikely]] return; }
L_001E2BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BE4u);  if (depth < kMaxDepth) unit_0038(c, 34u, depth + 1u); else { c.pc = 0x001E0420u; return; } if (c.pc != 0x001E2BE4u) [[unlikely]] return; }
L_001E2BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BECu);  if (depth < kMaxDepth) unit_0038(c, 37u, depth + 1u); else { c.pc = 0x001E0450u; return; } if (c.pc != 0x001E2BECu) [[unlikely]] return; }
L_001E2BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BF4u);  if (depth < kMaxDepth) unit_0038(c, 38u, depth + 1u); else { c.pc = 0x001E0470u; return; } if (c.pc != 0x001E2BF4u) [[unlikely]] return; }
L_001E2BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BFCu);  if (depth < kMaxDepth) unit_0038(c, 156u, depth + 1u); else { c.pc = 0x001E1FA0u; return; } if (c.pc != 0x001E2BFCu) [[unlikely]] return; }
L_001E2BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C04u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001E2C04u) [[unlikely]] return; }
L_001E2C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C0Cu);  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x001E2C0Cu) [[unlikely]] return; }
L_001E2C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C14u);  if (depth < kMaxDepth) unit_009D(c, 108u, depth + 1u); else { c.pc = 0x003753F0u; return; } if (c.pc != 0x001E2C14u) [[unlikely]] return; }
L_001E2C14:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C30u); st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0038(c, 44u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E2C30u) [[unlikely]] return; }
L_001E2C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C38u);  if (depth < kMaxDepth) unit_009D(c, 113u, depth + 1u); else { c.pc = 0x00375490u; return; } if (c.pc != 0x001E2C38u) [[unlikely]] return; }
L_001E2C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C40u);  if (depth < kMaxDepth) unit_0093(c, 206u, depth + 1u); else { c.pc = 0x0034EDE0u; return; } if (c.pc != 0x001E2C40u) [[unlikely]] return; }
L_001E2C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C48u);  if (depth < kMaxDepth) unit_0038(c, 147u, depth + 1u); else { c.pc = 0x001E1E70u; return; } if (c.pc != 0x001E2C48u) [[unlikely]] return; }
L_001E2C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C50u);  if (depth < kMaxDepth) unit_0038(c, 161u, depth + 1u); else { c.pc = 0x001E2030u; return; } if (c.pc != 0x001E2C50u) [[unlikely]] return; }
L_001E2C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C58u);  if (depth < kMaxDepth) unit_0038(c, 94u, depth + 1u); else { c.pc = 0x001E0F80u; return; } if (c.pc != 0x001E2C58u) [[unlikely]] return; }
L_001E2C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C60u);  if (depth < kMaxDepth) unit_0038(c, 151u, depth + 1u); else { c.pc = 0x001E1EA0u; return; } if (c.pc != 0x001E2C60u) [[unlikely]] return; }
L_001E2C60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E2C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C98u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E2C98u) [[unlikely]] return; }
L_001E2C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2CD4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 11488u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 12448u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 13;
L_001E2CD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E2D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), 0u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D48u); st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001E2D48u) [[unlikely]] return; }
L_001E2D48:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[3].w[0] + 4112u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[3].w[0] + 4116u);
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4120u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E2DE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 22u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 320u);  if (t) { goto L_001E2E0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E2E10; } }
L_001E2E0C:
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001E2E10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2D00u | kUnwind; return; } goto L_001E2D00; }
L_001E2E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_001E2E3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001E3024; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E2E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E303C; } }
L_001E2E54:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_001E2E88; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001E2E98; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_001E2E88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2E98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001E2E98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 301ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E2EC4; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 7;
L_001E2EC4:
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0E0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[2].d[0] | 14564ull;
    set32(c.r[2], c.r[28].w[0] - 29832u);
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E2FC8; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[2].w[0] + 4240u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 4244u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4248u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FBCu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0038(c, 292u, depth + 1u); else { c.pc = 0x001E32C0u; return; } if (c.pc != 0x001E2FBCu) [[unlikely]] return; }
L_001E2FBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001E2FC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 361ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E303C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FF0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001E2FF0u) [[unlikely]] return; }
L_001E2FF0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E303C; } }
L_001E3024:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001E303C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E303Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 263u, depth + 1u); else { c.pc = 0x001E2D00u; return; } if (c.pc != 0x001E303Cu) [[unlikely]] return; }
L_001E303C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3044u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E3044u) [[unlikely]] return; }
L_001E3044:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3054u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E3054u) [[unlikely]] return; }
L_001E3054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E305Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E305Cu) [[unlikely]] return; }
L_001E305C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E3090:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001E30A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E30B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E30E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30F0u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001E30F0u) [[unlikely]] return; }
L_001E30F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E310C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E310Cu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 80u, depth + 1u); else { c.pc = 0x00184FD0u; return; } if (c.pc != 0x001E310Cu) [[unlikely]] return; }
L_001E310C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E3120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 3u);  if (t) { goto L_001E31DC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001E31A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E3158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001E32A0; } }
L_001E3158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3160u);  if (depth < kMaxDepth) unit_0021(c, 86u, depth + 1u); else { c.pc = 0x00185060u; return; } if (c.pc != 0x001E3160u) [[unlikely]] return; }
L_001E3160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E329C; } }
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E3188; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E329C; } }
L_001E3188:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E329C; } }
L_001E31A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31B8u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001E31B8u) [[unlikely]] return; }
L_001E31B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E31E0; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001E31DCu) [[unlikely]] return; }
L_001E31DC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001E31E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31E8u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001E31E8u) [[unlikely]] return; }
L_001E31E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E329C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3224; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E321Cu); st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001E321Cu) [[unlikely]] return; }
L_001E321C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001E3254; } }
L_001E3224:
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3250; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001E3250:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001E3254:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3284u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001E3284u) [[unlikely]] return; }
L_001E3284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E328Cu);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x001E328Cu) [[unlikely]] return; }
L_001E328C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3294u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x001E3294u) [[unlikely]] return; }
L_001E3294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E329Cu);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001E329Cu) [[unlikely]] return; }
L_001E329C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E32A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E32B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C510u | kUnwind; return; } [[clang::musttail]] return unit_0017(c, 39u, depth); }
L_001E32C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32E8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E32E8u) [[unlikely]] return; }
L_001E32E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3348; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 13152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 14096u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 22;
L_001E3348:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E3360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E3380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], c.r[4].w[0] + 320u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[25], c.r[15].w[0] + 4432u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], c.r[3].w[0] + 4432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[3].w[0] + 4432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[3].w[0] + 4432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[3].w[0] + 4432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[11], c.r[9], c.r[0]);
    mmi::paddub(c.r[12], c.r[9], c.r[0]);
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[14], c.r[9], c.r[0]);  if (t) { goto L_001E34D0; } }
L_001E33E0:
    st32((c.r[11].w[0]), 0u);
    st32((c.r[11].w[0] + 4u), 0u);
    st16((c.r[12].w[0] + 66u), static_cast<std::uint16_t>(0u));
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[15], c.r[9].w[0] + c.r[24].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[10].d[0] << 56;
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[8].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.f[0] = ld32((c.r[24].w[0]));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    st32((c.r[11].w[0] + 24u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[7].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.f[0] = ld32((c.r[24].w[0] + 4u));
    st32((c.r[11].w[0] + 28u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[11], c.r[11].w[0] + 8u);
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[6].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.f[0] = ld32((c.r[24].w[0] + 8u));
    st32((c.r[14].w[0] + 48u), c.f[0]);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[14], c.r[14].w[0] + 4u);
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[5].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[24].w[0] + 12u)));
    st16((c.r[12].w[0] + 60u), static_cast<std::uint16_t>(c.r[24].w[0]));
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[3].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0] + 14u)));
    st8((c.r[15].w[0] + 72u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[24], c.r[31].w[0] << 1);
    set32(c.r[24], c.r[24].w[0] + c.r[31].w[0]);
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[24], c.r[25].w[0] + c.r[24].w[0]);
    set32(c.r[24], c.r[13].w[0] + c.r[24].w[0]);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[24].w[0] + 15u)));
    set32(c.r[13], c.r[13].w[0] + 16u);
    st8((c.r[15].w[0] + 75u), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.budget -= 60;
L_001E34D0:
    c.r[24].d[0] = c.r[10].d[0] << 56;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 56);
    c.r[15].d[0] = c.r[24].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E33E0u | kUnwind; return; } goto L_001E33E0; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E34F0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBE630000u);
    c.r[9].d[0] = c.r[9].d[0] | 36409ull;
    c.f[5] = c.r[9].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3A420000u);
    c.r[9].d[0] = c.r[9].d[0] | 11844ull;
    c.f[4] = c.r[9].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3B720000u);
    c.r[9].d[0] = c.r[9].d[0] | 47574ull;
    c.f[3] = c.r[9].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[9].d[0] = c.r[9].d[0] | 52429ull;
    c.f[2] = c.r[9].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBC880000u);
    c.r[9].d[0] = c.r[9].d[0] | 34953ull;
    c.f[1] = c.r[9].w[0];
    set32(c.r[3], c.r[16].w[0] + 320u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F120000u);
    c.r[9].d[0] = c.r[9].d[0] | 18725ull;
    set32(c.r[2], 0u + 1u);
    c.f[6] = c.r[9].w[0];
    set32(c.r[11], 0u + 40u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    mmi::paddub(c.r[7], c.r[3], c.r[0]);
    mmi::paddub(c.r[8], c.r[3], c.r[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001E3680; } }
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_001E3574:
    set32(c.r[12], c.r[9].w[0] + 72u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001E35D0; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001E35A0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_001E3668; } }
L_001E35A0:
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 60u)));
    set32(c.r[9], c.r[9].w[0] - 1u);
    st16((c.r[6].w[0] + 60u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 10;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001E366C; }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E35D0:
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 66u)));
    c.r[1].d[0] = c.r[9].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E3614; } }
    c.f[0] = ld32((c.r[8].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 48u), c.f[0]);  if (t) { goto L_001E3620; } }
L_001E3614:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[11].d[0];  if (t) { goto L_001E3620; } }
    st32((c.r[8].w[0] + 48u), c.r[10].w[0]);
    c.budget -= 1;
L_001E3620:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 66u)));
    c.r[1].d[0] = c.r[9].sd[0] < 211ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3640; } }
    c.f[0] = ld32((c.r[8].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[8].w[0] + 48u), c.f[0]);
    c.budget -= 4;
L_001E3640:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 66u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st16((c.r[6].w[0] + 66u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[1].d[0] = c.r[9].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3668; } }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001E3668:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001E366C:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_001E3680:
    c.r[12].d[0] = c.r[4].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[9].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E3574u | kUnwind; return; } goto L_001E3574; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E36B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001E36B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36BCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E36BCu) [[unlikely]] return; }
L_001E36BC:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36CCu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E36CCu) [[unlikely]] return; }
L_001E36CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36D4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E36D4u) [[unlikely]] return; }
L_001E36D4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E36F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E3700:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001E3710:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[20].w[0] + 320u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3748u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001E3748u) [[unlikely]] return; }
L_001E3748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[6], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 4336u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);  if (t) { goto L_001E38B8; } }
    set32(c.r[8], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001E37B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_001E38A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 4608u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 75u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[2].w[0] + 4576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 4544u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 75u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 75u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3844u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E3844u) [[unlikely]] return; }
L_001E3844:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[3].w[0] + 4336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E389Cu); st32((c.r[29].w[0] + 108u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x001E389Cu) [[unlikely]] return; }
L_001E389C:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001E38A4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_001E38B8:
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E37B8u | kUnwind; return; } goto L_001E37B8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E38F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E391Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E391Cu) [[unlikely]] return; }
L_001E391C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3958; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 15104u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 13;
L_001E3958:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E39A0u) [[unlikely]] return; }
L_001E39A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E39F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 15104u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001E39E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 50u);  if (t) { goto L_001E39EC; } }
L_001E39E8:
    set32(c.r[17], c.r[17].w[0] + 25u);
    c.budget -= 1;
L_001E39EC:
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 1;
L_001E39F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E3A10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A30u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E3A30u) [[unlikely]] return; }
L_001E3A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[2], c.r[29].w[0] + 124u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A50u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001E3A50u) [[unlikely]] return; }
L_001E3A50:
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15680u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10836u)));
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 15712u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AE4u); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x001E3AE4u) [[unlikely]] return; }
L_001E3AE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E3B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E3B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E3B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 600u);
    set32(c.r[3], 0u - 16384u);
    set32(c.r[2], 0u - 12288u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C04u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E3C04u) [[unlikely]] return; }
L_001E3C04:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 14u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C18u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E3C18u) [[unlikely]] return; }
L_001E3C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 323u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E3C20u) [[unlikely]] return; }
L_001E3C20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E3C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E3C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C6Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E3C6Cu) [[unlikely]] return; }
L_001E3C6C:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3D08; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E3D08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3CE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 7;
L_001E3CE0:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E3D08; } }
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_001E3D08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3D20; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001E3D44; } }
L_001E3D20:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001E3D44; } }
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 2;
L_001E3D44:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E3D80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3D80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001E3D80:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D98u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001E3D98u) [[unlikely]] return; }
L_001E3D98:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DB4u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E3DB4u) [[unlikely]] return; }
L_001E3DB4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E3DC0u) [[unlikely]] return; }
L_001E3DC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E3DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DFCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E3DFCu) [[unlikely]] return; }
L_001E3DFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26488u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3E24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_001E3EA4; } }
L_001E3E24:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E3Cu); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001E3E3Cu) [[unlikely]] return; }
L_001E3E3C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E54u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E3E54u) [[unlikely]] return; }
L_001E3E54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF60000u);
    c.r[4].d[0] = c.r[4].d[0] | 26214ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 26214ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 26214ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E74u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E3E74u) [[unlikely]] return; }
L_001E3E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E7Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011D1F0u; return; } if (c.pc != 0x001E3E7Cu) [[unlikely]] return; }
L_001E3E7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E90u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001E3E90u) [[unlikely]] return; }
L_001E3E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EA0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E3EA0u) [[unlikely]] return; }
L_001E3EA0:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_001E3EA4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EB4u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E3EB4u) [[unlikely]] return; }
L_001E3EB4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E3EC0u) [[unlikely]] return; }
L_001E3EC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E3EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EFCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E3EFCu) [[unlikely]] return; }
L_001E3EFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3F20; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_001E3F20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3F78; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F790000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F74u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E3F74u) [[unlikely]] return; }
L_001E3F74:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 1;
L_001E3F78:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001E3F94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
L_001E3F94:
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FA0u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E3FA0u) [[unlikely]] return; }
L_001E3FA0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E3FACu) [[unlikely]] return; }
L_001E3FAC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E3FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { [[clang::musttail]] return unit_0039(c, 1u, depth); } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0039(c, 1u, depth);
}

}
