#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0029[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191,
    0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290,
    0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335,
    0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0029(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A4000;
    case 2u: goto L_001A4024;
    case 3u: goto L_001A4030;
    case 4u: goto L_001A4140;
    case 5u: goto L_001A41D4;
    case 6u: goto L_001A4288;
    case 7u: goto L_001A42A0;
    case 8u: goto L_001A4310;
    case 9u: goto L_001A43A0;
    case 10u: goto L_001A43C4;
    case 11u: goto L_001A43DC;
    case 12u: goto L_001A43E8;
    case 13u: goto L_001A43F0;
    case 14u: goto L_001A44A4;
    case 15u: goto L_001A44B4;
    case 16u: goto L_001A44D0;
    case 17u: goto L_001A44F0;
    case 18u: goto L_001A4500;
    case 19u: goto L_001A4520;
    case 20u: goto L_001A4564;
    case 21u: goto L_001A4574;
    case 22u: goto L_001A45A0;
    case 23u: goto L_001A45B8;
    case 24u: goto L_001A45D0;
    case 25u: goto L_001A45E0;
    case 26u: goto L_001A4600;
    case 27u: goto L_001A4610;
    case 28u: goto L_001A462C;
    case 29u: goto L_001A4640;
    case 30u: goto L_001A4720;
    case 31u: goto L_001A4758;
    case 32u: goto L_001A4794;
    case 33u: goto L_001A47E0;
    case 34u: goto L_001A4830;
    case 35u: goto L_001A4970;
    case 36u: goto L_001A49BC;
    case 37u: goto L_001A4A00;
    case 38u: goto L_001A4A5C;
    case 39u: goto L_001A4A90;
    case 40u: goto L_001A4B44;
    case 41u: goto L_001A4B64;
    case 42u: goto L_001A4B78;
    case 43u: goto L_001A4BA4;
    case 44u: goto L_001A4BB8;
    case 45u: goto L_001A4C00;
    case 46u: goto L_001A4C54;
    case 47u: goto L_001A4C80;
    case 48u: goto L_001A4CC8;
    case 49u: goto L_001A4CF8;
    case 50u: goto L_001A4D14;
    case 51u: goto L_001A4D28;
    case 52u: goto L_001A4D5C;
    case 53u: goto L_001A4D7C;
    case 54u: goto L_001A4DA8;
    case 55u: goto L_001A4DD8;
    case 56u: goto L_001A4E00;
    case 57u: goto L_001A4E34;
    case 58u: goto L_001A4E48;
    case 59u: goto L_001A4E5C;
    case 60u: goto L_001A4E70;
    case 61u: goto L_001A4E88;
    case 62u: goto L_001A4E98;
    case 63u: goto L_001A4EB4;
    case 64u: goto L_001A4EBC;
    case 65u: goto L_001A4ED0;
    case 66u: goto L_001A4EE8;
    case 67u: goto L_001A4F60;
    case 68u: goto L_001A4F70;
    case 69u: goto L_001A4F8C;
    case 70u: goto L_001A4F98;
    case 71u: goto L_001A4FB0;
    case 72u: goto L_001A4FC0;
    case 73u: goto L_001A4FD0;
    case 74u: goto L_001A4FF0;
    case 75u: goto L_001A5008;
    case 76u: goto L_001A5034;
    case 77u: goto L_001A5060;
    case 78u: goto L_001A5078;
    case 79u: goto L_001A5090;
    case 80u: goto L_001A50AC;
    case 81u: goto L_001A50C0;
    case 82u: goto L_001A50D0;
    case 83u: goto L_001A50EC;
    case 84u: goto L_001A512C;
    case 85u: goto L_001A5160;
    case 86u: goto L_001A51A0;
    case 87u: goto L_001A51D0;
    case 88u: goto L_001A51F8;
    case 89u: goto L_001A5250;
    case 90u: goto L_001A5270;
    case 91u: goto L_001A5280;
    case 92u: goto L_001A52A0;
    case 93u: goto L_001A52E0;
    case 94u: goto L_001A52EC;
    case 95u: goto L_001A5328;
    case 96u: goto L_001A5340;
    case 97u: goto L_001A5388;
    case 98u: goto L_001A53BC;
    case 99u: goto L_001A53F0;
    case 100u: goto L_001A5400;
    case 101u: goto L_001A5420;
    case 102u: goto L_001A5440;
    case 103u: goto L_001A54A0;
    case 104u: goto L_001A54C4;
    case 105u: goto L_001A5530;
    case 106u: goto L_001A5568;
    case 107u: goto L_001A55C8;
    case 108u: goto L_001A56D0;
    case 109u: goto L_001A5780;
    case 110u: goto L_001A57E0;
    case 111u: goto L_001A57E4;
    case 112u: goto L_001A5800;
    case 113u: goto L_001A5834;
    case 114u: goto L_001A5850;
    case 115u: goto L_001A5884;
    case 116u: goto L_001A58A0;
    case 117u: goto L_001A590C;
    case 118u: goto L_001A5964;
    case 119u: goto L_001A5974;
    case 120u: goto L_001A5984;
    case 121u: goto L_001A598C;
    case 122u: goto L_001A59A8;
    case 123u: goto L_001A59B0;
    case 124u: goto L_001A59B8;
    case 125u: goto L_001A59C0;
    case 126u: goto L_001A59C8;
    case 127u: goto L_001A59D4;
    case 128u: goto L_001A59EC;
    case 129u: goto L_001A5A00;
    case 130u: goto L_001A5A30;
    case 131u: goto L_001A5B50;
    case 132u: goto L_001A5BA4;
    case 133u: goto L_001A5C20;
    case 134u: goto L_001A5C3C;
    case 135u: goto L_001A5C50;
    case 136u: goto L_001A5C64;
    case 137u: goto L_001A5C78;
    case 138u: goto L_001A5C90;
    case 139u: goto L_001A5C98;
    case 140u: goto L_001A5CA0;
    case 141u: goto L_001A5CA8;
    case 142u: goto L_001A5CB0;
    case 143u: goto L_001A5CB8;
    case 144u: goto L_001A5CC0;
    case 145u: goto L_001A5CC8;
    case 146u: goto L_001A5CD0;
    case 147u: goto L_001A5CD8;
    case 148u: goto L_001A5CE0;
    case 149u: goto L_001A5CE8;
    case 150u: goto L_001A5D00;
    case 151u: goto L_001A5D10;
    case 152u: goto L_001A5D34;
    case 153u: goto L_001A5D40;
    case 154u: goto L_001A5D60;
    case 155u: goto L_001A5DB8;
    case 156u: goto L_001A5DCC;
    case 157u: goto L_001A5DD8;
    case 158u: goto L_001A5DE8;
    case 159u: goto L_001A5E1C;
    case 160u: goto L_001A5E38;
    case 161u: goto L_001A5E50;
    case 162u: goto L_001A5E84;
    case 163u: goto L_001A5E94;
    case 164u: goto L_001A5EA8;
    case 165u: goto L_001A5F30;
    case 166u: goto L_001A5F38;
    case 167u: goto L_001A5F40;
    case 168u: goto L_001A5F48;
    case 169u: goto L_001A5F70;
    case 170u: goto L_001A5F80;
    case 171u: goto L_001A5FC0;
    case 172u: goto L_001A5FF0;
    case 173u: goto L_001A6008;
    case 174u: goto L_001A6070;
    case 175u: goto L_001A60A8;
    case 176u: goto L_001A60BC;
    case 177u: goto L_001A6140;
    case 178u: goto L_001A614C;
    case 179u: goto L_001A6154;
    case 180u: goto L_001A615C;
    case 181u: goto L_001A6164;
    case 182u: goto L_001A616C;
    case 183u: goto L_001A6174;
    case 184u: goto L_001A61B0;
    case 185u: goto L_001A61C0;
    case 186u: goto L_001A61F0;
    case 187u: goto L_001A6200;
    case 188u: goto L_001A6264;
    case 189u: goto L_001A626C;
    case 190u: goto L_001A6274;
    case 191u: goto L_001A627C;
    case 192u: goto L_001A6284;
    case 193u: goto L_001A628C;
    case 194u: goto L_001A6294;
    case 195u: goto L_001A62A0;
    case 196u: goto L_001A62B0;
    case 197u: goto L_001A6308;
    case 198u: goto L_001A6310;
    case 199u: goto L_001A6318;
    case 200u: goto L_001A6320;
    case 201u: goto L_001A6328;
    case 202u: goto L_001A6330;
    case 203u: goto L_001A6338;
    case 204u: goto L_001A6350;
    case 205u: goto L_001A6370;
    case 206u: goto L_001A639C;
    case 207u: goto L_001A63D0;
    case 208u: goto L_001A6410;
    case 209u: goto L_001A642C;
    case 210u: goto L_001A6438;
    case 211u: goto L_001A6450;
    case 212u: goto L_001A6470;
    case 213u: goto L_001A6488;
    case 214u: goto L_001A64A0;
    case 215u: goto L_001A64C8;
    case 216u: goto L_001A6520;
    case 217u: goto L_001A6570;
    case 218u: goto L_001A6590;
    case 219u: goto L_001A65C4;
    case 220u: goto L_001A65E0;
    case 221u: goto L_001A6614;
    case 222u: goto L_001A661C;
    case 223u: goto L_001A6630;
    case 224u: goto L_001A6680;
    case 225u: goto L_001A66C8;
    case 226u: goto L_001A66D0;
    case 227u: goto L_001A66D8;
    case 228u: goto L_001A6738;
    case 229u: goto L_001A6748;
    case 230u: goto L_001A675C;
    case 231u: goto L_001A6764;
    case 232u: goto L_001A676C;
    case 233u: goto L_001A677C;
    case 234u: goto L_001A6798;
    case 235u: goto L_001A67A0;
    case 236u: goto L_001A67A8;
    case 237u: goto L_001A67B0;
    case 238u: goto L_001A67B8;
    case 239u: goto L_001A67C4;
    case 240u: goto L_001A67DC;
    case 241u: goto L_001A67F0;
    case 242u: goto L_001A68B8;
    case 243u: goto L_001A6924;
    case 244u: goto L_001A6A1C;
    case 245u: goto L_001A6A74;
    case 246u: goto L_001A6B90;
    case 247u: goto L_001A6BD0;
    case 248u: goto L_001A6BEC;
    case 249u: goto L_001A6C00;
    case 250u: goto L_001A6C1C;
    case 251u: goto L_001A6DC8;
    case 252u: goto L_001A6DE0;
    case 253u: goto L_001A6DFC;
    case 254u: goto L_001A6E18;
    case 255u: goto L_001A6E34;
    case 256u: goto L_001A6E54;
    case 257u: goto L_001A6E78;
    case 258u: goto L_001A6EB4;
    case 259u: goto L_001A6ED8;
    case 260u: goto L_001A6EFC;
    case 261u: goto L_001A6F10;
    case 262u: goto L_001A6F2C;
    case 263u: goto L_001A6F40;
    case 264u: goto L_001A6F60;
    case 265u: goto L_001A6F80;
    case 266u: goto L_001A7030;
    case 267u: goto L_001A7068;
    case 268u: goto L_001A70B0;
    case 269u: goto L_001A7120;
    case 270u: goto L_001A7170;
    case 271u: goto L_001A7188;
    case 272u: goto L_001A71A0;
    case 273u: goto L_001A71C0;
    case 274u: goto L_001A7280;
    case 275u: goto L_001A72B0;
    case 276u: goto L_001A72F0;
    case 277u: goto L_001A7310;
    case 278u: goto L_001A7364;
    case 279u: goto L_001A73C0;
    case 280u: goto L_001A7408;
    case 281u: goto L_001A7420;
    case 282u: goto L_001A7440;
    case 283u: goto L_001A7470;
    case 284u: goto L_001A748C;
    case 285u: goto L_001A74A0;
    case 286u: goto L_001A74B4;
    case 287u: goto L_001A74C8;
    case 288u: goto L_001A74EC;
    case 289u: goto L_001A74F4;
    case 290u: goto L_001A74FC;
    case 291u: goto L_001A7504;
    case 292u: goto L_001A750C;
    case 293u: goto L_001A7514;
    case 294u: goto L_001A751C;
    case 295u: goto L_001A7524;
    case 296u: goto L_001A752C;
    case 297u: goto L_001A7534;
    case 298u: goto L_001A753C;
    case 299u: goto L_001A7544;
    case 300u: goto L_001A7560;
    case 301u: goto L_001A7578;
    case 302u: goto L_001A7590;
    case 303u: goto L_001A759C;
    case 304u: goto L_001A75B0;
    case 305u: goto L_001A75C0;
    case 306u: goto L_001A75E8;
    case 307u: goto L_001A7618;
    case 308u: goto L_001A7630;
    case 309u: goto L_001A7674;
    case 310u: goto L_001A7680;
    case 311u: goto L_001A76C8;
    case 312u: goto L_001A7718;
    case 313u: goto L_001A7780;
    case 314u: goto L_001A77E0;
    case 315u: goto L_001A7820;
    case 316u: goto L_001A7840;
    case 317u: goto L_001A784C;
    case 318u: goto L_001A7860;
    case 319u: goto L_001A7880;
    case 320u: goto L_001A78B0;
    case 321u: goto L_001A7950;
    case 322u: goto L_001A7980;
    case 323u: goto L_001A7A30;
    case 324u: goto L_001A7A50;
    case 325u: goto L_001A7AAC;
    case 326u: goto L_001A7AEC;
    case 327u: goto L_001A7B1C;
    case 328u: goto L_001A7B24;
    case 329u: goto L_001A7B80;
    case 330u: goto L_001A7BA4;
    case 331u: goto L_001A7C20;
    case 332u: goto L_001A7C4C;
    case 333u: goto L_001A7F68;
    case 334u: goto L_001A7F74;
    case 335u: goto L_001A7F7C;
    case 336u: goto L_001A7F84;
    case 337u: goto L_001A7F8C;
    case 338u: goto L_001A7FB0;
    case 339u: goto L_001A7FC0;
    case 340u: goto L_001A7FD0;
    default: bad_entry(c, 0x001A4000u); return;
    }
