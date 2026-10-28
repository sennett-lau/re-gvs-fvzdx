#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0032[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0,
    0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0,
    155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0032(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C8000;
    case 2u: goto L_001C8004;
    case 3u: goto L_001C8010;
    case 4u: goto L_001C8030;
    case 5u: goto L_001C8060;
    case 6u: goto L_001C808C;
    case 7u: goto L_001C8098;
    case 8u: goto L_001C80A4;
    case 9u: goto L_001C80C0;
    case 10u: goto L_001C80CC;
    case 11u: goto L_001C8100;
    case 12u: goto L_001C8130;
    case 13u: goto L_001C8140;
    case 14u: goto L_001C8150;
    case 15u: goto L_001C8160;
    case 16u: goto L_001C8170;
    case 17u: goto L_001C8180;
    case 18u: goto L_001C8190;
    case 19u: goto L_001C81A0;
    case 20u: goto L_001C81B0;
    case 21u: goto L_001C81C0;
    case 22u: goto L_001C81D0;
    case 23u: goto L_001C81E0;
    case 24u: goto L_001C81F0;
    case 25u: goto L_001C8220;
    case 26u: goto L_001C8268;
    case 27u: goto L_001C8298;
    case 28u: goto L_001C82C8;
    case 29u: goto L_001C82E4;
    case 30u: goto L_001C8310;
    case 31u: goto L_001C8358;
    case 32u: goto L_001C8384;
    case 33u: goto L_001C83B0;
    case 34u: goto L_001C83CC;
    case 35u: goto L_001C83FC;
    case 36u: goto L_001C8444;
    case 37u: goto L_001C8474;
    case 38u: goto L_001C84A4;
    case 39u: goto L_001C84C0;
    case 40u: goto L_001C84EC;
    case 41u: goto L_001C8530;
    case 42u: goto L_001C855C;
    case 43u: goto L_001C8588;
    case 44u: goto L_001C85A4;
    case 45u: goto L_001C85D4;
    case 46u: goto L_001C8610;
    case 47u: goto L_001C8718;
    case 48u: goto L_001C8724;
    case 49u: goto L_001C8730;
    case 50u: goto L_001C873C;
    case 51u: goto L_001C8754;
    case 52u: goto L_001C8760;
    case 53u: goto L_001C876C;
    case 54u: goto L_001C8778;
    case 55u: goto L_001C8784;
    case 56u: goto L_001C8790;
    case 57u: goto L_001C879C;
    case 58u: goto L_001C87B0;
    case 59u: goto L_001C87BC;
    case 60u: goto L_001C87C8;
    case 61u: goto L_001C87E0;
    case 62u: goto L_001C889C;
    case 63u: goto L_001C88D8;
    case 64u: goto L_001C88E8;
    case 65u: goto L_001C88F8;
    case 66u: goto L_001C8908;
    case 67u: goto L_001C8918;
    case 68u: goto L_001C8928;
    case 69u: goto L_001C8938;
    case 70u: goto L_001C8948;
    case 71u: goto L_001C8958;
    case 72u: goto L_001C8980;
    case 73u: goto L_001C89E8;
    case 74u: goto L_001C8A00;
    case 75u: goto L_001C8A3C;
    case 76u: goto L_001C8A48;
    case 77u: goto L_001C8A60;
    case 78u: goto L_001C8B90;
    case 79u: goto L_001C8BA0;
    case 80u: goto L_001C8BC8;
    case 81u: goto L_001C8BD4;
    case 82u: goto L_001C8BE4;
    case 83u: goto L_001C8BF0;
    case 84u: goto L_001C8C10;
    case 85u: goto L_001C8C34;
    case 86u: goto L_001C8C40;
    case 87u: goto L_001C8C4C;
    case 88u: goto L_001C8C74;
    case 89u: goto L_001C8CB0;
    case 90u: goto L_001C8CC4;
    case 91u: goto L_001C8CCC;
    case 92u: goto L_001C8CF8;
    case 93u: goto L_001C8D3C;
    case 94u: goto L_001C8D50;
    case 95u: goto L_001C8D64;
    case 96u: goto L_001C8D90;
    case 97u: goto L_001C8D9C;
    case 98u: goto L_001C8DA4;
    case 99u: goto L_001C8DAC;
    case 100u: goto L_001C8DB4;
    case 101u: goto L_001C8DC0;
    case 102u: goto L_001C8DE0;
    case 103u: goto L_001C8E08;
    case 104u: goto L_001C8E20;
    case 105u: goto L_001C8E48;
    case 106u: goto L_001C8E80;
    case 107u: goto L_001C8EA0;
    case 108u: goto L_001C8EC4;
    case 109u: goto L_001C8EE0;
    case 110u: goto L_001C8F00;
    case 111u: goto L_001C8F28;
    case 112u: goto L_001C8F40;
    case 113u: goto L_001C8F60;
    case 114u: goto L_001C8F88;
    case 115u: goto L_001C8F90;
    case 116u: goto L_001C8FE0;
    case 117u: goto L_001C9038;
    case 118u: goto L_001C9044;
    case 119u: goto L_001C9050;
    case 120u: goto L_001C9074;
    case 121u: goto L_001C90A0;
    case 122u: goto L_001C90D8;
    case 123u: goto L_001C90E8;
    case 124u: goto L_001C914C;
    case 125u: goto L_001C9168;
    case 126u: goto L_001C9170;
    case 127u: goto L_001C9188;
    case 128u: goto L_001C91E0;
    case 129u: goto L_001C9230;
    case 130u: goto L_001C9260;
    case 131u: goto L_001C92F4;
    case 132u: goto L_001C931C;
    case 133u: goto L_001C9360;
    case 134u: goto L_001C93B4;
    case 135u: goto L_001C93D4;
    case 136u: goto L_001C93EC;
    case 137u: goto L_001C9404;
    case 138u: goto L_001C9490;
    case 139u: goto L_001C9508;
    case 140u: goto L_001C9514;
    case 141u: goto L_001C95DC;
    case 142u: goto L_001C9600;
    case 143u: goto L_001C962C;
    case 144u: goto L_001C9634;
    case 145u: goto L_001C963C;
    case 146u: goto L_001C9650;
    case 147u: goto L_001C9670;
    case 148u: goto L_001C9680;
    case 149u: goto L_001C96B0;
    case 150u: goto L_001C96D8;
    case 151u: goto L_001C96E0;
    case 152u: goto L_001C96E8;
    case 153u: goto L_001C96F0;
    case 154u: goto L_001C96F8;
    case 155u: goto L_001C9700;
    case 156u: goto L_001C9708;
    case 157u: goto L_001C9724;
    case 158u: goto L_001C9734;
    case 159u: goto L_001C9740;
    case 160u: goto L_001C9764;
    case 161u: goto L_001C9774;
    case 162u: goto L_001C9780;
    case 163u: goto L_001C97F8;
    case 164u: goto L_001C9870;
    case 165u: goto L_001C9884;
    case 166u: goto L_001C98A0;
    case 167u: goto L_001C98B4;
    case 168u: goto L_001C98BC;
    case 169u: goto L_001C98C4;
    case 170u: goto L_001C98DC;
    case 171u: goto L_001C98EC;
    case 172u: goto L_001C98F8;
    case 173u: goto L_001C9900;
    case 174u: goto L_001C9910;
    case 175u: goto L_001C9928;
    case 176u: goto L_001C9960;
    case 177u: goto L_001C9988;
    case 178u: goto L_001C9990;
    case 179u: goto L_001C9998;
    case 180u: goto L_001C99B0;
    case 181u: goto L_001C99D4;
    case 182u: goto L_001C9A34;
    case 183u: goto L_001C9A7C;
    case 184u: goto L_001C9B1C;
    case 185u: goto L_001C9B7C;
    case 186u: goto L_001C9BB0;
    case 187u: goto L_001C9C98;
    case 188u: goto L_001C9CAC;
    case 189u: goto L_001C9CE0;
    case 190u: goto L_001C9CF0;
    case 191u: goto L_001C9D1C;
    case 192u: goto L_001C9D24;
    case 193u: goto L_001C9D2C;
    case 194u: goto L_001C9D40;
    case 195u: goto L_001C9D70;
    case 196u: goto L_001C9DB4;
    case 197u: goto L_001C9DD8;
    case 198u: goto L_001C9DF8;
    case 199u: goto L_001C9E00;
    case 200u: goto L_001C9E10;
    case 201u: goto L_001C9E20;
    case 202u: goto L_001C9E50;
    case 203u: goto L_001C9EB0;
    case 204u: goto L_001C9EE0;
    case 205u: goto L_001C9F00;
    case 206u: goto L_001C9F64;
    case 207u: goto L_001C9FB0;
    case 208u: goto L_001C9FBC;
    case 209u: goto L_001CA018;
    case 210u: goto L_001CA020;
    case 211u: goto L_001CA04C;
    case 212u: goto L_001CA054;
    case 213u: goto L_001CA084;
    case 214u: goto L_001CA090;
    case 215u: goto L_001CA0AC;
    case 216u: goto L_001CA100;
    case 217u: goto L_001CA108;
    case 218u: goto L_001CA138;
    case 219u: goto L_001CA144;
    case 220u: goto L_001CA164;
    case 221u: goto L_001CA184;
    case 222u: goto L_001CA1A0;
    case 223u: goto L_001CA210;
    case 224u: goto L_001CA240;
    case 225u: goto L_001CA260;
    case 226u: goto L_001CA280;
    case 227u: goto L_001CA2BC;
    case 228u: goto L_001CA2F0;
    case 229u: goto L_001CA340;
    case 230u: goto L_001CA3C4;
    case 231u: goto L_001CA43C;
    case 232u: goto L_001CA508;
    case 233u: goto L_001CA51C;
    case 234u: goto L_001CA57C;
    case 235u: goto L_001CA590;
    case 236u: goto L_001CA5F8;
    case 237u: goto L_001CA60C;
    case 238u: goto L_001CA630;
    case 239u: goto L_001CA6B0;
    case 240u: goto L_001CA70C;
    case 241u: goto L_001CA7AC;
    case 242u: goto L_001CA7B8;
    case 243u: goto L_001CA7DC;
    case 244u: goto L_001CA8E8;
    case 245u: goto L_001CA978;
    case 246u: goto L_001CA984;
    case 247u: goto L_001CA9CC;
    case 248u: goto L_001CA9F0;
    case 249u: goto L_001CA9FC;
    case 250u: goto L_001CAA08;
    case 251u: goto L_001CAA2C;
    case 252u: goto L_001CAA54;
    case 253u: goto L_001CAA68;
    case 254u: goto L_001CAA74;
    case 255u: goto L_001CAB5C;
    case 256u: goto L_001CAB70;
    case 257u: goto L_001CAC04;
    case 258u: goto L_001CAC10;
    case 259u: goto L_001CAC28;
    case 260u: goto L_001CAC5C;
    case 261u: goto L_001CAC68;
    case 262u: goto L_001CAC74;
    case 263u: goto L_001CACB0;
    case 264u: goto L_001CAD30;
    case 265u: goto L_001CAE40;
    case 266u: goto L_001CAEA0;
    case 267u: goto L_001CAF34;
    case 268u: goto L_001CAF50;
    case 269u: goto L_001CAFF0;
    case 270u: goto L_001CB028;
    case 271u: goto L_001CB040;
    case 272u: goto L_001CB06C;
    case 273u: goto L_001CB0D0;
    case 274u: goto L_001CB100;
    case 275u: goto L_001CB13C;
    case 276u: goto L_001CB144;
    case 277u: goto L_001CB14C;
    case 278u: goto L_001CB160;
    case 279u: goto L_001CB1A0;
    case 280u: goto L_001CB1A8;
    case 281u: goto L_001CB1C0;
    case 282u: goto L_001CB22C;
    case 283u: goto L_001CB29C;
    case 284u: goto L_001CB2E0;
    case 285u: goto L_001CB2E8;
    case 286u: goto L_001CB2F0;
    case 287u: goto L_001CB310;
    case 288u: goto L_001CB36C;
    case 289u: goto L_001CB378;
    case 290u: goto L_001CB3A8;
    case 291u: goto L_001CB3B0;
    case 292u: goto L_001CB3C0;
    case 293u: goto L_001CB3D0;
    case 294u: goto L_001CB3EC;
    case 295u: goto L_001CB3F4;
    case 296u: goto L_001CB3FC;
    case 297u: goto L_001CB404;
    case 298u: goto L_001CB420;
    case 299u: goto L_001CB430;
    case 300u: goto L_001CB440;
    case 301u: goto L_001CB470;
    case 302u: goto L_001CB4AC;
    case 303u: goto L_001CB4B4;
    case 304u: goto L_001CB4BC;
    case 305u: goto L_001CB4D0;
    case 306u: goto L_001CB510;
    case 307u: goto L_001CB518;
    case 308u: goto L_001CB530;
    case 309u: goto L_001CB59C;
    case 310u: goto L_001CB5E8;
    case 311u: goto L_001CB628;
    case 312u: goto L_001CB630;
    case 313u: goto L_001CB638;
    case 314u: goto L_001CB650;
    case 315u: goto L_001CB6AC;
    case 316u: goto L_001CB6B8;
    case 317u: goto L_001CB6D4;
    case 318u: goto L_001CB6DC;
    case 319u: goto L_001CB6F0;
    case 320u: goto L_001CB700;
    case 321u: goto L_001CB71C;
    case 322u: goto L_001CB724;
    case 323u: goto L_001CB72C;
    case 324u: goto L_001CB734;
    case 325u: goto L_001CB750;
    case 326u: goto L_001CB768;
    case 327u: goto L_001CB77C;
    case 328u: goto L_001CB7B0;
    case 329u: goto L_001CB7C0;
    case 330u: goto L_001CB7C8;
    case 331u: goto L_001CB7D0;
    case 332u: goto L_001CB7D8;
    case 333u: goto L_001CB7E0;
    case 334u: goto L_001CB7F0;
    case 335u: goto L_001CB800;
    case 336u: goto L_001CB834;
    case 337u: goto L_001CB8C0;
    case 338u: goto L_001CB8D4;
    case 339u: goto L_001CB93C;
    case 340u: goto L_001CB94C;
    case 341u: goto L_001CBA54;
    case 342u: goto L_001CBA8C;
    case 343u: goto L_001CBAB0;
    case 344u: goto L_001CBB18;
    case 345u: goto L_001CBB28;
    case 346u: goto L_001CBC28;
    case 347u: goto L_001CBC68;
    case 348u: goto L_001CBC70;
    case 349u: goto L_001CBCF0;
    case 350u: goto L_001CBD14;
    case 351u: goto L_001CBD4C;
    case 352u: goto L_001CBD54;
    case 353u: goto L_001CBDD0;
    case 354u: goto L_001CBE00;
    case 355u: goto L_001CBE10;
    case 356u: goto L_001CBE40;
    case 357u: goto L_001CBE68;
    case 358u: goto L_001CBEBC;
    case 359u: goto L_001CBF08;
    case 360u: goto L_001CBF30;
    case 361u: goto L_001CBF68;
    case 362u: goto L_001CBFA0;
    default: bad_entry(c, 0x001C8000u); return;
    }
