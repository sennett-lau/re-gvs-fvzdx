#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0030[4096] = {
    1, 2, 3, 0, 0, 0, 4, 5, 6, 0, 0, 7, 8, 0, 0, 0, 9, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0,
    151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0030(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C0000;
    case 2u: goto L_001C0004;
    case 3u: goto L_001C0008;
    case 4u: goto L_001C0018;
    case 5u: goto L_001C001C;
    case 6u: goto L_001C0020;
    case 7u: goto L_001C002C;
    case 8u: goto L_001C0030;
    case 9u: goto L_001C0040;
    case 10u: goto L_001C0048;
    case 11u: goto L_001C004C;
    case 12u: goto L_001C0078;
    case 13u: goto L_001C0114;
    case 14u: goto L_001C0118;
    case 15u: goto L_001C0188;
    case 16u: goto L_001C01B0;
    case 17u: goto L_001C01C0;
    case 18u: goto L_001C020C;
    case 19u: goto L_001C0228;
    case 20u: goto L_001C0248;
    case 21u: goto L_001C0280;
    case 22u: goto L_001C02A0;
    case 23u: goto L_001C02AC;
    case 24u: goto L_001C0310;
    case 25u: goto L_001C0320;
    case 26u: goto L_001C0330;
    case 27u: goto L_001C0340;
    case 28u: goto L_001C0350;
    case 29u: goto L_001C0360;
    case 30u: goto L_001C0370;
    case 31u: goto L_001C0388;
    case 32u: goto L_001C03C0;
    case 33u: goto L_001C03D0;
    case 34u: goto L_001C0400;
    case 35u: goto L_001C0420;
    case 36u: goto L_001C0434;
    case 37u: goto L_001C0454;
    case 38u: goto L_001C0480;
    case 39u: goto L_001C0490;
    case 40u: goto L_001C0498;
    case 41u: goto L_001C04B0;
    case 42u: goto L_001C04C4;
    case 43u: goto L_001C04EC;
    case 44u: goto L_001C0514;
    case 45u: goto L_001C052C;
    case 46u: goto L_001C05A0;
    case 47u: goto L_001C0688;
    case 48u: goto L_001C06B0;
    case 49u: goto L_001C06E0;
    case 50u: goto L_001C06F0;
    case 51u: goto L_001C0718;
    case 52u: goto L_001C0740;
    case 53u: goto L_001C07E0;
    case 54u: goto L_001C0870;
    case 55u: goto L_001C08A4;
    case 56u: goto L_001C08D0;
    case 57u: goto L_001C0924;
    case 58u: goto L_001C0950;
    case 59u: goto L_001C097C;
    case 60u: goto L_001C09A0;
    case 61u: goto L_001C09C8;
    case 62u: goto L_001C0A10;
    case 63u: goto L_001C0A1C;
    case 64u: goto L_001C0A50;
    case 65u: goto L_001C0A70;
    case 66u: goto L_001C0AA0;
    case 67u: goto L_001C0AC0;
    case 68u: goto L_001C0AE4;
    case 69u: goto L_001C0B10;
    case 70u: goto L_001C0B30;
    case 71u: goto L_001C0B54;
    case 72u: goto L_001C0B70;
    case 73u: goto L_001C0B8C;
    case 74u: goto L_001C0C00;
    case 75u: goto L_001C0C10;
    case 76u: goto L_001C0C30;
    case 77u: goto L_001C0C40;
    case 78u: goto L_001C0C58;
    case 79u: goto L_001C0C70;
    case 80u: goto L_001C0C90;
    case 81u: goto L_001C0C9C;
    case 82u: goto L_001C0CC0;
    case 83u: goto L_001C0CD4;
    case 84u: goto L_001C0D80;
    case 85u: goto L_001C0DF0;
    case 86u: goto L_001C0E08;
    case 87u: goto L_001C0E60;
    case 88u: goto L_001C0E74;
    case 89u: goto L_001C0EC0;
    case 90u: goto L_001C0F20;
    case 91u: goto L_001C0F30;
    case 92u: goto L_001C0F70;
    case 93u: goto L_001C0F80;
    case 94u: goto L_001C0FB0;
    case 95u: goto L_001C0FC0;
    case 96u: goto L_001C0FC8;
    case 97u: goto L_001C0FD0;
    case 98u: goto L_001C0FE4;
    case 99u: goto L_001C1000;
    case 100u: goto L_001C101C;
    case 101u: goto L_001C1030;
    case 102u: goto L_001C1040;
    case 103u: goto L_001C1070;
    case 104u: goto L_001C107C;
    case 105u: goto L_001C10A0;
    case 106u: goto L_001C10AC;
    case 107u: goto L_001C10F0;
    case 108u: goto L_001C1120;
    case 109u: goto L_001C113C;
    case 110u: goto L_001C1160;
    case 111u: goto L_001C1170;
    case 112u: goto L_001C11A4;
    case 113u: goto L_001C11D0;
    case 114u: goto L_001C1208;
    case 115u: goto L_001C1230;
    case 116u: goto L_001C1250;
    case 117u: goto L_001C12D0;
    case 118u: goto L_001C1344;
    case 119u: goto L_001C136C;
    case 120u: goto L_001C138C;
    case 121u: goto L_001C13AC;
    case 122u: goto L_001C13EC;
    case 123u: goto L_001C1400;
    case 124u: goto L_001C1440;
    case 125u: goto L_001C1470;
    case 126u: goto L_001C1490;
    case 127u: goto L_001C14B8;
    case 128u: goto L_001C14D8;
    case 129u: goto L_001C14E0;
    case 130u: goto L_001C1508;
    case 131u: goto L_001C1528;
    case 132u: goto L_001C1530;
    case 133u: goto L_001C15C0;
    case 134u: goto L_001C15D0;
    case 135u: goto L_001C15F8;
    case 136u: goto L_001C1620;
    case 137u: goto L_001C1660;
    case 138u: goto L_001C1690;
    case 139u: goto L_001C16D4;
    case 140u: goto L_001C16F0;
    case 141u: goto L_001C1758;
    case 142u: goto L_001C179C;
    case 143u: goto L_001C17C0;
    case 144u: goto L_001C1850;
    case 145u: goto L_001C1890;
    case 146u: goto L_001C18B8;
    case 147u: goto L_001C18DC;
    case 148u: goto L_001C18E4;
    case 149u: goto L_001C18EC;
    case 150u: goto L_001C18F4;
    case 151u: goto L_001C1900;
    case 152u: goto L_001C190C;
    case 153u: goto L_001C1924;
    case 154u: goto L_001C1934;
    case 155u: goto L_001C1970;
    case 156u: goto L_001C19C0;
    case 157u: goto L_001C19E4;
    case 158u: goto L_001C1A04;
    case 159u: goto L_001C1A40;
    case 160u: goto L_001C1A80;
    case 161u: goto L_001C1ACC;
    case 162u: goto L_001C1B10;
    case 163u: goto L_001C1B40;
    case 164u: goto L_001C1B64;
    case 165u: goto L_001C1B84;
    case 166u: goto L_001C1BE4;
    case 167u: goto L_001C1C20;
    case 168u: goto L_001C1C60;
    case 169u: goto L_001C1C84;
    case 170u: goto L_001C1CAC;
    case 171u: goto L_001C1CCC;
    case 172u: goto L_001C1CEC;
    case 173u: goto L_001C1D14;
    case 174u: goto L_001C1D40;
    case 175u: goto L_001C1D50;
    case 176u: goto L_001C1D6C;
    case 177u: goto L_001C1D74;
    case 178u: goto L_001C1DC0;
    case 179u: goto L_001C1DDC;
    case 180u: goto L_001C1DE4;
    case 181u: goto L_001C1E40;
    case 182u: goto L_001C1E4C;
    case 183u: goto L_001C1E90;
    case 184u: goto L_001C1E98;
    case 185u: goto L_001C1EF0;
    case 186u: goto L_001C1F40;
    case 187u: goto L_001C1F54;
    case 188u: goto L_001C1F5C;
    case 189u: goto L_001C1F90;
    case 190u: goto L_001C1FD0;
    case 191u: goto L_001C2020;
    case 192u: goto L_001C202C;
    case 193u: goto L_001C2060;
    case 194u: goto L_001C2094;
    case 195u: goto L_001C20C8;
    case 196u: goto L_001C20E0;
    case 197u: goto L_001C2100;
    case 198u: goto L_001C2140;
    case 199u: goto L_001C218C;
    case 200u: goto L_001C21CC;
    case 201u: goto L_001C21F0;
    case 202u: goto L_001C2208;
    case 203u: goto L_001C2274;
    case 204u: goto L_001C2298;
    case 205u: goto L_001C22D8;
    case 206u: goto L_001C2324;
    case 207u: goto L_001C2338;
    case 208u: goto L_001C2354;
    case 209u: goto L_001C2360;
    case 210u: goto L_001C2388;
    case 211u: goto L_001C23C0;
    case 212u: goto L_001C23F8;
    case 213u: goto L_001C2410;
    case 214u: goto L_001C2420;
    case 215u: goto L_001C2470;
    case 216u: goto L_001C2480;
    case 217u: goto L_001C248C;
    case 218u: goto L_001C24CC;
    case 219u: goto L_001C2510;
    case 220u: goto L_001C253C;
    case 221u: goto L_001C25B0;
    case 222u: goto L_001C25EC;
    case 223u: goto L_001C25F4;
    case 224u: goto L_001C2630;
    case 225u: goto L_001C2670;
    case 226u: goto L_001C2690;
    case 227u: goto L_001C26D0;
    case 228u: goto L_001C2740;
    case 229u: goto L_001C275C;
    case 230u: goto L_001C2764;
    case 231u: goto L_001C27AC;
    case 232u: goto L_001C27C8;
    case 233u: goto L_001C27D0;
    case 234u: goto L_001C2814;
    case 235u: goto L_001C28F4;
    case 236u: goto L_001C2948;
    case 237u: goto L_001C2970;
    case 238u: goto L_001C297C;
    case 239u: goto L_001C299C;
    case 240u: goto L_001C29C8;
    case 241u: goto L_001C29EC;
    case 242u: goto L_001C2A20;
    case 243u: goto L_001C2A38;
    case 244u: goto L_001C2A68;
    case 245u: goto L_001C2AA0;
    case 246u: goto L_001C2ACC;
    case 247u: goto L_001C2AE4;
    case 248u: goto L_001C2B0C;
    case 249u: goto L_001C2B30;
    case 250u: goto L_001C2B3C;
    case 251u: goto L_001C2B58;
    case 252u: goto L_001C2B80;
    case 253u: goto L_001C2BA0;
    case 254u: goto L_001C2BB8;
    case 255u: goto L_001C2BF0;
    case 256u: goto L_001C2BFC;
    case 257u: goto L_001C2C40;
    case 258u: goto L_001C2C80;
    case 259u: goto L_001C2C88;
    case 260u: goto L_001C2D10;
    case 261u: goto L_001C2D30;
    case 262u: goto L_001C2D60;
    case 263u: goto L_001C2D84;
    case 264u: goto L_001C2DE0;
    case 265u: goto L_001C2E00;
    case 266u: goto L_001C2E50;
    case 267u: goto L_001C2E5C;
    case 268u: goto L_001C2E7C;
    case 269u: goto L_001C2EA0;
    case 270u: goto L_001C2EC4;
    case 271u: goto L_001C2EE4;
    case 272u: goto L_001C2F08;
    case 273u: goto L_001C2F1C;
    case 274u: goto L_001C2F38;
    case 275u: goto L_001C2F90;
    case 276u: goto L_001C2FE0;
    case 277u: goto L_001C3004;
    case 278u: goto L_001C300C;
    case 279u: goto L_001C3074;
    case 280u: goto L_001C3088;
    case 281u: goto L_001C30B0;
    case 282u: goto L_001C30C0;
    case 283u: goto L_001C3130;
    case 284u: goto L_001C3160;
    case 285u: goto L_001C31A0;
    case 286u: goto L_001C31C8;
    case 287u: goto L_001C31D0;
    case 288u: goto L_001C3200;
    case 289u: goto L_001C3238;
    case 290u: goto L_001C3258;
    case 291u: goto L_001C3280;
    case 292u: goto L_001C32F0;
    case 293u: goto L_001C3330;
    case 294u: goto L_001C33BC;
    case 295u: goto L_001C33E0;
    case 296u: goto L_001C3470;
    case 297u: goto L_001C351C;
    case 298u: goto L_001C3534;
    case 299u: goto L_001C3544;
    case 300u: goto L_001C357C;
    case 301u: goto L_001C3588;
    case 302u: goto L_001C35A8;
    case 303u: goto L_001C35DC;
    case 304u: goto L_001C35F0;
    case 305u: goto L_001C364C;
    case 306u: goto L_001C3664;
    case 307u: goto L_001C3698;
    case 308u: goto L_001C36AC;
    case 309u: goto L_001C36C0;
    case 310u: goto L_001C3750;
    case 311u: goto L_001C3830;
    case 312u: goto L_001C38E0;
    case 313u: goto L_001C3940;
    case 314u: goto L_001C3948;
    case 315u: goto L_001C3958;
    case 316u: goto L_001C3984;
    case 317u: goto L_001C3A28;
    case 318u: goto L_001C3A4C;
    case 319u: goto L_001C3A70;
    case 320u: goto L_001C3AA0;
    case 321u: goto L_001C3AD0;
    case 322u: goto L_001C3B0C;
    case 323u: goto L_001C3B18;
    case 324u: goto L_001C3B2C;
    case 325u: goto L_001C3B38;
    case 326u: goto L_001C3B40;
    case 327u: goto L_001C3B60;
    case 328u: goto L_001C3B74;
    case 329u: goto L_001C3BB4;
    case 330u: goto L_001C3BD0;
    case 331u: goto L_001C3C20;
    case 332u: goto L_001C3C38;
    case 333u: goto L_001C3C48;
    case 334u: goto L_001C3C58;
    case 335u: goto L_001C3C78;
    case 336u: goto L_001C3CBC;
    case 337u: goto L_001C3CC4;
    case 338u: goto L_001C3CE0;
    case 339u: goto L_001C3D10;
    case 340u: goto L_001C3D18;
    case 341u: goto L_001C3D70;
    case 342u: goto L_001C3D98;
    case 343u: goto L_001C3DB4;
    case 344u: goto L_001C3DCC;
    case 345u: goto L_001C3DDC;
    case 346u: goto L_001C3E10;
    case 347u: goto L_001C3E80;
    case 348u: goto L_001C3E98;
    case 349u: goto L_001C3EA0;
    case 350u: goto L_001C3ED0;
    case 351u: goto L_001C3EE4;
    case 352u: goto L_001C3F20;
    case 353u: goto L_001C3F68;
    case 354u: goto L_001C3F70;
    case 355u: goto L_001C3F94;
    case 356u: goto L_001C3FC8;
    case 357u: goto L_001C3FD0;
    case 358u: goto L_001C3FE0;
    default: bad_entry(c, 0x001C0000u); return;
    }