L_001A4000:
    st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001A4018; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A4018; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A4018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A4024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4030:
    set32(c.r[10], c.r[5].w[0] + 15u);
    set32(c.r[5], 0u - 16u);
    c.r[5].d[0] = c.r[10].d[0] & c.r[5].d[0];
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 20));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[11], ld32((c.r[1].w[0] - 18600u)));
    c.r[10].d[0] = c.r[10].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] - 18576u);
    set32(c.r[5], c.r[11].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[10].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[11].sd[0] >= 0; c.r[12].d[0] = c.r[11].d[0] & 31ull;  if (t) { goto L_001A4094; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[5], c.r[7].w[0] + 15u);  if (t) { goto L_001A4098; } }
    set32(c.r[12], c.r[12].w[0] - 32u);
    c.budget -= 1;
L_001A4094:
    set32(c.r[5], c.r[7].w[0] + 15u);
    c.budget -= 1;
L_001A4098:
    set32(c.r[4], 0u - 16u);
    c.r[7].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));
    c.r[10].d[0] = c.r[4].d[0] << 40;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 20));
    c.r[10].d[0] = c.r[10].d[0] >> 40;
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[6].d[0] = c.r[10].d[0] | c.r[5].d[0];
    set32(c.r[5], c.r[12].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[12].sd[0] >= 0; c.r[7].d[0] = c.r[12].d[0] & 31ull;  if (t) { goto L_001A40E4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[5], c.r[9].w[0] + 15u);  if (t) { goto L_001A40E8; } }
    set32(c.r[7], c.r[7].w[0] - 32u);
    c.budget -= 1;
L_001A40E4:
    set32(c.r[5], c.r[9].w[0] + 15u);
    c.budget -= 1;
L_001A40E8:
    set32(c.r[4], 0u - 16u);
    c.r[9].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 4));
    c.r[6].d[0] = c.r[4].d[0] << 40;
    c.r[6].d[0] = c.r[6].d[0] >> 40;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 20));
    c.r[4].d[0] = c.r[8].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[7].sd[0] >= 0; c.r[3].d[0] = c.r[7].d[0] & 31ull;  if (t) { goto L_001A4134; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A4134; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_001A4134:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);  c.pc = t; return; }
L_001A4140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4096ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A4158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001A428C; } }
L_001A4158:
    c.r[2].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);  if (t) { goto L_001A4178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001A428C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.budget -= 1;
L_001A4178:
    c.r[2].d[0] = c.r[2].d[0] | 65520ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_001A41B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65521ull;
    c.r[1].d[0] = c.r[8].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A41B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65521ull;
    c.r[1].d[0] = c.r[10].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A41BC; } }
L_001A41B0:
    set32(c.r[2], 0u - 4u);
    c.budget -= 1;
L_001A41B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A4290; } }
L_001A41BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[13], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[11], 0u + 4u);
    mmi::paddub(c.r[12], c.r[13], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 18576u);
    c.budget -= 6;
L_001A41D4:
    set32(c.r[2], c.r[12].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].sd[0] < 0) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_001A41F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A428C; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_001A41F4:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[2].d[0] = c.r[12].d[0] & 31ull;  if (t) { goto L_001A4208; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] - 1u);  goto L_001A420C; }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A4208:
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 1;
L_001A420C:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] > 0; mmi::paddub(c.r[12], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A41D4u | kUnwind; return; } goto L_001A41D4; } }
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[2].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[13].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001A4264; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (t) { goto L_001A4268; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A4264:
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_001A4268:
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    mmi::paddub(c.r[7], c.r[8], c.r[0]);
    mmi::paddub(c.r[8], c.r[9], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::paddub(c.r[9], c.r[10], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4288u); st32((c.r[1].w[0] - 18600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 3u, depth + 1u); else { c.pc = 0x001A4030u; return; } if (c.pc != 0x001A4288u) [[unlikely]] return; }
L_001A4288:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A428C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A4290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A42A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001A42D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_001A42D0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001A42FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A42FC; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A42FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A4308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18600u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001A4340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4390; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A4340:
    if (c.r[4].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[2].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18600u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_001A4384; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A4384; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A4384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18600u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A4390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A43A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_001A43D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A43C4u); set32(c.r[4], ld32((c.r[28].w[0] - 30536u)));  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x001A43C4u) [[unlikely]] return; }
L_001A43C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A43DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A44D4; } }
L_001A43D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A43DCu); set32(c.r[4], ld32((c.r[28].w[0] - 30536u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001A43DCu) [[unlikely]] return; }
L_001A43DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[1].w[0] - 18592u)));  if (t) { goto L_001A4420; } }
L_001A43E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A43F0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 39u, depth + 1u); else { c.pc = 0x001A4A90u; return; } if (c.pc != 0x001A43F0u) [[unlikely]] return; }
L_001A43F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001A4440; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] & 31ull;  if (t) { goto L_001A4418; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_001A441C; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_001A4418:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 1;
L_001A441C:
    c.budget -= 1;
L_001A4420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A43E8u | kUnwind; return; } goto L_001A43E8; } }
    c.budget -= 1;