L_001C8000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C8004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull | 32768ull;  if (t) { goto L_001C8060; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C8010:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 268u);  if (t) { goto L_001C8064; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 384u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8030u); c.r[17].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0032(c, 11u, depth + 1u); else { c.pc = 0x001C8100u; return; } if (c.pc != 0x001C8030u) [[unlikely]] return; }
L_001C8030:
    set32(c.r[2], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8060; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[2].w[0] - 10976u);
    mmi::paddub(c.r[7], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8060u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 72u, depth + 1u); else { c.pc = 0x001C8980u; return; } if (c.pc != 0x001C8060u) [[unlikely]] return; }
L_001C8060:
    set32(c.r[2], c.r[29].w[0] + 268u);
    c.budget -= 1;
L_001C8064:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[17].d[0];
    set32(c.r[2], c.r[29].w[0] + 268u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_001C8080; } }
    set32(c.r[18], c.r[18].w[0] + 496u);
    c.budget -= 1;
L_001C8080:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C808Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C808Cu) [[unlikely]] return; }
L_001C808C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8098u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8098u) [[unlikely]] return; }
L_001C8098:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80A4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C80A4u) [[unlikely]] return; }
L_001C80A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C7B94u | kUnwind; return; } [[clang::musttail]] return unit_0031(c, 279u, depth); } }
    c.budget -= 1;