L_001C0000:
    set32(c.r[24], c.r[11].w[0] - 48u);
    c.budget -= 1;
L_001C0004:
    set32(c.r[11], ld32((c.r[12].w[0])));
    c.budget -= 1;
L_001C0008:
    set32(c.r[14], c.r[24].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[14].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
L_001C0018:
    set32(c.r[11], ld32((c.r[12].w[0])));
    c.budget -= 1;
L_001C001C:
    set32(c.r[11], c.r[11].w[0] + c.r[14].w[0]);
    c.budget -= 1;
L_001C0020:
    c.r[11].d[0] = ld8((c.r[11].w[0] + 1u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_001C0180; } }
    goto L_001C0030;
L_001C002C:
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 1;
L_001C0030:
    set32(c.r[11], c.r[13].w[0] - c.r[10].w[0]);
    set32(c.r[15], c.r[11].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] >= 0; c.r[11].d[0] = c.r[15].d[0] & 3ull;  if (t) { goto L_001C004C; } }
L_001C0040:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001C004C; } }
L_001C0048:
    set32(c.r[11], c.r[11].w[0] - 4u);
    c.budget -= 1;
L_001C004C:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull;  if (t) { goto L_001C00D8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_001C0078; } }
    c.budget -= 2;
    { const bool t = c.r[24].d[0] != c.r[3].d[0];  if (t) { goto L_001C0078; } }
    set32(c.r[14], c.r[11].w[0] - 1u);
    c.r[1].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C00D8; } }
    c.budget -= 1;
L_001C0078:
    c.budget -= 2;
    { const bool t = c.r[24].sd[0] <= 0; set32(c.r[14], 0u + 1u);  if (t) { goto L_001C00A4; } }
    c.r[1].d[0] = c.r[24].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[14], c.r[7].w[0] - 1u);  if (t) { goto L_001C0098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C00A0; } }
    set32(c.r[14], c.r[7].w[0] - 1u);
    c.budget -= 1;
L_001C0098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] << 2);  if (t) { goto L_001C00A8; } }
L_001C00A0:
    set32(c.r[14], 0u + 1u);
    c.budget -= 1;
L_001C00A4:
    set32(c.r[14], c.r[14].w[0] << 2);
    c.budget -= 1;
L_001C00A8:
    set32(c.r[25], c.r[2].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[31], c.r[24].w[0] << 1);
    set32(c.r[14], c.r[14].w[0] + c.r[31].w[0]);
    c.r[14].d[0] = ld8((c.r[14].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[14], c.r[14].w[0] + c.r[31].w[0]);
    c.r[14].d[0] = ld8((c.r[14].w[0] + 1u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 12;
L_001C00D8:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_001C0184; }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001C00F0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_001C0180; } }
L_001C00F0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001C0100; } }
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull;  if (t) { goto L_001C0180; } }
L_001C0100:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001C0120; } }
    c.budget -= 2;
    { const bool t = c.r[15].sd[0] >= 0; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));  if (t) { goto L_001C0118; } }
    set32(c.r[14], c.r[15].w[0] + 3u);
    c.budget -= 1;
L_001C0114:
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 2));
    c.budget -= 1;
L_001C0118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + 6u);  if (t) { goto L_001C0148; } }
L_001C0120:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[3].d[0]; set32(c.r[14], c.r[11].w[0] + 3u);  if (t) { goto L_001C0148; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; mmi::paddub(c.r[14], c.r[0], c.r[0]);  if (t) { goto L_001C013C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 4u);  if (t) { goto L_001C013C; } }
    mmi::paddub(c.r[14], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[14].w[0] << 1);  if (t) { goto L_001C014C; } }
    set32(c.r[14], c.r[11].w[0] + 3u);
    c.budget -= 1;
L_001C0148:
    set32(c.r[15], c.r[14].w[0] << 1);
    c.budget -= 1;
L_001C014C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[14], ld32((c.r[1].w[0] - 4224u)));
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[14].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], ld32((c.r[1].w[0] - 4224u)));
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[14].w[0] + 1u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 12;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_001C0180; } }
    mmi::paddub(c.r[9], c.r[8], c.r[0]);
    c.budget -= 1;
L_001C0180:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001C0184:
    c.budget -= 1;
L_001C0188:
    c.r[11].d[0] = c.r[10].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[11], c.r[4].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFFF4u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 377u, depth); } }
    set32(c.r[2], c.r[6].w[0] + 5u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[8].w[0] + 1u);  if (t) { goto L_001C01AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C01B0; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001C01AC:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001C01B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C01C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (t) { goto L_001C0200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001C0274; } }
L_001C0200:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C020Cu); set32(c.r[7], ld32((c.r[28].w[0] - 25480u)));  if (depth < kMaxDepth) unit_002F(c, 375u, depth + 1u); else { c.pc = 0x001BFF80u; return; } if (c.pc != 0x001C020Cu) [[unlikely]] return; }
L_001C020C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C0228; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 5;
L_001C0228:
    set32(c.r[2], ld32((c.r[28].w[0] - 25480u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001C0264; }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0248u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 375u, depth + 1u); else { c.pc = 0x001BFF80u; return; } if (c.pc != 0x001C0248u) [[unlikely]] return; }
L_001C0248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0260; } }
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001C0260:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001C0264:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0228u | kUnwind; return; } goto L_001C0228; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C0274:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 3;
L_001C0280:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C02A0:
    mmi::paddub(c.r[2], c.r[6], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { goto L_001C02F8; } }
L_001C02AC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[7].d[0] << 56;  goto L_001C02D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C02FC; } }
    c.r[2].d[0] = c.r[7].d[0] << 56;
    c.budget -= 1;
L_001C02D0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[6], c.r[0]);  if (t) { goto L_001C02E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C02FC; } }
    mmi::paddub(c.r[2], c.r[6], c.r[0]);
    c.budget -= 1;
L_001C02E8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C02ACu | kUnwind; return; } goto L_001C02AC; } }
L_001C02F8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C02FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0310:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCFB0u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 111u, depth); }
L_001C0320:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD010u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 113u, depth); }
L_001C0330:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD090u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 115u, depth); }
L_001C0340:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD000u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 112u, depth); }
L_001C0350:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD110u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 117u, depth); }
L_001C0360:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[2].w[0] - 28464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118760u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 36u, depth); }
L_001C0370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 30308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0388u); set32(c.r[4], c.r[2].w[0] - 28464u);  if (depth < kMaxDepth) unit_0030(c, 24u, depth + 1u); else { c.pc = 0x001C0310u; return; } if (c.pc != 0x001C0388u) [[unlikely]] return; }
L_001C0388:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C03A0; } }
    st32((c.r[28].w[0] - 30312u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C03A8; } }
L_001C03A0:
    st32((c.r[28].w[0] - 30312u), c.r[2].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C03A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C03C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C03D0u); set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));  if (depth < kMaxDepth) unit_0030(c, 27u, depth + 1u); else { c.pc = 0x001C0340u; return; } if (c.pc != 0x001C03D0u) [[unlikely]] return; }
