#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0071[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0,
    0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0,
    0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
};

void unit_0071(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C4060;
    case 3u: goto L_002C406C;
    case 4u: goto L_002C40EC;
    case 5u: goto L_002C4178;
    case 6u: goto L_002C4180;
    case 7u: goto L_002C4208;
    case 8u: goto L_002C4298;
    case 9u: goto L_002C432C;
    case 10u: goto L_002C4334;
    case 11u: goto L_002C435C;
    case 12u: goto L_002C4398;
    case 13u: goto L_002C43A4;
    case 14u: goto L_002C43CC;
    case 15u: goto L_002C43F0;
    case 16u: goto L_002C43F4;
    case 17u: goto L_002C4410;
    case 18u: goto L_002C4510;
    case 19u: goto L_002C45E8;
    case 20u: goto L_002C45F0;
    case 21u: goto L_002C4674;
    case 22u: goto L_002C4694;
    case 23u: goto L_002C469C;
    case 24u: goto L_002C46A8;
    case 25u: goto L_002C46B0;
    case 26u: goto L_002C46E0;
    case 27u: goto L_002C46E8;
    case 28u: goto L_002C46FC;
    case 29u: goto L_002C4714;
    case 30u: goto L_002C471C;
    case 31u: goto L_002C4750;
    case 32u: goto L_002C4758;
    case 33u: goto L_002C4784;
    case 34u: goto L_002C478C;
    case 35u: goto L_002C47E8;
    case 36u: goto L_002C47F0;
    case 37u: goto L_002C4838;
    case 38u: goto L_002C4840;
    case 39u: goto L_002C486C;
    case 40u: goto L_002C4878;
    case 41u: goto L_002C4880;
    case 42u: goto L_002C48B0;
    case 43u: goto L_002C48B8;
    case 44u: goto L_002C48CC;
    case 45u: goto L_002C48E4;
    case 46u: goto L_002C48EC;
    case 47u: goto L_002C4920;
    case 48u: goto L_002C4928;
    case 49u: goto L_002C4954;
    case 50u: goto L_002C495C;
    case 51u: goto L_002C49C8;
    case 52u: goto L_002C4A3C;
    case 53u: goto L_002C4B08;
    case 54u: goto L_002C4B10;
    case 55u: goto L_002C4B40;
    case 56u: goto L_002C4B4C;
    case 57u: goto L_002C4B54;
    case 58u: goto L_002C4B84;
    case 59u: goto L_002C4B8C;
    case 60u: goto L_002C4BB4;
    case 61u: goto L_002C4BE8;
    case 62u: goto L_002C4BF0;
    case 63u: goto L_002C4C2C;
    case 64u: goto L_002C4C7C;
    case 65u: goto L_002C4C98;
    case 66u: goto L_002C4CB4;
    case 67u: goto L_002C4CE4;
    case 68u: goto L_002C4CFC;
    case 69u: goto L_002C4D34;
    case 70u: goto L_002C4D48;
    case 71u: goto L_002C4D70;
    case 72u: goto L_002C4D8C;
    case 73u: goto L_002C4D94;
    case 74u: goto L_002C4DA8;
    case 75u: goto L_002C4DC0;
    case 76u: goto L_002C4DC8;
    case 77u: goto L_002C4DD0;
    case 78u: goto L_002C4E0C;
    case 79u: goto L_002C4E74;
    case 80u: goto L_002C4E7C;
    case 81u: goto L_002C4E84;
    case 82u: goto L_002C4EB4;
    case 83u: goto L_002C4EBC;
    case 84u: goto L_002C4ED8;
    case 85u: goto L_002C4EE0;
    case 86u: goto L_002C4F20;
    case 87u: goto L_002C4F28;
    case 88u: goto L_002C4F3C;
    case 89u: goto L_002C4F60;
    case 90u: goto L_002C4F98;
    case 91u: goto L_002C4FA0;
    case 92u: goto L_002C4FB4;
    case 93u: goto L_002C4FF0;
    case 94u: goto L_002C4FF8;
    case 95u: goto L_002C5000;
    case 96u: goto L_002C5038;
    case 97u: goto L_002C5040;
    case 98u: goto L_002C5048;
    case 99u: goto L_002C507C;
    case 100u: goto L_002C5084;
    case 101u: goto L_002C508C;
    case 102u: goto L_002C50C8;
    case 103u: goto L_002C5140;
    case 104u: goto L_002C5164;
    case 105u: goto L_002C51B0;
    case 106u: goto L_002C5230;
    case 107u: goto L_002C52B0;
    case 108u: goto L_002C52E4;
    case 109u: goto L_002C53C0;
    case 110u: goto L_002C5890;
    case 111u: goto L_002C58A4;
    case 112u: goto L_002C58E0;
    case 113u: goto L_002C5920;
    case 114u: goto L_002C59A4;
    case 115u: goto L_002C59E8;
    case 116u: goto L_002C59F0;
    case 117u: goto L_002C59F8;
    case 118u: goto L_002C5A00;
    case 119u: goto L_002C5A74;
    case 120u: goto L_002C5A7C;
    case 121u: goto L_002C5A9C;
    case 122u: goto L_002C5AE0;
    case 123u: goto L_002C5B00;
    case 124u: goto L_002C5B50;
    case 125u: goto L_002C5B58;
    case 126u: goto L_002C5B60;
    case 127u: goto L_002C5BB0;
    case 128u: goto L_002C5BF8;
    case 129u: goto L_002C5C24;
    case 130u: goto L_002C5C2C;
    case 131u: goto L_002C5C34;
    case 132u: goto L_002C5C9C;
    case 133u: goto L_002C5CB0;
    case 134u: goto L_002C5CBC;
    case 135u: goto L_002C5D34;
    case 136u: goto L_002C5DB8;
    case 137u: goto L_002C5DC0;
    case 138u: goto L_002C5E1C;
    case 139u: goto L_002C5E24;
    case 140u: goto L_002C5E60;
    case 141u: goto L_002C5EB0;
    case 142u: goto L_002C5EE4;
    case 143u: goto L_002C5FC0;
    case 144u: goto L_002C6040;
    case 145u: goto L_002C6054;
    case 146u: goto L_002C6074;
    case 147u: goto L_002C607C;
    case 148u: goto L_002C6084;
    case 149u: goto L_002C608C;
    case 150u: goto L_002C6094;
    case 151u: goto L_002C60B0;
    case 152u: goto L_002C60C4;
    case 153u: goto L_002C60D4;
    case 154u: goto L_002C60E4;
    case 155u: goto L_002C60F4;
    case 156u: goto L_002C6104;
    case 157u: goto L_002C6114;
    case 158u: goto L_002C6130;
    case 159u: goto L_002C6144;
    case 160u: goto L_002C6154;
    case 161u: goto L_002C6164;
    case 162u: goto L_002C6174;
    case 163u: goto L_002C6184;
    case 164u: goto L_002C61A0;
    case 165u: goto L_002C61B4;
    case 166u: goto L_002C61C4;
    case 167u: goto L_002C61D4;
    case 168u: goto L_002C61E4;
    case 169u: goto L_002C6200;
    case 170u: goto L_002C6214;
    case 171u: goto L_002C6224;
    case 172u: goto L_002C6234;
    case 173u: goto L_002C6244;
    case 174u: goto L_002C6254;
    case 175u: goto L_002C6274;
    case 176u: goto L_002C6290;
    case 177u: goto L_002C62A4;
    case 178u: goto L_002C62B4;
    case 179u: goto L_002C62D0;
    case 180u: goto L_002C62E4;
    case 181u: goto L_002C62F4;
    case 182u: goto L_002C6304;
    case 183u: goto L_002C6314;
    case 184u: goto L_002C6330;
    case 185u: goto L_002C6344;
    case 186u: goto L_002C6354;
    case 187u: goto L_002C6364;
    case 188u: goto L_002C6374;
    case 189u: goto L_002C6390;
    case 190u: goto L_002C63A4;
    case 191u: goto L_002C63B4;
    case 192u: goto L_002C63D0;
    case 193u: goto L_002C63E4;
    case 194u: goto L_002C63F4;
    case 195u: goto L_002C6410;
    case 196u: goto L_002C6424;
    case 197u: goto L_002C6434;
    case 198u: goto L_002C6444;
    case 199u: goto L_002C6454;
    case 200u: goto L_002C6470;
    case 201u: goto L_002C6480;
    case 202u: goto L_002C6490;
    case 203u: goto L_002C64A4;
    case 204u: goto L_002C64B4;
    case 205u: goto L_002C64D0;
    case 206u: goto L_002C64E4;
    case 207u: goto L_002C64F4;
    case 208u: goto L_002C6510;
    case 209u: goto L_002C6524;
    case 210u: goto L_002C6534;
    case 211u: goto L_002C6550;
    case 212u: goto L_002C6560;
    case 213u: goto L_002C6570;
    case 214u: goto L_002C6584;
    case 215u: goto L_002C65A0;
    case 216u: goto L_002C65B4;
    case 217u: goto L_002C65D0;
    case 218u: goto L_002C65E4;
    case 219u: goto L_002C65F4;
    case 220u: goto L_002C6604;
    case 221u: goto L_002C6614;
    case 222u: goto L_002C6630;
    case 223u: goto L_002C6644;
    case 224u: goto L_002C6654;
    case 225u: goto L_002C6664;
    case 226u: goto L_002C6674;
    case 227u: goto L_002C6690;
    case 228u: goto L_002C66A0;
    case 229u: goto L_002C66B0;
    case 230u: goto L_002C66C4;
    case 231u: goto L_002C66D4;
    case 232u: goto L_002C66F0;
    case 233u: goto L_002C6704;
    case 234u: goto L_002C6714;
    case 235u: goto L_002C6724;
    case 236u: goto L_002C6740;
    case 237u: goto L_002C6750;
    case 238u: goto L_002C6760;
    case 239u: goto L_002C67AC;
    case 240u: goto L_002C67C0;
    case 241u: goto L_002C67EC;
    case 242u: goto L_002C6874;
    case 243u: goto L_002C688C;
    case 244u: goto L_002C68A0;
    case 245u: goto L_002C68BC;
    case 246u: goto L_002C68D0;
    case 247u: goto L_002C68F0;
    case 248u: goto L_002C6910;
    case 249u: goto L_002C697C;
    case 250u: goto L_002C69F4;
    case 251u: goto L_002C6A08;
    case 252u: goto L_002C6AA8;
    case 253u: goto L_002C6AD4;
    case 254u: goto L_002C6B14;
    case 255u: goto L_002C6B28;
    case 256u: goto L_002C6B6C;
    case 257u: goto L_002C6BC0;
    case 258u: goto L_002C6BCC;
    case 259u: goto L_002C6C10;
    case 260u: goto L_002C6C1C;
    case 261u: goto L_002C6C3C;
    case 262u: goto L_002C6CB4;
    case 263u: goto L_002C6CC8;
    case 264u: goto L_002C6D48;
    case 265u: goto L_002C6D74;
    case 266u: goto L_002C6DB4;
    case 267u: goto L_002C6DC8;
    case 268u: goto L_002C6E0C;
    case 269u: goto L_002C6E60;
    case 270u: goto L_002C6EA4;
    case 271u: goto L_002C6EC0;
    case 272u: goto L_002C7000;
    case 273u: goto L_002C70D0;
    case 274u: goto L_002C70FC;
    case 275u: goto L_002C71A0;
    case 276u: goto L_002C71F4;
    case 277u: goto L_002C72B0;
    case 278u: goto L_002C72BC;
    case 279u: goto L_002C72E0;
    case 280u: goto L_002C7308;
    case 281u: goto L_002C7330;
    case 282u: goto L_002C738C;
    case 283u: goto L_002C73B4;
    case 284u: goto L_002C73C0;
    case 285u: goto L_002C73F8;
    case 286u: goto L_002C7418;
    case 287u: goto L_002C7450;
    case 288u: goto L_002C74A0;
    case 289u: goto L_002C74B8;
    case 290u: goto L_002C74D0;
    case 291u: goto L_002C74E4;
    case 292u: goto L_002C74EC;
    case 293u: goto L_002C7510;
    case 294u: goto L_002C7540;
    case 295u: goto L_002C7548;
    case 296u: goto L_002C7574;
    case 297u: goto L_002C7600;
    case 298u: goto L_002C7628;
    case 299u: goto L_002C7668;
    case 300u: goto L_002C7694;
    case 301u: goto L_002C76C4;
    case 302u: goto L_002C76D0;
    case 303u: goto L_002C76E8;
    case 304u: goto L_002C7700;
    case 305u: goto L_002C7714;
    case 306u: goto L_002C7728;
    case 307u: goto L_002C7750;
    case 308u: goto L_002C7760;
    case 309u: goto L_002C777C;
    case 310u: goto L_002C7784;
    case 311u: goto L_002C77A8;
    case 312u: goto L_002C77C8;
    case 313u: goto L_002C77D4;
    case 314u: goto L_002C77EC;
    case 315u: goto L_002C77FC;
    case 316u: goto L_002C7858;
    case 317u: goto L_002C7888;
    case 318u: goto L_002C78A0;
    case 319u: goto L_002C78B4;
    case 320u: goto L_002C78C4;
    case 321u: goto L_002C78CC;
    case 322u: goto L_002C78F0;
    case 323u: goto L_002C790C;
    case 324u: goto L_002C7918;
    case 325u: goto L_002C7930;
    case 326u: goto L_002C7944;
    case 327u: goto L_002C7960;
    case 328u: goto L_002C797C;
    case 329u: goto L_002C7984;
    case 330u: goto L_002C79D0;
    case 331u: goto L_002C79E4;
    case 332u: goto L_002C7A30;
    case 333u: goto L_002C7A4C;
    case 334u: goto L_002C7A60;
    case 335u: goto L_002C7A98;
    case 336u: goto L_002C7AB8;
    case 337u: goto L_002C7AF0;
    case 338u: goto L_002C7B90;
    case 339u: goto L_002C7BA4;
    case 340u: goto L_002C7BBC;
    case 341u: goto L_002C7BE0;
    case 342u: goto L_002C7BF4;
    case 343u: goto L_002C7C08;
    case 344u: goto L_002C7C2C;
    case 345u: goto L_002C7C40;
    case 346u: goto L_002C7C54;
    case 347u: goto L_002C7C7C;
    case 348u: goto L_002C7C84;
    case 349u: goto L_002C7CA8;
    case 350u: goto L_002C7D74;
    case 351u: goto L_002C7D90;
    case 352u: goto L_002C7DA4;
    case 353u: goto L_002C7DB4;
    case 354u: goto L_002C7DCC;
    case 355u: goto L_002C7DF0;
    case 356u: goto L_002C7E0C;
    case 357u: goto L_002C7E2C;
    case 358u: goto L_002C7E40;
    case 359u: goto L_002C7E50;
    case 360u: goto L_002C7E64;
    case 361u: goto L_002C7E74;
    case 362u: goto L_002C7E94;
    case 363u: goto L_002C7EA8;
    case 364u: goto L_002C7EB8;
    case 365u: goto L_002C7ECC;
    case 366u: goto L_002C7ED8;
    case 367u: goto L_002C7EE0;
    case 368u: goto L_002C7F30;
    case 369u: goto L_002C7F4C;
    case 370u: goto L_002C7F60;
    case 371u: goto L_002C7F7C;
    case 372u: goto L_002C7FD4;
    case 373u: goto L_002C7FF0;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4068; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x449E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4068; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44AA0000u);
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4060u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C4060u) [[unlikely]] return; }
L_002C4060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C4068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_002C406C:
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);  if (t) { goto L_002C40F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44180000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C40F4; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C40F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A00000u);
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C40F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40ECu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C40ECu) [[unlikely]] return; }
L_002C40EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C40F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    c.budget -= 1;
L_002C40F8:
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C43F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44AB0000u);
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C43F0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C43F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x440F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C43F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4178u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C4178u) [[unlikely]] return; }
L_002C4178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C4180:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);  if (t) { goto L_002C4214; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4210; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4210; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4208u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C4208u) [[unlikely]] return; }
L_002C4208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C4210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);
    c.budget -= 1;