L_001C80C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001C80CCu) [[unlikely]] return; }
L_001C80CC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_001C8100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], c.r[2].w[0] - 12272u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8130u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8130u) [[unlikely]] return; }
L_001C8130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8140u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8140u) [[unlikely]] return; }
L_001C8140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8150u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8150u) [[unlikely]] return; }
L_001C8150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8160u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8160u) [[unlikely]] return; }
L_001C8160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8170u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8170u) [[unlikely]] return; }
L_001C8170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8180u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8180u) [[unlikely]] return; }
L_001C8180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8190u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8190u) [[unlikely]] return; }
L_001C8190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81A0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C81A0u) [[unlikely]] return; }
L_001C81A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81B0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C81B0u) [[unlikely]] return; }
L_001C81B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81C0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C81C0u) [[unlikely]] return; }
L_001C81C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81D0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C81D0u) [[unlikely]] return; }
L_001C81D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 12096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81E0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C81E0u) [[unlikely]] return; }
L_001C81E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[17], c.r[2].w[0] - 12272u);
    st32((c.r[28].w[0] - 25360u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
L_001C81F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12272u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1296u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8220u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 46u, depth + 1u); else { c.pc = 0x001C8610u; return; } if (c.pc != 0x001C8220u) [[unlikely]] return; }
L_001C8220:
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25360u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C81F0u | kUnwind; return; } goto L_001C81F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10976u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8268u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8268u) [[unlikely]] return; }
L_001C8268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10960u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8298u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8298u) [[unlikely]] return; }
L_001C8298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10944u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82C8u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C82C8u) [[unlikely]] return; }
L_001C82C8:
    set32(c.r[16], ld32((c.r[28].w[0] - 25360u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25360u), 0u);  if (t) { goto L_001C8330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[17], c.r[2].w[0] - 12272u);
    c.budget -= 2;
L_001C82E4:
    set32(c.r[5], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12272u);
    set32(c.r[4], c.r[17].w[0] + 1296u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8310u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 46u, depth + 1u); else { c.pc = 0x001C8610u; return; } if (c.pc != 0x001C8310u) [[unlikely]] return; }
L_001C8310:
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25360u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C82E4u | kUnwind; return; } goto L_001C82E4; } }
    c.budget -= 1;
L_001C8330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12272u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8358u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8358u) [[unlikely]] return; }
L_001C8358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12256u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8384u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8384u) [[unlikely]] return; }
L_001C8384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12240u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83B0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C83B0u) [[unlikely]] return; }
L_001C83B0:
    set32(c.r[17], ld32((c.r[28].w[0] - 25360u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25360u), 0u);  if (t) { goto L_001C8418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] - 12272u);
    c.budget -= 2;
L_001C83CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12272u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1296u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 46u, depth + 1u); else { c.pc = 0x001C8610u; return; } if (c.pc != 0x001C83FCu) [[unlikely]] return; }
L_001C83FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25360u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C83CCu | kUnwind; return; } goto L_001C83CC; } }
L_001C8418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10976u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8444u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8444u) [[unlikely]] return; }
L_001C8444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10960u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8474u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8474u) [[unlikely]] return; }
L_001C8474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 10944u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84A4u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C84A4u) [[unlikely]] return; }
L_001C84A4:
    set32(c.r[17], ld32((c.r[28].w[0] - 25360u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25360u), 0u);  if (t) { goto L_001C8508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] - 12272u);
    c.budget -= 2;
L_001C84C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 12272u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] + 1296u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84ECu); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 46u, depth + 1u); else { c.pc = 0x001C8610u; return; } if (c.pc != 0x001C84ECu) [[unlikely]] return; }
L_001C84EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25360u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C84C0u | kUnwind; return; } goto L_001C84C0; } }
L_001C8508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12272u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8530u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8530u) [[unlikely]] return; }
L_001C8530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12256u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C855Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C855Cu) [[unlikely]] return; }
L_001C855C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12272u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 12240u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8588u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8588u) [[unlikely]] return; }
L_001C8588:
    set32(c.r[17], ld32((c.r[28].w[0] - 25360u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25360u), 0u);  if (t) { goto L_001C85F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] - 12272u);
    c.budget -= 2;
L_001C85A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12272u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1296u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C85D4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 46u, depth + 1u); else { c.pc = 0x001C8610u; return; } if (c.pc != 0x001C85D4u) [[unlikely]] return; }
L_001C85D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 25360u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C85A4u | kUnwind; return; } goto L_001C85A4; } }
L_001C85F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C8610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001C867C; } }
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);  if (t) { goto L_001C865C; } }
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_001C865C:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C86C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (t) { goto L_001C86C8; } }
L_001C867C:
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);  if (t) { goto L_001C86A8; } }
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    set32(c.r[3], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_001C86A8:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C86C8; } }
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 1;
L_001C86C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_001C87A8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 48u);  if (t) { goto L_001C8748; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 48u);  if (t) { goto L_001C870C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_001C8700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C87CC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C8700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001C87D0; } }
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_001C870C:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8718u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 61u, depth + 1u); else { c.pc = 0x001C87E0u; return; } if (c.pc != 0x001C8718u) [[unlikely]] return; }
L_001C8718:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8724u) [[unlikely]] return; }
L_001C8724:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8730u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8730u) [[unlikely]] return; }
L_001C8730:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C873Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C873Cu) [[unlikely]] return; }
L_001C873C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C87CC; } }
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_001C8748:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8754u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 61u, depth + 1u); else { c.pc = 0x001C87E0u; return; } if (c.pc != 0x001C8754u) [[unlikely]] return; }
L_001C8754:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8760u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8760u) [[unlikely]] return; }
L_001C8760:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C876Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C876Cu) [[unlikely]] return; }
L_001C876C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8778u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8778u) [[unlikely]] return; }
L_001C8778:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8784u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8784u) [[unlikely]] return; }
L_001C8784:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8790u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8790u) [[unlikely]] return; }
L_001C8790:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C879Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C879Cu) [[unlikely]] return; }
L_001C879C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C87CC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C87A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87B0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C87B0u) [[unlikely]] return; }
L_001C87B0:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87BCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C87BCu) [[unlikely]] return; }
L_001C87BC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87C8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C87C8u) [[unlikely]] return; }
L_001C87C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C87CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C87D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C87E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull; mmi::paddub(c.r[19], c.r[8], c.r[0]);  if (t) { goto L_001C8820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[18].w[0] + 12u));  if (t) { goto L_001C882C; } }
L_001C8820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 3;
L_001C882C:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C889Cu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C889Cu) [[unlikely]] return; }
L_001C889C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 96u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::abs(c.vu0, 8u, 4u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88D8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C88D8u) [[unlikely]] return; }
L_001C88D8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88E8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C88E8u) [[unlikely]] return; }
L_001C88E8:
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88F8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x001C88F8u) [[unlikely]] return; }
L_001C88F8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8908u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C8908u) [[unlikely]] return; }
L_001C8908:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8918u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C8918u) [[unlikely]] return; }
L_001C8918:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8928u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C8928u) [[unlikely]] return; }
L_001C8928:
    set32(c.r[5], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8938u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102620u; return; } if (c.pc != 0x001C8938u) [[unlikely]] return; }
L_001C8938:
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8948u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102620u; return; } if (c.pc != 0x001C8948u) [[unlikely]] return; }
L_001C8948:
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8958u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102620u; return; } if (c.pc != 0x001C8958u) [[unlikely]] return; }
L_001C8958:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C8980:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25360u)));
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 6u);
    mmi::paddub(c.r[16], c.r[8], c.r[0]);
    mmi::paddub(c.r[17], c.r[9], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89E8u); mmi::paddub(c.r[23], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x00135080u; return; } if (c.pc != 0x001C89E8u) [[unlikely]] return; }
L_001C89E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25360u)));
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A00u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001350D0u; return; } if (c.pc != 0x001C8A00u) [[unlikely]] return; }
L_001C8A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    st64((c.r[18].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], 0u + 14u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[18].w[0] + 40u), c.r[2].d[0]);  if (t) { goto L_001C8A28; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 48u), c.r[2].d[0]);  if (t) { goto L_001C8A2C; } }
L_001C8A28:
    st64((c.r[18].w[0] + 48u), 0ull);
    c.budget -= 1;