L_001C03D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C03E8; } }
    st32((c.r[28].w[0] - 30312u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C03F0; } }
L_001C03E8:
    st32((c.r[28].w[0] - 30312u), c.r[3].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C03F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C0400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0420u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 28u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001C0420u) [[unlikely]] return; }
L_001C0420:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C046C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0434u);  if (depth < kMaxDepth) unit_0030(c, 30u, depth + 1u); else { c.pc = 0x001C0370u; return; } if (c.pc != 0x001C0434u) [[unlikely]] return; }
L_001C0434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C046C; } }
L_001C0444:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0454u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 28u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001C0454u) [[unlikely]] return; }
L_001C0454:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C0468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C046C; } }
L_001C0468:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C046C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0490u);  if (depth < kMaxDepth) unit_0030(c, 64u, depth + 1u); else { c.pc = 0x001C0A50u; return; } if (c.pc != 0x001C0490u) [[unlikely]] return; }
L_001C0490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0498u);  if (depth < kMaxDepth) unit_0030(c, 80u, depth + 1u); else { c.pc = 0x001C0C90u; return; } if (c.pc != 0x001C0498u) [[unlikely]] return; }
L_001C0498:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C04B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C04C4u) [[unlikely]] return; }
L_001C04C4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C04D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C058C; } }
L_001C04D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 12896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C04ECu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0030(c, 25u, depth + 1u); else { c.pc = 0x001C0320u; return; } if (c.pc != 0x001C04ECu) [[unlikely]] return; }
L_001C04EC:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C0500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C058C; } }
L_001C0500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[2].w[0] - 12896u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0514u); set32(c.r[4], c.r[2].w[0] - 4208u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C0514u) [[unlikely]] return; }
L_001C0514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] - 12896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] - 4208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C052Cu); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C052Cu) [[unlikely]] return; }
L_001C052C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C053C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C058C; } }
L_001C053C:
    st32((c.r[28].w[0] - 25460u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 46u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25456u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 49u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25440u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25468u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 53u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25480u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25472u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25476u), 0u);
    c.budget -= 20;
L_001C058C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C05A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], c.r[2].w[0] - 12848u);
    set32(c.r[5], ld32((c.r[28].w[0] - 25440u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25468u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001C05E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25480u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25472u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C05E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C05E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C06C8; } }
L_001C05E4:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_001C05E8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001C05FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C05FC; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001C05FC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25440u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_001C0614; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001C0614:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25484u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C0630; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0630; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001C0630:
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25484u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_001C0648; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001C0648:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25480u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001C0664; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0664; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001C0664:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25480u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_001C067C; } }
    set32(c.r[2], c.r[3].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001C067C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0688u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C0688u) [[unlikely]] return; }
L_001C0688:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C069C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C06C8; } }
L_001C069C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 12896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06B0u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0030(c, 26u, depth + 1u); else { c.pc = 0x001C0330u; return; } if (c.pc != 0x001C06B0u) [[unlikely]] return; }
L_001C06B0:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C06C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C06C8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C06C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C06E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C06F0u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C06F0u) [[unlikely]] return; }
L_001C06F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C0704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C0730; } }
L_001C0704:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 16992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0718u); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0030(c, 25u, depth + 1u); else { c.pc = 0x001C0320u; return; } if (c.pc != 0x001C0718u) [[unlikely]] return; }
L_001C0718:
    set32(c.r[3], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C0730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0730; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C0730:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C0740:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] - 161u);  if (t) { goto L_001C075C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C07D4; } }
    set32(c.r[6], c.r[2].w[0] - 161u);
    c.budget -= 1;
L_001C075C:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C0778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C0794; } }
L_001C0778:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - 160u);  goto L_001C0794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C07D4; } }
    set32(c.r[2], c.r[2].w[0] - 160u);
    c.budget -= 1;
L_001C0794:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C07D4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C07D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C07E0:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C0860; } }
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[6].w[0] - 161u);  if (t) { goto L_001C080C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001C0820; } }
L_001C080C:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = c.r[4].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C0860; } }
    set32(c.r[3], c.r[4].w[0] - 160u);
    c.budget -= 1;
L_001C0820:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[4], c.r[7].w[0] << (c.r[4].w[0] & 31u));
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30304u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[28].w[0] - 25476u), c.r[7].w[0]);
    c.budget -= 16;
L_001C0860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 25460u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 25456u)));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_001C0908; } }
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_001C08A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001C08B4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001C08B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C08D0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C08D0u) [[unlikely]] return; }
L_001C08D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C08E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[19], c.r[0]);  if (t) { goto L_001C0934; } }
L_001C08E0:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { mmi::paddub(c.r[16], c.r[19], c.r[0]);  goto L_001C08F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[19], c.r[0]);  if (t) { goto L_001C08F8; } }
    mmi::paddub(c.r[16], c.r[19], c.r[0]);
    c.budget -= 1;
L_001C08F4:
    c.budget -= 1;
L_001C08F8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C08A4u | kUnwind; return; } goto L_001C08A4; } }
L_001C0908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0924u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C0924u) [[unlikely]] return; }
L_001C0924:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001C0930; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001C0930:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 1;
L_001C0934:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C0950:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C097Cu); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 62u, depth + 1u); else { c.pc = 0x001C0A10u; return; } if (c.pc != 0x001C097Cu) [[unlikely]] return; }
L_001C097C:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_001C09A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16992u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C09C8u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 62u, depth + 1u); else { c.pc = 0x001C0A10u; return; } if (c.pc != 0x001C09C8u) [[unlikely]] return; }
L_001C09C8:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_001C09E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001C09FC; } }
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001C09E0:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001C09F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C09F8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001C09F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C09FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0A10:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C0A48; } }
L_001C0A1C:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001C0A48; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001C0A48; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0A1Cu | kUnwind; return; } goto L_001C0A1C; } }
L_001C0A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0A50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 27360u);
    st32((c.r[28].w[0] - 25464u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[3].w[0] - 27360u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] - 18036u);
    c.budget -= 8;
L_001C0A70:
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + 1036u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1036u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0A70u | kUnwind; return; } goto L_001C0A70; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 8u), 0u);  c.pc = t; return; }
L_001C0AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AC0u); c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(13312ll);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C0AC0u) [[unlikely]] return; }
L_001C0AC0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C0AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C0AFC; } }
L_001C0AD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0AE4u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0030(c, 26u, depth + 1u); else { c.pc = 0x001C0330u; return; } if (c.pc != 0x001C0AE4u) [[unlikely]] return; }
L_001C0AE4:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C0AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0AFC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C0AFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] << 10;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B30u); c.r[4].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(13312ll);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C0B30u) [[unlikely]] return; }
L_001C0B30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C0B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C0B58; } }
L_001C0B44:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0B54u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0030(c, 25u, depth + 1u); else { c.pc = 0x001C0320u; return; } if (c.pc != 0x001C0B54u) [[unlikely]] return; }
L_001C0B54:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C0B58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25464u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 7;
L_001C0B8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001C0BC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 12u);  if (t) { goto L_001C0BB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25464u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 25464u), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 6;
L_001C0BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001C0C18; } }
L_001C0BC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C0BD8; } }
    mmi::paddub(c.r[3], c.r[16], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0B8Cu | kUnwind; return; } goto L_001C0B8C; } }
L_001C0BD8:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 25464u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25464u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C0C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 66u, depth + 1u); else { c.pc = 0x001C0AA0u; return; } if (c.pc != 0x001C0C00u) [[unlikely]] return; }
L_001C0C00:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C10u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0030(c, 69u, depth + 1u); else { c.pc = 0x001C0B10u; return; } if (c.pc != 0x001C0C10u) [[unlikely]] return; }
L_001C0C10:
    set32(c.r[2], c.r[16].w[0] + 12u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 2;
L_001C0C18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C0C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 25464u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  c.pc = t; return; }
L_001C0C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25464u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C0C80; } }
L_001C0C58:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C0C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0C70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 66u, depth + 1u); else { c.pc = 0x001C0AA0u; return; } if (c.pc != 0x001C0C70u) [[unlikely]] return; }
L_001C0C70:
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0C58u | kUnwind; return; } goto L_001C0C58; } }
    c.budget -= 1;
L_001C0C80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C0C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] - 28384u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_001C0C9C:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0C9Cu | kUnwind; return; } goto L_001C0C9C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[10], c.r[2].w[0] - 28384u);
    set32(c.r[11], 0u - 1u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[11], c.r[0]);
    c.budget -= 5;
L_001C0CD4:
    c.r[9].d[0] = ld8((c.r[10].w[0]));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001C0CF0; } }
    c.budget -= 2;
    if (c.r[11].d[0] != c.r[8].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001C0D24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[11], c.r[2], c.r[0]);  if (t) { goto L_001C0D20; } }
L_001C0CF0:
    c.r[3].d[0] = ld16((c.r[10].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001C0D20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001C0D20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001C0D20; } }
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C0D70; } }
L_001C0D20:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001C0D24:
    c.r[3].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0CD4u | kUnwind; return; } goto L_001C0CD4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_001C0D44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C0D70; } }
L_001C0D44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 28384u);
    set32(c.r[8], c.r[11].w[0] << 3);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[8].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    mmi::paddub(c.r[2], c.r[11], c.r[0]);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 11;
L_001C0D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0D80:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_001C0D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0DE0; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_001C0D98:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C0DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0DE0; } }
L_001C0DC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 8;
L_001C0DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0DF0:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_001C0E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[3].w[0] - 28384u);
    c.budget -= 2;
L_001C0E08:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001C0E4C; }
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C0E48; } }
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001C0E48; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C0E48; } }
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 1;
L_001C0E48:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001C0E4C:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0E08u | kUnwind; return; } goto L_001C0E08; } }
L_001C0E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0E60:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_001C0EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] - 28384u);
    c.budget -= 2;
L_001C0E74:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001C0EAC; }
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C0EA8; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C0EA8; } }
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_001C0EA8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001C0EAC:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0E74u | kUnwind; return; } goto L_001C0E74; } }
L_001C0EB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001C0EC0:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] << 32;  if (t) { goto L_001C0ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0F0C; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_001C0ED8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28384u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001C0F04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C0F0C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_001C0F04:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C0F0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0F20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[7], c.r[3].w[0] - 28384u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
L_001C0F30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001C0F54; }
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_001C0F54:
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0F30u | kUnwind; return; } goto L_001C0F30; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0F70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[7], c.r[3].w[0] - 28384u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
L_001C0F80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001C0F94; }
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001C0F94:
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C0F80u | kUnwind; return; } goto L_001C0F80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C0FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FC0u);  if (depth < kMaxDepth) unit_0030(c, 101u, depth + 1u); else { c.pc = 0x001C1030u; return; } if (c.pc != 0x001C0FC0u) [[unlikely]] return; }
L_001C0FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FC8u);  if (depth < kMaxDepth) unit_0030(c, 103u, depth + 1u); else { c.pc = 0x001C1070u; return; } if (c.pc != 0x001C0FC8u) [[unlikely]] return; }
L_001C0FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FD0u);  if (depth < kMaxDepth) unit_0030(c, 125u, depth + 1u); else { c.pc = 0x001C1470u; return; } if (c.pc != 0x001C0FD0u) [[unlikely]] return; }
L_001C0FD0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C0FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C0FE4u);  if (depth < kMaxDepth) unit_0030(c, 105u, depth + 1u); else { c.pc = 0x001C10A0u; return; } if (c.pc != 0x001C0FE4u) [[unlikely]] return; }
L_001C0FE4:
    st8((c.r[28].w[0] - 25452u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C1000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25452u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C101C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C101Cu);  if (depth < kMaxDepth) unit_0030(c, 133u, depth + 1u); else { c.pc = 0x001C15C0u; return; } if (c.pc != 0x001C101Cu) [[unlikely]] return; }