L_001A4440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18592u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A44C8; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], 0u - 16u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_001A446C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A446C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[2].w[0] - 18112u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[2].w[0] - 18112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[11], c.r[2].w[0] + 17648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 18272u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A44A4u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x001A44A4u) [[unlikely]] return; }
L_001A44A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A44BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A44B4u); set32(c.r[4], ld32((c.r[28].w[0] - 30536u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001A44B4u) [[unlikely]] return; }
L_001A44B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A44D4; } }
L_001A44BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 18608u), 0u);  if (t) { goto L_001A44D0; } }
L_001A44C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A44D0u); set32(c.r[4], ld32((c.r[28].w[0] - 30536u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001A44D0u) [[unlikely]] return; }
L_001A44D0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A44D4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A44F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103BD0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 450u, depth); }
L_001A4500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30532u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4520u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001A4520u) [[unlikely]] return; }
L_001A4520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[2].w[0] - 18176u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30532u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[2].w[0] - 18176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[11], c.r[2].w[0] + 17648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], 0u + 16u);
    st32((c.r[1].w[0] - 18176u), c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] - 18320u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4564u); mmi::paddub(c.r[10], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x001A4564u) [[unlikely]] return; }
L_001A4564:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A4580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4574u); set32(c.r[4], ld32((c.r[28].w[0] - 30532u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001A4574u) [[unlikely]] return; }
L_001A4574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001A4580; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A4580:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A45A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001A45C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45B8u); set32(c.r[4], ld32((c.r[28].w[0] - 30532u)));  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x001A45B8u) [[unlikely]] return; }
L_001A45B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A45D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A45E4; } }
L_001A45C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45D0u); set32(c.r[4], ld32((c.r[28].w[0] - 30532u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001A45D0u) [[unlikely]] return; }
L_001A45D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 18176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A45E0u); set32(c.r[4], ld32((c.r[28].w[0] - 30532u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001A45E0u) [[unlikely]] return; }
L_001A45E0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A45E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A4600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4610u);  if (depth < kMaxDepth) unit_0029(c, 18u, depth + 1u); else { c.pc = 0x001A4500u; return; } if (c.pc != 0x001A4610u) [[unlikely]] return; }
L_001A4610:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001A4624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A4630; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A4624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A462Cu);  if (depth < kMaxDepth) unit_0029(c, 22u, depth + 1u); else { c.pc = 0x001A45A0u; return; } if (c.pc != 0x001A462Cu) [[unlikely]] return; }
L_001A462C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A4630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A4640:
    set32(c.r[10], c.r[4].w[0] >> 24);
    c.r[11].d[0] = c.r[10].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull; set32(c.r[8], 0u + 4u);  if (t) { goto L_001A4654; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001A4654:
    c.r[12].d[0] = c.r[10].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; c.r[13].d[0] = c.r[10].d[0] & 4ull;  if (t) { goto L_001A4668; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[13].d[0] = c.r[10].d[0] & 4ull;
    c.budget -= 2;
L_001A4668:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_001A4674; } }
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 1;
L_001A4674:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A4694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4714; } }
L_001A4694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[2], c.r[4].w[0] >> 16);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] >> 8);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[11].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { goto L_001A46C8; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_001A46C8:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_001A46D8; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_001A46D8:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_001A46F4; } }
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 5;
L_001A46F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[3], 0u + 255u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[4].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001A4714:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[8].w[0] + 8u);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A4740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A47D0; } }
L_001A4740:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[3], 0u + 24u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_001A4758:
    set32(c.r[2], c.r[6].w[0] >> (c.r[3].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[3], c.r[3].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A4758u | kUnwind; return; } goto L_001A4758; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 8;
L_001A4794:
    set32(c.r[2], c.r[4].w[0] >> (c.r[5].w[0] & 31u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A4794u | kUnwind; return; } goto L_001A4794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[1].w[0] - 18608u), c.r[8].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 8;
L_001A47D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A47E0:
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A47F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4964; } }
L_001A47F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[11], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[11].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A4814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4964; } }
L_001A4814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[3], 0u + 24u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);  if (t) { goto L_001A4858; } }
    set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    c.budget -= 1;
L_001A4830:
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[1].w[0] - 18608u), c.r[2].w[0]);
    c.budget -= 10;
L_001A4858:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] <= 0; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_001A486C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A4830u | kUnwind; return; } goto L_001A4830; } }
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 1;
L_001A486C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_001A48A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[2].w[0]);
    c.budget -= 11;
L_001A48A0:
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_001A48D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[2].w[0]);
    c.budget -= 11;
L_001A48D8:
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_001A4910; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[2].w[0]);
    c.budget -= 11;
L_001A4910:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001A4944; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 18608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[2].w[0]);
    c.budget -= 11;
L_001A4944:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 18608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 18112u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_001A4964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4970:
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A4984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A49F8; } }
L_001A4984:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 24u);  if (t) { goto L_001A49A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A49F8; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 1;
L_001A49A8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001A49D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_001A49BC:
    set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[3], c.r[3].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A49BCu | kUnwind; return; } goto L_001A49BC; } }
L_001A49D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] - 18608u), c.r[7].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 8;
L_001A49F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4A00:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4A1C; } }
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A4A24; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A4A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4A84; } }
L_001A4A24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 18608u)));
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 24u);  if (t) { goto L_001A4A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4A84; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 1;
L_001A4A48:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001A4A78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 18112u);
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 3;
L_001A4A5C:
    set32(c.r[2], c.r[4].w[0] >> (c.r[3].w[0] & 31u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[3], c.r[3].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A4A5Cu | kUnwind; return; } goto L_001A4A5C; } }
L_001A4A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 18608u), c.r[7].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A4A84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A4A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 127u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 24));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_001A4AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001A4AB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 80u);  if (t) { goto L_001A4ACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A4E5C; } }
    set32(c.r[5], 0u + 80u);
    c.budget -= 1;
L_001A4ACC:
    c.r[6].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001A4E54; } }
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A4E50; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], c.r[3].w[0] - 71u);  goto L_001A4D34; }
    set32(c.r[5], 0u + 112u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 56u);  goto L_001A4BC4; }
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A4BC0; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001A4B80; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 17u);  goto L_001A4B50; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A4B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
L_001A4B30:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4B44u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 29u, depth + 1u); else { c.pc = 0x001A4640u; return; } if (c.pc != 0x001A4B44u) [[unlikely]] return; }
L_001A4B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A4E60; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_001A4B50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A4B70; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4B64u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4B64u) [[unlikely]] return; }
L_001A4B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4B78; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001A4B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4B78u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4B78u) [[unlikely]] return; }
L_001A4B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
L_001A4B80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001A4B9C; } }
    set32(c.r[2], c.r[3].w[0] - 34u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001A4BB0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_001A4B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4BA4u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4BA4u) [[unlikely]] return; }
L_001A4BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001A4BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4BB8u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4BB8u) [[unlikely]] return; }
L_001A4BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
L_001A4BC0:
    set32(c.r[2], 0u + 56u);
    c.budget -= 1;
L_001A4BC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_001A4BF8; } }
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A4BF4; } }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A4BF4; } }
    set32(c.r[2], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 55u);  if (t) { goto L_001A4C0C; } }
L_001A4BF4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001A4BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4C00u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4C00u) [[unlikely]] return; }
L_001A4C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 1;
L_001A4C0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_001A4C4C; } }
    set32(c.r[2], c.r[3].w[0] - 57u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A4C48; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A4C48; } }
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A4C48; } }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_001A4C60; } }
L_001A4C48:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_001A4C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4C54u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4C54u) [[unlikely]] return; }
L_001A4C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 54u);
    c.budget -= 1;
L_001A4C60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_001A4C78; } }
    set32(c.r[2], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 119u);  if (t) { goto L_001A4C8C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_001A4C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4C80u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4C80u) [[unlikely]] return; }
L_001A4C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_001A4C8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A4CAC; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A4CAC; } }
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 63u);  if (t) { goto L_001A4CD4; } }
L_001A4CAC:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4CC8u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 33u, depth + 1u); else { c.pc = 0x001A47E0u; return; } if (c.pc != 0x001A4CC8u) [[unlikely]] return; }
L_001A4CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 1;
L_001A4CD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 53u);  if (t) { goto L_001A4D04; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 6u));
    set32(c.r[5], 0u + 7u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4CF8u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 33u, depth + 1u); else { c.pc = 0x001A47E0u; return; } if (c.pc != 0x001A4CF8u) [[unlikely]] return; }
L_001A4CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 1;
L_001A4D04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A4D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D14u);  if (depth < kMaxDepth) unit_0029(c, 30u, depth + 1u); else { c.pc = 0x001A4720u; return; } if (c.pc != 0x001A4D14u) [[unlikely]] return; }
L_001A4D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4D28; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001A4D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D28u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4D28u) [[unlikely]] return; }
L_001A4D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], c.r[3].w[0] - 71u);
    c.budget -= 1;
L_001A4D34:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001A4D54; } }
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 75u);  if (t) { goto L_001A4D68; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001A4D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D5Cu); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4D5Cu) [[unlikely]] return; }
L_001A4D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 1;
L_001A4D68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_001A4D88; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4D7Cu); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4D7Cu) [[unlikely]] return; }
L_001A4D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 1;
L_001A4D88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_001A4DA0; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_001A4DB4; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_001A4DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4DA8u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4DA8u) [[unlikely]] return; }
L_001A4DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 1;
L_001A4DB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 77u);  if (t) { goto L_001A4DE4; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[5], 0u + 6u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4DD8u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 33u, depth + 1u); else { c.pc = 0x001A47E0u; return; } if (c.pc != 0x001A4DD8u) [[unlikely]] return; }
L_001A4DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], c.r[3].w[0] - 77u);
    c.budget -= 1;