L_001C8A2C:
    set32(c.r[2], 0u + 8u);
    st64((c.r[18].w[0] + 56u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A3Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001C8A3Cu) [[unlikely]] return; }
L_001C8A3C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A48u); mmi::paddub(c.r[22], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 120u, depth + 1u); else { c.pc = 0x00139C20u; return; } if (c.pc != 0x001C8A48u) [[unlikely]] return; }
L_001C8A48:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] << 32;  if (t) { goto L_001C8ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A60u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 92u, depth + 1u); else { c.pc = 0x001394D0u; return; } if (c.pc != 0x001C8A60u) [[unlikely]] return; }
L_001C8A60:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_001C8B48; } }
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.budget -= 1;
L_001C8ADC:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] << 26;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 30;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[8].d[0] = c.r[8].d[0] << 14;
    c.r[7].d[0] = c.r[7].d[0] << 20;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 64u), c.r[2].d[0]);
    c.budget -= 27;
L_001C8B48:
    set32(c.r[2], 0u + 6u);
    st64((c.r[18].w[0] + 72u), c.r[2].d[0]);
    set32(c.r[2], 0u + 68u);
    st64((c.r[18].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], 0u + 66u);
    st64((c.r[18].w[0] + 88u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25360u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[18].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[18], c.r[18].w[0] + 112u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C8C58; } }
L_001C8B90:
    set32(c.r[5], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BA0u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x001C8BA0u) [[unlikely]] return; }
L_001C8BA0:
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BC8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x001C8BC8u) [[unlikely]] return; }
L_001C8BC8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BD4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 223u, depth + 1u); else { c.pc = 0x001026E8u; return; } if (c.pc != 0x001C8BD4u) [[unlikely]] return; }
L_001C8BD4:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BE4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 276u, depth + 1u); else { c.pc = 0x00102F98u; return; } if (c.pc != 0x001C8BE4u) [[unlikely]] return; }
L_001C8BE4:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BF0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x001026F8u; return; } if (c.pc != 0x001C8BF0u) [[unlikely]] return; }
L_001C8BF0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.f[12] = c.f[20];  if (t) { goto L_001C8C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_001C8C1C; } }
    c.f[12] = c.f[20];
    c.budget -= 1;
L_001C8C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C10u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 221u, depth + 1u); else { c.pc = 0x001C7000u; return; } if (c.pc != 0x001C8C10u) [[unlikely]] return; }
L_001C8C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_001C8C28; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_001C8C1C:
    c.r[2].d[0] = c.r[2].d[0] | 4080ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
L_001C8C28:
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8C34u) [[unlikely]] return; }
L_001C8C34:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C40u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8C40u) [[unlikely]] return; }
L_001C8C40:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C4Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001C8C4Cu) [[unlikely]] return; }
L_001C8C4C:
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_001C8C58:
    set32(c.r[2], ld32((c.r[28].w[0] - 25360u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8B90u | kUnwind; return; } goto L_001C8B90; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C74u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x001C8C74u) [[unlikely]] return; }
L_001C8C74:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001C8CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x001C8CC4u) [[unlikely]] return; }
L_001C8CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CCCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x001C8CCCu) [[unlikely]] return; }
L_001C8CCC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001C8D04; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001C8CF8u) [[unlikely]] return; }
L_001C8CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001C8D40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001C8D04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C8D3C; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 304u);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D3Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001C8D3Cu) [[unlikely]] return; }
L_001C8D3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C8D40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C8D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001C8D64u) [[unlikely]] return; }
L_001C8D64:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 30432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 1192u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D90u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8D90u) [[unlikely]] return; }
L_001C8D90:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D9Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001C8D9Cu) [[unlikely]] return; }
L_001C8D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DA4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001C8DA4u) [[unlikely]] return; }
L_001C8DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DACu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001C8DACu) [[unlikely]] return; }
L_001C8DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DB4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001C8DB4u) [[unlikely]] return; }
L_001C8DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DC0u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001C8DC0u) [[unlikely]] return; }
L_001C8DC0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C8DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30272u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8E08u) [[unlikely]] return; }
L_001C8E08:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C8E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 133u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001C8EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 89u, depth + 1u); else { c.pc = 0x001C8CB0u; return; } if (c.pc != 0x001C8E48u) [[unlikely]] return; }
L_001C8E48:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 15488u);
    set32(c.r[6], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 58u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 59u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E80u); st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001C8E80u) [[unlikely]] return; }
L_001C8E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 15488u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8EA0u); set32(c.r[5], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C8EA0u) [[unlikely]] return; }
L_001C8EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[9].d[0] = c.r[16].d[0] << 56;
    set32(c.r[6], c.r[2].w[0] - 15488u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8EC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 90u, depth + 1u); else { c.pc = 0x00378CA0u; return; } if (c.pc != 0x001C8EC4u) [[unlikely]] return; }
L_001C8EC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8EE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0034(c, 130u, depth); }
L_001C8F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30264u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8F28u) [[unlikely]] return; }
L_001C8F28:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C8F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F60u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x00378F80u; return; } if (c.pc != 0x001C8F60u) [[unlikely]] return; }
L_001C8F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8F9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F88u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0017(c, 250u, depth + 1u); else { c.pc = 0x0015E540u; return; } if (c.pc != 0x001C8F88u) [[unlikely]] return; }
L_001C8F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F90u);  if (depth < kMaxDepth) unit_0017(c, 268u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001C8F90u) [[unlikely]] return; }
L_001C8F90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001C8F9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C8FC0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001C8FC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001C8FC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9044; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001C9044; } }
    set32(c.r[5], 0u + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9038u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001C9038u) [[unlikely]] return; }
L_001C9038:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9044u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001C9044u) [[unlikely]] return; }
L_001C9044:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C9050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9074u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001C9074u) [[unlikely]] return; }
L_001C9074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C9088; } }
L_001C9084:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C9088:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C90A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001C90D8u) [[unlikely]] return; }
L_001C90D8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90E8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001C90E8u) [[unlikely]] return; }
L_001C90E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001C910C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[2].w[0] - 1168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], 0u + 60u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 896u);  if (t) { goto L_001C9140; } }
L_001C910C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001C912C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[2].w[0] - 1168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], 0u + 29u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 896u);  if (t) { goto L_001C9140; } }
L_001C912C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[2].w[0] - 1052u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[18], 0u + 31u);
    set32(c.r[17], c.r[2].w[0] - 867u);
    c.budget -= 5;
L_001C9140:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C914Cu); mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C914Cu) [[unlikely]] return; }
L_001C914C:
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_001C915C; } }
    set32(c.r[20], 0u + 16u);
    c.budget -= 1;
L_001C915C:
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001C91B0; } }
L_001C9168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9170u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C9170u) [[unlikely]] return; }
L_001C9170:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001C91A0; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9188u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x001C9188u) [[unlikely]] return; }
L_001C9188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C919C; } }
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_001C91B0; } }
L_001C919C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001C91A0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9168u | kUnwind; return; } goto L_001C9168; } }
    c.budget -= 1;
L_001C91B0:
    mmi::paddub(c.r[2], c.r[21], c.r[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C91E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_001C9218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_001C9224; } }
L_001C9218:
    set32(c.r[2], c.r[19].w[0] + c.r[4].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.budget -= 3;
L_001C9224:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9230u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001C90A0u; return; } if (c.pc != 0x001C9230u) [[unlikely]] return; }
L_001C9230:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C9338; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[7], c.r[9].w[0] + 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_001C9260:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[19].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001C9328; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 87u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9324; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001C9324; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], c.r[19].w[0] + c.r[9].w[0]);  if (t) { goto L_001C92A4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001C9324; } }
    set32(c.r[2], c.r[19].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_001C92A4:
    st8((c.r[2].w[0] + 404u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = 0ull << 56;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_001C92C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[19], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 928u);  if (t) { goto L_001C92EC; } }
L_001C92C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001C92E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[19], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 928u);  if (t) { goto L_001C92EC; } }
L_001C92E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[19], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] - 916u);
    c.budget -= 3;
L_001C92EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92F4u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001C92F4u) [[unlikely]] return; }
L_001C92F4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C931Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x001C931Cu) [[unlikely]] return; }
L_001C931C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_001C933C; } }
L_001C9324:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001C9328:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9260u | kUnwind; return; } goto L_001C9260; } }
    c.budget -= 1;