L_002C4214:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);  if (t) { goto L_002C42A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A70000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C42A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44020000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C42A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C42A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4298u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C4298u) [[unlikely]] return; }
L_002C4298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C42A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.budget -= 1;
L_002C42A4:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C43F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C43F0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44880000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C43F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C50000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C43F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C432Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0071(c, 17u, depth + 1u); else { c.pc = 0x002C4410u; return; } if (c.pc != 0x002C432Cu) [[unlikely]] return; }
L_002C432C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C43F0; } }
L_002C4334:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C435Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002C435Cu) [[unlikely]] return; }
L_002C435C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C43F0; } }
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4398u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C4398u) [[unlikely]] return; }
L_002C4398:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002C43A4u) [[unlikely]] return; }
L_002C43A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43CCu); st32((c.r[16].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002C43CCu) [[unlikely]] return; }
L_002C43CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 9;
L_002C43F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C43F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4410:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C442C; } }
    c.f[0] = c.f[12];
    c.f[12] = c.f[13];
    c.f[13] = c.f[0];
    c.budget -= 3;
L_002C442C:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[15]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4448; } }
    c.f[0] = c.f[14];
    c.f[14] = c.f[15];
    c.f[15] = c.f[0];
    c.budget -= 3;
L_002C4448:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[12]);
    c.f[2] = fp::sub(c.f[3], c.f[14]);
    c.f[1] = fp::sub(c.f[13], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[3] = fp::sub(c.f[15], c.f[3]);  if (t) { goto L_002C44BC; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C449C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_002C4508; } }