L_001C101C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C1030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] - 3360u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] + 728u);
    c.budget -= 4;
L_001C1040:
    set32(c.r[3], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1040u | kUnwind; return; } goto L_001C1040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 3360u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25436u), c.r[3].w[0]);  c.pc = t; return; }
L_001C1070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] - 3680u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_001C107C:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C107Cu | kUnwind; return; } goto L_001C107C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C10A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] - 11872u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_001C10AC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1024u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C10ACu | kUnwind; return; } goto L_001C10AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 11872u);
    st32((c.r[28].w[0] - 25444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 10848u);
    st32((c.r[28].w[0] - 25440u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25448u), c.r[3].w[0]);  c.pc = t; return; }
L_001C10F0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1118; } }
    c.r[1].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C1114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - 160u);  if (t) { goto L_001C1118; } }
L_001C1114:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C1118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25436u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C113C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C113Cu);  if (depth < kMaxDepth) unit_0030(c, 117u, depth + 1u); else { c.pc = 0x001C12D0u; return; } if (c.pc != 0x001C113Cu) [[unlikely]] return; }
L_001C113C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25436u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[28].w[0] - 25436u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C1160:
    set32(c.r[3], ld32((c.r[28].w[0] - 25436u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25436u), c.r[4].w[0]);  c.pc = t; return; }
L_001C1170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25448u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25444u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C11A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C11A4u);  if (depth < kMaxDepth) unit_0030(c, 117u, depth + 1u); else { c.pc = 0x001C12D0u; return; } if (c.pc != 0x001C11A4u) [[unlikely]] return; }
L_001C11A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25444u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 25444u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25444u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25444u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C11D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1208u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 107u, depth + 1u); else { c.pc = 0x001C10F0u; return; } if (c.pc != 0x001C1208u) [[unlikely]] return; }
L_001C1208:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 3680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001C1280; } }
    c.r[19].d[0] = c.r[19].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 2;
L_001C1230:
    set32(c.r[3], ld32((c.r[21].w[0])));
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1250u); mmi::paddub(c.r[6], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C1250u) [[unlikely]] return; }
L_001C1250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1268; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[22].d[0];  if (t) { goto L_001C1280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[21], c.r[0]);  if (t) { goto L_001C1274; } }
L_001C1268:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C1280; } }
    mmi::paddub(c.r[16], c.r[21], c.r[0]);
    c.budget -= 1;
L_001C1274:
    set32(c.r[21], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1230u | kUnwind; return; } goto L_001C1230; } }
L_001C1280:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[18].w[0]), c.r[21].w[0]);  if (t) { goto L_001C129C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 3680u);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001C12A0; } }
L_001C129C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001C12A0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C12D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25444u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25444u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 25444u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25444u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25440u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001C1318; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C1318; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_001C1318:
    st32((c.r[28].w[0] - 25440u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25440u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 11872u);
    set32(c.r[3], c.r[3].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25444u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 25444u)));
    set32(c.r[2], c.r[16].w[0] + 1024u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25448u), c.r[2].w[0]);  if (t) { goto L_001C13C8; } }
L_001C1344:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C13B0; } }
    c.r[6].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C136Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C136Cu) [[unlikely]] return; }
L_001C136C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C138Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 113u, depth + 1u); else { c.pc = 0x001C11D0u; return; } if (c.pc != 0x001C138Cu) [[unlikely]] return; }
L_001C138C:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001C13B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13ACu); set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_0030(c, 110u, depth + 1u); else { c.pc = 0x001C1160u; return; } if (c.pc != 0x001C13ACu) [[unlikely]] return; }
L_001C13AC:
    c.budget -= 1;
L_001C13B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001C13C8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1344u | kUnwind; return; } goto L_001C1344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C13ECu); set32(c.r[4], ld32((c.r[28].w[0] - 25440u)));  if (depth < kMaxDepth) unit_0030(c, 90u, depth + 1u); else { c.pc = 0x001C0F20u; return; } if (c.pc != 0x001C13ECu) [[unlikely]] return; }
L_001C13EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C1400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 11872u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 10));  if (t) { goto L_001C141C; } }
    set32(c.r[2], c.r[4].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_001C141C:
    set32(c.r[3], c.r[2].w[0] << 12);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] & 1023ull;  if (t) { goto L_001C1434; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  goto L_001C1438; }
    set32(c.r[2], c.r[2].w[0] - 1024u);
    c.budget -= 1;
L_001C1434:
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001C1438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1440:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] - 11872u);
    c.r[2].d[0] = c.r[4].d[0] & 4095ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001C1470:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 5120u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1490u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C1490u) [[unlikely]] return; }
L_001C1490:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C14A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C15A4; } }
L_001C14A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 11872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C14B8u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0030(c, 25u, depth + 1u); else { c.pc = 0x001C0320u; return; } if (c.pc != 0x001C14B8u) [[unlikely]] return; }
L_001C14B8:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C14CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C15A4; } }
L_001C14CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[18], c.r[2].w[0] - 11872u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_001C14D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[18], c.r[0]);  if (t) { goto L_001C1558; } }
L_001C14E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C1540; } }
    c.r[6].d[0] = c.r[19].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1508u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C1508u) [[unlikely]] return; }
L_001C1508:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 172u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1528u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 113u, depth + 1u); else { c.pc = 0x001C11D0u; return; } if (c.pc != 0x001C1528u) [[unlikely]] return; }
L_001C1528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1530u); mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 108u, depth + 1u); else { c.pc = 0x001C1120u; return; } if (c.pc != 0x001C1530u) [[unlikely]] return; }
L_001C1530:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001C1540:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001C1558:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C14E0u | kUnwind; return; } goto L_001C14E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25440u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001C1594; }
    set32(c.r[2], c.r[18].w[0] + 1024u);
    st32((c.r[28].w[0] - 25444u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 25448u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
L_001C1594:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1024u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C14D8u | kUnwind; return; } goto L_001C14D8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C15A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001C15C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15D0u); set32(c.r[4], 0u + 5120u);  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0400u; return; } if (c.pc != 0x001C15D0u) [[unlikely]] return; }
L_001C15D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C15E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001C1610; } }
L_001C15E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 30312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 11872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C15F8u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0030(c, 26u, depth + 1u); else { c.pc = 0x001C0330u; return; } if (c.pc != 0x001C15F8u) [[unlikely]] return; }
L_001C15F8:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C1610; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C1610:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C1620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001C164C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C1658; } }
L_001C164C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001C1658; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001C1658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1660u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0030(c, 175u, depth + 1u); else { c.pc = 0x001C1D50u; return; } if (c.pc != 0x001C1660u) [[unlikely]] return; }
L_001C1660:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] + 3u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001C16BC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_001C16C8; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_001C16BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_001C16CC; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001C16C8:
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_001C16CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C16D4u);  if (depth < kMaxDepth) unit_0030(c, 175u, depth + 1u); else { c.pc = 0x001C1D50u; return; } if (c.pc != 0x001C16D4u) [[unlikely]] return; }
L_001C16D4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C16F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001C1724; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C1724; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001C1724:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));  if (t) { goto L_001C1738; } }
    set32(c.r[2], c.r[5].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001C1738:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1758u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C1758u) [[unlikely]] return; }
L_001C1758:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_001C1788; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1790; } }
L_001C1788:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001C1790:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C179Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 178u, depth + 1u); else { c.pc = 0x001C1DC0u; return; } if (c.pc != 0x001C179Cu) [[unlikely]] return; }
L_001C179C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C17C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001C17F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C17F0; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001C17F0:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));  if (t) { goto L_001C1804; } }
    set32(c.r[2], c.r[5].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001C1804:
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 7u));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { goto L_001C1834; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[2].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C183C; } }
L_001C1834:
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_001C183C:
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { mmi::paddub(c.r[5], c.r[8], c.r[0]);  goto L_001C1DC0; }
L_001C1850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st8((c.r[28].w[0] - 25452u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1890u); mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 113u, depth + 1u); else { c.pc = 0x001C11D0u; return; } if (c.pc != 0x001C1890u) [[unlikely]] return; }
L_001C1890:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001C18EC; } }
    set32(c.r[5], c.r[20].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18B8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C18B8u) [[unlikely]] return; }
L_001C18B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C18EC; } }
    st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18DCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0030(c, 123u, depth + 1u); else { c.pc = 0x001C1400u; return; } if (c.pc != 0x001C18DCu) [[unlikely]] return; }
L_001C18DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18E4u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 92u, depth + 1u); else { c.pc = 0x001C0F70u; return; } if (c.pc != 0x001C18E4u) [[unlikely]] return; }
L_001C18E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18ECu); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0030(c, 110u, depth + 1u); else { c.pc = 0x001C1160u; return; } if (c.pc != 0x001C18ECu) [[unlikely]] return; }
L_001C18EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C18F4u);  if (depth < kMaxDepth) unit_0030(c, 108u, depth + 1u); else { c.pc = 0x001C1120u; return; } if (c.pc != 0x001C18F4u) [[unlikely]] return; }
L_001C18F4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1900u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 136u, depth + 1u); else { c.pc = 0x001C1620u; return; } if (c.pc != 0x001C1900u) [[unlikely]] return; }
L_001C1900:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C190Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 111u, depth + 1u); else { c.pc = 0x001C1170u; return; } if (c.pc != 0x001C190Cu) [[unlikely]] return; }
L_001C190C:
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1924u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 140u, depth + 1u); else { c.pc = 0x001C16F0u; return; } if (c.pc != 0x001C1924u) [[unlikely]] return; }
L_001C1924:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1934u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 113u, depth + 1u); else { c.pc = 0x001C11D0u; return; } if (c.pc != 0x001C1934u) [[unlikely]] return; }
L_001C1934:
    st32((c.r[16].w[0]), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C1970:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[18].d[0] = 0ull << 48;
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[22], c.r[6], c.r[0]);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C19C0u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0030(c, 107u, depth + 1u); else { c.pc = 0x001C10F0u; return; } if (c.pc != 0x001C19C0u) [[unlikely]] return; }
L_001C19C0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 3680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_001C1AA4; } }
    c.r[21].d[0] = c.r[17].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 2;