L_001C9338:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_001C933C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C9360:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9458; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[23], c.r[3].w[0] - 1168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[17], c.r[3].w[0] - 896u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 6;
L_001C93B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[19].d[0] = 0ull << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[20], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001C9428; } }
L_001C93D4:
    set32(c.r[22], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 368u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93ECu); set32(c.r[16], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C93ECu) [[unlikely]] return; }
L_001C93EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (t) { goto L_001C9420; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[22].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9404u); set32(c.r[5], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x001C9404u) [[unlikely]] return; }
L_001C9404:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 4u);  goto L_001C9424; }
    set32(c.r[4], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 404u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_001C9420:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_001C9424:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001C9428:
    c.r[1].d[0] = c.r[19].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001C944C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 404u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C93D4u | kUnwind; return; } goto L_001C93D4; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C944C:
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C93B4u | kUnwind; return; } goto L_001C93B4; } }
L_001C9458:
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
L_001C9490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29809u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull & 255ull;
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 29792u);  if (t) { goto L_001C95B8; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3456u);
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[19], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
L_001C9508:
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9514u); set32(c.r[4], c.r[19].w[0] + 256u);  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC4E0u; return; } if (c.pc != 0x001C9514u) [[unlikely]] return; }
L_001C9514:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9538; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001C9538:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001C959C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C9598; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 260u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9598; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 260u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001C9598; } }
    st8((c.r[21].w[0] + 72u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_001C9598:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001C959C:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 20u);
    set32(c.r[19], c.r[19].w[0] + 32u);
    set32(c.r[20], c.r[20].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9508u | kUnwind; return; } goto L_001C9508; } }
    c.budget -= 1;
L_001C95B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 640u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C95DCu) [[unlikely]] return; }
L_001C95DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C9600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 608u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C962Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C962Cu) [[unlikely]] return; }
L_001C962C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9634u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001C9634u) [[unlikely]] return; }
L_001C9634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C963Cu);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001C963Cu) [[unlikely]] return; }
L_001C963C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C9650:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001C9670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9680u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001C9680u) [[unlikely]] return; }
L_001C9680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9698; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001C9698:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C96B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96D8u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001C96D8u) [[unlikely]] return; }
L_001C96D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001C96E0u) [[unlikely]] return; }
L_001C96E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96E8u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001C96E8u) [[unlikely]] return; }
L_001C96E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96F0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001C96F0u) [[unlikely]] return; }
L_001C96F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96F8u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138E20u; return; } if (c.pc != 0x001C96F8u) [[unlikely]] return; }
L_001C96F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9700u);  if (depth < kMaxDepth) unit_001F(c, 5u, depth + 1u); else { c.pc = 0x0017C070u; return; } if (c.pc != 0x001C9700u) [[unlikely]] return; }
L_001C9700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9708u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 89u, depth + 1u); else { c.pc = 0x001C8CB0u; return; } if (c.pc != 0x001C9708u) [[unlikely]] return; }
L_001C9708:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9724u); st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0032(c, 133u, depth + 1u); else { c.pc = 0x001C9360u; return; } if (c.pc != 0x001C9724u) [[unlikely]] return; }
L_001C9724:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001C9734:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9740u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001C9740u) [[unlikely]] return; }
L_001C9740:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9734u | kUnwind; return; } goto L_001C9734; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 46u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001C976C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9764u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 349u, depth + 1u); else { c.pc = 0x001CBCF0u; return; } if (c.pc != 0x001C9764u) [[unlikely]] return; }
L_001C9764:
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_001C976C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9774u);  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001CBFA0u; return; } if (c.pc != 0x001C9774u) [[unlikely]] return; }
L_001C9774:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_001C9780:
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_001C97A0; } }
    set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001C97A8; } }
    set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001C97A0:
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001C97A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9780u | kUnwind; return; } goto L_001C9780; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFA00000u);
    set32(c.r[6], c.r[28].w[0] - 30256u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 144u)));
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    set32(c.r[5], c.r[5].w[0] << 21);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 16;
L_001C97F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 148u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001C9824; }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 6;
L_001C9824:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C97F8u | kUnwind; return; } goto L_001C97F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 19u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C9858; } }
    set32(c.r[3], 0u + 99u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C9858:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C9870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9884u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001C9884u) [[unlikely]] return; }
L_001C9884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9900; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98A0u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x001C98A0u) [[unlikely]] return; }
L_001C98A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98B4u); c.r[4].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000D(c, 287u, depth + 1u); else { c.pc = 0x00137FA0u; return; } if (c.pc != 0x001C98B4u) [[unlikely]] return; }
L_001C98B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98BCu);  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x001C98BCu) [[unlikely]] return; }
L_001C98BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 240u, depth + 1u); else { c.pc = 0x0017F370u; return; } if (c.pc != 0x001C98C4u) [[unlikely]] return; }
L_001C98C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    set32(c.r[6], c.r[16].w[0] + 120u);
    set32(c.r[4], c.r[2].w[0] - 15152u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98DCu); st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x001C98DCu) [[unlikely]] return; }
L_001C98DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98ECu); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC990u; return; } if (c.pc != 0x001C98ECu) [[unlikely]] return; }
L_001C98EC:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001C98F8u) [[unlikely]] return; }
L_001C98F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9900u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001C9900u) [[unlikely]] return; }
L_001C9900:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9928u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001C9928u) [[unlikely]] return; }
L_001C9928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9950; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001C9950:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30248u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9988u) [[unlikely]] return; }
L_001C9988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9990u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001C9990u) [[unlikely]] return; }
L_001C9990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9998u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001C9998u) [[unlikely]] return; }
L_001C9998:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C99B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    c.budget -= 9;
L_001C99D4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 16u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[18].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001C9B84; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9A38; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[3].w[0] + 24u);  if (t) { goto L_001C9A28; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001C9A28:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A34u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9A34u) [[unlikely]] return; }
L_001C9A34:
    c.budget -= 1;
L_001C9A38:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9A80; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 24u);  if (t) { goto L_001C9A70; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001C9A70:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A7Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9A7Cu) [[unlikely]] return; }
L_001C9A7C:
    c.budget -= 1;
L_001C9A80:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9B80; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 260u));
    c.r[3].d[0] = c.r[4].d[0] & 32800ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_001C9B28; } }
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9AC0; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001C9AC0:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 32u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[19].w[0] + 28u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 29u));
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = c.r[3].d[0] & 144ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B1Cu); st8((c.r[2].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9B1Cu) [[unlikely]] return; }
L_001C9B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9B80; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_001C9B28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9B80; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 16u));
    c.r[5].d[0] = ~(c.r[18].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9B54; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C9B80; } }
L_001C9B54:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 28u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B7Cu); st8((c.r[19].w[0] + 22u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9B7Cu) [[unlikely]] return; }
L_001C9B7C:
    c.budget -= 1;
L_001C9B80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C9B84:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C99D4u | kUnwind; return; } goto L_001C99D4; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C9BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 12u);  if (t) { goto L_001C9BE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001C9CE0; } }
L_001C9BE0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001C9CD4; }
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 30u));
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 29u));
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 24u)));
    c.budget -= 32;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_001C9CB4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 46u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9CE0; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C98u); st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001CBFA0u; return; } if (c.pc != 0x001C9C98u) [[unlikely]] return; }
L_001C9C98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CACu); c.r[4].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000D(c, 287u, depth + 1u); else { c.pc = 0x00137FA0u; return; } if (c.pc != 0x001C9CACu) [[unlikely]] return; }
L_001C9CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001C9CE4; } }
L_001C9CB4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001C9CE0; } }
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001C9CE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C9CD4:
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CE0u); c.r[5].d[0] = ld8((c.r[16].w[0] + 28u));  if (depth < kMaxDepth) unit_0032(c, 271u, depth + 1u); else { c.pc = 0x001CB040u; return; } if (c.pc != 0x001C9CE0u) [[unlikely]] return; }
L_001C9CE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C9CE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 584u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9D1Cu) [[unlikely]] return; }
L_001C9D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D24u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001C9D24u) [[unlikely]] return; }
L_001C9D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D2Cu);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001C9D2Cu) [[unlikely]] return; }
L_001C9D2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C9D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 568u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C9D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001C9E00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 15488u);
    set32(c.r[6], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DB4u); st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001C9DB4u) [[unlikely]] return; }