L_001A4DE4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 79u);  if (t) { goto L_001A4E0C; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E00u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 37u, depth + 1u); else { c.pc = 0x001A4A00u; return; } if (c.pc != 0x001A4E00u) [[unlikely]] return; }
L_001A4E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 1;
L_001A4E0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A4E40; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = c.r[10].d[0] & 255ull;
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E34u); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 33u, depth + 1u); else { c.pc = 0x001A47E0u; return; } if (c.pc != 0x001A4E34u) [[unlikely]] return; }
L_001A4E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001A4E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E48u); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4E48u) [[unlikely]] return; }
L_001A4E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A4E5C; } }
L_001A4E50:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_001A4E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E5Cu); mmi::paddub(c.r[4], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 35u, depth + 1u); else { c.pc = 0x001A4970u; return; } if (c.pc != 0x001A4E5Cu) [[unlikely]] return; }
L_001A4E5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A4E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A4E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4304u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E88u); set32(c.r[5], 0u + 768u);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A4E88u) [[unlikely]] return; }
L_001A4E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 3536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4E98u); set32(c.r[5], 0u + 768u);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A4E98u) [[unlikely]] return; }
L_001A4E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 4304u);
    st32((c.r[28].w[0] - 26300u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4EB4u); st32((c.r[28].w[0] - 26304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 65u, depth + 1u); else { c.pc = 0x001A4ED0u; return; } if (c.pc != 0x001A4EB4u) [[unlikely]] return; }
L_001A4EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4EBCu);  if (depth < kMaxDepth) unit_0029(c, 67u, depth + 1u); else { c.pc = 0x001A4F60u; return; } if (c.pc != 0x001A4EBCu) [[unlikely]] return; }
L_001A4EBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A4ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4EE8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A4EE8u) [[unlikely]] return; }
L_001A4EE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 70u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 91u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 93u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 79u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 117u), static_cast<std::uint8_t>(c.r[6].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A4F60:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 256u);
    c.budget -= 4;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_001A4F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_001A4F8C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4F98u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 77u, depth + 1u); else { c.pc = 0x001A5060u; return; } if (c.pc != 0x001A4F98u) [[unlikely]] return; }
L_001A4F98:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A4F8Cu | kUnwind; return; } goto L_001A4F8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4FB0u);  if (depth < kMaxDepth) unit_000E(c, 31u, depth + 1u); else { c.pc = 0x001385F0u; return; } if (c.pc != 0x001A4FB0u) [[unlikely]] return; }
L_001A4FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 5104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4FC0u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A4FC0u) [[unlikely]] return; }
L_001A4FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 16736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A4FD0u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A4FD0u) [[unlikely]] return; }
L_001A4FD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A4FF0:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001A5050; } }
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - 2u);  if (t) { goto L_001A5028; } }
L_001A5008:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5008u | kUnwind; return; } goto L_001A5008; } }
    c.budget -= 1;
L_001A5028:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A5050; } }
L_001A5034:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5034u | kUnwind; return; } goto L_001A5034; } }
L_001A5050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::paddub(c.r[8], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 8448u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5078u); mmi::paddub(c.r[9], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A5078u) [[unlikely]] return; }
L_001A5078:
    st8((c.r[9].w[0] + 8384u), static_cast<std::uint8_t>(c.r[8].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[2].w[0] - 15376u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50ACu); c.r[5].d[0] = c.r[2].d[0] | 36384ull;  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4FF0u; return; } if (c.pc != 0x001A50ACu) [[unlikely]] return; }
L_001A50AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 21952u);
    set32(c.r[6], 0u + 1536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A50C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A50C0u) [[unlikely]] return; }
L_001A50C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A50D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 15376u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[2].d[0] | 20384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[2].d[0] | 40768ull;
    c.budget -= 7;
L_001A50EC:
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A50ECu | kUnwind; return; } goto L_001A50EC; } }
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A5148; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 15376u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[2].d[0] | 20384ull;
    c.budget -= 6;
L_001A512C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A512Cu | kUnwind; return; } goto L_001A512C; } }
L_001A5148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 21952u);
    set32(c.r[6], 0u + 1536u);
    c.budget -= 5;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_001A5160:
    st32((c.r[4].w[0] + 384u), 0u);
    st32((c.r[4].w[0] + 388u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[4].w[0] + 392u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 396u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 400u), 0u);
    st32((c.r[4].w[0] + 404u), 0u);
    st32((c.r[4].w[0] + 408u), 0u);
    st32((c.r[4].w[0] + 412u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 416u), 0u);
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 424u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 428u), c.r[3].w[0]);  c.pc = t; return; }
L_001A51A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] + 6320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6256ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51D0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001A51D0u) [[unlikely]] return; }
L_001A51D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] + 6324u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[2].d[0] | 6368ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A51F8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001A51F8u) [[unlikely]] return; }
L_001A51F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] + 6512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 6516u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[1].w[0] + 6480u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[1].w[0] + 6484u), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5270u); c.r[4].d[0] = c.r[2].d[0] | 6256ull;  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001A5270u) [[unlikely]] return; }
L_001A5270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5280u); c.r[4].d[0] = c.r[2].d[0] | 6368ull;  if (depth < kMaxDepth) unit_000D(c, 123u, depth + 1u); else { c.pc = 0x00135850u; return; } if (c.pc != 0x001A5280u) [[unlikely]] return; }
L_001A5280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 6484u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 6480u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A52A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[7], c.r[16].w[0] + 1856u);
    set32(c.r[2], c.r[3].w[0] + 416u);
    set32(c.r[4], c.r[3].w[0] + 192u);
    set32(c.r[5], c.r[3].w[0] + 256u);
    set32(c.r[6], c.r[3].w[0] + 320u);
    set32(c.r[8], c.r[3].w[0] + 64u);
    set32(c.r[9], c.r[3].w[0] + 128u);
    set32(c.r[10], c.r[3].w[0] + 384u);
    set32(c.r[11], c.r[3].w[0] + 400u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A52E0u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000D(c, 134u, depth + 1u); else { c.pc = 0x00135C30u; return; } if (c.pc != 0x001A52E0u) [[unlikely]] return; }
L_001A52E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A52ECu); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001A52ECu) [[unlikely]] return; }
L_001A52EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[16].w[0] + 1600u);
    set32(c.r[5], c.r[16].w[0] + 1664u);
    set32(c.r[6], c.r[16].w[0] + 1728u);
    st8((c.r[3].w[0] + 433u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[7], c.r[16].w[0] + 1792u);
    set32(c.r[8], c.r[16].w[0] + 1856u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5328u); set32(c.r[9], c.r[2].w[0] + 1360u);  if (depth < kMaxDepth) unit_000D(c, 125u, depth + 1u); else { c.pc = 0x00135950u; return; } if (c.pc != 0x001A5328u) [[unlikely]] return; }
L_001A5328:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A5340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 6240u), c.f[12]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[1].w[0] + 6244u), c.f[13]);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 6248u), c.f[14]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[15] = c.f[14];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5388u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x001A5388u) [[unlikely]] return; }
L_001A5388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44EC0000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A53BCu); c.r[4].d[0] = c.r[2].d[0] | 5344ull;  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x001A53BCu) [[unlikely]] return; }
L_001A53BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57344ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x450A0000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A53F0u); c.r[4].d[0] = c.r[2].d[0] | 5792ull;  if (depth < kMaxDepth) unit_0029(c, 102u, depth + 1u); else { c.pc = 0x001A5440u; return; } if (c.pc != 0x001A53F0u) [[unlikely]] return; }
L_001A53F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[1].w[0] + 6244u), c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 6248u), c.f[13]);  c.pc = t; return; }
L_001A5420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 30832u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0019F1A0u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 105u, depth); }
L_001A5440:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[22] = ld32((c.r[1].w[0] + 6240u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    c.f[27] = c.f[14];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[23] = ld32((c.r[1].w[0] + 6244u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[24] = ld32((c.r[1].w[0] + 6248u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A54A0u); c.f[26] = c.f[15];  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001A54A0u) [[unlikely]] return; }
L_001A54A0:
    st32((c.r[16].w[0] + 64u), c.f[22]);
    st32((c.r[16].w[0] + 84u), c.f[22]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A54C4u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001A54C4u) [[unlikely]] return; }
L_001A54C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EF00000u);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65288ull;
    c.f[25] = fp::mul(c.f[24], c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65288ull;
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[25]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.f[1] = c.f[23] ^ fp::kSign;
    c.f[3] = fp::add(c.f[1], c.f[24]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    fpu_div(c, 1u, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[27]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[26]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5530u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 204u, depth + 1u); else { c.pc = 0x00102438u; return; } if (c.pc != 0x001A5530u) [[unlikely]] return; }
L_001A5530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 128u);
    fpu_div(c, 1u, c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[23], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[22]);
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    fpu_div(c, 21u, c.f[0], c.f[22]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5568u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001A5568u) [[unlikely]] return; }
L_001A5568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[2] = fp::mul(c.f[1], c.f[23]);
    c.f[1] = fp::add(c.f[21], c.f[21]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    c.f[2] = fp::sub(c.f[24], c.f[23]);
    c.f[1] = fp::add(c.f[24], c.f[23]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A55C8u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001A55C8u) [[unlikely]] return; }