L_002C4494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_002C4508; } }
L_002C449C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C44B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[12]);  if (t) { goto L_002C4508; } }
L_002C44B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[15]);  if (t) { goto L_002C4508; } }
L_002C44BC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C44EC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C44E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_002C4508; } }
L_002C44E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[14]);  if (t) { goto L_002C4508; } }
L_002C44EC:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[13]);  if (t) { goto L_002C4508; } }
L_002C4504:
    st32((c.r[4].w[0] + 8u), c.f[15]);
    c.budget -= 1;
L_002C4508:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 891u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C5124; } }
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[3], 0u + 15u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C5108; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C5104; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C4E48; } }
    set32(c.r[6], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002C4C50; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C4ADC; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002C4ADC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C4980; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C47AC; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002C4648; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C45C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C5128; } }
L_002C45C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002C4610; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C45E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5124; } }
L_002C45E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C45E8u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C45E8u) [[unlikely]] return; }
L_002C45E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C45F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C45F0u) [[unlikely]] return; }
L_002C45F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4610:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4640; }
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4648:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[3].w[0] + 26736u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C4674:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4694u); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4694u) [[unlikely]] return; }
L_002C4694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5124; } }
L_002C469C:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C46A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46B0u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C46B0u) [[unlikely]] return; }
L_002C46B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C46D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C46D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C46E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46E8u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C46E8u) [[unlikely]] return; }
L_002C46E8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46FCu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 106u, depth + 1u); else { c.pc = 0x002C5230u; return; } if (c.pc != 0x002C46FCu) [[unlikely]] return; }
L_002C46FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C471Cu);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C471Cu) [[unlikely]] return; }
L_002C471C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4758u);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4758u) [[unlikely]] return; }
L_002C4758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C477C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C477C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4784u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4784u) [[unlikely]] return; }
L_002C4784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5124; } }
L_002C478C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C47A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C47A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C47AC:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1196u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1196u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[3].w[0] + 26704u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C47E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C47F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C47F0u) [[unlikely]] return; }
L_002C47F0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].d[0] = c.r[4].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1192u));
    c.f[0] = ld32((c.r[16].w[0] + 1196u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4840u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4840u) [[unlikely]] return; }
L_002C4840:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C486C:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4880u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4880u) [[unlikely]] return; }
L_002C4880:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C48A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C48A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C48B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48B8u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C48B8u) [[unlikely]] return; }
L_002C48B8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48CCu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 106u, depth + 1u); else { c.pc = 0x002C5230u; return; } if (c.pc != 0x002C48CCu) [[unlikely]] return; }
L_002C48CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C48E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48ECu);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C48ECu) [[unlikely]] return; }
L_002C48EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4928u);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4928u) [[unlikely]] return; }
L_002C4928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C494C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C494C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4954u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4954u) [[unlikely]] return; }
L_002C4954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5124; } }
L_002C495C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4978; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4980:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002C4AA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C4A80; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], c.r[16].w[0] + 32u);  goto L_002C4A34; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C49F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002C49C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5124; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002C49C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C49C8u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C49C8u) [[unlikely]] return; }
L_002C49C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C49F8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4A30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002C4A30:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002C4A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4A3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C4A3Cu) [[unlikely]] return; }
L_002C4A3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5124; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4AA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4AD4; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4ADC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[3].w[0] + 26672u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C4B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4B10u) [[unlikely]] return; }
L_002C4B10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4B40:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4B54u) [[unlikely]] return; }
L_002C4B54:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C4B74; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4B74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4B8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4B8Cu) [[unlikely]] return; }
L_002C4B8C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C4BAC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
L_002C4BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BB4u);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4BB4u) [[unlikely]] return; }
L_002C4BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 890u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C4BD8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C4BD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4BF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C4BF0u) [[unlikely]] return; }
L_002C4BF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4C2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4C48; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C4C7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4C98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4CB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 741u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002C4CDC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C5124; } }
L_002C4CE4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CFCu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x002C4CFCu) [[unlikely]] return; }
L_002C4CFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4D34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4D68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D48u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4D48u) [[unlikely]] return; }
L_002C4D48:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4D70:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D94u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4D94u) [[unlikely]] return; }
L_002C4D94:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DA8u); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4DA8u) [[unlikely]] return; }
L_002C4DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DC8u);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C4DC8u) [[unlikely]] return; }
L_002C4DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4DD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4DD0u) [[unlikely]] return; }
L_002C4DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4E0C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4E40; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4E48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5124; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C4E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4E7Cu) [[unlikely]] return; }
L_002C4E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4E84u) [[unlikely]] return; }
L_002C4E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4E98; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4EBCu);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4EBCu) [[unlikely]] return; }
L_002C4EBC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4EE0u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4EE0u) [[unlikely]] return; }
L_002C4EE0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C4EFC; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C4F18; } }
L_002C4EFC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C5124; } }
L_002C4F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F28u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4F28u) [[unlikely]] return; }
L_002C4F28:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F3Cu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4F3Cu) [[unlikely]] return; }
L_002C4F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);  goto L_002C4F54; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.budget -= 1;
L_002C4F54:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x002C4F60u) [[unlikely]] return; }
L_002C4F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FA0u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4FA0u) [[unlikely]] return; }
L_002C4FA0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FB4u); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C4FB4u) [[unlikely]] return; }
L_002C4FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4FC8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4FC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C4FE8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C4FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C4FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FF8u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C4FF8u) [[unlikely]] return; }
L_002C4FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5000u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C5000u) [[unlikely]] return; }
L_002C5000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5014; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C5014:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    set32(c.r[3], 0u + 90u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C5038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5040u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C5040u) [[unlikely]] return; }
L_002C5040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5048u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 105u, depth + 1u); else { c.pc = 0x002C51B0u; return; } if (c.pc != 0x002C5048u) [[unlikely]] return; }
L_002C5048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C505C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C505C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C5074; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 884u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C5074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C507C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5084u);  if (depth < kMaxDepth) unit_0071(c, 107u, depth + 1u); else { c.pc = 0x002C52B0u; return; } if (c.pc != 0x002C5084u) [[unlikely]] return; }
L_002C5084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C508Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 103u, depth + 1u); else { c.pc = 0x002C5140u; return; } if (c.pc != 0x002C508Cu) [[unlikely]] return; }
L_002C508C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5124; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C50C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 880u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C50FC; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C50FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 880u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5124; } }
L_002C5104:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002C5108:
    st8((c.r[16].w[0] + 891u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002C5124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C5128:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C519C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5164u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C5164u) [[unlikely]] return; }