L_001C9DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 15488u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DD8u); set32(c.r[5], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001C9DD8u) [[unlikely]] return; }
L_001C9DD8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[2].w[0] - 15488u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 90u, depth + 1u); else { c.pc = 0x00378CA0u; return; } if (c.pc != 0x001C9DF8u) [[unlikely]] return; }
L_001C9DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC990u; return; } if (c.pc != 0x001C9E00u) [[unlikely]] return; }
L_001C9E00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E20u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x00378F80u; return; } if (c.pc != 0x001C9E20u) [[unlikely]] return; }
L_001C9E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9E44; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_001C9E44:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C9E50:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9EA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_001C9EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9EB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 552u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C9EE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_001C9F00; }
L_001C9F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001C9F64; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 43u);  if (t) { goto L_001C9F5C; } }
    set32(c.r[2], 0u + 23u);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
L_001C9F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9F64u) [[unlikely]] return; }
L_001C9F64:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001C9FB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_001C9FA8; } }
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 43u);
    c.budget -= 2;
L_001C9FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9FB0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001C9FB0u) [[unlikely]] return; }
L_001C9FB0:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001C9FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9FBCu);  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001CBFA0u; return; } if (c.pc != 0x001C9FBCu) [[unlikely]] return; }
L_001C9FBC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 260u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_001CA0B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 29u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[19].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 23ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[19].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA04C; } }
    set32(c.r[17], 0u + 16u);
    c.budget -= 1;
L_001CA018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA020u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 354u, depth + 1u); else { c.pc = 0x001CBE00u; return; } if (c.pc != 0x001CA020u) [[unlikely]] return; }
L_001CA020:
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 57u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001CA044; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA018u | kUnwind; return; } goto L_001CA018; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001CA044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA04Cu);  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001CBFA0u; return; } if (c.pc != 0x001CA04Cu) [[unlikely]] return; }
L_001CA04C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.budget -= 2;
L_001CA054:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 45u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001CA094; }
    set32(c.r[2], 0u + 32u);
    st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA084u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CA084u) [[unlikely]] return; }
L_001CA084:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA090u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CA090u) [[unlikely]] return; }
L_001CA090:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001CA094:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA054u | kUnwind; return; } goto L_001CA054; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA0ACu) [[unlikely]] return; }
L_001CA0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 56u)));  if (t) { goto L_001CA168; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_001CA0B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA164; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 28u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 57u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA100u); st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 362u, depth + 1u); else { c.pc = 0x001CBFA0u; return; } if (c.pc != 0x001CA100u) [[unlikely]] return; }
L_001CA100:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[19], c.r[0]);
    c.budget -= 2;
L_001CA108:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 45u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001CA14C; }
    set32(c.r[2], 0u + 32u);
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA138u); st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CA138u) [[unlikely]] return; }
L_001CA138:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA144u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CA144u) [[unlikely]] return; }
L_001CA144:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001CA14C:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA108u | kUnwind; return; } goto L_001CA108; } }
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA164u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA164u) [[unlikely]] return; }
L_001CA164:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_001CA168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_001CA184; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 58u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[5], c.r[19].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA184u); c.r[4].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000D(c, 287u, depth + 1u); else { c.pc = 0x00137FA0u; return; } if (c.pc != 0x001CA184u) [[unlikely]] return; }
L_001CA184:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CA1A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA1FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_001CA1FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA210:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 536u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CA240:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 114u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { st16((c.r[4].w[0] + 112u), static_cast<std::uint16_t>(c.r[2].w[0]));  goto L_001CA260; }
L_001CA260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[18], c.r[0]);
    c.budget -= 8;
L_001CA280:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 16u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001CA2C4; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 512u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA2BCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA2BCu) [[unlikely]] return; }
L_001CA2BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001CA2C4:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA280u | kUnwind; return; } goto L_001CA280; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CA2F0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA32C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001CA32C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[18], c.r[5].w[0] << 5);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[19], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 264u));
    set32(c.r[17], c.r[3].w[0] + 264u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[5].w[0] + 1u);  if (t) { goto L_001CA398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CA3AC; } }
L_001CA398:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA3AC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CA3AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001CA3C4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA3C4u) [[unlikely]] return; }
L_001CA3C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA43C; } }
    set32(c.r[3], c.r[20].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1024ull;  if (t) { goto L_001CA400; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CA414; } }
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 1;
L_001CA400:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA414; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001CA414:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001CA43C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA43Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA43Cu) [[unlikely]] return; }
L_001CA43C:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[7], c.r[8].w[0] + 6u);  if (t) { goto L_001CA60C; } }
    set32(c.r[6], c.r[18].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 260u));
    c.r[4].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CA598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA524; } }
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 41u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_001CA514; } }
    set32(c.r[5], c.r[21].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[7].w[0] + c.r[21].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 96u)));
    st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA508u); st8((c.r[3].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA508u) [[unlikely]] return; }
L_001CA508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001CA610; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_001CA514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA51Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA51Cu) [[unlikely]] return; }
L_001CA51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA60C; } }
L_001CA524:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 41u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_001CA588; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 31u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 29u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st8((c.r[21].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = c.r[3].d[0] & 144ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA57Cu); st8((c.r[2].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA57Cu) [[unlikely]] return; }
L_001CA57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA60C; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_001CA588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA590u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA590u) [[unlikely]] return; }
L_001CA590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA60C; } }
L_001CA598:
    c.r[4].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_001CA60C; } }
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CA60C; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 41u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_001CA604; } }
    st32((c.r[8].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 30u));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[21].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5F8u); st8((c.r[21].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA5F8u) [[unlikely]] return; }
L_001CA5F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA60C; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_001CA604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA60Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA60Cu) [[unlikely]] return; }
L_001CA60C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001CA610:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CA630:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA6A4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_001CA6A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA6B0:
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
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    set32(c.r[23], c.r[5].w[0] << 5);
    set32(c.r[17], c.r[4].w[0] + c.r[23].w[0]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[19], c.r[16].w[0] << 1);
    set32(c.r[18], c.r[19].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    set32(c.r[20], c.r[18].w[0] + 80u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 23;
L_001CA70C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001CA724; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001CA730; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001CA724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 264u));  if (t) { goto L_001CA734; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001CA730:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 264u));
    c.budget -= 1;
L_001CA734:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA768; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA768:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001CA7A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CA7A0; } }
    st8((c.r[18].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001CA7A0:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001CA7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7ACu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CA7ACu) [[unlikely]] return; }
L_001CA7AC:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7B8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 7u, depth + 1u); else { c.pc = 0x001CC1C0u; return; } if (c.pc != 0x001CA7B8u) [[unlikely]] return; }
L_001CA7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA70Cu | kUnwind; return; } goto L_001CA70C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[22].w[0]);  if (t) { goto L_001CA7E0; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA7DCu) [[unlikely]] return; }
L_001CA7DC:
    set32(c.r[3], c.r[19].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_001CA7E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], c.r[3].w[0] + 81u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001CA804; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA808; } }
L_001CA804:
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001CA808:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001CA97C; } }
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    set32(c.r[3], c.r[2].w[0] + 64u);
    set32(c.r[2], c.r[23].w[0] + c.r[22].w[0]);
    set32(c.r[5], c.r[2].w[0] + 260u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 260u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA840; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001CA840:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA858; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA858:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[2].w[0] + 72u);
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[30].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA8D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001CA8AC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001CA8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CA8D0; } }
L_001CA8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA8D0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001CA8AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001CA8D0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001CA8CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA8D0; } }
L_001CA8CC:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001CA8D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);  if (t) { goto L_001CA8EC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8E8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA8E8u) [[unlikely]] return; }
L_001CA8E8:
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_001CA8EC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    set32(c.r[4], c.r[2].w[0] + 88u);
    set32(c.r[2], c.r[23].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16ull;  if (t) { goto L_001CA930; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001CA960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CA960; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 1;
L_001CA930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA960; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CA960; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001CA978; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA978u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CA978u) [[unlikely]] return; }
L_001CA978:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001CA97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA984u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 16u, depth + 1u); else { c.pc = 0x001CC320u; return; } if (c.pc != 0x001CA984u) [[unlikely]] return; }
L_001CA984:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001CA9A0; } }
    set32(c.r[3], c.r[19].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA9FC; } }