L_001A55C8:
    c.f[0] = fp::mul(c.f[22], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EF00000u);
    c.r[6].d[0] = c.r[3].d[0] | 41943ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xCAFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65288ull;
    fpu_div(c, 0u, c.f[0], c.f[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4AFF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    fpu_div(c, 0u, c.f[0], c.f[23]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[27]);
    st32((c.r[16].w[0] + 52u), c.f[26]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001A56D0:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A56D0u | kUnwind; return; } goto L_001A56D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5780:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5780u | kUnwind; return; } goto L_001A5780; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A57E0:
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_001A57E4:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A57E4u | kUnwind; return; } goto L_001A57E4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[28].w[0] - 30512u);
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5834u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A5834u) [[unlikely]] return; }
L_001A5834:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5884u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A5884u) [[unlikely]] return; }
L_001A5884:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A58A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001A59DC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A597C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A5904; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A58EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001A59F0; } }
L_001A58EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 5400u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001A5904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A590Cu);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x001A590Cu) [[unlikely]] return; }
L_001A590C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A59EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A59EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5964u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x001A5964u) [[unlikely]] return; }
L_001A5964:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5974u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001A5974u) [[unlikely]] return; }
L_001A5974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A59EC; } }
L_001A597C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5984u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x001A5984u) [[unlikely]] return; }
L_001A5984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A598Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001A598Cu) [[unlikely]] return; }
L_001A598C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A59EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59A8u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A59A8u) [[unlikely]] return; }
L_001A59A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59B0u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001A59B0u) [[unlikely]] return; }
L_001A59B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59B8u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x001A59B8u) [[unlikely]] return; }
L_001A59B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59C0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A59C0u) [[unlikely]] return; }
L_001A59C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59C8u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001A59C8u) [[unlikely]] return; }
L_001A59C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59D4u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A59D4u) [[unlikely]] return; }
L_001A59D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A59EC; } }
L_001A59DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[2].w[0] - 31408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A59ECu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A59ECu) [[unlikely]] return; }
L_001A59EC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A59F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A5A00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 266u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 267u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5A70; } }
L_001A5A30:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 273u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[3].w[0] + 281u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
L_001A5A70:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5A30u | kUnwind; return; } goto L_001A5A30; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[3].d[0] | 3584ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[3].d[0] | 61440ull;
    set32(c.r[6], c.r[28].w[0] - 30520u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 110u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[9].w[0] + 110u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 110u)));
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    st8((c.r[9].w[0] + 110u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 110u)));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[9].w[0] + 256u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    set32(c.r[6], c.r[7].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[8].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[5], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0] + 369u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 36;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A5B20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 514u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001A5B20:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 21976u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 21975u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 375u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 372u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A5B80; } }
L_001A5B50:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 342u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_001A5B80:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5B50u | kUnwind; return; } goto L_001A5B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[3].w[0] - 30784u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001A5BF8; } }
L_001A5BA4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 110u)));
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 342u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 21;
L_001A5BF8:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5BA4u | kUnwind; return; } goto L_001A5BA4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A5C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C3Cu); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5C3Cu) [[unlikely]] return; }
L_001A5C3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C50u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5C50u) [[unlikely]] return; }
L_001A5C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C64u); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5C64u) [[unlikely]] return; }
L_001A5C64:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C78u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5C78u) [[unlikely]] return; }
L_001A5C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C90u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0070(c, 57u, depth + 1u); else { c.pc = 0x002C0AF0u; return; } if (c.pc != 0x001A5C90u) [[unlikely]] return; }
L_001A5C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5C98u);  if (depth < kMaxDepth) unit_0070(c, 48u, depth + 1u); else { c.pc = 0x002C09F0u; return; } if (c.pc != 0x001A5C98u) [[unlikely]] return; }
L_001A5C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CA0u);  if (depth < kMaxDepth) unit_0029(c, 129u, depth + 1u); else { c.pc = 0x001A5A00u; return; } if (c.pc != 0x001A5CA0u) [[unlikely]] return; }
L_001A5CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CA8u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A5090u; return; } if (c.pc != 0x001A5CA8u) [[unlikely]] return; }
L_001A5CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CB0u);  if (depth < kMaxDepth) unit_001E(c, 77u, depth + 1u); else { c.pc = 0x00179950u; return; } if (c.pc != 0x001A5CB0u) [[unlikely]] return; }
L_001A5CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CB8u);  if (depth < kMaxDepth) unit_001E(c, 175u, depth + 1u); else { c.pc = 0x0017B600u; return; } if (c.pc != 0x001A5CB8u) [[unlikely]] return; }
L_001A5CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CC0u);  if (depth < kMaxDepth) unit_001E(c, 121u, depth + 1u); else { c.pc = 0x0017AA80u; return; } if (c.pc != 0x001A5CC0u) [[unlikely]] return; }
L_001A5CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CC8u);  if (depth < kMaxDepth) unit_001E(c, 136u, depth + 1u); else { c.pc = 0x0017AE10u; return; } if (c.pc != 0x001A5CC8u) [[unlikely]] return; }
L_001A5CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CD0u);  if (depth < kMaxDepth) unit_001E(c, 151u, depth + 1u); else { c.pc = 0x0017B100u; return; } if (c.pc != 0x001A5CD0u) [[unlikely]] return; }
L_001A5CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CD8u);  if (depth < kMaxDepth) unit_001E(c, 128u, depth + 1u); else { c.pc = 0x0017ACA0u; return; } if (c.pc != 0x001A5CD8u) [[unlikely]] return; }
L_001A5CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CE0u);  if (depth < kMaxDepth) unit_001E(c, 205u, depth + 1u); else { c.pc = 0x0017BC30u; return; } if (c.pc != 0x001A5CE0u) [[unlikely]] return; }
L_001A5CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5CE8u);  if (depth < kMaxDepth) unit_0026(c, 115u, depth + 1u); else { c.pc = 0x00199B70u; return; } if (c.pc != 0x001A5CE8u) [[unlikely]] return; }
L_001A5CE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5D10u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001A5D10u) [[unlikely]] return; }
L_001A5D10:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 28912u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5D34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A5D34u) [[unlikely]] return; }
L_001A5D34:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30504u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A5D60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[2].w[0] + 29792u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4560u);
    set32(c.r[6], 0u + 512u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5DB8u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5DB8u) [[unlikely]] return; }
L_001A5DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 3792u);
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5DCCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5DCCu) [[unlikely]] return; }
L_001A5DCC:
    set32(c.r[20], c.r[28].w[0] - 30496u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 3;
L_001A5DD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5DE8u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001A5DE8u) [[unlikely]] return; }
L_001A5DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[2], c.r[0]);  if (t) { goto L_001A5E10; } }
    c.r[1].d[0] = c.r[21].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A5E00; } }
    set32(c.r[21], 0u + 16u);
    c.budget -= 1;
L_001A5E00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 112u);  if (t) { goto L_001A5E20; } }
L_001A5E10:
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5E1Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001A5E1Cu) [[unlikely]] return; }
L_001A5E1C:
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.budget -= 1;
L_001A5E20:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5E38u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5E38u) [[unlikely]] return; }
L_001A5E38:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5E50u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001A5E50u) [[unlikely]] return; }
L_001A5E50:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[21].w[0] >> 1);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[2].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5DD8u | kUnwind; return; } goto L_001A5DD8; } }
    set32(c.r[6], 0u + 640u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5E84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A5E84u) [[unlikely]] return; }
L_001A5E84:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5E94u); st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 211u, depth + 1u); else { c.pc = 0x001A6450u; return; } if (c.pc != 0x001A5E94u) [[unlikely]] return; }
L_001A5E94:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
L_001A5EA8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    st8((c.r[6].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A5EA8u | kUnwind; return; } goto L_001A5EA8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5EEC; } }
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A5EEC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A5F04; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001A5F04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 70u)));
    st8((c.r[3].w[0] + 375u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 94u)));
    st8((c.r[3].w[0] + 372u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 109u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F30u); st8((c.r[2].w[0] + 184u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0082(c, 90u, depth + 1u); else { c.pc = 0x0030A3D0u; return; } if (c.pc != 0x001A5F30u) [[unlikely]] return; }
L_001A5F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F38u);  if (depth < kMaxDepth) unit_0070(c, 57u, depth + 1u); else { c.pc = 0x002C0AF0u; return; } if (c.pc != 0x001A5F38u) [[unlikely]] return; }
L_001A5F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F40u);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x001A5F40u) [[unlikely]] return; }
L_001A5F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F48u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A5F48u) [[unlikely]] return; }
L_001A5F48:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A5F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A5F80u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001A5F80u) [[unlikely]] return; }
L_001A5F80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A5FB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st64((c.r[3].w[0] + 8u), 0ull);
    c.budget -= 10;
L_001A5FB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A5FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 28896u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A5FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6008u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0032(c, 138u, depth + 1u); else { c.pc = 0x001C9490u; return; } if (c.pc != 0x001A6008u) [[unlikely]] return; }
L_001A6008:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A6030; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_001A6058; } }
L_001A6030:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A6058; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
L_001A6058:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4816u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A60A8u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A60A8u) [[unlikely]] return; }
L_001A60A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4048u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A60BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A60BCu) [[unlikely]] return; }
L_001A60BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 331u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[2].w[0] + 524u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6118; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 452u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[3].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001A6118:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6134; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A6134:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6140u); st8((c.r[2].w[0] + 513u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001A6140u) [[unlikely]] return; }
L_001A6140:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A614Cu); st8((c.r[3].w[0] + 328u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0070(c, 48u, depth + 1u); else { c.pc = 0x002C09F0u; return; } if (c.pc != 0x001A614Cu) [[unlikely]] return; }
L_001A614C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6154u);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x001A6154u) [[unlikely]] return; }
L_001A6154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A615Cu);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A615Cu) [[unlikely]] return; }
L_001A615C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6164u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 398u, depth + 1u); else { c.pc = 0x001779B0u; return; } if (c.pc != 0x001A6164u) [[unlikely]] return; }
L_001A6164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A616Cu);  if (depth < kMaxDepth) unit_0033(c, 23u, depth + 1u); else { c.pc = 0x001CC5A0u; return; } if (c.pc != 0x001A616Cu) [[unlikely]] return; }
L_001A616C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6174u);  if (depth < kMaxDepth) unit_001E(c, 12u, depth + 1u); else { c.pc = 0x00178220u; return; } if (c.pc != 0x001A6174u) [[unlikely]] return; }
L_001A6174:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A6194; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A61A4; } }
L_001A6194:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 514u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A61A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A61B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A61C0u);  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0400u; return; } if (c.pc != 0x001A61C0u) [[unlikely]] return; }
L_001A61C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A61E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
L_001A61E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A61F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6200u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x001A6200u) [[unlikely]] return; }
L_001A6200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6228; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_001A6294; } }
L_001A6228:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 521u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6294; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 331u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6264u); st8((c.r[2].w[0] + 330u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001A6264u) [[unlikely]] return; }
L_001A6264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A626Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x001A626Cu) [[unlikely]] return; }
L_001A626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6274u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A6274u) [[unlikely]] return; }
L_001A6274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A627Cu);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001A627Cu) [[unlikely]] return; }
L_001A627C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6284u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A6284u) [[unlikely]] return; }
L_001A6284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A628Cu);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x001A628Cu) [[unlikely]] return; }
L_001A628C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6294u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001A6294u) [[unlikely]] return; }
L_001A6294:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A62A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A62B0u);  if (depth < kMaxDepth) unit_001D(c, 146u, depth + 1u); else { c.pc = 0x00175180u; return; } if (c.pc != 0x001A62B0u) [[unlikely]] return; }
L_001A62B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A6338; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + 430u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 430u)));
    c.r[1].d[0] = c.r[2].sd[0] < 998ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A62F4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A62F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 331u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6308u); st8((c.r[2].w[0] + 330u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001A6308u) [[unlikely]] return; }