L_001C19E4:
    set32(c.r[17], ld32((c.r[16].w[0])));
    mmi::paddub(c.r[5], c.r[23], c.r[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[4], c.r[17].w[0] + 3u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A04u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 62u, depth + 1u); else { c.pc = 0x001C0A10u; return; } if (c.pc != 0x001C1A04u) [[unlikely]] return; }
L_001C1A04:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 3u);  if (t) { goto L_001C1A34; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[4], c.r[17].w[0] + 3u);
    c.budget -= 5;
L_001C1A34:
    mmi::paddub(c.r[5], c.r[23], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A40u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C1A40u) [[unlikely]] return; }
L_001C1A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1A68; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[21].d[0]; c.r[19].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_001C1A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C1AE0; } }
    c.r[19].d[0] = c.r[20].d[0] << 48;
    c.budget -= 1;
L_001C1A5C:
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[30], c.r[17], c.r[0]);  if (t) { goto L_001C1A90; } }
L_001C1A68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C1A90; } }
    set32(c.r[4], c.r[17].w[0] + 3u);
    mmi::paddub(c.r[5], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1A80u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C1A80u) [[unlikely]] return; }
L_001C1A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C1AE0; } }
L_001C1A90:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C19E4u | kUnwind; return; } goto L_001C19E4; } }
    c.budget -= 1;
L_001C1AA0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.budget -= 1;
L_001C1AA4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (t) { goto L_001C1AC4; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1AE0; } }
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 1;
L_001C1AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1ACCu); st16((c.r[22].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 123u, depth + 1u); else { c.pc = 0x001C1400u; return; } if (c.pc != 0x001C1ACCu) [[unlikely]] return; }
L_001C1ACC:
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[22].w[0] + 4u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[22].w[0] + 6u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[22].w[0] + 12u), c.r[30].w[0]);
    c.budget -= 5;
L_001C1AE0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001C1B10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 107u, depth + 1u); else { c.pc = 0x001C10F0u; return; } if (c.pc != 0x001C1B40u) [[unlikely]] return; }
L_001C1B40:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 3680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C1BC0; } }
    c.r[18].d[0] = c.r[18].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_001C1B64:
    set32(c.r[16], ld32((c.r[20].w[0])));
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1B84u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C1B84u) [[unlikely]] return; }
L_001C1B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C1B9C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[18].d[0];  if (t) { goto L_001C1BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_001C1BB8; } }
L_001C1B9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C1BB4; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1BF0; } }
L_001C1BB4:
    set32(c.r[20], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_001C1BB8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1B64u | kUnwind; return; } goto L_001C1B64; } }
L_001C1BC0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001C1BDC; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1BF0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001C1BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1BE4u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 123u, depth + 1u); else { c.pc = 0x001C1400u; return; } if (c.pc != 0x001C1BE4u) [[unlikely]] return; }
L_001C1BE4:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 3;
L_001C1BF0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C1C20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25440u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[17].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001C1D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C60u);  if (depth < kMaxDepth) unit_0030(c, 124u, depth + 1u); else { c.pc = 0x001C1440u; return; } if (c.pc != 0x001C1C60u) [[unlikely]] return; }
L_001C1C60:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1C84u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 111u, depth + 1u); else { c.pc = 0x001C1170u; return; } if (c.pc != 0x001C1C84u) [[unlikely]] return; }
L_001C1C84:
    set32(c.r[3], ld32((c.r[28].w[0] - 25440u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_001C1D14; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 3u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CACu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001C1CACu) [[unlikely]] return; }
L_001C1CAC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 204u);
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1CCCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 113u, depth + 1u); else { c.pc = 0x001C11D0u; return; } if (c.pc != 0x001C1CCCu) [[unlikely]] return; }
L_001C1CCC:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_001C1D14; } }
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0]), c.r[20].w[0]);  if (t) { goto L_001C1D08; } }
L_001C1CEC:
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1CECu | kUnwind; return; } goto L_001C1CEC; } }
L_001C1D08:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D14u); st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 92u, depth + 1u); else { c.pc = 0x001C0F70u; return; } if (c.pc != 0x001C1D14u) [[unlikely]] return; }
L_001C1D14:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001C1D40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 25452u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001C1D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001C1D90; } }
L_001C1D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1D74u);  if (depth < kMaxDepth) unit_0030(c, 185u, depth + 1u); else { c.pc = 0x001C1EF0u; return; } if (c.pc != 0x001C1D74u) [[unlikely]] return; }
L_001C1D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001C1D88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_001C1D88; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001C1D88:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 2;
L_001C1D90:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1D6Cu | kUnwind; return; } goto L_001C1D6C; } }
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001C1E20; } }
L_001C1DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1DE4u);  if (depth < kMaxDepth) unit_0030(c, 185u, depth + 1u); else { c.pc = 0x001C1EF0u; return; } if (c.pc != 0x001C1DE4u) [[unlikely]] return; }
L_001C1DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_001C1E04; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001C1E10; } }
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_001C1E04:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_001C1E10:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_001C1E20:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1DDCu | kUnwind; return; } goto L_001C1DDC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C1E40:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1E68; } }
L_001C1E4C:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 2u);  goto L_001C1E60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_001C1E60; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 1;
L_001C1E60:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 2;
L_001C1E68:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C1E88; } }
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1E4Cu | kUnwind; return; } goto L_001C1E4C; } }
    c.budget -= 1;
L_001C1E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 255u);  if (t) { goto L_001C1EC8; } }
L_001C1E98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001C1EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001C1EB8; } }
L_001C1EA8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_001C1EB8:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_001C1EC8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C1EE8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1E98u | kUnwind; return; } goto L_001C1E98; } }
    c.budget -= 1;
L_001C1EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001C1EF0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_001C1F10; } }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C1F28; } }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_001C1F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C1F34; } }
    c.r[1].d[0] = c.r[3].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C1F30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C1F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C1F34; } }
L_001C1F30:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C1F34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C1F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[2].w[0] + 960u);
    c.budget -= 5;
L_001C1F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C1F5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 189u, depth + 1u); else { c.pc = 0x001C1F90u; return; } if (c.pc != 0x001C1F5Cu) [[unlikely]] return; }
L_001C1F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], c.r[16].w[0] + 28u);
    set32(c.r[3], c.r[3].w[0] + 3200u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1F54u | kUnwind; return; } goto L_001C1F54; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C1F90:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001C1FD0:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001C2040; } }
L_001C2020:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C202Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 193u, depth + 1u); else { c.pc = 0x001C2060u; return; } if (c.pc != 0x001C202Cu) [[unlikely]] return; }
L_001C202C:
    set32(c.r[17], c.r[17].w[0] + 28u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2020u | kUnwind; return; } goto L_001C2020; } }
    c.budget -= 1;
L_001C2040:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C2060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001C20A8; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001C2098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2094u);  if (depth < kMaxDepth) unit_0031(c, 127u, depth + 1u); else { c.pc = 0x001C5650u; return; } if (c.pc != 0x001C2094u) [[unlikely]] return; }
L_001C2094:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001C2098:
    st32((c.r[16].w[0] + 4u), 0u);
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001C20A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C20C8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C20C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20C8u);  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x001C5700u; return; } if (c.pc != 0x001C20C8u) [[unlikely]] return; }
L_001C20C8:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C20E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C20E0u);  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C20E0u) [[unlikely]] return; }
L_001C20E0:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C2100:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 25432u), c.r[6].w[0]);
    mmi::paddub(c.r[23], c.r[7], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2140u); mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 224u, depth + 1u); else { c.pc = 0x001C2630u; return; } if (c.pc != 0x001C2140u) [[unlikely]] return; }
L_001C2140:
    set32(c.r[4], ld32((c.r[28].w[0] - 25432u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_001C2160; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25428u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C24E0; } }
    c.r[1].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C2160:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[21], c.r[0]);  if (t) { goto L_001C2378; } }
    set32(c.r[3], c.r[21].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 9;
L_001C218C:
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 21u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001C21B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001C2368; } }
L_001C21B4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C21D8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21CCu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 227u, depth + 1u); else { c.pc = 0x001C26D0u; return; } if (c.pc != 0x001C21CCu) [[unlikely]] return; }
L_001C21CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_001C237C; } }
    c.budget -= 1;
L_001C21D8:
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C21F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C21F0u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 265u, depth + 1u); else { c.pc = 0x001C2E00u; return; } if (c.pc != 0x001C21F0u) [[unlikely]] return; }
L_001C21F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2378; } }
L_001C21F8:
    set32(c.r[18], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001C22B0; } }
    c.budget -= 1;
L_001C2208:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { goto L_001C2248; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C22A0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C22B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25432u), 0u);  if (t) { goto L_001C22A0; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 1;
L_001C2248:
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2280; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2274u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 227u, depth + 1u); else { c.pc = 0x001C26D0u; return; } if (c.pc != 0x001C2274u) [[unlikely]] return; }
L_001C2274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C22B0; } }
    c.budget -= 1;
L_001C2280:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C22A0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2298u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 265u, depth + 1u); else { c.pc = 0x001C2E00u; return; } if (c.pc != 0x001C2298u) [[unlikely]] return; }
L_001C2298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C22B0; } }
L_001C22A0:
    set32(c.r[18], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2208u | kUnwind; return; } goto L_001C2208; } }
    c.budget -= 1;
L_001C22B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[21].d[0];  if (t) { goto L_001C2300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25432u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C22EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C22D8u); mmi::paddub(c.r[6], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 140u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x001C22D8u) [[unlikely]] return; }
L_001C22D8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[30].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[23], c.r[0]);  if (t) { goto L_001C2348; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C22EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_001C232C; } }
    st8((c.r[30].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[23], c.r[0]);  if (t) { goto L_001C2348; } }
L_001C2300:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001C2328; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25432u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C2328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2324u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 152u, depth + 1u); else { c.pc = 0x001C5A70u; return; } if (c.pc != 0x001C2324u) [[unlikely]] return; }
L_001C2324:
    c.budget -= 1;
L_001C2328:
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_001C232C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2338u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 140u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x001C2338u) [[unlikely]] return; }
L_001C2338:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001C2378; } }
    c.budget -= 1;
L_001C2348:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2354u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 288u, depth + 1u); else { c.pc = 0x001C3200u; return; } if (c.pc != 0x001C2354u) [[unlikely]] return; }
L_001C2354:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2360u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 312u, depth + 1u); else { c.pc = 0x001C38E0u; return; } if (c.pc != 0x001C2360u) [[unlikely]] return; }
L_001C2360:
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[22].w[0] + 21u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_001C2368:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C218Cu | kUnwind; return; } goto L_001C218C; } }
    c.budget -= 1;
L_001C2378:
    c.r[1].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C237C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C24E0; } }
    set32(c.r[3], c.r[21].w[0] << 3);
    c.budget -= 1;