L_002C5164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C519C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C519C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C51B0:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C521C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5218; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5218; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C521C; } }
L_002C5218:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002C521C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5230:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C52A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B70000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C529C; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C529C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C529C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C52A0; } }
L_002C529C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002C52A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C52B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52E4u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C52E4u) [[unlikely]] return; }
L_002C52E4:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C5318; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_002C532C; } }
L_002C5318:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5350; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_002C532C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_002C5354; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5350; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C5350:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_002C5354:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_002C537C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5378; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C53A4; } }
L_002C5378:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_002C537C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C53A4; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C53A4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C53A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C53C0:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[8], c.r[3].w[0] + 26144u);
    set32(c.r[7], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14288u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[9].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 31006u);
    set32(c.r[8], c.r[7].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[7], c.r[7].w[0] - 14286u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[10], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[7], c.r[7].w[0] - 31003u);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[9], c.r[7].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[7], c.r[7].w[0] - 14284u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[11], c.r[11].w[0] - 31005u);
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], c.r[6].w[0] - 14274u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], c.r[6].w[0] - 14282u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], c.r[6].w[0] - 14280u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 54;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_002C54E4; } }
    set32(c.r[11], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14278u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 332u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14276u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 332u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[11].w[0] + 332u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 334u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 334u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 334u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C552C; } }
L_002C54E4:
    set32(c.r[11], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14278u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 333u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14276u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 333u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[11].w[0] + 333u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 335u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 335u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 335u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_002C552C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + 6512u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.r[1].d[0] = c.r[7].sd[0] < 21ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002C5578; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], c.r[7].w[0] - 7232u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));  if (t) { goto L_002C5598; } }
L_002C5578:
    set32(c.r[10], c.r[7].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[8], c.r[7].w[0] - 7248u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 8;
L_002C5598:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[10].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = c.r[7].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[7], c.r[7].w[0] - 14304u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] + 6608u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[10].d[0] = c.r[6].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    set32(c.r[6], c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[4] = c.r[5].w[0];
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 41;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[29].w[0] + 8u);  if (t) { goto L_002C564C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_002C5668; } }
    set32(c.r[5], c.r[29].w[0] + 8u);
    c.budget -= 1;
L_002C564C:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44750000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002C5668:
    c.f[5] = ld32((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[2] = fp::sub(c.f[5], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002C56A4; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[29].w[0] + 8u);  if (t) { goto L_002C56B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002C56A4:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[6], c.r[29].w[0] + 8u);
    c.budget -= 3;
L_002C56B0:
    c.f[0] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[3] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    fpu_div(c, 6u, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002C56F8; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[4], c.f[5]);  if (t) { goto L_002C5704; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002C56F8:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[4], c.f[5]);
    c.budget -= 3;
L_002C5704:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[5].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 3u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_002C575C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_002C5794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_002C575C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B20000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_002C5794:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_002C57C0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C57C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_002C57C0:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[6] = c.r[3].w[0];
    c.budget -= 2;
L_002C57C8:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_002C5814; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_002C584C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_002C5814:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C584C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B20000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_002C584C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14272u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[29], c.r[29].w[0] + 16u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_002C5890:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[10], c.r[28].w[0] - 26520u);
    set32(c.r[11], c.r[3].w[0] - 14304u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 5;
L_002C58A4:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], c.r[5].w[0] + 29248u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[11], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 328u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 15;
L_002C58E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C58E0u | kUnwind; return; } goto L_002C58E0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C58A4u | kUnwind; return; } goto L_002C58A4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C5920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 12288ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C5944; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002C5944:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C595C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 1068u), c.r[3].w[0]);
    c.budget -= 2;
L_002C595C:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4000u);
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 888u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5E94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 26768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002C4000u < 16384u) { entry = entries_0071[(t - 0x002C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002C59A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C59C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C59D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C59C4:
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002C59D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59E8u); st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 229u, depth + 1u); else { c.pc = 0x001F3280u; return; } if (c.pc != 0x002C59E8u) [[unlikely]] return; }
L_002C59E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C5E98; } }
L_002C59F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C59F8u) [[unlikely]] return; }
L_002C59F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5A00u) [[unlikely]] return; }
L_002C5A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5A14; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5A14:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 4ull;  if (t) { goto L_002C5A40; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 1;
L_002C5A40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5E94; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5E94; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5A7Cu) [[unlikely]] return; }
L_002C5A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C5A94; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C5A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A9Cu);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5A9Cu) [[unlikely]] return; }
L_002C5A9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5AB4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5AB4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 8008u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AE0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0075(c, 273u, depth + 1u); else { c.pc = 0x002D7D90u; return; } if (c.pc != 0x002C5AE0u) [[unlikely]] return; }
L_002C5AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_002C5AF8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_002C5AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C5B00u) [[unlikely]] return; }
L_002C5B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C5B2C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5B2C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C5E94; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B50u); st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5B50u) [[unlikely]] return; }
L_002C5B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5E94; } }
L_002C5B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5B60u) [[unlikely]] return; }
L_002C5B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5B74; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5B74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5B8C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5B8C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5BB0u) [[unlikely]] return; }
L_002C5BB0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5E94; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 12u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5BD4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 741u));
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C5C00; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BF8u); st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5BF8u) [[unlikely]] return; }
L_002C5BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5E94; } }
L_002C5C00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5C24u) [[unlikely]] return; }
L_002C5C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5E94; } }
L_002C5C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5C34u) [[unlikely]] return; }
L_002C5C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5C48; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5C60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5C60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C5CA8; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5C88; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5C88:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C9Cu); st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5C9Cu) [[unlikely]] return; }
L_002C5C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C5E94; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C5CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5CB0:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C5CBCu) [[unlikely]] return; }
L_002C5CBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C5CF4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C5CF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5E94; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 888u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_002C5D2C; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
L_002C5D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5D34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C5DB0; }
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C5D84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4000u);  if (t) { goto L_002C5DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C5DA0; } }
L_002C5D84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5DA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8440u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5DA0; } }
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C5DA0:
    set32(c.r[3], 0u + 4000u);
    c.budget -= 1;