L_001A6308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6310u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x001A6310u) [[unlikely]] return; }
L_001A6310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6318u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A6318u) [[unlikely]] return; }
L_001A6318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6320u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001A6320u) [[unlikely]] return; }
L_001A6320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6328u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A6328u) [[unlikely]] return; }
L_001A6328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6330u);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x001A6330u) [[unlikely]] return; }
L_001A6330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6338u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001A6338u) [[unlikely]] return; }
L_001A6338:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6350:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30488u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A6370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A63C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A639Cu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 214u, depth + 1u); else { c.pc = 0x001A64A0u; return; } if (c.pc != 0x001A639Cu) [[unlikely]] return; }
L_001A639C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A63F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_001A63F8; } }
L_001A63C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A63D0u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x001827C0u; return; } if (c.pc != 0x001A63D0u) [[unlikely]] return; }
L_001A63D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A63F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
L_001A63F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A642Cu); st64((c.r[2].w[0]), c.r[3].d[0]);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x001A642Cu) [[unlikely]] return; }
L_001A642C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6438u); st64((c.r[2].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A6438u) [[unlikely]] return; }
L_001A6438:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29920u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], c.r[2].w[0] + 5168u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6470u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001A6470u) [[unlikely]] return; }
L_001A6470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29984u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6488u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001A6488u) [[unlikely]] return; }
L_001A6488:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A64A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] + 5168u);
    set32(c.r[4], 0u << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29920u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001A64F0; } }
L_001A64C8:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 4u);  goto L_001A64E4; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
L_001A64E4:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001A64F0:
    c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A6508; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A64C8u | kUnwind; return; } goto L_001A64C8; } }
    c.budget -= 1;
L_001A6508:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 29984u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + 112u);  if (t) { goto L_001A6548; } }
L_001A6520:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 4u);  goto L_001A653C; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_001A653C:
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_001A6548:
    c.r[1].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A6560; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6520u | kUnwind; return; } goto L_001A6520; } }
    c.budget -= 1;
L_001A6560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A6570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28912u);
    set32(c.r[6], 0u + 68u);
    c.budget -= 5;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_001A6590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[28].w[0] - 30464u);
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A65C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A65C4u) [[unlikely]] return; }
L_001A65C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A65E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6614u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A6614u) [[unlikely]] return; }
L_001A6614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A661Cu);  if (depth < kMaxDepth) unit_0029(c, 217u, depth + 1u); else { c.pc = 0x001A6570u; return; } if (c.pc != 0x001A661Cu) [[unlikely]] return; }
L_001A661C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001A67CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A6750; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A66BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001A67E0; } }
L_001A6678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6680u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001A6680u) [[unlikely]] return; }
L_001A6680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A67DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6590u);  if (t) { goto L_001A66B8; } }
    set32(c.r[2], 0u + 6540u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A66BC; } }
    set32(c.r[2], 0u + 6590u);
    c.budget -= 1;
L_001A66B8:
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A66BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A66C8u); set32(c.r[4], c.r[2].w[0] - 28912u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A6B90u; return; } if (c.pc != 0x001A66C8u) [[unlikely]] return; }
L_001A66C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A66D0u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x001A66D0u) [[unlikely]] return; }
L_001A66D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A66D8u);  if (depth < kMaxDepth) unit_0029(c, 281u, depth + 1u); else { c.pc = 0x001A7420u; return; } if (c.pc != 0x001A66D8u) [[unlikely]] return; }
L_001A66D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 28898u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A67DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001A67DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6738u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x001A6738u) [[unlikely]] return; }
L_001A6738:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6748u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001A6748u) [[unlikely]] return; }
L_001A6748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A67DC; } }
L_001A6750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A675Cu); set32(c.r[4], c.r[2].w[0] - 28912u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A6B90u; return; } if (c.pc != 0x001A675Cu) [[unlikely]] return; }
L_001A675C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6764u);  if (depth < kMaxDepth) unit_001D(c, 52u, depth + 1u); else { c.pc = 0x00174670u; return; } if (c.pc != 0x001A6764u) [[unlikely]] return; }
L_001A6764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A676Cu);  if (depth < kMaxDepth) unit_0029(c, 281u, depth + 1u); else { c.pc = 0x001A7420u; return; } if (c.pc != 0x001A676Cu) [[unlikely]] return; }
L_001A676C:
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A677Cu); st8((c.r[1].w[0] - 28898u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001A677Cu) [[unlikely]] return; }
L_001A677C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A67DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6798u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001A6798u) [[unlikely]] return; }
L_001A6798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67A0u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A67A0u) [[unlikely]] return; }
L_001A67A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67A8u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x001A67A8u) [[unlikely]] return; }
L_001A67A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67B0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A67B0u) [[unlikely]] return; }
L_001A67B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67B8u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001A67B8u) [[unlikely]] return; }
L_001A67B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67C4u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A67C4u) [[unlikely]] return; }
L_001A67C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A67DC; } }
L_001A67CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[2].w[0] - 31408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A67DCu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A67DCu) [[unlikely]] return; }
L_001A67DC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A67E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A67F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 141u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 141u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 141u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_001A681C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A683C; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_001A681C:
    st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st32((c.r[3].w[0] + 592u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 596u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 600u), c.r[4].w[0]);
    c.budget -= 8;
L_001A683C:
    set32(c.r[12], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[9].d[0] = c.r[3].d[0] | 3584ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[3].d[0] | 61440ull;
    set32(c.r[11], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 256u)));
    set32(c.r[8], 0u - 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[10], c.r[11].w[0] << (c.r[10].w[0] & 31u));
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    st8((c.r[12].w[0] + 368u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 256u)));
    set32(c.r[9], c.r[11].w[0] << (c.r[9].w[0] & 31u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    st8((c.r[10].w[0] + 369u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[7].w[0] + 266u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[7].w[0] + 267u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[7].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 265u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A68F8; } }
L_001A68B8:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    st8((c.r[7].w[0] + 272u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    st8((c.r[7].w[0] + 273u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    st8((c.r[7].w[0] + 280u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[7].w[0] + 281u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 16;
L_001A68F8:
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[7].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A68B8u | kUnwind; return; } goto L_001A68B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[3].w[0] - 27104u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001A6998; } }
L_001A6924:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8391u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[6].w[0] + 8386u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0] + 8389u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    st8((c.r[6].w[0] + 8387u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    st8((c.r[6].w[0] + 8388u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    st8((c.r[6].w[0] + 8390u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8389u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001A6974; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_001A6980; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001A6974:
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_001A6980:
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 8448u);
    set32(c.r[7], c.r[7].w[0] + 5u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 6;
L_001A6998:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6924u | kUnwind; return; } goto L_001A6924; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2245u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 2246u);
    st8((c.r[4].w[0] + 266u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 267u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 328u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A6A50; } }
L_001A6A1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 342u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_001A6A50:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6A1Cu | kUnwind; return; } goto L_001A6A1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[3].w[0] + 26144u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_001A6AE0; } }
L_001A6A74:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8389u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8387u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));  if (t) { goto L_001A6A98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A6AA8; } }
L_001A6A98:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 265u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001A6AA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[10].w[0] + 1u);
    c.r[10].d[0] = c.r[3].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] + 8448u);
    set32(c.r[3], c.r[4].w[0] + c.r[9].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[3].w[0] + 342u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 14;
L_001A6AE0:
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6A74u | kUnwind; return; } goto L_001A6A74; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 141u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A6B44; } }
    st8((c.r[4].w[0] + 257u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 266u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 282u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001A6B7C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001A6B44:
    st8((c.r[4].w[0] + 257u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 281u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 273u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 267u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 283u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_001A6B7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A6B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A6BEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A6BD8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 27808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6BD0u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 249u, depth + 1u); else { c.pc = 0x001A6C00u; return; } if (c.pc != 0x001A6BD0u) [[unlikely]] return; }
L_001A6BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001A6BF0; } }
L_001A6BD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A6BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6BECu);  if (depth < kMaxDepth) unit_0029(c, 269u, depth + 1u); else { c.pc = 0x001A7120u; return; } if (c.pc != 0x001A6BECu) [[unlikely]] return; }
L_001A6BEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A6BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A6C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 7;
L_001A6C1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[6], 0u + 65u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001A70EC; } }
    set32(c.r[5], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A70F0; }
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A70DC; } }
    set32(c.r[4], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A7094; } }
    set32(c.r[4], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A704C; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A7038; } }
    set32(c.r[5], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A701C; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A7014; }
    set32(c.r[5], 0u + 23u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A7008; }
    set32(c.r[5], 0u + 22u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A6FFC; }
    set32(c.r[5], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6FDC; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6FC0; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6FA4; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6F88; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6F68; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6F48; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[5].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A6F38; }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6F18; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6F04; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6EE0; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6EBC; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6E94; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001A6E68; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A6E3C; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A6E20; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A6E04; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A6DE8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[17], 0u + 1u);  goto L_001A6DD4; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A6DBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A6D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6D98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A70F0; } }