L_001C2388:
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 20u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 21u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[17], c.r[0]);  if (t) { goto L_001C23B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_001C24D0; } }
L_001C23B4:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C23C0u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 219u, depth + 1u); else { c.pc = 0x001C2510u; return; } if (c.pc != 0x001C23C0u) [[unlikely]] return; }
L_001C23C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001C24E0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001C23D8; } }
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 2;
L_001C23D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0]; c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_001C23F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C24D0; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C23F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2458; } }
L_001C23F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C2410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2410u);  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x001C5700u; return; } if (c.pc != 0x001C2410u) [[unlikely]] return; }
L_001C2410:
    st32((c.r[18].w[0] + 8u), 0u);
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2420u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C2420u) [[unlikely]] return; }
L_001C2420:
    set32(c.r[3], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C23F8u | kUnwind; return; } goto L_001C23F8; } }
    c.budget -= 1;
L_001C2458:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C2470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2470u);  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x001C5700u; return; } if (c.pc != 0x001C2470u) [[unlikely]] return; }
L_001C2470:
    st32((c.r[18].w[0] + 8u), 0u);
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2480u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C2480u) [[unlikely]] return; }
L_001C2480:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C248Cu); st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C248Cu) [[unlikely]] return; }
L_001C248C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);  goto L_001C24D4; }
    set32(c.r[3], 0u + 40u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), 0u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C24CCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 312u, depth + 1u); else { c.pc = 0x001C38E0u; return; } if (c.pc != 0x001C24CCu) [[unlikely]] return; }
L_001C24CC:
    c.budget -= 1;
L_001C24D0:
    set32(c.r[21], c.r[21].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_001C24D4:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[21].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2388u | kUnwind; return; } goto L_001C2388; } }
L_001C24E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001C2510:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2590; } }
    set32(c.r[6], 0u + 40u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 2;
L_001C253C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_001C2550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C25A0; } }
L_001C2550:
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] << 3);  goto L_001C2574; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_001C2570; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001C2590; } }
L_001C2570:
    set32(c.r[3], c.r[9].w[0] << 3);
    c.budget -= 1;
L_001C2574:
    set32(c.r[3], c.r[3].w[0] - c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C253Cu | kUnwind; return; } goto L_001C253C; } }
L_001C2590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_001C25A0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);  goto L_001C25A0; }
L_001C25A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C25B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], c.r[19].w[0] + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);  if (t) { goto L_001C2614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
L_001C25EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C25F4u); c.r[4].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0030(c, 310u, depth + 1u); else { c.pc = 0x001C3750u; return; } if (c.pc != 0x001C25F4u) [[unlikely]] return; }
L_001C25F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2610; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C25ECu | kUnwind; return; } goto L_001C25EC; } }
    c.budget -= 1;
L_001C2610:
    set32(c.r[2], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_001C2614:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12848u);
    c.budget -= 16;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001C26B8; } }
L_001C2670:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_001C26AC; }
    set32(c.r[6], c.r[29].w[0] + 76u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2690u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 293u, depth + 1u); else { c.pc = 0x001C3330u; return; } if (c.pc != 0x001C2690u) [[unlikely]] return; }
L_001C2690:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C26B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
L_001C26AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2670u | kUnwind; return; } goto L_001C2670; } }
L_001C26B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C26D0:
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
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[18], c.r[21].w[0] - c.r[16].w[0]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001C2710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C2710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2740u); mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 180u, depth + 1u); else { c.pc = 0x001C6560u; return; } if (c.pc != 0x001C2740u) [[unlikely]] return; }
L_001C2740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C27A4; } }
    set32(c.r[22], 0u + 1u);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(31ll);  if (t) { goto L_001C2780; } }
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_001C275C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2764u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0031(c, 180u, depth + 1u); else { c.pc = 0x001C6560u; return; } if (c.pc != 0x001C2764u) [[unlikely]] return; }
L_001C2764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2780; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C275Cu | kUnwind; return; } goto L_001C275C; } }
    c.budget -= 1;
L_001C2780:
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_001C2A5C; } }
    c.r[2].d[0] = c.r[22].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C27A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27ACu); c.r[4].d[0] = ld8((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0031(c, 181u, depth + 1u); else { c.pc = 0x001C6580u; return; } if (c.pc != 0x001C27ACu) [[unlikely]] return; }
L_001C27AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C280C; } }
    set32(c.r[22], 0u + 1u);
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(25ll);  if (t) { goto L_001C27E8; } }
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_001C27C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C27D0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0031(c, 179u, depth + 1u); else { c.pc = 0x001C6540u; return; } if (c.pc != 0x001C27D0u) [[unlikely]] return; }
L_001C27D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C27E8; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C27C8u | kUnwind; return; } goto L_001C27C8; } }
L_001C27E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2A58; } }
    c.r[2].d[0] = c.r[22].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C280C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2814u); c.r[4].d[0] = ld8((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0031(c, 182u, depth + 1u); else { c.pc = 0x001C65A0u; return; } if (c.pc != 0x001C2814u) [[unlikely]] return; }
L_001C2814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2850; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_001C2844; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C2840:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001C2844:
    mmi::paddub(c.r[22], c.r[21], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(25ll);  if (t) { goto L_001C2B74; } }
L_001C2850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001C28A4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C28A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_001C2894; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C2890:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001C2894:
    mmi::paddub(c.r[22], c.r[21], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(41ll);  if (t) { goto L_001C2B74; } }
L_001C28A0:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_001C28A4:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C2924; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2924; } }
    set32(c.r[17], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);  if (t) { goto L_001C291C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001C28F4:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2918; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C28F4u | kUnwind; return; } goto L_001C28F4; } }
    c.budget -= 1;
L_001C2918:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);
    c.budget -= 1;
L_001C291C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));  if (t) { goto L_001C29A0; } }
L_001C2924:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001C29D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2948u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 110u, depth + 1u); else { c.pc = 0x001C51A0u; return; } if (c.pc != 0x001C2948u) [[unlikely]] return; }
L_001C2948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C29D0; } }
    set32(c.r[17], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);  if (t) { goto L_001C299C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001C2970:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C297Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0031(c, 110u, depth + 1u); else { c.pc = 0x001C51A0u; return; } if (c.pc != 0x001C297Cu) [[unlikely]] return; }
L_001C297C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2998; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2970u | kUnwind; return; } goto L_001C2970; } }
    c.budget -= 1;
L_001C2998:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);
    c.budget -= 1;
L_001C299C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.budget -= 1;
L_001C29A0:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] - c.r[16].w[0]);  if (t) { goto L_001C29C0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[21].d[0];  if (t) { goto L_001C29BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C29BC:
    set32(c.r[5], c.r[17].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_001C29C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C29C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 262u, depth + 1u); else { c.pc = 0x001C2D60u; return; } if (c.pc != 0x001C29C8u) [[unlikely]] return; }
L_001C29C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C2C14; } }
L_001C29D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_001C2A58; } }
    set32(c.r[17], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001C2A08; } }
L_001C29EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C2A08; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C29ECu | kUnwind; return; } goto L_001C29EC; } }
L_001C2A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12808u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A20u); c.r[4].d[0] = ld16((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0031(c, 111u, depth + 1u); else { c.pc = 0x001C51F0u; return; } if (c.pc != 0x001C2A20u) [[unlikely]] return; }
L_001C2A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(40ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C299Cu | kUnwind; return; } goto L_001C299C; } }
L_001C2A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2A38u); c.r[4].d[0] = ld16((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0031(c, 112u, depth + 1u); else { c.pc = 0x001C5200u; return; } if (c.pc != 0x001C2A38u) [[unlikely]] return; }
L_001C2A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);  if (t) { goto L_001C2A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(41ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C299Cu | kUnwind; return; } goto L_001C299C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(25ll);
    c.budget -= 1;
L_001C2A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C299Cu | kUnwind; return; } goto L_001C299C; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_001C2A58:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C2A5C:
    mmi::paddub(c.r[3], c.r[19], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001C2A88; } }
L_001C2A68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_001C2A88; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2A68u | kUnwind; return; } goto L_001C2A68; } }
    c.budget -= 1;
L_001C2A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[5].d[0] = c.r[21].d[0] << 48;
    set32(c.r[6], c.r[2].w[0] + 736u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2AA0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 218u, depth + 1u); else { c.pc = 0x001BE410u; return; } if (c.pc != 0x001C2AA0u) [[unlikely]] return; }
L_001C2AA0:
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C2B58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 13136u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C0000u < 16384u) { entry = entries_0030[(t - 0x001C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C2ACC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_001C2B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2C14; } }
L_001C2AE4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C2B20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 736u)));
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001C2B20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B0Cu); c.r[4].d[0] = ld64((c.r[1].w[0] + 744u));  if (depth < kMaxDepth) unit_002F(c, 369u, depth + 1u); else { c.pc = 0x001BFED0u; return; } if (c.pc != 0x001C2B0Cu) [[unlikely]] return; }
L_001C2B0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 752u)));
    mmi::paddub(c.r[21], c.r[22], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C2B74; } }
L_001C2B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 257u, depth + 1u); else { c.pc = 0x001C2C40u; return; } if (c.pc != 0x001C2B30u) [[unlikely]] return; }
L_001C2B30:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2B3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 260u, depth + 1u); else { c.pc = 0x001C2D10u; return; } if (c.pc != 0x001C2B3Cu) [[unlikely]] return; }
L_001C2B3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 752u)));
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 736u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] - 1u);  if (t) { goto L_001C2B74; } }
L_001C2B58:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C2B6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[22], c.r[0]);  if (t) { goto L_001C2B74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001C2B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001C2C14; } }
L_001C2B74:
    c.r[2].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C2B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C2C14; } }
L_001C2B80:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C2BA0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[22].d[0];  if (t) { goto L_001C2BA0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BA0u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 262u, depth + 1u); else { c.pc = 0x001C2D60u; return; } if (c.pc != 0x001C2BA0u) [[unlikely]] return; }
L_001C2BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[5].d[0] = c.r[21].d[0] << 48;
    set32(c.r[6], c.r[2].w[0] + 736u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BB8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 247u, depth + 1u); else { c.pc = 0x001BEA30u; return; } if (c.pc != 0x001C2BB8u) [[unlikely]] return; }
L_001C2BB8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_001C2C04; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C2BE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 752u)));
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001C2BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] + 736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 257u, depth + 1u); else { c.pc = 0x001C2C40u; return; } if (c.pc != 0x001C2BF0u) [[unlikely]] return; }
L_001C2BF0:
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2BFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 260u, depth + 1u); else { c.pc = 0x001C2D10u; return; } if (c.pc != 0x001C2BFCu) [[unlikely]] return; }
L_001C2BFC:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 2;
L_001C2C04:
    c.r[1].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2B80u | kUnwind; return; } goto L_001C2B80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C2C14:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C2C40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 20u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[17].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[19], c.r[5].w[0] + 22u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001C2CE8; } }
L_001C2C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2C88u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C2C88u) [[unlikely]] return; }
L_001C2C88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[20], c.r[0]);  goto L_001C2CEC; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C2CA0; } }
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 2;
L_001C2CA0:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st64((c.r[2].w[0] + 8u), c.r[17].d[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 20u), 0u);  if (t) { goto L_001C2CD0; } }
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_001C2CD0:
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    set32(c.r[19], c.r[19].w[0] + 6u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2C80u | kUnwind; return; } goto L_001C2C80; } }
    c.budget -= 1;