L_002C5DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C5DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5DC0u) [[unlikely]] return; }
L_002C5DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5DD4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5DD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5DF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002C5E94; } }
L_002C5DF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002C5E14; }
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 90u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002C5E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 143u, depth + 1u); else { c.pc = 0x002C5FC0u; return; } if (c.pc != 0x002C5E24u) [[unlikely]] return; }
L_002C5E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C5E38; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C5E94; } }
L_002C5E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C5E58; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002C5E94; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C5E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E60u);  if (depth < kMaxDepth) unit_0071(c, 141u, depth + 1u); else { c.pc = 0x002C5EB0u; return; } if (c.pc != 0x002C5E60u) [[unlikely]] return; }
L_002C5E60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5E7C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 888u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002C5E94; } }
L_002C5E7C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 886u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 886u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002C5E94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C5E98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[2] = ld32((c.r[1].w[0] - 21936u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[1].w[0] - 21928u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EE4u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002C5EE4u) [[unlikely]] return; }
L_002C5EE4:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C5F18; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_002C5F2C; } }
L_002C5F18:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5F50; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_002C5F2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_002C5F54; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5F50; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C5F50:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_002C5F54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_002C5F7C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5F78; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C5FA4; } }
L_002C5F78:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_002C5F7C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C5FA4; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C5FA4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C5FA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5FC0:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002C602C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C6028; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C6028; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C6028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C602C; } }
L_002C6028:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002C602C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6054u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 247u, depth + 1u); else { c.pc = 0x002C68F0u; return; } if (c.pc != 0x002C6054u) [[unlikely]] return; }
L_002C6054:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6074u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6074u) [[unlikely]] return; }
L_002C6074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C607Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 238u, depth + 1u); else { c.pc = 0x002C6760u; return; } if (c.pc != 0x002C607Cu) [[unlikely]] return; }
L_002C607C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6084u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 248u, depth + 1u); else { c.pc = 0x002C6910u; return; } if (c.pc != 0x002C6084u) [[unlikely]] return; }
L_002C6084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C608Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6EC0u; return; } if (c.pc != 0x002C608Cu) [[unlikely]] return; }
L_002C608C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x002C6094u) [[unlikely]] return; }
L_002C6094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C60B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C60C4u) [[unlikely]] return; }
L_002C60C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 25u, depth + 1u); else { c.pc = 0x002D8600u; return; } if (c.pc != 0x002C60D4u) [[unlikely]] return; }
L_002C60D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C60E4u) [[unlikely]] return; }
L_002C60E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C60F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 9u, depth + 1u); else { c.pc = 0x002D8190u; return; } if (c.pc != 0x002C60F4u) [[unlikely]] return; }
L_002C60F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6104u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8370u; return; } if (c.pc != 0x002C6104u) [[unlikely]] return; }
L_002C6104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6114u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C6114u) [[unlikely]] return; }
L_002C6114:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6144u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C6144u) [[unlikely]] return; }
L_002C6144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6154u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6154u) [[unlikely]] return; }
L_002C6154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6164u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 9u, depth + 1u); else { c.pc = 0x002D8190u; return; } if (c.pc != 0x002C6164u) [[unlikely]] return; }
L_002C6164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8370u; return; } if (c.pc != 0x002C6174u) [[unlikely]] return; }
L_002C6174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6184u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 7u, depth + 1u); else { c.pc = 0x002D8140u; return; } if (c.pc != 0x002C6184u) [[unlikely]] return; }
L_002C6184:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C61A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C61B4u) [[unlikely]] return; }
L_002C61B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C61E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C61C4u) [[unlikely]] return; }
L_002C61C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C61E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 9u, depth + 1u); else { c.pc = 0x002D8190u; return; } if (c.pc != 0x002C61D4u) [[unlikely]] return; }
L_002C61D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C61E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 7u, depth + 1u); else { c.pc = 0x002D8140u; return; } if (c.pc != 0x002C61E4u) [[unlikely]] return; }
L_002C61E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6214u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C6214u) [[unlikely]] return; }
L_002C6214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 25u, depth + 1u); else { c.pc = 0x002D8600u; return; } if (c.pc != 0x002C6224u) [[unlikely]] return; }
L_002C6224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6234u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6234u) [[unlikely]] return; }
L_002C6234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6244u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 9u, depth + 1u); else { c.pc = 0x002D8190u; return; } if (c.pc != 0x002C6244u) [[unlikely]] return; }
L_002C6244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6254u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8370u; return; } if (c.pc != 0x002C6254u) [[unlikely]] return; }
L_002C6254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6274; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6274u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x002C6274u) [[unlikely]] return; }
L_002C6274:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C62A4u) [[unlikely]] return; }
L_002C62A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C62B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C62B4u) [[unlikely]] return; }
L_002C62B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C62D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C62E4u) [[unlikely]] return; }
L_002C62E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C62F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D89A0u; return; } if (c.pc != 0x002C62F4u) [[unlikely]] return; }
L_002C62F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6304u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 11u, depth + 1u); else { c.pc = 0x002D8200u; return; } if (c.pc != 0x002C6304u) [[unlikely]] return; }
L_002C6304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 19u, depth + 1u); else { c.pc = 0x002D8470u; return; } if (c.pc != 0x002C6314u) [[unlikely]] return; }
L_002C6314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6344u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6344u) [[unlikely]] return; }
L_002C6344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D89A0u; return; } if (c.pc != 0x002C6354u) [[unlikely]] return; }
L_002C6354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6364u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 11u, depth + 1u); else { c.pc = 0x002D8200u; return; } if (c.pc != 0x002C6364u) [[unlikely]] return; }
L_002C6364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6374u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 23u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x002C6374u) [[unlikely]] return; }
L_002C6374:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C63A4u) [[unlikely]] return; }
L_002C63A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C63B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C63B4u) [[unlikely]] return; }
L_002C63B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C63D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C63E4u) [[unlikely]] return; }
L_002C63E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C63F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 27u, depth + 1u); else { c.pc = 0x002D8670u; return; } if (c.pc != 0x002C63F4u) [[unlikely]] return; }
L_002C63F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6424u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C6424u) [[unlikely]] return; }
L_002C6424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6434u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6434u) [[unlikely]] return; }
L_002C6434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6444u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 27u, depth + 1u); else { c.pc = 0x002D8670u; return; } if (c.pc != 0x002C6444u) [[unlikely]] return; }
L_002C6444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6454u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 53u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x002C6454u) [[unlikely]] return; }
L_002C6454:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6480u);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C6480u) [[unlikely]] return; }
L_002C6480:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C6490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C64A4u) [[unlikely]] return; }
L_002C64A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C64B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C64B4u) [[unlikely]] return; }
L_002C64B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C64D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C64E4u) [[unlikely]] return; }
L_002C64E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C64F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C64F4u) [[unlikely]] return; }
L_002C64F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6524u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 283u, depth + 1u); else { c.pc = 0x002D7FF0u; return; } if (c.pc != 0x002C6524u) [[unlikely]] return; }
L_002C6524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6534u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6534u) [[unlikely]] return; }
L_002C6534:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6560u);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6560u) [[unlikely]] return; }
L_002C6560:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C6570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6584u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6584u) [[unlikely]] return; }
L_002C6584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C65B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C65AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 21u, depth + 1u); else { c.pc = 0x002D8500u; return; } if (c.pc != 0x002C65A0u) [[unlikely]] return; }
L_002C65A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C65B4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C65AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65B4u);  if (depth < kMaxDepth) unit_0076(c, 14u, depth + 1u); else { c.pc = 0x002D82D0u; return; } if (c.pc != 0x002C65B4u) [[unlikely]] return; }
L_002C65B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C65D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C65E4u) [[unlikely]] return; }
L_002C65E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 21u, depth + 1u); else { c.pc = 0x002D8500u; return; } if (c.pc != 0x002C65F4u) [[unlikely]] return; }
L_002C65F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6604u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D89A0u; return; } if (c.pc != 0x002C6604u) [[unlikely]] return; }
L_002C6604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6614u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 11u, depth + 1u); else { c.pc = 0x002D8200u; return; } if (c.pc != 0x002C6614u) [[unlikely]] return; }
L_002C6614:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6644u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6644u) [[unlikely]] return; }
L_002C6644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D89A0u; return; } if (c.pc != 0x002C6654u) [[unlikely]] return; }
L_002C6654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 11u, depth + 1u); else { c.pc = 0x002D8200u; return; } if (c.pc != 0x002C6664u) [[unlikely]] return; }
L_002C6664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6674u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 23u, depth + 1u); else { c.pc = 0x002D8580u; return; } if (c.pc != 0x002C6674u) [[unlikely]] return; }
L_002C6674:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66A0u);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C66A0u) [[unlikely]] return; }
L_002C66A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C66B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C66C4u) [[unlikely]] return; }
L_002C66C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C66D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 51u, depth + 1u); else { c.pc = 0x002D8A80u; return; } if (c.pc != 0x002C66D4u) [[unlikely]] return; }
L_002C66D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C66F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6704u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 583u, depth + 1u); else { c.pc = 0x002BFC70u; return; } if (c.pc != 0x002C6704u) [[unlikely]] return; }
L_002C6704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6714u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D89A0u; return; } if (c.pc != 0x002C6714u) [[unlikely]] return; }
L_002C6714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 21u, depth + 1u); else { c.pc = 0x002D8500u; return; } if (c.pc != 0x002C6724u) [[unlikely]] return; }
L_002C6724:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C6760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[6].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002C678C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8059u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C68D8; } }
L_002C678C:
    c.r[3].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C67F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67ACu); c.f[13] = ld32((c.r[16].w[0] + 7740u));  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x002C67ACu) [[unlikely]] return; }