L_001CA9A0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001CAA00; } }
    set32(c.r[18], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9CCu); st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0033(c, 7u, depth + 1u); else { c.pc = 0x001CC1C0u; return; } if (c.pc != 0x001CA9CCu) [[unlikely]] return; }
L_001CA9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA9FC; } }
    set32(c.r[2], c.r[18].w[0] + c.r[22].w[0]);
    set32(c.r[3], 0u + 32u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9F0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CA9F0u) [[unlikely]] return; }
L_001CA9F0:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9FCu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CA9FCu) [[unlikely]] return; }
L_001CA9FC:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001CAA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA08u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 7u, depth + 1u); else { c.pc = 0x001CC1C0u; return; } if (c.pc != 0x001CAA08u) [[unlikely]] return; }
L_001CAA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAA2C; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA2Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CAA2Cu) [[unlikely]] return; }
L_001CAA2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001CAA6C; } }
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[30].d[0]; set32(c.r[5], 0u + 54u);  if (t) { goto L_001CAA60; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAA54u) [[unlikely]] return; }
L_001CAA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAA68; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_001CAA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAA68u) [[unlikely]] return; }
L_001CAA68:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001CAA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA74u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CAA74u) [[unlikely]] return; }
L_001CAA74:
    set32(c.r[3], c.r[23].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 260u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_001CAB7C; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 45u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_001CAB68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], c.r[21].w[0] << 2);  goto L_001CAAE4; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAAE0; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 735u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[21].w[0] << 2);  if (t) { goto L_001CAB20; } }
L_001CAAE0:
    set32(c.r[3], c.r[21].w[0] << 2);
    c.budget -= 1;
L_001CAAE4:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[5], 0u + 16u);
    st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 41u));
    c.r[2].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st8((c.r[22].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CAB50; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 1;
L_001CAB20:
    set32(c.r[6], c.r[22].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 42u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[22].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_001CAB50:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB5Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAB5Cu) [[unlikely]] return; }
L_001CAB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);  if (t) { goto L_001CAC78; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_001CAB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB70u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAB70u) [[unlikely]] return; }
L_001CAB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAC74; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_001CAB7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CAC74; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 41u));
    set32(c.r[18], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[18].d[0] | 0ull);
    set32(c.r[3], c.r[19].w[0] + c.r[22].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[22].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 65u)));
    set32(c.r[17], c.r[3].w[0] + 64u);
    set32(c.r[23], c.r[3].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 73u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 89u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC04u); st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CAC04u) [[unlikely]] return; }
L_001CAC04:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC10u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CAC10u) [[unlikely]] return; }
L_001CAC10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001CAC34; } }
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC28u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 8u, depth + 1u); else { c.pc = 0x001CC220u; return; } if (c.pc != 0x001CAC28u) [[unlikely]] return; }
L_001CAC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAC34; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 1;
L_001CAC34:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 45u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 53u);  if (t) { goto L_001CAC6C; } }
    set32(c.r[2], 0u + 32u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC5Cu); st8((c.r[23].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0033(c, 5u, depth + 1u); else { c.pc = 0x001CC090u; return; } if (c.pc != 0x001CAC5Cu) [[unlikely]] return; }
L_001CAC5C:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC68u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 6u, depth + 1u); else { c.pc = 0x001CC110u; return; } if (c.pc != 0x001CAC68u) [[unlikely]] return; }
L_001CAC68:
    set32(c.r[5], 0u + 53u);
    c.budget -= 1;
L_001CAC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC74u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAC74u) [[unlikely]] return; }
L_001CAC74:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001CAC78:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001CACB0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CAD24; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 43u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 42u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_001CAD24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 32u)));
    set32(c.r[16], c.r[3].w[0] + 32u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[17], c.r[5].w[0] << 5);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] - 735u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 80u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 264u));
    set32(c.r[9], c.r[3].w[0] + 264u);
    set32(c.r[8], c.r[6].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 96u)));
    c.r[4].d[0] = c.r[4].d[0] & 2048ull;
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] - 1u);  if (t) { goto L_001CADD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_001CADD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
L_001CADD0:
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CAE1C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CAE1C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001CAE1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);  if (t) { goto L_001CAE44; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAE40u) [[unlikely]] return; }
L_001CAE40:
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_001CAE44:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 260u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_001CAEAC; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 42u));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAEA0u); st8((c.r[19].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAEA0u) [[unlikely]] return; }
L_001CAEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001CAF38; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_001CAEAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CAF34; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], 0u + 16u);
    st16((c.r[2].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 43u));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[19].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 81u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAF24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CAF28; } }
L_001CAF24:
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001CAF28:
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF34u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CAF34u) [[unlikely]] return; }
L_001CAF34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001CAF38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CAF50:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[6].w[0] + 112u);  if (t) { goto L_001CAFE4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 16u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 43u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 42u));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 28;
L_001CAFE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 12u);  if (t) { goto L_001CB018; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001CB028; } }
L_001CB018:
    set32(c.r[2], 0u + 1u);
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB028u); c.r[5].d[0] = ld8((c.r[4].w[0] + 31u));  if (depth < kMaxDepth) unit_0032(c, 271u, depth + 1u); else { c.pc = 0x001CB040u; return; } if (c.pc != 0x001CB028u) [[unlikely]] return; }
L_001CB028:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB040:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[6], 0u + 3u);
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_001CB098; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001CB06C:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[3], c.r[6].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001CB08C; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_001CB08C:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB06Cu | kUnwind; return; } goto L_001CB06C; } }
L_001CB098:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  goto L_001CB0B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001CB0B4; } }
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 1;
L_001CB0B0:
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_001CB0B4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 29u));
    c.r[3].d[0] = c.r[3].d[0] & 247ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001CB0D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 480u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CB100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB13Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC990u; return; } if (c.pc != 0x001CB13Cu) [[unlikely]] return; }
L_001CB13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB144u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB144u) [[unlikely]] return; }
L_001CB144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB14Cu);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB14Cu) [[unlikely]] return; }
L_001CB14C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB198; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CB198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1A0u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB1A0u) [[unlikely]] return; }
L_001CB1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1A8u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB1A8u) [[unlikely]] return; }
L_001CB1A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 22u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001CB1F0; } }
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001CB1F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB214; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CB214:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CB22C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB22Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB22Cu) [[unlikely]] return; }
L_001CB22C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 260u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 64ull;  if (t) { goto L_001CB2A8; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 452u)));
    c.r[6].d[0] = c.r[6].d[0] & 144ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB29Cu); st8((c.r[3].w[0] + 452u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB29Cu) [[unlikely]] return; }