L_001C2CE8:
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    c.budget -= 1;
L_001C2CEC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001C2D10:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_001C2D38; } }
L_001C2D30:
    set32(c.r[3], c.r[4].w[0] + 20u);
    c.budget -= 2;
L_001C2D38:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2D30u | kUnwind; return; } goto L_001C2D30; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_001C2D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2D84u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C2D84u) [[unlikely]] return; }
L_001C2D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_001C2DE0; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[5].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 983u);
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), 0u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2DE0u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0030(c, 260u, depth + 1u); else { c.pc = 0x001C2D10u; return; } if (c.pc != 0x001C2DE0u) [[unlikely]] return; }
L_001C2DE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C2E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001C2EB0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C2EB0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001C2E50:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E5Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 275u, depth + 1u); else { c.pc = 0x001C2F90u; return; } if (c.pc != 0x001C2E5Cu) [[unlikely]] return; }
L_001C2E5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C2E8C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2E7Cu);  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x001C5700u; return; } if (c.pc != 0x001C2E7Cu) [[unlikely]] return; }
L_001C2E7C:
    st32((c.r[18].w[0] + 8u), 0u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C2E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001C2F6C; } }
L_001C2E8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2EA0; } }
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EA0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 285u, depth + 1u); else { c.pc = 0x001C31A0u; return; } if (c.pc != 0x001C2EA0u) [[unlikely]] return; }
L_001C2EA0:
    set32(c.r[19], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2E50u | kUnwind; return; } goto L_001C2E50; } }
    c.budget -= 1;
L_001C2EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[2].w[0] - 2176u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EC4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 275u, depth + 1u); else { c.pc = 0x001C2F90u; return; } if (c.pc != 0x001C2EC4u) [[unlikely]] return; }
L_001C2EC4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C2EF4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C2EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2EE4u);  if (depth < kMaxDepth) unit_0031(c, 131u, depth + 1u); else { c.pc = 0x001C5700u; return; } if (c.pc != 0x001C2EE4u) [[unlikely]] return; }
L_001C2EE4:
    st32((c.r[18].w[0] + 8u), 0u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C2EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C2F68; } }
L_001C2EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C2F08; } }
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F08u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 285u, depth + 1u); else { c.pc = 0x001C31A0u; return; } if (c.pc != 0x001C2F08u) [[unlikely]] return; }
L_001C2F08:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C2F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F1Cu);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C2F1Cu) [[unlikely]] return; }
L_001C2F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001C2F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C2F68; } }
L_001C2F2C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2F38u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 221u, depth + 1u); else { c.pc = 0x001C25B0u; return; } if (c.pc != 0x001C2F38u) [[unlikely]] return; }
L_001C2F38:
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 40u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 4u), 0u);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[19].w[0]);  if (t) { goto L_001C2F68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C2F68:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C2F6C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C2F90:
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
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    mmi::paddub(c.r[22], c.r[6], c.r[0]);
    c.r[7].d[0] = ld8((c.r[22].w[0] + 3u));
    mmi::paddub(c.r[23], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[16], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C2FE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 296u, depth + 1u); else { c.pc = 0x001C3470u; return; } if (c.pc != 0x001C2FE0u) [[unlikely]] return; }
L_001C2FE0:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_001C2FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_001C3108; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 1;
L_001C2FFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001C306C; } }
L_001C3004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C300Cu);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C300Cu) [[unlikely]] return; }
L_001C300C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3068; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C3020; } }
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 1;
L_001C3020:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[22].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_001C3058; } }
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_001C3058:
    set32(c.r[18], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; mmi::paddub(c.r[21], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3004u | kUnwind; return; } goto L_001C3004; } }
    c.budget -= 1;
L_001C3068:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001C306C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3074u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x001C5610u; return; } if (c.pc != 0x001C3074u) [[unlikely]] return; }
L_001C3074:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; mmi::paddub(c.r[2], c.r[20], c.r[0]);  if (t) { goto L_001C3104; } }
    c.r[5].d[0] = ld8((c.r[22].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3088u); c.r[4].d[0] = ld8((c.r[22].w[0] + 2u));  if (depth < kMaxDepth) unit_002F(c, 202u, depth + 1u); else { c.pc = 0x001BE060u; return; } if (c.pc != 0x001C3088u) [[unlikely]] return; }
L_001C3088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3100; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C30B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30B0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 310u, depth + 1u); else { c.pc = 0x001C3750u; return; } if (c.pc != 0x001C30B0u) [[unlikely]] return; }
L_001C30B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3100; } }
L_001C30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C30C0u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C30C0u) [[unlikely]] return; }
L_001C30C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3100; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C30D4; } }
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 1;
L_001C30D4:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 2u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 3u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[22].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_001C3100; } }
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3100:
    mmi::paddub(c.r[2], c.r[20], c.r[0]);
    c.budget -= 1;
L_001C3104:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C3108:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001C3130:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_001C3148; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C3154; } }
L_001C3148:
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[5], c.r[0]);  if (t) { goto L_001C318C; } }
L_001C3154:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (t) { goto L_001C3180; } }
L_001C3160:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3180; } }
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3160u | kUnwind; return; } goto L_001C3160; } }
L_001C3180:
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 3;
L_001C318C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C31A0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 968u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[9].w[0])));  if (t) { goto L_001C31E8; } }
L_001C31C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C31D0u); set32(c.r[8], ld32((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_0030(c, 283u, depth + 1u); else { c.pc = 0x001C3130u; return; } if (c.pc != 0x001C31D0u) [[unlikely]] return; }
L_001C31D0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[5], c.r[8], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C31C8u | kUnwind; return; } goto L_001C31C8; } }
    c.budget -= 1;
L_001C31E8:
    st32((c.r[9].w[0]), c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C3200:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[17], c.r[3].w[0] + 8u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001C3268; } }
L_001C3238:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001C324C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] + 12u);  if (t) { goto L_001C3258; } }
L_001C324C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3258u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C3258u) [[unlikely]] return; }
L_001C3258:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3238u | kUnwind; return; } goto L_001C3238; } }
    c.budget -= 1;
L_001C3268:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C3280:
    set32(c.r[2], ld32((c.r[28].w[0] - 25388u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { goto L_001C329C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C32DC; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.budget -= 1;
L_001C329C:
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[3], ld32((c.r[28].w[0] - 25508u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C32D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C32D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C32DC; } }
L_001C32D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.budget -= 2;
L_001C32DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C32F0:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 960u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C3328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C3328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C3328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3330:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001C334C; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3468; } }
L_001C334C:
    set32(c.r[2], c.r[2].w[0] - 160u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[9], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2366u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], c.r[2].w[0] - 3904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2368u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[7].w[0] - 4u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[7], c.r[7].w[0] - 3904u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[14], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = c.r[2].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001C3460; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 25432u)));
    c.r[9].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[10], c.r[7].w[0] - 4160u);
    c.budget -= 5;
L_001C33BC:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[11], c.r[4].w[0] + 1u);
    set32(c.r[13], c.r[5].w[0] - 1u);
    set32(c.r[15], 0u + 1u);
    set32(c.r[24], c.r[10].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[12], c.r[7].w[0] - 1u);
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.budget -= 9;
L_001C33E0:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_001C3400; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C33F8; } }
    mmi::paddub(c.r[3], c.r[15], c.r[0]);
    c.budget -= 1;
L_001C33F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_001C3468; } }
L_001C3400:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_001C3418; } }
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 4u);  goto L_001C3454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C3468; } }
L_001C3418:
    c.r[8].d[0] = ld8((c.r[24].w[0]));
    c.r[7].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[15], c.r[15].w[0] + 1u);  if (t) { goto L_001C343C; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C3450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[15], c.r[0]);  if (t) { goto L_001C3450; } }
L_001C343C:
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[24], c.r[24].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C33E0u | kUnwind; return; } goto L_001C33E0; } }
L_001C3450:
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_001C3454:
    c.r[1].d[0] = c.r[2].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C33BCu | kUnwind; return; } goto L_001C33BC; } }
L_001C3460:
    st32((c.r[6].w[0]), c.r[3].w[0]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001C3468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3470:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001C34CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[1].d[0] != 0) c.r[2].d[0] = 0ull;  if (t) { goto L_001C371C; } }
L_001C34CC:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 960u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001C3504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);  if (t) { goto L_001C3720; } }
L_001C3504:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_001C3568; } }
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C351Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 311u, depth + 1u); else { c.pc = 0x001C3830u; return; } if (c.pc != 0x001C351Cu) [[unlikely]] return; }
L_001C351C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_001C3568; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001C353C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3534u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 202u, depth + 1u); else { c.pc = 0x001BE060u; return; } if (c.pc != 0x001C3534u) [[unlikely]] return; }
L_001C3534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3568; } }
L_001C353C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3544u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C3544u) [[unlikely]] return; }
L_001C3544:
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8u), 0u);  if (t) { goto L_001C371C; } }
L_001C3568:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_001C3638; } }
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[23], c.r[2].w[0] + c.r[19].w[0]);
    c.r[30].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
L_001C357C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3588u); c.r[4].d[0] = ld8((c.r[20].w[0]));  if (depth < kMaxDepth) unit_002F(c, 202u, depth + 1u); else { c.pc = 0x001BE060u; return; } if (c.pc != 0x001C3588u) [[unlikely]] return; }
L_001C3588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3618; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_001C35B0; } }
    c.r[6].d[0] = ld8((c.r[20].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35A8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 198u, depth + 1u); else { c.pc = 0x001BDF30u; return; } if (c.pc != 0x001C35A8u) [[unlikely]] return; }
L_001C35A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3618; } }
L_001C35B0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[22].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] + c.r[22].w[0]);  if (t) { goto L_001C35E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35DCu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 310u, depth + 1u); else { c.pc = 0x001C3750u; return; } if (c.pc != 0x001C35DCu) [[unlikely]] return; }
L_001C35DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3618; } }
    c.budget -= 1;
L_001C35E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C35F0u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C35F0u) [[unlikely]] return; }
L_001C35F0:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.budget -= 10;
L_001C3618:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3638; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C357Cu | kUnwind; return; } goto L_001C357C; } }
    c.budget -= 1;
L_001C3638:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == 0ull; mmi::paddub(c.r[2], c.r[21], c.r[0]);  if (t) { goto L_001C371C; } }
    c.r[20].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_001C364C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C3670; } }
    c.r[6].d[0] = ld8((c.r[22].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3664u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 198u, depth + 1u); else { c.pc = 0x001BDF30u; return; } if (c.pc != 0x001C3664u) [[unlikely]] return; }
L_001C3664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C36F8; } }
    c.budget -= 1;
L_001C3670:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4160u);
    c.r[6].d[0] = ld8((c.r[22].w[0]));
    c.r[7].d[0] = ld8((c.r[22].w[0] + 1u));
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[23].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3698u); set32(c.r[4], c.r[19].w[0] + c.r[23].w[0]);  if (depth < kMaxDepth) unit_0030(c, 296u, depth + 1u); else { c.pc = 0x001C3470u; return; } if (c.pc != 0x001C3698u) [[unlikely]] return; }
L_001C3698:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_001C36B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C36ACu);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x001C5610u; return; } if (c.pc != 0x001C36ACu) [[unlikely]] return; }
L_001C36AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C371C; } }
L_001C36B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_001C36F8; } }
    c.budget -= 1;