L_001A6DBC:
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DC8u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x001A6DC8u) [[unlikely]] return; }
L_001A6DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A6DD4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DE0u); st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x001A6DE0u) [[unlikely]] return; }
L_001A6DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6DE8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6DFCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6DFCu) [[unlikely]] return; }
L_001A6DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A6E04:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E18u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6E18u) [[unlikely]] return; }
L_001A6E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A6E20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E34u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6E34u) [[unlikely]] return; }
L_001A6E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A6E3C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 3u);
    set32(c.r[17], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E54u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6E54u) [[unlikely]] return; }
L_001A6E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A70F0; } }
    set32(c.r[3], c.r[18].w[0] + 18u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001A70F0; } }
L_001A6E68:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6E78u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6E78u) [[unlikely]] return; }
L_001A6E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 2u);  goto L_001A6E8C; }
    set32(c.r[3], c.r[18].w[0] + 18u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 3;
L_001A6E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6E94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EB4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001A6EB4u) [[unlikely]] return; }
L_001A6EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 3u);  if (t) { goto L_001A70F0; } }
L_001A6EBC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6ED8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001A6ED8u) [[unlikely]] return; }
L_001A6ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A6EE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6EFCu); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0029(c, 274u, depth + 1u); else { c.pc = 0x001A7280u; return; } if (c.pc != 0x001A6EFCu) [[unlikely]] return; }
L_001A6EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A6F04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6F10u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 275u, depth + 1u); else { c.pc = 0x001A72B0u; return; } if (c.pc != 0x001A6F10u) [[unlikely]] return; }
L_001A6F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001A70F0; } }
L_001A6F18:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[18].w[0] + 60u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6F2Cu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0029(c, 274u, depth + 1u); else { c.pc = 0x001A7280u; return; } if (c.pc != 0x001A6F2Cu) [[unlikely]] return; }
L_001A6F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A6F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6F40u);  if (depth < kMaxDepth) unit_0029(c, 276u, depth + 1u); else { c.pc = 0x001A72F0u; return; } if (c.pc != 0x001A6F40u) [[unlikely]] return; }
L_001A6F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6F48:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 5u);
    set32(c.r[17], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6F60u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6F60u) [[unlikely]] return; }
L_001A6F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6F68:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 6u);
    set32(c.r[17], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A6F80u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A6F80u) [[unlikely]] return; }
L_001A6F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A6F88:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[17], 0u + 1u);
    st8((c.r[3].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 290u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_001A70F0; } }
L_001A6FA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[17], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 288u)));
    st16((c.r[3].w[0] + 292u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 290u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001A70F0; } }
L_001A6FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[17], 0u + 1u);
    st8((c.r[3].w[0] + 271u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_001A70F0; } }
L_001A6FDC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[17], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 294u)));
    st16((c.r[3].w[0] + 298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001A70F0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A6FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_001A70F0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A7008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A70F0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A7014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 26544u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A70F0; } }
L_001A701C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7030u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 314u, depth + 1u); else { c.pc = 0x001F9760u; return; } if (c.pc != 0x001A7030u) [[unlikely]] return; }
L_001A7030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001A70F0; } }
L_001A7038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A70F0; } }
L_001A704C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A708C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] - 27840u);  if (t) { goto L_001A7078; } }
L_001A7068:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001A7078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7068u | kUnwind; return; } goto L_001A7068; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A708C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A7094:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001A70D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] - 27840u);  if (t) { goto L_001A70C0; } }
L_001A70B0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001A70C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A70B0u | kUnwind; return; } goto L_001A70B0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A70D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A70F0; } }
L_001A70DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A70F0; } }
L_001A70EC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A70F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A6C1Cu | kUnwind; return; } goto L_001A6C1C; } }
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A7120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 13u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001A7188; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A714C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A7180; } }
L_001A714C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001A7170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7170u);  if (depth < kMaxDepth) unit_0029(c, 249u, depth + 1u); else { c.pc = 0x001A6C00u; return; } if (c.pc != 0x001A7170u) [[unlikely]] return; }
L_001A7170:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7188; } }
L_001A7180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7188u);  if (depth < kMaxDepth) unit_0029(c, 249u, depth + 1u); else { c.pc = 0x001A6C00u; return; } if (c.pc != 0x001A7188u) [[unlikely]] return; }
L_001A7188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A71A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28898u)));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_001A71C0:
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A71D8; } }
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001A71D8:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_001A71F0; } }
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
L_001A71F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 4096ull;  if (t) { goto L_001A7204; } }
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
L_001A7204:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 2048ull;  if (t) { goto L_001A7218; } }
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
L_001A7218:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1024ull;  if (t) { goto L_001A722C; } }
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
L_001A722C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 512ull;  if (t) { goto L_001A7240; } }
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
L_001A7240:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 256ull;  if (t) { goto L_001A7254; } }
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
L_001A7254:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001A7268; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
L_001A7268:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7278; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001A7278:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A7280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 27984u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001A72B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28912u);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001A72F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28852u);
    st32((c.r[3].w[0]), 0u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 28894u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001A7310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; mmi::paddub(c.r[9], c.r[4], c.r[0]);  if (t) { goto L_001A732C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A73B4; } }
L_001A732C:
    c.r[4].d[0] = ld16((c.r[9].w[0] + 4u));
    set32(c.r[7], c.r[9].w[0] + 4u);
    c.r[3].d[0] = 0ull | 65472ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[9].w[0] + 6u);  if (t) { goto L_001A7354; } }
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[9].w[0]), 0u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001A73B4; } }
L_001A7354:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001A739C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7364u); c.r[4].d[0] = ld16((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0029(c, 273u, depth + 1u); else { c.pc = 0x001A71C0u; return; } if (c.pc != 0x001A7364u) [[unlikely]] return; }
L_001A7364:
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 2u);  goto L_001A739C; }
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 6;
L_001A739C:
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[9].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_001A73B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A73C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st16((c.r[4].w[0] + 704u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 95u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A7408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A7408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28912u);
    set32(c.r[5], c.r[4].w[0] + 704u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7408u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0029(c, 277u, depth + 1u); else { c.pc = 0x001A7310u; return; } if (c.pc != 0x001A7408u) [[unlikely]] return; }
L_001A7408:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A7420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28852u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] - 28894u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7310u | kUnwind; return; } goto L_001A7310; }
L_001A7440:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001A7454; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28900u)));  if (t) { goto L_001A7460; } }
L_001A7454:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28897u)));
    c.budget -= 3;
L_001A7460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A7470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A748Cu); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A748Cu) [[unlikely]] return; }
L_001A748C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74A0u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A74A0u) [[unlikely]] return; }
L_001A74A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74B4u); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A74B4u) [[unlikely]] return; }
L_001A74B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74C8u); set32(c.r[4], c.r[2].w[0] + 512u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A74C8u) [[unlikely]] return; }
L_001A74C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74ECu); st8((c.r[2].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0070(c, 57u, depth + 1u); else { c.pc = 0x002C0AF0u; return; } if (c.pc != 0x001A74ECu) [[unlikely]] return; }
L_001A74EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74F4u);  if (depth < kMaxDepth) unit_0070(c, 48u, depth + 1u); else { c.pc = 0x002C09F0u; return; } if (c.pc != 0x001A74F4u) [[unlikely]] return; }
L_001A74F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A74FCu);  if (depth < kMaxDepth) unit_0029(c, 241u, depth + 1u); else { c.pc = 0x001A67F0u; return; } if (c.pc != 0x001A74FCu) [[unlikely]] return; }
L_001A74FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7504u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A5090u; return; } if (c.pc != 0x001A7504u) [[unlikely]] return; }
L_001A7504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A750Cu);  if (depth < kMaxDepth) unit_001E(c, 77u, depth + 1u); else { c.pc = 0x00179950u; return; } if (c.pc != 0x001A750Cu) [[unlikely]] return; }
L_001A750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7514u);  if (depth < kMaxDepth) unit_001E(c, 175u, depth + 1u); else { c.pc = 0x0017B600u; return; } if (c.pc != 0x001A7514u) [[unlikely]] return; }
L_001A7514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A751Cu);  if (depth < kMaxDepth) unit_001E(c, 121u, depth + 1u); else { c.pc = 0x0017AA80u; return; } if (c.pc != 0x001A751Cu) [[unlikely]] return; }
L_001A751C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7524u);  if (depth < kMaxDepth) unit_001E(c, 136u, depth + 1u); else { c.pc = 0x0017AE10u; return; } if (c.pc != 0x001A7524u) [[unlikely]] return; }
L_001A7524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A752Cu);  if (depth < kMaxDepth) unit_001E(c, 151u, depth + 1u); else { c.pc = 0x0017B100u; return; } if (c.pc != 0x001A752Cu) [[unlikely]] return; }
L_001A752C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7534u);  if (depth < kMaxDepth) unit_001E(c, 128u, depth + 1u); else { c.pc = 0x0017ACA0u; return; } if (c.pc != 0x001A7534u) [[unlikely]] return; }
L_001A7534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A753Cu);  if (depth < kMaxDepth) unit_001E(c, 205u, depth + 1u); else { c.pc = 0x0017BC30u; return; } if (c.pc != 0x001A753Cu) [[unlikely]] return; }
L_001A753C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7544u);  if (depth < kMaxDepth) unit_0026(c, 115u, depth + 1u); else { c.pc = 0x00199B70u; return; } if (c.pc != 0x001A7544u) [[unlikely]] return; }
L_001A7544:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A7560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[28].w[0] - 25560u);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7578u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A7578u) [[unlikely]] return; }
L_001A7578:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[28].w[0] - 25558u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25558u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7590u); c.r[4].d[0] = c.r[2].d[0] | 128ull;  if (depth < kMaxDepth) unit_001F(c, 66u, depth + 1u); else { c.pc = 0x0017CB50u; return; } if (c.pc != 0x001A7590u) [[unlikely]] return; }
L_001A7590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A759Cu); c.r[4].d[0] = c.r[2].d[0] | 8192ull;  if (depth < kMaxDepth) unit_0029(c, 308u, depth + 1u); else { c.pc = 0x001A7630u; return; } if (c.pc != 0x001A759Cu) [[unlikely]] return; }
L_001A759C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A75B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A75C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[28].w[0] - 25560u);  if (t) { goto L_001A75F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A75E8u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7780u; return; } if (c.pc != 0x001A75E8u) [[unlikely]] return; }
L_001A75E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (t) { goto L_001A761C; } }
L_001A75F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A7618; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7618u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_001F(c, 66u, depth + 1u); else { c.pc = 0x0017CB50u; return; } if (c.pc != 0x001A7618u) [[unlikely]] return; }
L_001A7618:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_001A761C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A7630:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[17], c.r[4].w[0] + 4u);
    set32(c.r[16], c.r[4].w[0] + 2048u);
    set32(c.r[20], 0u + 8960u);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001A7758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[21], c.r[2].w[0] - 28832u);
    c.budget -= 2;