L_002C67AC:
    c.f[20] = c.f[0];
    set32(c.r[5], 0u + 255u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002C67C0u) [[unlikely]] return; }
L_002C67C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1288u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67ECu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002C67ECu) [[unlikely]] return; }
L_002C67EC:
    st32((c.r[16].w[0] + 1292u), c.r[2].w[0]);
    c.budget -= 1;
L_002C67F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8059u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C681C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C681C; } }
    st8((c.r[16].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002C681C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 808u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C68D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8059u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C68A8; } }
    st8((c.r[16].w[0] + 8059u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[5], c.r[2], c.r[0]);  goto L_002C6898; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7774u)));
    c.f[0] = ld32((c.r[16].w[0] + 7752u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6874u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002C6874u) [[unlikely]] return; }
L_002C6874:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C6884; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_002C6884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C688Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002C688Cu) [[unlikely]] return; }
L_002C688C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));  if (t) { goto L_002C68D4; } }
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 1;
L_002C6898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002C68A0u) [[unlikely]] return; }
L_002C68A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C68D0; } }
L_002C68A8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C68C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002C68BCu) [[unlikely]] return; }
L_002C68BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C68D0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C68C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68D0u);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002C68D0u) [[unlikely]] return; }
L_002C68D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.budget -= 1;
L_002C68D4:
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002C68D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C68F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u - 1025u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0075(c, 245u, depth); }
L_002C6910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[16], c.r[29].w[0] + 52u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8008u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 760u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002C6C24; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_002C6A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C697Cu); mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C697Cu) [[unlikely]] return; }
L_002C697C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002C69EC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u - 513u);
    set32(c.r[4], c.r[3].w[0] + 8192u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2008u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1000u), c.f[0]);  if (t) { goto L_002C6EA4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C69EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69F4u);  if (depth < kMaxDepth) unit_004D(c, 274u, depth + 1u); else { c.pc = 0x00236A40u; return; } if (c.pc != 0x002C69F4u) [[unlikely]] return; }
L_002C69F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002C6EA8; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_002C6A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A08u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6A08u) [[unlikely]] return; }
L_002C6A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002C6AA0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8196u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6A6C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C6A98; } }
L_002C6A6C:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
L_002C6A98:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 2;
L_002C6AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AA8u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6AA8u) [[unlikely]] return; }
L_002C6AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6ABC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C6B4C; } }
L_002C6ABC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C6B34; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AD4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C6AD4u) [[unlikely]] return; }
L_002C6AD4:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[17].w[0] + 8008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002C6B20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 32u);  if (t) { goto L_002C6B0C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6B1C; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002C6B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B14u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x002C6B14u) [[unlikely]] return; }
L_002C6B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));  if (t) { goto L_002C6B2C; } }
L_002C6B1C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C6B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B28u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC70u; return; } if (c.pc != 0x002C6B28u) [[unlikely]] return; }
L_002C6B28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 1;
L_002C6B2C:
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002C6B34:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6B4C; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C6B4C:
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B6Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6B6Cu) [[unlikely]] return; }
L_002C6B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6BD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6EA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_002C6BB0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6BAC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 806u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C6EA4; } }
L_002C6BAC:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002C6BB0:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BC0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x002C6BC0u) [[unlikely]] return; }
L_002C6BC0:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BCCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C6BCCu) [[unlikely]] return; }
L_002C6BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6EA4; } }
L_002C6BD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6EA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_002C6C00; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C6EA4; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002C6C00:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C10u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002C6C10u) [[unlikely]] return; }
L_002C6C10:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C6C1Cu) [[unlikely]] return; }
L_002C6C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6EA4; } }
L_002C6C24:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_002C6CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C3Cu); mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6C3Cu) [[unlikely]] return; }
L_002C6C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002C6CAC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u - 513u);
    set32(c.r[4], c.r[3].w[0] + 8192u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2008u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1000u), c.f[0]);  if (t) { goto L_002C6EA4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C6CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CB4u);  if (depth < kMaxDepth) unit_004D(c, 274u, depth + 1u); else { c.pc = 0x00236A40u; return; } if (c.pc != 0x002C6CB4u) [[unlikely]] return; }