L_001C36C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C36F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C36C0u | kUnwind; return; } goto L_001C36C0; } }
L_001C36F0:
    st32((c.r[4].w[0] + 8u), c.r[21].w[0]);
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.budget -= 2;
L_001C36F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3718; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[22], c.r[22].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C364Cu | kUnwind; return; } goto L_001C364C; } }
    c.budget -= 1;
L_001C3718:
    mmi::paddub(c.r[2], c.r[21], c.r[0]);
    c.budget -= 1;
L_001C371C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C3720:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001C3750:
    set32(c.r[2], ld32((c.r[28].w[0] - 25432u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 243u);  if (t) { goto L_001C3770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3824; } }
    set32(c.r[2], 0u + 243u);
    c.budget -= 1;
L_001C3770:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C3818; } }
    set32(c.r[2], 0u + 242u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 238u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 231u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 229u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 227u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 195u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 165u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 163u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    set32(c.r[2], 0u + 157u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C3814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3824; } }
L_001C3814:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C3818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C3824; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C3824:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C3830:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 156u);  if (t) { goto L_001C384C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C38D8; } }
    set32(c.r[2], 0u + 156u);
    c.budget -= 1;
L_001C384C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C38CC; } }
    set32(c.r[2], 0u + 155u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C38C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C38D8; } }
L_001C38C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C38CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C38D8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001C38D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C38E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 960u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001C3A74; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001C3950; } }
L_001C3940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3948u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 350u, depth + 1u); else { c.pc = 0x001C3ED0u; return; } if (c.pc != 0x001C3948u) [[unlikely]] return; }
L_001C3948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001C3A74; } }
L_001C3950:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C39C0; } }
L_001C3958:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001C39B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3988; } }
L_001C3978:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3984u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 178u, depth + 1u); else { c.pc = 0x001C6510u; return; } if (c.pc != 0x001C3984u) [[unlikely]] return; }
L_001C3984:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C3988:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[19].d[0] = c.r[3].d[0] & 65535ull;  goto L_001C39AC; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001C39B0; } }
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_001C39AC:
    mmi::paddub(c.r[18], c.r[17], c.r[0]);
    c.budget -= 1;
L_001C39B0:
    set32(c.r[17], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3958u | kUnwind; return; } goto L_001C3958; } }
    c.budget -= 1;
L_001C39C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C3A38; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A28u); set32(c.r[6], c.r[2].w[0] + 3200u);  if (depth < kMaxDepth) unit_002F(c, 372u, depth + 1u); else { c.pc = 0x001BFF00u; return; } if (c.pc != 0x001C3A28u) [[unlikely]] return; }
L_001C3A28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C3A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
L_001C3A38:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A4Cu); set32(c.r[7], c.r[2].w[0] + 3200u);  if (depth < kMaxDepth) unit_002F(c, 260u, depth + 1u); else { c.pc = 0x001BECF0u; return; } if (c.pc != 0x001C3A4Cu) [[unlikely]] return; }
L_001C3A4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3940u | kUnwind; return; } goto L_001C3940; } }
L_001C3A54:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] + 3200u);
    set32(c.r[7], c.r[29].w[0] + 120u);
    set32(c.r[8], c.r[29].w[0] + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3A70u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 352u, depth + 1u); else { c.pc = 0x001C3F20u; return; } if (c.pc != 0x001C3A70u) [[unlikely]] return; }
L_001C3A70:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3A74:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C3AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_001C3AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3AD0u);  if (depth < kMaxDepth) unit_0030(c, 330u, depth + 1u); else { c.pc = 0x001C3BD0u; return; } if (c.pc != 0x001C3AD0u) [[unlikely]] return; }
L_001C3AD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] + 972u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_001C3B04; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25408u), c.r[2].w[0]);  if (t) { goto L_001C3B10; } }
L_001C3B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B0Cu);  if (depth < kMaxDepth) unit_002F(c, 73u, depth + 1u); else { c.pc = 0x001BC950u; return; } if (c.pc != 0x001C3B0Cu) [[unlikely]] return; }
L_001C3B0C:
    st32((c.r[28].w[0] - 25408u), c.r[2].w[0]);
    c.budget -= 1;
L_001C3B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 78u, depth + 1u); else { c.pc = 0x001C4B20u; return; } if (c.pc != 0x001C3B18u) [[unlikely]] return; }
L_001C3B18:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C3B88; } }
    set32(c.r[18], c.r[18].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_001C3B2C:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { goto L_001C3B58; } }
L_001C3B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001C3B40u) [[unlikely]] return; }
L_001C3B40:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3B38u | kUnwind; return; } goto L_001C3B38; } }
    c.budget -= 1;
L_001C3B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 78u, depth + 1u); else { c.pc = 0x001C4B20u; return; } if (c.pc != 0x001C3B60u) [[unlikely]] return; }
L_001C3B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001C3B7C; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3B74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001C3B74u) [[unlikely]] return; }
L_001C3B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001C3B98; } }
L_001C3B7C:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] - c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3B2Cu | kUnwind; return; } goto L_001C3B2C; }
L_001C3B88:
    st32((c.r[28].w[0] - 25412u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 25420u), c.r[18].w[0]);
    st32((c.r[28].w[0] - 25416u), c.r[19].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_001C3B98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_001C3BB4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25512u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C3BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3BB4u);  if (depth < kMaxDepth) unit_0031(c, 58u, depth + 1u); else { c.pc = 0x001C47B0u; return; } if (c.pc != 0x001C3BB4u) [[unlikely]] return; }
L_001C3BB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3BD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25488u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] + 960u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001C3CC4; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001C3CB0; } }
L_001C3C20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C3CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C38u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C3C38u) [[unlikely]] return; }
L_001C3C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001C3C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C48u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 347u, depth + 1u); else { c.pc = 0x001C3E80u; return; } if (c.pc != 0x001C3C48u) [[unlikely]] return; }
L_001C3C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));  if (t) { goto L_001C3CB4; } }
L_001C3C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 338u, depth + 1u); else { c.pc = 0x001C3CE0u; return; } if (c.pc != 0x001C3C58u) [[unlikely]] return; }
L_001C3C58:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[16].w[0]);  if (t) { goto L_001C3C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3C7C; } }
L_001C3C6C:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3C78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 178u, depth + 1u); else { c.pc = 0x001C6510u; return; } if (c.pc != 0x001C3C78u) [[unlikely]] return; }
L_001C3C78:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C3C7C:
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_001C3C94; } }
    mmi::paddub(c.r[19], c.r[17], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[17], c.r[0]);  if (t) { goto L_001C3CA0; } }
L_001C3C94:
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    mmi::paddub(c.r[19], c.r[17], c.r[0]);
    c.budget -= 3;
L_001C3CA0:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3C20u | kUnwind; return; } goto L_001C3C20; } }
    c.budget -= 1;
L_001C3CB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.budget -= 1;
L_001C3CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CBCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 14u, depth + 1u); else { c.pc = 0x001C41F0u; return; } if (c.pc != 0x001C3CBCu) [[unlikely]] return; }
L_001C3CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3CC4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 137u, depth + 1u); else { c.pc = 0x001C5780u; return; } if (c.pc != 0x001C3CC4u) [[unlikely]] return; }
L_001C3CC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C3CE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001C3D10; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001C3D24; } }
L_001C3D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D18u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0030(c, 350u, depth + 1u); else { c.pc = 0x001C3ED0u; return; } if (c.pc != 0x001C3D18u) [[unlikely]] return; }
L_001C3D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001C3E64; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001C3D24:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C3D80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3D10u | kUnwind; return; } goto L_001C3D10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] - 12848u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] + 3200u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D70u); set32(c.r[7], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C01C0u; return; } if (c.pc != 0x001C3D70u) [[unlikely]] return; }
L_001C3D70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C3DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3D10u | kUnwind; return; } goto L_001C3D10; } }
L_001C3D80:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[7], c.r[2].w[0] + 3200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3D98u); set32(c.r[8], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_002F(c, 271u, depth + 1u); else { c.pc = 0x001BEF80u; return; } if (c.pc != 0x001C3D98u) [[unlikely]] return; }
L_001C3D98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3D10u | kUnwind; return; } goto L_001C3D10; } }
L_001C3DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[18], c.r[2].w[0] + 3200u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001C3E50; } }
L_001C3DB4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 88u);
    set32(c.r[8], c.r[29].w[0] + 92u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DCCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 352u, depth + 1u); else { c.pc = 0x001C3F20u; return; } if (c.pc != 0x001C3DCCu) [[unlikely]] return; }
L_001C3DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C3DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3DDCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C3DDCu) [[unlikely]] return; }
L_001C3DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001C3E60; } }
L_001C3DE4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001C3DF8; } }
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_001C3E08; } }
L_001C3DF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
L_001C3E08:
    set32(c.r[18], c.r[18].w[0] + 5u);
    c.budget -= 2;
L_001C3E10:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3E10u | kUnwind; return; } goto L_001C3E10; } }
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3E40; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001C3E40:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_001C3E50:
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3DB4u | kUnwind; return; } goto L_001C3DB4; } }
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    c.budget -= 1;
L_001C3E60:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001C3E64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C3E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C3EB8; } }
L_001C3E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EA0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001C3EA0u) [[unlikely]] return; }
L_001C3EA0:
    set32(c.r[16], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C3E98u | kUnwind; return; } goto L_001C3E98; } }
    c.budget -= 1;
L_001C3EB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C3ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3EE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C3EE4u) [[unlikely]] return; }
L_001C3EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C3F10; } }
    set32(c.r[3], 0u + 128u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 9;
L_001C3F10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C3F20:
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
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[16], c.r[22].w[0] + 5u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[23], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    mmi::paddub(c.r[20], c.r[8], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001C3F68u) [[unlikely]] return; }
L_001C3F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F70u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C3F70u) [[unlikely]] return; }
L_001C3F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_001C3F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
L_001C3F80:
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3F94u); st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0031(c, 5u, depth + 1u); else { c.pc = 0x001C4060u; return; } if (c.pc != 0x001C3F94u) [[unlikely]] return; }
L_001C3F94:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 4u));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 8u), c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[22].w[0]));
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[22].w[0] + 2u));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] <= 0; st32((c.r[21].w[0]), c.r[18].w[0]);  if (t) { [[clang::musttail]] return unit_0031(c, 3u, depth); } }
L_001C3FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FD0u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C55C0u; return; } if (c.pc != 0x001C3FD0u) [[unlikely]] return; }
L_001C3FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001C3FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C3FE0u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001C3FE0u) [[unlikely]] return; }
L_001C3FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0031(c, 4u, depth); } }
L_001C3FE8:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[19].w[0] + 1u);
    set32(c.r[6], 0u + 14u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    [[clang::musttail]] return unit_0031(c, 1u, depth);
}

}