L_001A7674:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7680u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 242u, depth + 1u); else { c.pc = 0x00137530u; return; } if (c.pc != 0x001A7680u) [[unlikely]] return; }
L_001A7680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001A774C; }
    set32(c.r[2], 0u - 1u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    st16((c.r[21].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 124u)));
    st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 126u)));
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 128u)));
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A76C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x001A76C8u) [[unlikely]] return; }
L_001A76C8:
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 130u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[20], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; st16((c.r[21].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A7738; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 134u)));
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 136u)));
    st16((c.r[21].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    st16((c.r[21].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 30u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 32u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7718u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));  if (depth < kMaxDepth) unit_000E(c, 113u, depth + 1u); else { c.pc = 0x001399C0u; return; } if (c.pc != 0x001A7718u) [[unlikely]] return; }
L_001A7718:
    st16((c.r[21].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[21].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 34u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_001A7738:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
L_001A774C:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7674u | kUnwind; return; } goto L_001A7674; } }
L_001A7758:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001A7780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[28].w[0] - 30456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[18], c.r[2].w[0] - 1264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[19], c.r[2].w[0] - 1072u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 24;
L_001A77E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[5], c.r[17].w[0] >> 31);
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28832u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7820u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001A7820u) [[unlikely]] return; }
L_001A7820:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A77E0u | kUnwind; return; } goto L_001A77E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7840u); set32(c.r[4], c.r[2].w[0] - 28832u);  if (depth < kMaxDepth) unit_000D(c, 284u, depth + 1u); else { c.pc = 0x00137F40u; return; } if (c.pc != 0x001A7840u) [[unlikely]] return; }
L_001A7840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A784Cu); set32(c.r[4], c.r[2].w[0] - 28768u);  if (depth < kMaxDepth) unit_000D(c, 284u, depth + 1u); else { c.pc = 0x00137F40u; return; } if (c.pc != 0x001A784Cu) [[unlikely]] return; }
L_001A784C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10288u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7860u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x001A7860u) [[unlikely]] return; }
L_001A7860:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A7880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A78B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001A78B0u) [[unlikely]] return; }
L_001A78B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A7934; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A7910; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_001A791C; } }
L_001A7910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_001A791C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    set32(c.r[3], c.r[3].w[0] + 31280u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 32528u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_001A7934:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A7950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7980u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001A7980u) [[unlikely]] return; }
L_001A7980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A7A18; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], 0u + 19u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 29376u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29380u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] + 31280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 32528u);
    st32((c.r[2].w[0] + 116u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 36;
L_001A7A18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A7A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 29424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A4000u < 16384u) { entry = entries_0029[(t - 0x001A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A7A50:
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
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 398u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 399u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[4].w[0] + 128u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.budget -= 23;
L_001A7AAC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 13;
    { const bool t = c.r[5].sd[0] <= 0; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7AACu | kUnwind; return; } goto L_001A7AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_001A7B04; } }
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_001A7AEC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.budget -= 6;
L_001A7B04:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7AECu | kUnwind; return; } goto L_001A7AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001A7B58; } }
L_001A7B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7B24u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001A7B24u) [[unlikely]] return; }
L_001A7B24:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.hi.d[0];
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
L_001A7B58:
    c.r[19].d[0] = c.r[18].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7B1Cu | kUnwind; return; } goto L_001A7B1C; } }
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001A7BD8; } }
L_001A7B80:
    st32((c.r[18].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[22], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[2], 0u + 120u);
    st8((c.r[22].w[0] + 72u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7BA4u); st8((c.r[22].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001A7BA4u) [[unlikely]] return; }
L_001A7BA4:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 8);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 5u);
    st8((c.r[22].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[23].w[0] + 1u);
    c.r[23].d[0] = c.r[3].d[0] << 56;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.budget -= 13;
L_001A7BD8:
    c.r[21].d[0] = c.r[23].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7B80u | kUnwind; return; } goto L_001A7B80; } }
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
L_001A7C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[3], c.r[0]);  if (t) { goto L_001A7F18; } }
    set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 1;
L_001A7C4C:
    c.r[9].d[0] = ld8((c.r[11].w[0] + 78u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 78u);  if (t) { goto L_001A7C88; } }
    c.r[9].d[0] = ld8((c.r[11].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] + 72u);  if (t) { goto L_001A7C88; } }
    c.r[9].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001A7F04; }
    set32(c.r[9], 0u + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 3;
L_001A7C88:
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 75u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st8((c.r[11].w[0] + 75u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] + 75u);  if (t) { goto L_001A7CA8; } }
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001A7CA8:
    c.r[12].d[0] = ld8((c.r[11].w[0] + 81u));
    set32(c.r[10], c.r[11].w[0] + 81u);
    set32(c.r[11], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[12].d[0] == c.r[11].d[0];  if (t) { goto L_001A7D98; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[11].d[0];  if (t) { goto L_001A7D38; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_001A7CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[7].w[0] + 24u));  if (t) { goto L_001A7DFC; } }
L_001A7CD8:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 116ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A7D08; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[11].d[0] = c.r[11].d[0] | 52429ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.budget -= 8;
L_001A7D08:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A7DF8; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[11].d[0] = c.r[11].d[0] | 34953ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 48u), c.f[0]);  if (t) { goto L_001A7DF8; } }
L_001A7D38:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 116ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A7D68; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    c.r[11].d[0] = c.r[11].d[0] | 55050ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.budget -= 8;
L_001A7D68:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A7DF8; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBCEA0000u);
    c.r[11].d[0] = c.r[11].d[0] | 3745ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 48u), c.f[0]);  if (t) { goto L_001A7DF8; } }
L_001A7D98:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 116ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A7DC8; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[11].d[0] = c.r[11].d[0] | 49808ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.budget -= 8;
L_001A7DC8:
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[11].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A7DF8; } }
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0xBC940000u);
    c.r[11].d[0] = c.r[11].d[0] | 61961ull;
    c.f[0] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.budget -= 8;
L_001A7DF8:
    c.f[0] = ld32((c.r[7].w[0] + 24u));
    c.budget -= 1;
L_001A7DFC:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3B880000u);
    c.r[11].d[0] = c.r[11].d[0] | 34953ull;
    c.f[1] = c.r[11].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = c.r[9].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A7EE8; } }
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[9], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_001A7EB4; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_001A7E94; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001A7E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = ld8((c.r[8].w[0]));  if (t) { goto L_001A7EEC; } }
L_001A7E5C:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBCBC0000u);
    c.r[9].d[0] = c.r[9].d[0] | 27263ull;
    c.f[0] = c.r[9].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3DC40000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[9].d[0] = c.r[9].d[0] | 39846ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_001A7EE8; } }
L_001A7E94:
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3E390000u);
    c.r[9].d[0] = c.r[9].d[0] | 22545ull;
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_001A7EE8; } }
L_001A7EB4:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3C650000u);
    c.r[9].d[0] = c.r[9].d[0] | 24641ull;
    c.f[0] = c.r[9].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3CE50000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[9].d[0] = c.r[9].d[0] | 24641ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 13;
L_001A7EE8:
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 1;
L_001A7EEC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001A7F00; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_001A7F00:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001A7F04:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_001A7F18:
    c.r[9].d[0] = c.r[4].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[8].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[11], c.r[3].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A7C4Cu | kUnwind; return; } goto L_001A7C4C; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A7F50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A7F94; } }
L_001A7F50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A7F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F68u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A7F68u) [[unlikely]] return; }
L_001A7F68:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F74u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001A7F74u) [[unlikely]] return; }
L_001A7F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F7Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001A7F7Cu) [[unlikely]] return; }
L_001A7F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F84u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001A7F84u) [[unlikely]] return; }
L_001A7F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A7F8Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A7F8Cu) [[unlikely]] return; }
L_001A7F8C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A7F94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A7FB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001A7FC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001A7FD0:
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
    c.budget -= 12;
    [[clang::musttail]] return unit_002A(c, 1u, depth);
}

}