L_002C6CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6EA4; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_002C6CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CC8u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6CC8u) [[unlikely]] return; }
L_002C6CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002C6D40; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[2].w[0] + 8196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 28;
L_002C6D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D48u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6D48u) [[unlikely]] return; }
L_002C6D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C6D5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C6DEC; } }
L_002C6D5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C6DD4; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D74u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002C6D74u) [[unlikely]] return; }
L_002C6D74:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[17].w[0] + 8008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002C6DC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 32u);  if (t) { goto L_002C6DAC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C6DBC; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002C6DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x002C6DB4u) [[unlikely]] return; }
L_002C6DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));  if (t) { goto L_002C6DCC; } }
L_002C6DBC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C6DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DC8u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC70u; return; } if (c.pc != 0x002C6DC8u) [[unlikely]] return; }
L_002C6DC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 1;
L_002C6DCC:
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002C6DD4:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C6DEC; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C6DEC:
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E0Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C6E0Cu) [[unlikely]] return; }
L_002C6E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C6E68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6EA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_002C6E50; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002C6E4C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 806u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C6EA4; } }
L_002C6E4C:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002C6E50:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E60u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x002C6E60u) [[unlikely]] return; }
L_002C6E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C6EA4; } }
L_002C6E68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6EA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_002C6E94; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002C6EA4; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002C6E94:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EA4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002C6EA4u) [[unlikely]] return; }
L_002C6EA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C6EA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6EC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    c.f[1] = ld32((c.r[4].w[0] + 988u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C6F10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C6F08; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C6F38; } }
L_002C6F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C6F38; } }
L_002C6F10:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C6F34; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002C6F38; } }
L_002C6F34:
    st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002C6F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 984u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 582u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C6F98; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 582u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002C6F78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.r[3].w[0]);  if (t) { goto L_002C6F7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002C6F78:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_002C6F7C:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    st32((c.r[4].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 7740u), c.f[0]);  if (t) { goto L_002C6FF0; } }
L_002C6F98:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 805u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002C6FDC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_002C6FC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C6FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 976u));  if (t) { goto L_002C6FE4; } }
L_002C6FC4:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_002C6FC8:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1144u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.f[0]);  if (t) { goto L_002C6FE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002C6FDC:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_002C6FE0:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.budget -= 1;
L_002C6FE4:
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_002C6FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C7000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1520u), 0u);
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    st32((c.r[4].w[0] + 1524u), 0u);
    st32((c.r[4].w[0] + 1540u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 1224u), 0u);
    st32((c.r[4].w[0] + 1228u), 0u);
    st8((c.r[4].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 290u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (t) { goto L_002C7078; } }
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 296u)));
    c.budget -= 2;
L_002C7078:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);  if (t) { goto L_002C7148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    st32((c.r[21].w[0] + 1200u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 29552u);
    set32(c.r[2], 0u + 2u);
    c.r[18].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C70F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] - 1u);  goto L_002C70EC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C70C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 590u)));  if (t) { goto L_002C7124; } }
L_002C70C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70D0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C70D0u) [[unlikely]] return; }
L_002C70D0:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 17760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_002C7120; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_002C70EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C7120; } }
L_002C70F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70FCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C70FCu) [[unlikely]] return; }
L_002C70FC:
    c.r[4].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 17508u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
L_002C7120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 590u)));
    c.budget -= 1;
L_002C7124:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C7168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_002C7168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);
    c.budget -= 1;
L_002C7148:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[21].w[0] + 1200u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 590u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
L_002C7168:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7178; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002C7178:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 15u));
    c.r[16].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_002C71C0; } }
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_002C71E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C71A0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C71A0u) [[unlikely]] return; }
L_002C71A0:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_002C71E0; } }
L_002C71C0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 7u));
    set32(c.r[16], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[16], 0u + 1u);  goto L_002C71E0; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C71E0; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002C71E0:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 1;
L_002C71E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 4ull;  if (t) { goto L_002C7214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C71F4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002C71F4u) [[unlikely]] return; }
L_002C71F4:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 8;
L_002C7214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7220; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_002C7220:
    st8((c.r[21].w[0] + 534u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[21].w[0] + 533u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[21].w[0] + 583u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C726C; } }
    st8((c.r[21].w[0] + 533u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 736u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002C7268; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C726C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_002C7268:
    st8((c.r[21].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002C726C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 29632u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 49u);  if (t) { goto L_002C72A8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 1260u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[21].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[5], 0u + 49u);
    c.budget -= 7;
L_002C72A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72B0u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002C72B0u) [[unlikely]] return; }
L_002C72B0:
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72BCu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002C72BCu) [[unlikely]] return; }
L_002C72BC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 583u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29664u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72E0u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C72E0u) [[unlikely]] return; }
L_002C72E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    set32(c.r[2], 0u - 29184u);
    set32(c.r[5], 0u + 12u);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[21].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7308u); st16((c.r[21].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002C7308u) [[unlikely]] return; }
L_002C7308:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C7330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 583u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C7394; } }
    c.f[0] = ld32((c.r[4].w[0] + 1224u));
    st32((c.r[4].w[0] + 1228u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    c.f[0] = ld32((c.r[4].w[0] + 1224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1224u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002C7394; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 1200u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C738Cu); st8((c.r[4].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C738Cu) [[unlikely]] return; }
L_002C738C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002C73B8; } }
L_002C7394:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 583u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C73B4u) [[unlikely]] return; }
L_002C73B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C73B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C73C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 590u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002C7434; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73F8u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C73F8u) [[unlikely]] return; }
L_002C73F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C740C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_002C741C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C740C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7418u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7418u) [[unlikely]] return; }
L_002C7418:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C741C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C7468; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C7468; } }
L_002C7434:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7468; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7450u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7450u) [[unlikely]] return; }
L_002C7450:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C7468; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C7468:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7784u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C7490; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C748C; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C748C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C7490:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74A0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C74A0u) [[unlikely]] return; }
L_002C74A0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74B8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C74B8u) [[unlikely]] return; }
L_002C74B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C74D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C74E4u) [[unlikely]] return; }
L_002C74E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C74ECu) [[unlikely]] return; }
L_002C74EC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C7508; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7518; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C7508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7510u);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C7510u) [[unlikely]] return; }
L_002C7510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C75E8; } }
L_002C7518:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);  if (t) { goto L_002C7580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7540u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C7540u) [[unlikely]] return; }
L_002C7540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7548u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C7548u) [[unlikely]] return; }
L_002C7548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C757C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7574u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8E50u; return; } if (c.pc != 0x002C7574u) [[unlikely]] return; }
L_002C7574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C75E4; } }
L_002C757C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.budget -= 1;
L_002C7580:
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C75C8; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_002C75C8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C75E4; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C75E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C75E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7628u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7628u) [[unlikely]] return; }
L_002C7628:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 9u);  if (t) { goto L_002C7674; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 18u);  if (t) { goto L_002C7644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 22u);  if (t) { goto L_002C7698; } }
L_002C7644:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C765C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 23u);  if (t) { goto L_002C7698; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C765C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7668u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7668u) [[unlikely]] return; }
L_002C7668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_002C7698; } }
    set32(c.r[16], 0u + 9u);
    c.budget -= 1;