L_001CB29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB2E0; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 1;
L_001CB2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB2E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 247ull;
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2E0u); st8((c.r[2].w[0] + 452u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB2E0u) [[unlikely]] return; }
L_001CB2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2E8u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB2E8u) [[unlikely]] return; }
L_001CB2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2F0u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB2F0u) [[unlikely]] return; }
L_001CB2F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CB310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB334; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CB334:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB3A0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB36Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001CB36Cu) [[unlikely]] return; }
L_001CB36C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB378u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001CB378u) [[unlikely]] return; }
L_001CB378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB3A0; } }
L_001CB380:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[2].d[0] = c.r[2].d[0] & 247ull;
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 452u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001CB3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3A8u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB3A8u) [[unlikely]] return; }
L_001CB3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3B0u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB3B0u) [[unlikely]] return; }
L_001CB3B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001CB3D0u) [[unlikely]] return; }
L_001CB3D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB3F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3ECu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001CB3ECu) [[unlikely]] return; }
L_001CB3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3F4u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x001CB3F4u) [[unlikely]] return; }
L_001CB3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3FCu);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB3FCu) [[unlikely]] return; }
L_001CB3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB404u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB404u) [[unlikely]] return; }
L_001CB404:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB430u);  if (depth < kMaxDepth) unit_0032(c, 335u, depth + 1u); else { c.pc = 0x001CB800u; return; } if (c.pc != 0x001CB430u) [[unlikely]] return; }
L_001CB430:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB440:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CB470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0033(c, 36u, depth + 1u); else { c.pc = 0x001CC990u; return; } if (c.pc != 0x001CB4ACu) [[unlikely]] return; }
L_001CB4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4B4u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB4B4u) [[unlikely]] return; }
L_001CB4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4BCu);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB4BCu) [[unlikely]] return; }
L_001CB4BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB508; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CB508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB510u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB510u) [[unlikely]] return; }
L_001CB510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB518u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB518u) [[unlikely]] return; }
L_001CB518:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 22u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001CB560; } }
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001CB560:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB584; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CB584:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CB59C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB59Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB59Cu) [[unlikely]] return; }
L_001CB59C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 260u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB5F0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5E8u); st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB5E8u) [[unlikely]] return; }
L_001CB5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB628; } }
L_001CB5F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 260u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB628; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB628u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001CB628u) [[unlikely]] return; }
L_001CB628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB630u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB630u) [[unlikely]] return; }
L_001CB630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB638u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB638u) [[unlikely]] return; }
L_001CB638:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CB650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB674; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CB674:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB6CC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB6C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6ACu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001CB6ACu) [[unlikely]] return; }
L_001CB6AC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6B8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001CB6B8u) [[unlikely]] return; }
L_001CB6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB6CC; } }
L_001CB6C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001CB6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6D4u);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB6D4u) [[unlikely]] return; }
L_001CB6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6DCu);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB6DCu) [[unlikely]] return; }
L_001CB6DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB700u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001CB700u) [[unlikely]] return; }
L_001CB700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB724; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB71Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001CB71Cu) [[unlikely]] return; }
L_001CB71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB724u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x001CB724u) [[unlikely]] return; }
L_001CB724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB72Cu);  if (depth < kMaxDepth) unit_0032(c, 328u, depth + 1u); else { c.pc = 0x001CB7B0u; return; } if (c.pc != 0x001CB72Cu) [[unlikely]] return; }
L_001CB72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB734u);  if (depth < kMaxDepth) unit_0032(c, 334u, depth + 1u); else { c.pc = 0x001CB7F0u; return; } if (c.pc != 0x001CB734u) [[unlikely]] return; }
L_001CB734:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_001CB768:
    set32(c.r[4], ld32((c.r[17].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001CB784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB77Cu);  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x001CB77Cu) [[unlikely]] return; }
L_001CB77C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001CB784:
    c.r[2].d[0] = c.r[16].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB768u | kUnwind; return; } goto L_001CB768; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CB7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7C0u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001CB7C0u) [[unlikely]] return; }
L_001CB7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7C8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001CB7C8u) [[unlikely]] return; }
L_001CB7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7D0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001CB7D0u) [[unlikely]] return; }
L_001CB7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7D8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001CB7D8u) [[unlikely]] return; }
L_001CB7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7E0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001CB7E0u) [[unlikely]] return; }
L_001CB7E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CB7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 15904u);  [[clang::musttail]] return unit_0081(c, 121u, depth); }
L_001CB800:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 13;
L_001CB834:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB834u | kUnwind; return; } goto L_001CB834; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 413u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 412u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 87u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_001CB8C0:
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[18], c.r[2].w[0] << (c.r[21].w[0] & 31u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 5;
L_001CB8D4:
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[21].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001CBA64; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[5].w[0] + 80u);  if (t) { goto L_001CBA58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 88u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 380u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 64u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 260u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[5].w[0] + 64u);  if (t) { goto L_001CB954; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB93Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 356u, depth + 1u); else { c.pc = 0x001CBE40u; return; } if (c.pc != 0x001CB93Cu) [[unlikely]] return; }
L_001CB93C:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB94Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 360u, depth + 1u); else { c.pc = 0x001CBF30u; return; } if (c.pc != 0x001CB94Cu) [[unlikely]] return; }
L_001CB94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { goto L_001CB964; } }
L_001CB954:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 96u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 4;
L_001CB964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] - 736u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001CB9E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_001CB9E0; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CBA08; } }
L_001CB9E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001CBA08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_001CBA08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CBA08:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].d[0] = c.r[21].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 264u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA54u); c.r[17].d[0] = c.r[17].d[0] | c.r[18].d[0];  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x0030A510u; return; } if (c.pc != 0x001CBA54u) [[unlikely]] return; }
L_001CBA54:
    c.budget -= 1;
L_001CBA58:
    set32(c.r[3], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_001CBA64:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB8D4u | kUnwind; return; } goto L_001CB8D4; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB8C0u | kUnwind; return; } goto L_001CB8C0; } }
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 3;
L_001CBA8C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001CBC14; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001CBC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CBAB8; } }
L_001CBAB0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_001CBAB8:
    set32(c.r[20], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[2].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBAB0u | kUnwind; return; } goto L_001CBAB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 376u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 380u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st8((c.r[3].w[0] + 260u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 80u)));
    c.budget -= 15;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001CBB30; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 356u, depth + 1u); else { c.pc = 0x001CBE40u; return; } if (c.pc != 0x001CBB18u) [[unlikely]] return; }
L_001CBB18:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB28u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 360u, depth + 1u); else { c.pc = 0x001CBF30u; return; } if (c.pc != 0x001CBB28u) [[unlikely]] return; }
L_001CBB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[19].w[0] << 1);  if (t) { goto L_001CBB3C; } }
L_001CBB30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[19].w[0] << 1);
    c.budget -= 3;
L_001CBB3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] - 736u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[21].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 22;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001CBBBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_001CBBBC; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CBBE8; } }
L_001CBBBC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001CBBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 272u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 272u);  if (t) { goto L_001CBBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001CBBE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[17].d[0] = c.r[17].d[0] | c.r[20].d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_001CBC10:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001CBC14:
    c.r[2].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBA8Cu | kUnwind; return; } goto L_001CBA8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC28u);  if (depth < kMaxDepth) unit_0017(c, 250u, depth + 1u); else { c.pc = 0x0015E540u; return; } if (c.pc != 0x001CBC28u) [[unlikely]] return; }
L_001CBC28:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 87u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBC60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBC60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001CBC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC68u);  if (depth < kMaxDepth) unit_0017(c, 118u, depth + 1u); else { c.pc = 0x0015D080u; return; } if (c.pc != 0x001CBC68u) [[unlikely]] return; }
L_001CBC68:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 2;
L_001CBC70:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    st8((c.r[6].w[0] + 265u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    st8((c.r[6].w[0] + 273u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 280u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0] + 281u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBC70u | kUnwind; return; } goto L_001CBC70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 296u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 297u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CBCF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 23u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001CBD14u) [[unlikely]] return; }
L_001CBD14:
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[8].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001CBDC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 15124u)));
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[11], c.r[29].w[0] + 48u);
    set32(c.r[10], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], c.r[2].w[0] - 832u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 10;
L_001CBD4C:
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.budget -= 2;
L_001CBD54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[7].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_001CBD94; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001CBD90; } }
    set32(c.r[3], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBD90; } }
    c.r[9].d[0] = c.r[9].d[0] | 128ull;
    c.budget -= 2;
L_001CBD90:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001CBD94:
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBD54u | kUnwind; return; } goto L_001CBD54; } }
    c.r[2].d[0] = c.r[9].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001CBDBC; }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_001CBDBC:
    c.r[2].d[0] = c.r[8].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBD4Cu | kUnwind; return; } goto L_001CBD4C; } }
L_001CBDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDD0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001CBDD0u) [[unlikely]] return; }
L_001CBDD0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CBE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE10u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001CBE10u) [[unlikely]] return; }
L_001CBE10:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 23u);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CBE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE68u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001CBE68u) [[unlikely]] return; }
L_001CBE68:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 58u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 832u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_001CBF00; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 736u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
L_001CBEBC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));  if (t) { goto L_001CBED4; } }
    set32(c.r[6], c.r[6].w[0] - 11u);
    set32(c.r[2], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.budget -= 2;
L_001CBED4:
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001CBEF4; }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_001CBEF4:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBEBCu | kUnwind; return; } goto L_001CBEBC; } }
L_001CBF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF08u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001CBF08u) [[unlikely]] return; }
L_001CBF08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.hi.d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CBF30:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 735u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001CBF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF68u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001CBF68u) [[unlikely]] return; }
L_001CBF68:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001CBF8C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001CBF88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001CBF8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBFA0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { [[clang::musttail]] return unit_0033(c, 3u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 15124u)));
    c.r[3].d[0] = 0ull & 255ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[1].w[0] + 15124u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0033(c, 4u, depth); } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[9], 0u + 32u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0033(c, 1u, depth);
}

}