L_002C7674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C7688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 13u);  if (t) { goto L_002C7698; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7688:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7694u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7694u) [[unlikely]] return; }
L_002C7694:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C7698:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C76B0; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002C76BC; } }
L_002C76B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_002C76BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76C4u);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C76C4u) [[unlikely]] return; }
L_002C76C4:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76D0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 20u, depth + 1u); else { c.pc = 0x002CC590u; return; } if (c.pc != 0x002C76D0u) [[unlikely]] return; }
L_002C76D0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76E8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C76E8u) [[unlikely]] return; }
L_002C76E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C7700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7714u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C7714u) [[unlikely]] return; }
L_002C7714:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C7730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7728u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C7728u) [[unlikely]] return; }
L_002C7728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C7754; } }
L_002C7730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7750u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7750u) [[unlikely]] return; }
L_002C7750:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7754:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C777Cu); st8((c.r[4].w[0] + 1601u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002C777Cu) [[unlikely]] return; }
L_002C777C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7784u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002C7784u) [[unlikely]] return; }
L_002C7784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7804; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002C77A8u) [[unlikely]] return; }
L_002C77A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[3].w[0] + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77C8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C77C8u) [[unlikely]] return; }
L_002C77C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C77D4u) [[unlikely]] return; }
L_002C77D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_002C7888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77ECu);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C77ECu) [[unlikely]] return; }
L_002C77EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 30u);  if (t) { goto L_002C7888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C77FCu) [[unlikely]] return; }
L_002C77FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C788C; } }
L_002C7804:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C7828; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002C7828:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7848; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002C7848:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C7888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7858u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C7858u) [[unlikely]] return; }
L_002C7858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7888; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7888u); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7888u) [[unlikely]] return; }
L_002C7888:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C788C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C78A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C78B4u) [[unlikely]] return; }
L_002C78B4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 23u, depth + 1u); else { c.pc = 0x002CC650u; return; } if (c.pc != 0x002C78C4u) [[unlikely]] return; }
L_002C78C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 30u, depth + 1u); else { c.pc = 0x002CC870u; return; } if (c.pc != 0x002C78CCu) [[unlikely]] return; }
L_002C78CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7944; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 27u, depth + 1u); else { c.pc = 0x002CC730u; return; } if (c.pc != 0x002C78F0u) [[unlikely]] return; }
L_002C78F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C790Cu); set32(c.r[6], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C790Cu) [[unlikely]] return; }
L_002C790C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7918u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C7918u) [[unlikely]] return; }
L_002C7918:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C7944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7930u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C7930u) [[unlikely]] return; }
L_002C7930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7944; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7944u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002C7944u) [[unlikely]] return; }
L_002C7944:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C797Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C797Cu) [[unlikely]] return; }
L_002C797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7984u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C7984u) [[unlikely]] return; }
L_002C7984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7990; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_002C7990:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C79C0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_002C79C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C79DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C79D0u) [[unlikely]] return; }
L_002C79D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002C7A50; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C79DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79E4u);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C79E4u) [[unlikely]] return; }
L_002C79E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7A4C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 18464u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A30u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C7A30u) [[unlikely]] return; }
L_002C7A30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A4Cu); set32(c.r[6], c.r[2].w[0] + 54u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7A4Cu) [[unlikely]] return; }
L_002C7A4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 590u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002C7AD4; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A98u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7A98u) [[unlikely]] return; }
L_002C7A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002C7AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_002C7ABC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002C7AAC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7AB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7AB8u) [[unlikely]] return; }
L_002C7AB8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_002C7ABC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C7B08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002C7B08; } }
L_002C7AD4:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7B08; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7AF0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7AF0u) [[unlikely]] return; }
L_002C7AF0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002C7B08; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002C7B08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7784u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C7B30; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C7B2C; } }
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C7B2C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C7B30:
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 192ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (t) { goto L_002C7B9C; } }
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    st8((c.r[18].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 68u);
    st16((c.r[18].w[0] + 586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B90u); st16((c.r[18].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7B90u) [[unlikely]] return; }
L_002C7B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002C7BC0; } }
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 1;
L_002C7B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BA4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 7u, depth + 1u); else { c.pc = 0x002CC3E0u; return; } if (c.pc != 0x002C7BA4u) [[unlikely]] return; }
L_002C7BA4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BBCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7BBCu) [[unlikely]] return; }
L_002C7BBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7BC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C7BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 85u, depth + 1u); else { c.pc = 0x002C8A70u; return; } if (c.pc != 0x002C7BF4u) [[unlikely]] return; }
L_002C7BF4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C7C08u) [[unlikely]] return; }
L_002C7C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C7C30; } }
L_002C7C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 28688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7C2Cu) [[unlikely]] return; }
L_002C7C2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7C30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C7C54u) [[unlikely]] return; }
L_002C7C54:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);  if (t) { goto L_002C7CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C7C7Cu) [[unlikely]] return; }
L_002C7C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C7C84u) [[unlikely]] return; }
L_002C7C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7CB0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD730000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8E50u; return; } if (c.pc != 0x002C7CA8u) [[unlikely]] return; }
L_002C7CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C7D78; } }
L_002C7CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.budget -= 1;
L_002C7CB4:
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C7CFC; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_002C7CFC:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C7D18; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002C7D18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7D74; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 5u);
    set32(c.r[6], 0u + 68u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st16((c.r[16].w[0] + 586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D74u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7D74u) [[unlikely]] return; }
L_002C7D74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7D78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C7DA4u) [[unlikely]] return; }
L_002C7DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_002C7DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 81u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x002C7DB4u) [[unlikely]] return; }
L_002C7DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002C7F50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.budget -= 1;
L_002C7DC0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7DCCu) [[unlikely]] return; }
L_002C7DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);  if (t) { goto L_002C7DE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[2].d[0] = c.r[2].d[0] | 33554ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.budget -= 4;
L_002C7DE4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7DF0u) [[unlikely]] return; }
L_002C7DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);  if (t) { goto L_002C7E00; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);
    c.budget -= 2;
L_002C7E00:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7E0Cu) [[unlikely]] return; }
L_002C7E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);  if (t) { goto L_002C7E44; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E2Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C7E2Cu) [[unlikely]] return; }
L_002C7E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7E40; } }
    set32(c.r[5], 0u + 47u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C7E40u) [[unlikely]] return; }
L_002C7E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.budget -= 1;
L_002C7E44:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7E50u) [[unlikely]] return; }
L_002C7E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43130000u);  if (t) { goto L_002C7E68; } }
    set32(c.r[5], 0u + 45u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C7E64u) [[unlikely]] return; }
L_002C7E64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43130000u);
    c.budget -= 1;
L_002C7E68:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7E74u) [[unlikely]] return; }
L_002C7E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43190000u);  if (t) { goto L_002C7EAC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C7EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E94u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002C7E94u) [[unlikely]] return; }
L_002C7E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7EA8; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C7EA8u) [[unlikely]] return; }
L_002C7EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43190000u);
    c.budget -= 1;
L_002C7EAC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002C7EB8u) [[unlikely]] return; }
L_002C7EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002C7ED0; } }
    set32(c.r[5], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7ECCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x002C7ECCu) [[unlikely]] return; }
L_002C7ECC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002C7ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7ED8u);  if (depth < kMaxDepth) unit_0073(c, 8u, depth + 1u); else { c.pc = 0x002CC460u; return; } if (c.pc != 0x002C7ED8u) [[unlikely]] return; }
L_002C7ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 28u, depth + 1u); else { c.pc = 0x002CC780u; return; } if (c.pc != 0x002C7EE0u) [[unlikely]] return; }
L_002C7EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7F4C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[2].w[0] - 18464u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 46662ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F30u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 26u, depth + 1u); else { c.pc = 0x002CC6F0u; return; } if (c.pc != 0x002C7F30u) [[unlikely]] return; }
L_002C7F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7F4Cu) [[unlikely]] return; }
L_002C7F4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002C7F50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F7Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 6u, depth + 1u); else { c.pc = 0x002CC360u; return; } if (c.pc != 0x002C7F7Cu) [[unlikely]] return; }
L_002C7F7C:
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 586u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44510000u);
    c.r[2].d[0] = c.r[2].d[0] | 60294ull;
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_002C7FB4; } }
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 3;
L_002C7FB4:
    set32(c.r[6], c.r[4].w[0] + 69u);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FD4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002C7FD4u) [[unlikely]] return; }
L_002C7FD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C7FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8004u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002C8004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0072(c, 2u, depth);
}

}
