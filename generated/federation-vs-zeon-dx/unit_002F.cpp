#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231,
    0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001BC000;
    case 2u: goto L_001BC024;
    case 3u: goto L_001BC02C;
    case 4u: goto L_001BC040;
    case 5u: goto L_001BC0C0;
    case 6u: goto L_001BC0E4;
    case 7u: goto L_001BC0FC;
    case 8u: goto L_001BC118;
    case 9u: goto L_001BC120;
    case 10u: goto L_001BC188;
    case 11u: goto L_001BC1B0;
    case 12u: goto L_001BC200;
    case 13u: goto L_001BC240;
    case 14u: goto L_001BC25C;
    case 15u: goto L_001BC270;
    case 16u: goto L_001BC2CC;
    case 17u: goto L_001BC2DC;
    case 18u: goto L_001BC2FC;
    case 19u: goto L_001BC308;
    case 20u: goto L_001BC314;
    case 21u: goto L_001BC338;
    case 22u: goto L_001BC350;
    case 23u: goto L_001BC39C;
    case 24u: goto L_001BC3AC;
    case 25u: goto L_001BC3CC;
    case 26u: goto L_001BC3D8;
    case 27u: goto L_001BC3E4;
    case 28u: goto L_001BC408;
    case 29u: goto L_001BC420;
    case 30u: goto L_001BC478;
    case 31u: goto L_001BC480;
    case 32u: goto L_001BC488;
    case 33u: goto L_001BC4CC;
    case 34u: goto L_001BC4D8;
    case 35u: goto L_001BC4FC;
    case 36u: goto L_001BC520;
    case 37u: goto L_001BC580;
    case 38u: goto L_001BC598;
    case 39u: goto L_001BC5A8;
    case 40u: goto L_001BC5B4;
    case 41u: goto L_001BC5D8;
    case 42u: goto L_001BC5F0;
    case 43u: goto L_001BC688;
    case 44u: goto L_001BC694;
    case 45u: goto L_001BC6A0;
    case 46u: goto L_001BC6C0;
    case 47u: goto L_001BC6D0;
    case 48u: goto L_001BC6F4;
    case 49u: goto L_001BC700;
    case 50u: goto L_001BC720;
    case 51u: goto L_001BC730;
    case 52u: goto L_001BC750;
    case 53u: goto L_001BC760;
    case 54u: goto L_001BC77C;
    case 55u: goto L_001BC790;
    case 56u: goto L_001BC7BC;
    case 57u: goto L_001BC7D0;
    case 58u: goto L_001BC7E8;
    case 59u: goto L_001BC800;
    case 60u: goto L_001BC818;
    case 61u: goto L_001BC830;
    case 62u: goto L_001BC850;
    case 63u: goto L_001BC860;
    case 64u: goto L_001BC880;
    case 65u: goto L_001BC890;
    case 66u: goto L_001BC8B0;
    case 67u: goto L_001BC8C0;
    case 68u: goto L_001BC8E0;
    case 69u: goto L_001BC8F0;
    case 70u: goto L_001BC910;
    case 71u: goto L_001BC920;
    case 72u: goto L_001BC940;
    case 73u: goto L_001BC950;
    case 74u: goto L_001BC960;
    case 75u: goto L_001BC970;
    case 76u: goto L_001BC9B0;
    case 77u: goto L_001BC9C0;
    case 78u: goto L_001BC9D0;
    case 79u: goto L_001BC9D8;
    case 80u: goto L_001BC9F0;
    case 81u: goto L_001BCA3C;
    case 82u: goto L_001BCA68;
    case 83u: goto L_001BCAA4;
    case 84u: goto L_001BCAC0;
    case 85u: goto L_001BCAC8;
    case 86u: goto L_001BCB40;
    case 87u: goto L_001BCB70;
    case 88u: goto L_001BCBB0;
    case 89u: goto L_001BCBDC;
    case 90u: goto L_001BCC34;
    case 91u: goto L_001BCC74;
    case 92u: goto L_001BCCA0;
    case 93u: goto L_001BCCE0;
    case 94u: goto L_001BCD10;
    case 95u: goto L_001BCD30;
    case 96u: goto L_001BCD90;
    case 97u: goto L_001BCDA4;
    case 98u: goto L_001BCDAC;
    case 99u: goto L_001BCDB4;
    case 100u: goto L_001BCDBC;
    case 101u: goto L_001BCDD0;
    case 102u: goto L_001BCE00;
    case 103u: goto L_001BCE5C;
    case 104u: goto L_001BCE70;
    case 105u: goto L_001BCE88;
    case 106u: goto L_001BCEB8;
    case 107u: goto L_001BCECC;
    case 108u: goto L_001BCF28;
    case 109u: goto L_001BCF40;
    case 110u: goto L_001BCF70;
    case 111u: goto L_001BCFB0;
    case 112u: goto L_001BD000;
    case 113u: goto L_001BD010;
    case 114u: goto L_001BD04C;
    case 115u: goto L_001BD090;
    case 116u: goto L_001BD0C0;
    case 117u: goto L_001BD110;
    case 118u: goto L_001BD230;
    case 119u: goto L_001BD264;
    case 120u: goto L_001BD26C;
    case 121u: goto L_001BD288;
    case 122u: goto L_001BD2A0;
    case 123u: goto L_001BD2B8;
    case 124u: goto L_001BD2CC;
    case 125u: goto L_001BD2E8;
    case 126u: goto L_001BD320;
    case 127u: goto L_001BD368;
    case 128u: goto L_001BD394;
    case 129u: goto L_001BD3A8;
    case 130u: goto L_001BD3C0;
    case 131u: goto L_001BD3F0;
    case 132u: goto L_001BD460;
    case 133u: goto L_001BD468;
    case 134u: goto L_001BD478;
    case 135u: goto L_001BD484;
    case 136u: goto L_001BD4A0;
    case 137u: goto L_001BD4A8;
    case 138u: goto L_001BD4D0;
    case 139u: goto L_001BD4E0;
    case 140u: goto L_001BD4F8;
    case 141u: goto L_001BD510;
    case 142u: goto L_001BD53C;
    case 143u: goto L_001BD558;
    case 144u: goto L_001BD570;
    case 145u: goto L_001BD594;
    case 146u: goto L_001BD5D0;
    case 147u: goto L_001BD600;
    case 148u: goto L_001BD670;
    case 149u: goto L_001BD6D0;
    case 150u: goto L_001BD6FC;
    case 151u: goto L_001BD738;
    case 152u: goto L_001BD750;
    case 153u: goto L_001BD784;
    case 154u: goto L_001BD7D0;
    case 155u: goto L_001BD7E0;
    case 156u: goto L_001BD808;
    case 157u: goto L_001BD854;
    case 158u: goto L_001BD868;
    case 159u: goto L_001BD890;
    case 160u: goto L_001BD8A4;
    case 161u: goto L_001BD8E0;
    case 162u: goto L_001BD8F4;
    case 163u: goto L_001BD920;
    case 164u: goto L_001BD928;
    case 165u: goto L_001BD930;
    case 166u: goto L_001BD94C;
    case 167u: goto L_001BD980;
    case 168u: goto L_001BD990;
    case 169u: goto L_001BD9D8;
    case 170u: goto L_001BD9E8;
    case 171u: goto L_001BDA08;
    case 172u: goto L_001BDA18;
    case 173u: goto L_001BDA28;
    case 174u: goto L_001BDA48;
    case 175u: goto L_001BDA5C;
    case 176u: goto L_001BDA80;
    case 177u: goto L_001BDABC;
    case 178u: goto L_001BDAE4;
    case 179u: goto L_001BDAFC;
    case 180u: goto L_001BDB60;
    case 181u: goto L_001BDBB0;
    case 182u: goto L_001BDBC8;
    case 183u: goto L_001BDC20;
    case 184u: goto L_001BDC40;
    case 185u: goto L_001BDCB8;
    case 186u: goto L_001BDD60;
    case 187u: goto L_001BDD74;
    case 188u: goto L_001BDD84;
    case 189u: goto L_001BDD94;
    case 190u: goto L_001BDDE0;
    case 191u: goto L_001BDDF4;
    case 192u: goto L_001BDE04;
    case 193u: goto L_001BDE14;
    case 194u: goto L_001BDE60;
    case 195u: goto L_001BDE74;
    case 196u: goto L_001BDEC0;
    case 197u: goto L_001BDF00;
    case 198u: goto L_001BDF30;
    case 199u: goto L_001BDF6C;
    case 200u: goto L_001BE020;
    case 201u: goto L_001BE050;
    case 202u: goto L_001BE060;
    case 203u: goto L_001BE0A8;
    case 204u: goto L_001BE2B0;
    case 205u: goto L_001BE2EC;
    case 206u: goto L_001BE2F4;
    case 207u: goto L_001BE324;
    case 208u: goto L_001BE338;
    case 209u: goto L_001BE348;
    case 210u: goto L_001BE35C;
    case 211u: goto L_001BE36C;
    case 212u: goto L_001BE374;
    case 213u: goto L_001BE3A0;
    case 214u: goto L_001BE3C8;
    case 215u: goto L_001BE3D0;
    case 216u: goto L_001BE3D8;
    case 217u: goto L_001BE3E0;
    case 218u: goto L_001BE410;
    case 219u: goto L_001BE468;
    case 220u: goto L_001BE488;
    case 221u: goto L_001BE4AC;
    case 222u: goto L_001BE4C0;
    case 223u: goto L_001BE538;
    case 224u: goto L_001BE568;
    case 225u: goto L_001BE590;
    case 226u: goto L_001BE5A4;
    case 227u: goto L_001BE5BC;
    case 228u: goto L_001BE610;
    case 229u: goto L_001BE658;
    case 230u: goto L_001BE668;
    case 231u: goto L_001BE67C;
    case 232u: goto L_001BE684;
    case 233u: goto L_001BE698;
    case 234u: goto L_001BE6AC;
    case 235u: goto L_001BE6C8;
    case 236u: goto L_001BE700;
    case 237u: goto L_001BE748;
    case 238u: goto L_001BE7EC;
    case 239u: goto L_001BE850;
    case 240u: goto L_001BE8BC;
    case 241u: goto L_001BE918;
    case 242u: goto L_001BE93C;
    case 243u: goto L_001BE980;
    case 244u: goto L_001BE98C;
    case 245u: goto L_001BE9F0;
    case 246u: goto L_001BE9FC;
    case 247u: goto L_001BEA30;
    case 248u: goto L_001BEA78;
    case 249u: goto L_001BEA98;
    case 250u: goto L_001BEAAC;
    case 251u: goto L_001BEAF4;
    case 252u: goto L_001BEB18;
    case 253u: goto L_001BEB30;
    case 254u: goto L_001BEB80;
    case 255u: goto L_001BEBC4;
    case 256u: goto L_001BEBE8;
    case 257u: goto L_001BEBF4;
    case 258u: goto L_001BEC00;
    case 259u: goto L_001BEC1C;
    case 260u: goto L_001BECF0;
    case 261u: goto L_001BED34;
    case 262u: goto L_001BED5C;
    case 263u: goto L_001BED7C;
    case 264u: goto L_001BED94;
    case 265u: goto L_001BEDB0;
    case 266u: goto L_001BEDF0;
    case 267u: goto L_001BEE64;
    case 268u: goto L_001BEECC;
    case 269u: goto L_001BEF08;
    case 270u: goto L_001BEF40;
    case 271u: goto L_001BEF80;
    case 272u: goto L_001BEFCC;
    case 273u: goto L_001BEFF8;
    case 274u: goto L_001BF01C;
    case 275u: goto L_001BF034;
    case 276u: goto L_001BF054;
    case 277u: goto L_001BF090;
    case 278u: goto L_001BF104;
    case 279u: goto L_001BF154;
    case 280u: goto L_001BF17C;
    case 281u: goto L_001BF198;
    case 282u: goto L_001BF1BC;
    case 283u: goto L_001BF200;
    case 284u: goto L_001BF210;
    case 285u: goto L_001BF228;
    case 286u: goto L_001BF284;
    case 287u: goto L_001BF2B0;
    case 288u: goto L_001BF340;
    case 289u: goto L_001BF350;
    case 290u: goto L_001BF368;
    case 291u: goto L_001BF3A8;
    case 292u: goto L_001BF3D0;
    case 293u: goto L_001BF3E4;
    case 294u: goto L_001BF428;
    case 295u: goto L_001BF430;
    case 296u: goto L_001BF45C;
    case 297u: goto L_001BF478;
    case 298u: goto L_001BF480;
    case 299u: goto L_001BF490;
    case 300u: goto L_001BF4A0;
    case 301u: goto L_001BF4D0;
    case 302u: goto L_001BF50C;
    case 303u: goto L_001BF534;
    case 304u: goto L_001BF560;
    case 305u: goto L_001BF588;
    case 306u: goto L_001BF59C;
    case 307u: goto L_001BF5BC;
    case 308u: goto L_001BF5C8;
    case 309u: goto L_001BF5D0;
    case 310u: goto L_001BF5E8;
    case 311u: goto L_001BF5F0;
    case 312u: goto L_001BF5F8;
    case 313u: goto L_001BF620;
    case 314u: goto L_001BF660;
    case 315u: goto L_001BF69C;
    case 316u: goto L_001BF6D0;
    case 317u: goto L_001BF734;
    case 318u: goto L_001BF748;
    case 319u: goto L_001BF750;
    case 320u: goto L_001BF75C;
    case 321u: goto L_001BF76C;
    case 322u: goto L_001BF788;
    case 323u: goto L_001BF7E8;
    case 324u: goto L_001BF7FC;
    case 325u: goto L_001BF834;
    case 326u: goto L_001BF848;
    case 327u: goto L_001BF860;
    case 328u: goto L_001BF88C;
    case 329u: goto L_001BF894;
    case 330u: goto L_001BF8A8;
    case 331u: goto L_001BF8B0;
    case 332u: goto L_001BF8B8;
    case 333u: goto L_001BF8E0;
    case 334u: goto L_001BF8EC;
    case 335u: goto L_001BF920;
    case 336u: goto L_001BF938;
    case 337u: goto L_001BF970;
    case 338u: goto L_001BF9A0;
    case 339u: goto L_001BFA00;
    case 340u: goto L_001BFA14;
    case 341u: goto L_001BFA1C;
    case 342u: goto L_001BFA28;
    case 343u: goto L_001BFA38;
    case 344u: goto L_001BFA54;
    case 345u: goto L_001BFABC;
    case 346u: goto L_001BFAFC;
    case 347u: goto L_001BFB2C;
    case 348u: goto L_001BFB34;
    case 349u: goto L_001BFB3C;
    case 350u: goto L_001BFB60;
    case 351u: goto L_001BFB9C;
    case 352u: goto L_001BFBA4;
    case 353u: goto L_001BFBE4;
    case 354u: goto L_001BFC10;
    case 355u: goto L_001BFC38;
    case 356u: goto L_001BFC90;
    case 357u: goto L_001BFCF0;
    case 358u: goto L_001BFD38;
    case 359u: goto L_001BFD78;
    case 360u: goto L_001BFD90;
    case 361u: goto L_001BFDEC;
    case 362u: goto L_001BFE00;
    case 363u: goto L_001BFE1C;
    case 364u: goto L_001BFE3C;
    case 365u: goto L_001BFE50;
    case 366u: goto L_001BFE60;
    case 367u: goto L_001BFE80;
    case 368u: goto L_001BFE8C;
    case 369u: goto L_001BFED0;
    case 370u: goto L_001BFEE0;
    case 371u: goto L_001BFEF0;
    case 372u: goto L_001BFF00;
    case 373u: goto L_001BFF3C;
    case 374u: goto L_001BFF58;
    case 375u: goto L_001BFF80;
    case 376u: goto L_001BFF88;
    case 377u: goto L_001BFFF4;
    default: bad_entry(c, 0x001BC000u); return;
    }
L_001BC000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC034; } }
L_001BC01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC024u);  if (depth < kMaxDepth) unit_002F(c, 76u, depth + 1u); else { c.pc = 0x001BC9B0u; return; } if (c.pc != 0x001BC024u) [[unlikely]] return; }
L_001BC024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC02Cu);  if (depth < kMaxDepth) unit_002F(c, 213u, depth + 1u); else { c.pc = 0x001BE3A0u; return; } if (c.pc != 0x001BC02Cu) [[unlikely]] return; }
L_001BC02C:
    st32((c.r[28].w[0] - 25512u), 0u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001BC034:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BC040:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25508u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001BC088; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC090; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001BC088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);  if (t) { goto L_001BC1DC; } }
L_001BC090:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0] - 4u)));  if (t) { goto L_001BC0B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BC0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC1D8; } }
L_001BC0B0:
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0C0u); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_002F(c, 12u, depth + 1u); else { c.pc = 0x001BC200u; return; } if (c.pc != 0x001BC0C0u) [[unlikely]] return; }
L_001BC0C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001BC0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BC1D8; } }
L_001BC0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[20], c.r[2].w[0] - 28576u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (t) { goto L_001BC148; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001BC0E4:
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC0FCu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 95u, depth + 1u); else { c.pc = 0x001C4DE0u; return; } if (c.pc != 0x001BC0FCu) [[unlikely]] return; }
L_001BC0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001BC110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BC1D8; } }
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001BC110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC118u);  if (depth < kMaxDepth) unit_0031(c, 118u, depth + 1u); else { c.pc = 0x001C5370u; return; } if (c.pc != 0x001BC118u) [[unlikely]] return; }
L_001BC118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC120u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0031(c, 108u, depth + 1u); else { c.pc = 0x001C5100u; return; } if (c.pc != 0x001BC120u) [[unlikely]] return; }
L_001BC120:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BC1D8; } }
L_001BC134:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 5;
L_001BC148:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC0E4u | kUnwind; return; } goto L_001BC0E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28576u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 132u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st8((c.r[29].w[0] + 134u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 135u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 30u);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 140u), c.r[19].w[0]);  if (t) { goto L_001BC19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC188u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002F(c, 316u, depth + 1u); else { c.pc = 0x001BF6D0u; return; } if (c.pc != 0x001BC188u) [[unlikely]] return; }
L_001BC188:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001BC1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC1D8; } }
L_001BC19C:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BC1D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC1B0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002F(c, 338u, depth + 1u); else { c.pc = 0x001BF9A0u; return; } if (c.pc != 0x001BC1B0u) [[unlikely]] return; }
L_001BC1B0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BC1C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC1D8; } }
L_001BC1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC1D8; } }
L_001BC1D4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001BC1D8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BC1DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001BC200:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC21C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC224; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001BC21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC238; } }
L_001BC224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 7216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
L_001BC238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BC240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 7184u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC25Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x001BC25Cu) [[unlikely]] return; }
L_001BC25C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BC270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC338; } }
L_001BC298:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25388u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BC2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC338; } }
L_001BC2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2CCu);  if (depth < kMaxDepth) unit_0030(c, 292u, depth + 1u); else { c.pc = 0x001C32F0u; return; } if (c.pc != 0x001BC2CCu) [[unlikely]] return; }
L_001BC2CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25388u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 190u, depth + 1u); else { c.pc = 0x001C1FD0u; return; } if (c.pc != 0x001BC2DCu) [[unlikely]] return; }
L_001BC2DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25388u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 25492u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 25492u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC2FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001C2100u; return; } if (c.pc != 0x001BC2FCu) [[unlikely]] return; }
L_001BC2FC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC308u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001BC308u) [[unlikely]] return; }
L_001BC308:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC314u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 262u, depth + 1u); else { c.pc = 0x001BBB50u; return; } if (c.pc != 0x001BC314u) [[unlikely]] return; }
L_001BC314:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC338u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x001C4680u; return; } if (c.pc != 0x001BC338u) [[unlikely]] return; }
L_001BC338:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC408; } }
L_001BC378:
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_001BC394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC408; } }
L_001BC394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC39Cu); set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));  if (depth < kMaxDepth) unit_0030(c, 292u, depth + 1u); else { c.pc = 0x001C32F0u; return; } if (c.pc != 0x001BC39Cu) [[unlikely]] return; }
L_001BC39C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25388u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 190u, depth + 1u); else { c.pc = 0x001C1FD0u; return; } if (c.pc != 0x001BC3ACu) [[unlikely]] return; }
L_001BC3AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 25492u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 25492u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 197u, depth + 1u); else { c.pc = 0x001C2100u; return; } if (c.pc != 0x001BC3CCu) [[unlikely]] return; }
L_001BC3CC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001BC3D8u) [[unlikely]] return; }
L_001BC3D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC3E4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 262u, depth + 1u); else { c.pc = 0x001BBB50u; return; } if (c.pc != 0x001BC3E4u) [[unlikely]] return; }
L_001BC3E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC408u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x001C4680u; return; } if (c.pc != 0x001BC408u) [[unlikely]] return; }
L_001BC408:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC4FC; } }
L_001BC450:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001BC470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC4FC; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BC470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC478u);  if (depth < kMaxDepth) unit_002F(c, 131u, depth + 1u); else { c.pc = 0x001BD3F0u; return; } if (c.pc != 0x001BC478u) [[unlikely]] return; }
L_001BC478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001BC4A8; } }
L_001BC480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC488u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BC488u) [[unlikely]] return; }
L_001BC488:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25488u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001BC4BC; } }
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 2;
L_001BC4A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC480u | kUnwind; return; } goto L_001BC480; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001BC4BC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[28].w[0] - 25488u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4CCu); st32((c.r[28].w[0] - 25492u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001BC4CCu) [[unlikely]] return; }
L_001BC4CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4D8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 262u, depth + 1u); else { c.pc = 0x001BBB50u; return; } if (c.pc != 0x001BC4D8u) [[unlikely]] return; }
L_001BC4D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC4FCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x001C4680u; return; } if (c.pc != 0x001BC4FCu) [[unlikely]] return; }
L_001BC4FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BC520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BC548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC5D8; } }
L_001BC548:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25388u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001BC578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BC5D8; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BC578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC580u);  if (depth < kMaxDepth) unit_002F(c, 131u, depth + 1u); else { c.pc = 0x001BD3F0u; return; } if (c.pc != 0x001BC580u) [[unlikely]] return; }
L_001BC580:
    set32(c.r[3], ld32((c.r[28].w[0] - 25488u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25492u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 25488u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC598u); set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BC598u) [[unlikely]] return; }
L_001BC598:
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 25492u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001BC5A8u) [[unlikely]] return; }
L_001BC5A8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5B4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 262u, depth + 1u); else { c.pc = 0x001BBB50u; return; } if (c.pc != 0x001BC5B4u) [[unlikely]] return; }
L_001BC5B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC5D8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0031(c, 48u, depth + 1u); else { c.pc = 0x001C4680u; return; } if (c.pc != 0x001BC5D8u) [[unlikely]] return; }
L_001BC5D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001BC618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BC6A4; } }
L_001BC618:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_001BC67C; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[5], c.r[0]);  goto L_001BC674; }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_001BC668; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 2u);  goto L_001BC65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC680; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001BC65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC680; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001BC668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC680; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_001BC674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BC680; } }
L_001BC67C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_001BC680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC688u);  if (depth < kMaxDepth) unit_0031(c, 11u, depth + 1u); else { c.pc = 0x001C4190u; return; } if (c.pc != 0x001BC688u) [[unlikely]] return; }
L_001BC688:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC694u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 320u, depth + 1u); else { c.pc = 0x001C3AA0u; return; } if (c.pc != 0x001BC694u) [[unlikely]] return; }
L_001BC694:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6A0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002E(c, 262u, depth + 1u); else { c.pc = 0x001BBB50u; return; } if (c.pc != 0x001BC6A0u) [[unlikely]] return; }
L_001BC6A0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BC6A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001BC6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 19u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC6F4u); st32((c.r[29].w[0] + 28u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC6F4u) [[unlikely]] return; }
L_001BC6F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 20u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC720u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC720u) [[unlikely]] return; }
L_001BC720:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 21u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC750u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC750u) [[unlikely]] return; }
L_001BC750:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 24u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC77Cu); set32(c.r[4], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC77Cu) [[unlikely]] return; }
L_001BC77C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 25u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7BCu); st32((c.r[29].w[0] + 36u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC7BCu) [[unlikely]] return; }
L_001BC7BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BC7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 28u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC7E8u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC7E8u) [[unlikely]] return; }
L_001BC7E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 29u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC818u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC818u) [[unlikely]] return; }
L_001BC818:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 33u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC850u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC850u) [[unlikely]] return; }
L_001BC850:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 34u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC880u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC880u) [[unlikely]] return; }
L_001BC880:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 35u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8B0u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC8B0u) [[unlikely]] return; }
L_001BC8B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 36u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC8E0u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC8E0u) [[unlikely]] return; }
L_001BC8E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 37u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC910u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC910u) [[unlikely]] return; }
L_001BC910:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 38u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC940u); st32((c.r[29].w[0] + 24u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x001BB870u; return; } if (c.pc != 0x001BC940u) [[unlikely]] return; }
L_001BC940:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BC950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 72u);  c.pc = t; return; }
L_001BC960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 72u);  c.pc = t; return; }
L_001BC970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12480u);
    st32((c.r[28].w[0] - 25376u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25372u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25368u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25364u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    st32((c.r[28].w[0] - 25384u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 25380u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12848u);
    st32((c.r[28].w[0] - 25388u), 0u);
    st32((c.r[28].w[0] - 25396u), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 25392u), c.r[3].w[0]);  c.pc = t; return; }
L_001BC9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9C0u);  if (depth < kMaxDepth) unit_002F(c, 75u, depth + 1u); else { c.pc = 0x001BC970u; return; } if (c.pc != 0x001BC9C0u) [[unlikely]] return; }
L_001BC9C0:
    set32(c.r[5], 0u + 80u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9D0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 190u, depth + 1u); else { c.pc = 0x001C1FD0u; return; } if (c.pc != 0x001BC9D0u) [[unlikely]] return; }
L_001BC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BC9D8u);  if (depth < kMaxDepth) unit_002F(c, 167u, depth + 1u); else { c.pc = 0x001BD980u; return; } if (c.pc != 0x001BC9D8u) [[unlikely]] return; }
L_001BC9D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BC9F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001BCB18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[3].w[0] - 12800u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001BCA58; } }
L_001BCA3C:
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCA3Cu | kUnwind; return; } goto L_001BCA3C; } }
L_001BCA58:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001BCA88; } }
L_001BCA68:
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCA68u | kUnwind; return; } goto L_001BCA68; } }
    c.budget -= 1;
L_001BCA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 12480u);
    set32(c.r[4], c.r[18].w[0] << 1);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001BCB10; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_001BCAA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001BCAE4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAC0u); set32(c.r[20], c.r[20].w[0] + 2u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001BCAC0u) [[unlikely]] return; }
L_001BCAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCAC8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 119u, depth + 1u); else { c.pc = 0x001C5440u; return; } if (c.pc != 0x001BCAC8u) [[unlikely]] return; }
L_001BCAC8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { goto L_001BCB00; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001BCAE4:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001BCB04; }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
L_001BCB00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001BCB04:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCAA4u | kUnwind; return; } goto L_001BCAA4; } }
L_001BCB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001BCD5C; } }
L_001BCB18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[4].w[0] - 12800u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[21], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[18], c.r[21].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001BCD58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001BCB40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[22].d[0] = ld16((c.r[21].w[0]));  if (t) { goto L_001BCC00; } }
    c.r[20].d[0] = c.r[22].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_001BCBE4; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 223u);  if (t) { goto L_001BCBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCB70u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 186u, depth + 1u); else { c.pc = 0x001BDD60u; return; } if (c.pc != 0x001BCB70u) [[unlikely]] return; }
L_001BCB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCB9C; } }
    set32(c.r[3], 0u + 9254u);
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] - 2u);  if (t) { goto L_001BCB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(9332ll);  if (t) { goto L_001BCBE0; } }
L_001BCB90:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCBE0; } }
L_001BCB9C:
    set32(c.r[2], 0u + 223u);
    c.budget -= 1;
L_001BCBA0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001BCBD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBB0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 190u, depth + 1u); else { c.pc = 0x001BDDE0u; return; } if (c.pc != 0x001BCBB0u) [[unlikely]] return; }
L_001BCBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCBD0; } }
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] - 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCBE0; } }
L_001BCBD0:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001BCBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCBDCu);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001BCBDCu) [[unlikely]] return; }
L_001BCBDC:
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001BCBE0:
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 1;
L_001BCBE4:
    c.r[4].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[3], 0u + 9472u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_001BCD1C; } }
    c.r[3].d[0] = c.r[22].d[0] & 9471ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCD18; } }
L_001BCC00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001BCCCC; } }
    c.r[20].d[0] = c.r[22].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_001BCCAC; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 223u);  if (t) { goto L_001BCC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC34u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 186u, depth + 1u); else { c.pc = 0x001BDD60u; return; } if (c.pc != 0x001BCC34u) [[unlikely]] return; }
L_001BCC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCC60; } }
    set32(c.r[3], 0u + 9510u);
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] - 2u);  if (t) { goto L_001BCC54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(9588ll);  if (t) { goto L_001BCCA8; } }
L_001BCC54:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCCA8; } }
L_001BCC60:
    set32(c.r[2], 0u + 223u);
    c.budget -= 1;
L_001BCC64:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].d[0] | 256ull;  if (t) { goto L_001BCC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCC74u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 190u, depth + 1u); else { c.pc = 0x001BDDE0u; return; } if (c.pc != 0x001BCC74u) [[unlikely]] return; }
L_001BCC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BCC94; } }
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] - 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCCA8; } }
L_001BCC94:
    c.r[2].d[0] = c.r[20].d[0] | 256ull;
    c.budget -= 1;
L_001BCC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCA0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001BCCA0u) [[unlikely]] return; }
L_001BCCA0:
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001BCCA8:
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 1;
L_001BCCAC:
    c.r[4].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[3], 0u + 9216u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BCD18; } }
    c.r[3].d[0] = c.r[22].d[0] | 9472ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001BCD18; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001BCCCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001BCCEC; } }
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCCE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 184u, depth + 1u); else { c.pc = 0x001BDC40u; return; } if (c.pc != 0x001BCCE0u) [[unlikely]] return; }
L_001BCCE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_001BCD48; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001BCCEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001BCD18; } }
    c.r[4].d[0] = c.r[22].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BCD18; } }
    c.r[2].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD10u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001BCD10u) [[unlikely]] return; }
L_001BCD10:
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001BCD18:
    c.r[19].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 1;
L_001BCD1C:
    c.r[3].d[0] = c.r[19].d[0] & 65280ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BCD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCD30u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 119u, depth + 1u); else { c.pc = 0x001C5440u; return; } if (c.pc != 0x001BCD30u) [[unlikely]] return; }
L_001BCD30:
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_001BCD40:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001BCD48:
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCB40u | kUnwind; return; } goto L_001BCB40; } }
L_001BCD58:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001BCD5C:
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
L_001BCD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 371u, depth + 1u); else { c.pc = 0x001BFEF0u; return; } if (c.pc != 0x001BCDA4u) [[unlikely]] return; }
L_001BCDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDACu); st32((c.r[28].w[0] - 25500u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 120u, depth + 1u); else { c.pc = 0x001C5530u; return; } if (c.pc != 0x001BCDACu) [[unlikely]] return; }
L_001BCDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDB4u);  if (depth < kMaxDepth) unit_0030(c, 186u, depth + 1u); else { c.pc = 0x001C1F40u; return; } if (c.pc != 0x001BCDB4u) [[unlikely]] return; }
L_001BCDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDBCu);  if (depth < kMaxDepth) unit_002F(c, 76u, depth + 1u); else { c.pc = 0x001BC9B0u; return; } if (c.pc != 0x001BCDBCu) [[unlikely]] return; }
L_001BCDBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001BCDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCDD0u);  if (depth < kMaxDepth) unit_002F(c, 74u, depth + 1u); else { c.pc = 0x001BC960u; return; } if (c.pc != 0x001BCDD0u) [[unlikely]] return; }
L_001BCDD0:
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001BCDE4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_001BCDE4:
    st32((c.r[28].w[0] - 30280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 25508u), c.r[3].w[0]);
    c.budget -= 3;
L_001BCDF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BCE00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[21], c.r[6], c.r[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[21], c.r[0]);  if (t) { goto L_001BCF58; } }
L_001BCE5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25380u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001BCEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[28].w[0] - 25368u)));  if (t) { goto L_001BCEE0; } }
L_001BCE70:
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001BCE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCE88u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BDB60u; return; } if (c.pc != 0x001BCE88u) [[unlikely]] return; }
L_001BCE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001BCE98; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_001BCE94:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001BCE98:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_001BCEC4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25372u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BCEC0; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCEB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001BCEB8u) [[unlikely]] return; }
L_001BCEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001BCED0; } }
L_001BCEC0:
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_001BCEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCECCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001BCECCu) [[unlikely]] return; }
L_001BCECC:
    c.budget -= 1;
L_001BCED0:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 4;
L_001BCEE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25364u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCE70u | kUnwind; return; } goto L_001BCE70; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001BCEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25384u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BCF58; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001BCF30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001BCF30; } }
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF28u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001BCF28u) [[unlikely]] return; }
L_001BCF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001BCF40; } }
L_001BCF30:
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF40u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001BCF40u) [[unlikely]] return; }
L_001BCF40:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BCE5Cu | kUnwind; return; } goto L_001BCE5C; } }
L_001BCF58:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - c.r[21].w[0]);  if (t) { goto L_001BCF7C; } }
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BCF70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4E60u; return; } if (c.pc != 0x001BCF70u) [[unlikely]] return; }
L_001BCF70:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] - c.r[21].w[0]);
    c.budget -= 3;
L_001BCF7C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_001BCF8C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001BCF8C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BCFB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_001BCFD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25504u), c.r[2].w[0]);  if (t) { goto L_001BCFE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 1;
L_001BCFD8:
    c.r[2].d[0] = c.r[2].d[0] | 60416ull;
    st32((c.r[28].w[0] - 25504u), c.r[2].w[0]);
    c.budget -= 2;
L_001BCFE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25504u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[1].w[0] - 28496u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 28488u), c.r[3].w[0]);  c.pc = t; return; }
L_001BD000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  c.pc = t; return; }
L_001BD010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 28496u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD034; } }
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 1;
L_001BD034:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28488u)));
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD04Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001BD04Cu) [[unlikely]] return; }
L_001BD04C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] - 28496u));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st64((c.r[1].w[0] - 28496u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28488u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st32((c.r[1].w[0] - 28488u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 28496u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD0B4; } }
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 1;
L_001BD0B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD0C0u); set32(c.r[4], ld32((c.r[1].w[0] - 28488u)));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x001BD0C0u) [[unlikely]] return; }
L_001BD0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] - 28496u));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st64((c.r[1].w[0] - 28496u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28488u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st32((c.r[1].w[0] - 28488u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD110:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001BD1CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001BD174; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001BD138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD20C; } }
L_001BD138:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001BD148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BD224; } }
L_001BD148:
    set32(c.r[3], ld32((c.r[28].w[0] - 25504u)));
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[3].d[0] - c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st64((c.r[1].w[0] - 28496u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 28488u), c.r[2].w[0]);  if (t) { goto L_001BD20C; } }
L_001BD174:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] - 28496u));
    c.r[3].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BD19C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25504u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD1A4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001BD19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BD224; } }
L_001BD1A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st64((c.r[1].w[0] - 28496u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28488u)));
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 28488u), c.r[2].w[0]);  if (t) { goto L_001BD20C; } }
L_001BD1CC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001BD1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BD224; } }
L_001BD1DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25504u)));
    c.r[2].d[0] = 0ull - c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st64((c.r[1].w[0] - 28496u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BF0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st32((c.r[1].w[0] - 28488u), c.r[2].w[0]);
    c.budget -= 12;
L_001BD20C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFE400000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
L_001BD224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BD230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] - 13152u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD264u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BD264u) [[unlikely]] return; }
L_001BD264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_001BD2F0; } }
L_001BD26C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25488u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001BD2AC; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD288u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 126u, depth + 1u); else { c.pc = 0x001BD320u; return; } if (c.pc != 0x001BD288u) [[unlikely]] return; }
L_001BD288:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2A0u); st32((c.r[28].w[0] - 25492u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0031(c, 101u, depth + 1u); else { c.pc = 0x001C4F60u; return; } if (c.pc != 0x001BD2A0u) [[unlikely]] return; }
L_001BD2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);  if (t) { goto L_001BD2D4; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001BD2AC:
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2B8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 130u, depth + 1u); else { c.pc = 0x001BD3C0u; return; } if (c.pc != 0x001BD2B8u) [[unlikely]] return; }
L_001BD2B8:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2CCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 101u, depth + 1u); else { c.pc = 0x001C4F60u; return; } if (c.pc != 0x001BD2CCu) [[unlikely]] return; }
L_001BD2CC:
    set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 2;
L_001BD2D4:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD2E8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BD2E8u) [[unlikely]] return; }
L_001BD2E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD26Cu | kUnwind; return; } goto L_001BD26C; } }
L_001BD2F0:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BD320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25496u)));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001BD35C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { goto L_001BD374; } }
L_001BD35C:
    set32(c.r[5], ld32((c.r[28].w[0] - 25420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD368u); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001BD368u) [[unlikely]] return; }
L_001BD368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_001BD398; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    c.budget -= 1;
L_001BD374:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD394u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001BD394u) [[unlikely]] return; }
L_001BD394:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_001BD398:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD3A8u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001BD3A8u) [[unlikely]] return; }
L_001BD3A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BD3C0:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 972u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    c.budget -= 9;
    { set32(c.r[6], ld32((c.r[2].w[0])));  [[clang::musttail]] return unit_0031(c, 71u, depth); }
L_001BD3F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[4].w[0] << 3);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 972u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001BD4A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001BD498; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25496u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BD454; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD494; } }
L_001BD454:
    set32(c.r[5], ld32((c.r[28].w[0] - 25420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD460u); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001BD460u) [[unlikely]] return; }
L_001BD460:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001BD490; } }
L_001BD468:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_001BD490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD478u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 44u, depth + 1u); else { c.pc = 0x001C4620u; return; } if (c.pc != 0x001BD478u) [[unlikely]] return; }
L_001BD478:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD484u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 123u, depth + 1u); else { c.pc = 0x001C55F0u; return; } if (c.pc != 0x001BD484u) [[unlikely]] return; }
L_001BD484:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; mmi::paddub(c.r[17], c.r[18], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD468u | kUnwind; return; } goto L_001BD468; } }
    c.budget -= 1;
L_001BD490:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_001BD494:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001BD498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4A0u);  if (depth < kMaxDepth) unit_0031(c, 42u, depth + 1u); else { c.pc = 0x001C45E0u; return; } if (c.pc != 0x001BD4A0u) [[unlikely]] return; }
L_001BD4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4A8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5740u; return; } if (c.pc != 0x001BD4A8u) [[unlikely]] return; }
L_001BD4A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BD4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4E0u);  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BD230u; return; } if (c.pc != 0x001BD4E0u) [[unlikely]] return; }
L_001BD4E0:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 13312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD4F8u); set32(c.r[4], c.r[2].w[0] - 13152u);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001BD4F8u) [[unlikely]] return; }
L_001BD4F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BD510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] - 13152u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001BD580; } }
L_001BD53C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25488u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001BD564; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD558u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 126u, depth + 1u); else { c.pc = 0x001BD320u; return; } if (c.pc != 0x001BD558u) [[unlikely]] return; }
L_001BD558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_001BD574; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001BD564:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD570u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 130u, depth + 1u); else { c.pc = 0x001BD3C0u; return; } if (c.pc != 0x001BD570u) [[unlikely]] return; }
L_001BD570:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_001BD574:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_001BD580:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD594u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BD594u) [[unlikely]] return; }
L_001BD594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD53Cu | kUnwind; return; } goto L_001BD53C; } }
    c.budget -= 1;
L_001BD5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] - 13312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 13152u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001BD5C4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001BD5C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD5D0u); set32(c.r[4], c.r[2].w[0] - 13152u);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001BD5D0u) [[unlikely]] return; }
L_001BD5D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BD600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld16((c.r[6].w[0] + 12u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001BD624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001BD630; } }
L_001BD624:
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001BD738; } }
L_001BD630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 3200u);  if (t) { goto L_001BD648; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[9].d[0] = c.r[2].d[0] << 16;  if (t) { goto L_001BD664; } }
L_001BD648:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001BD6C0; } }
    c.r[2].d[0] = ld64((c.r[8].w[0] + 8u));
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_001BD6C0; } }
    c.r[9].d[0] = c.r[2].d[0] << 16;
    c.budget -= 1;
L_001BD664:
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.budget -= 3;
L_001BD670:
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD6B0; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD6B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_001BD6B0; } }
    st64((c.r[16].w[0]), c.r[3].d[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    mmi::paddub(c.r[9], c.r[3], c.r[0]);
    c.budget -= 3;
L_001BD6B0:
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD670u | kUnwind; return; } goto L_001BD670; } }
    c.budget -= 1;
L_001BD6C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001BD704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6D0u);  if (depth < kMaxDepth) unit_002F(c, 176u, depth + 1u); else { c.pc = 0x001BDA80u; return; } if (c.pc != 0x001BD6D0u) [[unlikely]] return; }
L_001BD6D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[3].w[0] + 3200u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] + 3200u);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001BD6F4; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_001BD6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD6FCu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 360u, depth + 1u); else { c.pc = 0x001BFD90u; return; } if (c.pc != 0x001BD6FCu) [[unlikely]] return; }
L_001BD6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001BD73C; } }
L_001BD704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] + 3200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] + 3200u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_001BD728; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001BD728:
    c.r[5].d[0] = ld16((c.r[6].w[0] + 12u));
    c.r[4].d[0] = ld64((c.r[8].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD738u); mmi::paddub(c.r[6], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 287u, depth + 1u); else { c.pc = 0x001BF2B0u; return; } if (c.pc != 0x001BD738u) [[unlikely]] return; }
L_001BD738:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BD73C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BD750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 7056u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001BD7D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 7056u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD784u); set32(c.r[4], c.r[2].w[0] - 7056u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001BD784u) [[unlikely]] return; }
L_001BD784:
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001BD79C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BD7AC; } }
L_001BD79C:
    set32(c.r[2], 0u + 40u);
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001BD7BC; } }
L_001BD7AC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001BD7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 6976u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD7D0u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 357u, depth + 1u); else { c.pc = 0x001BFCF0u; return; } if (c.pc != 0x001BD7D0u) [[unlikely]] return; }
L_001BD7D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BD7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001BD938; } }
L_001BD808:
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[2].w[0] + 960u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25488u)));
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001BD85C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25496u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD848; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BD85C; } }
L_001BD848:
    set32(c.r[5], ld32((c.r[28].w[0] - 25420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD854u); set32(c.r[4], ld32((c.r[28].w[0] - 25412u)));  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001BD854u) [[unlikely]] return; }
L_001BD854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001BD870; } }
L_001BD85C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD868u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 55u, depth + 1u); else { c.pc = 0x001C4750u; return; } if (c.pc != 0x001BD868u) [[unlikely]] return; }
L_001BD868:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 2;
L_001BD870:
    set32(c.r[3], ld32((c.r[28].w[0] - 25508u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD8AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD8AC; } }
L_001BD890:
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8A4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 147u, depth + 1u); else { c.pc = 0x001BD600u; return; } if (c.pc != 0x001BD8A4u) [[unlikely]] return; }
L_001BD8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[18].w[0]);  if (t) { goto L_001BD938; } }
L_001BD8AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BD8FC; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BD8FC; } }
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8E0u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 168u, depth + 1u); else { c.pc = 0x001BD990u; return; } if (c.pc != 0x001BD8E0u) [[unlikely]] return; }
L_001BD8E0:
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD8F4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 147u, depth + 1u); else { c.pc = 0x001BD600u; return; } if (c.pc != 0x001BD8F4u) [[unlikely]] return; }
L_001BD8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[18].w[0]);  if (t) { goto L_001BD934; } }
L_001BD8FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 7056u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD890u | kUnwind; return; } goto L_001BD890; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD920u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 168u, depth + 1u); else { c.pc = 0x001BD990u; return; } if (c.pc != 0x001BD920u) [[unlikely]] return; }
L_001BD920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD928u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 152u, depth + 1u); else { c.pc = 0x001BD750u; return; } if (c.pc != 0x001BD928u) [[unlikely]] return; }
L_001BD928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD930u);  if (depth < kMaxDepth) unit_002F(c, 167u, depth + 1u); else { c.pc = 0x001BD980u; return; } if (c.pc != 0x001BD930u) [[unlikely]] return; }
L_001BD930:
    set32(c.r[20], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_001BD934:
    c.budget -= 1;
L_001BD938:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BD958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD94Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 291u, depth + 1u); else { c.pc = 0x001C3280u; return; } if (c.pc != 0x001BD94Cu) [[unlikely]] return; }
L_001BD94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BD808u | kUnwind; return; } goto L_001BD808; } }
    c.budget -= 1;
L_001BD958:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BD980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 7056u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001BD990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[16], c.r[2].w[0] - 7056u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[17], c.r[2].w[0] - 6976u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (t) { goto L_001BD9F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9D8u); set32(c.r[4], c.r[2].w[0] - 7056u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001BD9D8u) [[unlikely]] return; }
L_001BD9D8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BD9E8u); set32(c.r[4], c.r[2].w[0] - 6976u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001BD9E8u) [[unlikely]] return; }
L_001BD9E8:
    c.r[19].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001BD9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA08u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BDA08u) [[unlikely]] return; }
L_001BDA08:
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x001BDA18u) [[unlikely]] return; }
L_001BDA18:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001BDA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA28u);  if (depth < kMaxDepth) unit_002F(c, 167u, depth + 1u); else { c.pc = 0x001BD980u; return; } if (c.pc != 0x001BDA28u) [[unlikely]] return; }
L_001BDA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_001BDA60; } }
L_001BDA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] - 13152u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA48u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001BDA48u) [[unlikely]] return; }
L_001BDA48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 13152u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDA5Cu); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001BDA5Cu) [[unlikely]] return; }
L_001BDA5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BDA60:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BDA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 12848u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDABCu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BDABCu) [[unlikely]] return; }
L_001BDABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28576u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] - 13152u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAE4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 71u, depth + 1u); else { c.pc = 0x001C4A00u; return; } if (c.pc != 0x001BDAE4u) [[unlikely]] return; }
L_001BDAE4:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 28656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDAFCu); set32(c.r[4], c.r[2].w[0] - 13152u);  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C5250u; return; } if (c.pc != 0x001BDAFCu) [[unlikely]] return; }
L_001BDAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[2], c.r[2].w[0] - 28576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st32((c.r[1].w[0] - 28480u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st16((c.r[1].w[0] - 28476u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 28474u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 28473u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 28472u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 28656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st32((c.r[1].w[0] - 28468u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 28480u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BDB60:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 6896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], 0u + 9472u);
    c.r[4].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BDBA4; } }
    c.r[3].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BDBA4; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_001BDBA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 6384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[2].w[0] - 6368u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_001BDC08; } }
L_001BDBC8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001BDC00; }
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], 0u + 9472u);
    c.r[5].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001BDC18; } }
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BDC18; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001BDC18; } }
L_001BDC00:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_001BDC08:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BDBC8u | kUnwind; return; } goto L_001BDBC8; }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BDC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDC20:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[3], c.r[2].w[0] + 9216u);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_001BDC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 8448u);
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.budget -= 9;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[5], c.r[0]);  goto L_001BDCB0; }
    set32(c.r[2], 0u + 9216u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDCAC; } }
    set32(c.r[2], 0u + 9472u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 9471ull;  if (t) { goto L_001BDCA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BDC9C; } }
    set32(c.r[2], 0u + 8960u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BDC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001BDD3C; } }
L_001BDC98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001BDD44; } }
    c.r[2].d[0] = c.r[5].d[0] & 9471ull;
    c.budget -= 1;
L_001BDCA8:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001BDCAC:
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_001BDCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDCB8u);  if (depth < kMaxDepth) unit_0031(c, 108u, depth + 1u); else { c.pc = 0x001C5100u; return; } if (c.pc != 0x001BDCB8u) [[unlikely]] return; }
L_001BDCB8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 152ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BDCD8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 247ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BDCE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDCD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001BDD44; } }
L_001BDCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 6656u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001BDD10; } }
    set32(c.r[2], 0u + 222u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BDD44; } }
L_001BDD10:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BDD30; } }
    set32(c.r[2], 0u + 223u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BDD44; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BDD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001BDD48; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_001BDD3C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001BDD44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BDD48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BDD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 95u, depth + 1u); else { c.pc = 0x001C4DE0u; return; } if (c.pc != 0x001BDD74u) [[unlikely]] return; }
L_001BDD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 44u);  if (t) { goto L_001BDD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 118u, depth + 1u); else { c.pc = 0x001C5370u; return; } if (c.pc != 0x001BDD84u) [[unlikely]] return; }
L_001BDD84:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 2;
L_001BDD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDD94u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 184u, depth + 1u); else { c.pc = 0x001BDC40u; return; } if (c.pc != 0x001BDD94u) [[unlikely]] return; }
L_001BDD94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BDDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BDDC8; } }
L_001BDDA8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
L_001BDDC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BDDE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDDF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 95u, depth + 1u); else { c.pc = 0x001C4DE0u; return; } if (c.pc != 0x001BDDF4u) [[unlikely]] return; }
L_001BDDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 44u);  if (t) { goto L_001BDE0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0031(c, 118u, depth + 1u); else { c.pc = 0x001C5370u; return; } if (c.pc != 0x001BDE04u) [[unlikely]] return; }
L_001BDE04:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 2;
L_001BDE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDE14u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 184u, depth + 1u); else { c.pc = 0x001BDC40u; return; } if (c.pc != 0x001BDE14u) [[unlikely]] return; }
L_001BDE14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BDE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BDE48; } }
L_001BDE28:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 2128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 11ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
L_001BDE48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BDE60:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[2].w[0] - 6160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[2].w[0] - 5980u);
    c.budget -= 5;
L_001BDE74:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_001BDE8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));  if (t) { goto L_001BDEAC; } }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001BDE8C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BDEAC; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BDE74u | kUnwind; return; } goto L_001BDE74; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001BDEAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDEC0:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[28].w[0] - 30320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_001BDF00:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_001BDF28; }
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BDF24; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001BDF28; } }
L_001BDF24:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BDF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BDF30:
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BDF4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE050; } }
L_001BDF4C:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BDF80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BDF6Cu);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BDF00u; return; } if (c.pc != 0x001BDF6Cu) [[unlikely]] return; }
L_001BDF6C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001BDF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE050; } }
L_001BDF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4512u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], 0u + 255u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 192ll ? 1ull : 0ull;  if (t) { goto L_001BDFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE050; } }
    c.r[2].d[0] = c.r[7].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BDFB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] - 65u);  if (t) { goto L_001BDFD8; } }
    set32(c.r[2], c.r[7].w[0] - 192u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001BDFE8; } }
    set32(c.r[2], c.r[7].w[0] - 65u);
    c.budget -= 1;
L_001BDFD8:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4976u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001BDFE8:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE004; } }
    c.r[2].d[0] = c.r[4].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE028; } }
L_001BE004:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE020u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_002F(c, 196u, depth + 1u); else { c.pc = 0x001BDEC0u; return; } if (c.pc != 0x001BE020u) [[unlikely]] return; }
L_001BE020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BE054; } }
L_001BE028:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE050u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_002F(c, 196u, depth + 1u); else { c.pc = 0x001BDEC0u; return; } if (c.pc != 0x001BE050u) [[unlikely]] return; }
L_001BE050:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BE054:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE060:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BE07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE2A0; } }
L_001BE07C:
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 160u);  if (t) { goto L_001BE108; } }
    c.r[1].d[0] = c.r[3].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_001BE0C0; } }
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE0A8u);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BDF00u; return; } if (c.pc != 0x001BE0A8u) [[unlikely]] return; }
L_001BE0A8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001BE104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE2A0; } }
L_001BE0BC:
    set32(c.r[2], 0u + 13u);
    c.budget -= 1;
L_001BE0C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE0F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 56u);  if (t) { goto L_001BE0E4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 53ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BE0EC; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 1;
L_001BE0E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE0FC; } }
L_001BE0EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BE0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BE2A4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BE0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE2A0; } }
L_001BE104:
    set32(c.r[2], 0u + 160u);
    c.budget -= 1;
L_001BE108:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_001BE250; } }
    set32(c.r[2], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    set32(c.r[2], 0u + 146u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    set32(c.r[2], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    set32(c.r[2], 0u + 151u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001BE238; } }
    set32(c.r[2], 0u + 177u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_001BE204; }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 162u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 155u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 154u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    set32(c.r[2], 0u + 139u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001BE268; } }
L_001BE200:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_001BE204:
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_001BE220; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE22C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_001BE220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE2A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BE22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE2A0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_001BE238:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE2A0; } }
L_001BE24C:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_001BE250:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE29C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE2A0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001BE268:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BE294; } }
    set32(c.r[2], c.r[3].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BE290; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE29C; } }
L_001BE290:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BE294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE2A0; } }
L_001BE29C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BE2A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BE2A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001BE2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_001BE390; } }
L_001BE2D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001BE2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BE394; } }
L_001BE2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2ECu);  if (depth < kMaxDepth) unit_0030(c, 29u, depth + 1u); else { c.pc = 0x001C0360u; return; } if (c.pc != 0x001BE2ECu) [[unlikely]] return; }
L_001BE2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE2F4u);  if (depth < kMaxDepth) unit_0030(c, 30u, depth + 1u); else { c.pc = 0x001C0370u; return; } if (c.pc != 0x001BE2F4u) [[unlikely]] return; }
L_001BE2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BE31C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u - 8u);  if (t) { goto L_001BE314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_001BE314; } }
    set32(c.r[2], 0u - 8u);
    c.budget -= 1;
L_001BE314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE390; } }
L_001BE31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE324u);  if (depth < kMaxDepth) unit_0030(c, 41u, depth + 1u); else { c.pc = 0x001C04B0u; return; } if (c.pc != 0x001BE324u) [[unlikely]] return; }
L_001BE324:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BE340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE338u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C03C0u; return; } if (c.pc != 0x001BE338u) [[unlikely]] return; }
L_001BE338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001BE390; } }
L_001BE340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE348u);  if (depth < kMaxDepth) unit_0030(c, 49u, depth + 1u); else { c.pc = 0x001C06E0u; return; } if (c.pc != 0x001BE348u) [[unlikely]] return; }
L_001BE348:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BE364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE35Cu);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C03C0u; return; } if (c.pc != 0x001BE35Cu) [[unlikely]] return; }
L_001BE35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001BE390; } }
L_001BE364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE36Cu);  if (depth < kMaxDepth) unit_0030(c, 38u, depth + 1u); else { c.pc = 0x001C0480u; return; } if (c.pc != 0x001BE36Cu) [[unlikely]] return; }
L_001BE36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE374u);  if (depth < kMaxDepth) unit_0030(c, 94u, depth + 1u); else { c.pc = 0x001C0FB0u; return; } if (c.pc != 0x001BE374u) [[unlikely]] return; }
L_001BE374:
    set32(c.r[3], ld32((c.r[28].w[0] - 30308u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BE390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 6u);  if (t) { goto L_001BE390; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BE390:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BE394:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BE3F8; } }
L_001BE3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3C8u);  if (depth < kMaxDepth) unit_0030(c, 46u, depth + 1u); else { c.pc = 0x001C05A0u; return; } if (c.pc != 0x001BE3C8u) [[unlikely]] return; }
L_001BE3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3D0u);  if (depth < kMaxDepth) unit_0030(c, 99u, depth + 1u); else { c.pc = 0x001C1000u; return; } if (c.pc != 0x001BE3D0u) [[unlikely]] return; }
L_001BE3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3D8u);  if (depth < kMaxDepth) unit_0030(c, 77u, depth + 1u); else { c.pc = 0x001C0C40u; return; } if (c.pc != 0x001BE3D8u) [[unlikely]] return; }
L_001BE3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE3E0u);  if (depth < kMaxDepth) unit_0030(c, 32u, depth + 1u); else { c.pc = 0x001C03C0u; return; } if (c.pc != 0x001BE3E0u) [[unlikely]] return; }
L_001BE3E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BE3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_001BE3F8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BE3F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BE410:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_001BE450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BE5E8; } }
L_001BE450:
    c.r[16].d[0] = c.r[18].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE468u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BE468u) [[unlikely]] return; }
L_001BE468:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE488u); st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 228u, depth + 1u); else { c.pc = 0x001BE610u; return; } if (c.pc != 0x001BE488u) [[unlikely]] return; }
L_001BE488:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_001BE49C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001BE5E8; } }
L_001BE49C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4ACu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BE4ACu) [[unlikely]] return; }
L_001BE4AC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE4C0u); st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 155u, depth + 1u); else { c.pc = 0x001C1970u; return; } if (c.pc != 0x001BE4C0u) [[unlikely]] return; }
L_001BE4C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BE4D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001BE5E8; } }
L_001BE4D4:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BE4F0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE4EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_001BE5EC; } }
L_001BE4EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BE4F0:
    st16((c.r[17].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 198u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 214u)));
    st32((c.r[29].w[0] + 236u), 0u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 212u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_001BE548; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], c.r[17].w[0] + 22u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE538u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BE538u) [[unlikely]] return; }
L_001BE538:
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 210u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001BE5A8; } }
L_001BE548:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BE578; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], c.r[17].w[0] + 22u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE568u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BE568u) [[unlikely]] return; }
L_001BE568:
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001BE5A8; } }
L_001BE578:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], c.r[17].w[0] + 22u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE590u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BE590u) [[unlikely]] return; }
L_001BE590:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], c.r[17].w[0] + 22u);
    set32(c.r[7], c.r[29].w[0] + 236u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5A4u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BE5A4u) [[unlikely]] return; }
L_001BE5A4:
    st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001BE5A8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 194u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 210u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE5BCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 192u)));  if (depth < kMaxDepth) unit_0030(c, 82u, depth + 1u); else { c.pc = 0x001C0CC0u; return; } if (c.pc != 0x001BE5BCu) [[unlikely]] return; }
L_001BE5BC:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st64((c.r[17].w[0] + 8u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
L_001BE5E8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BE5EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001BE610:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE658u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 54u, depth + 1u); else { c.pc = 0x001C0870u; return; } if (c.pc != 0x001BE658u) [[unlikely]] return; }
L_001BE658:
    mmi::paddub(c.r[30], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE668u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 58u, depth + 1u); else { c.pc = 0x001C0950u; return; } if (c.pc != 0x001BE668u) [[unlikely]] return; }
L_001BE668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_001BE67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BE820; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BE67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE684u); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BE684u) [[unlikely]] return; }
L_001BE684:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE698u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 60u, depth + 1u); else { c.pc = 0x001C09A0u; return; } if (c.pc != 0x001BE698u) [[unlikely]] return; }
L_001BE698:
    c.r[21].d[0] = c.r[16].d[0] << 48;
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001BE778; } }
L_001BE6AC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    set32(c.r[4], c.r[19].w[0] + 3u);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE6C8u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 62u, depth + 1u); else { c.pc = 0x001C0A10u; return; } if (c.pc != 0x001BE6C8u) [[unlikely]] return; }
L_001BE6C8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 3u);  if (t) { goto L_001BE6F4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[4], c.r[19].w[0] + 3u);
    c.budget -= 4;
L_001BE6F4:
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE700u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BE700u) [[unlikely]] return; }
L_001BE700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BE730; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[21].d[0]; c.r[16].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_001BE724; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001BE720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BE820; } }
L_001BE720:
    c.r[16].d[0] = c.r[20].d[0] << 48;
    c.budget -= 1;
L_001BE724:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[23], c.r[19], c.r[0]);  if (t) { goto L_001BE760; } }
L_001BE730:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BE760; } }
    set32(c.r[4], c.r[19].w[0] + 3u);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE748u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BE748u) [[unlikely]] return; }
L_001BE748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001BE79C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001BE798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001BE820; } }
L_001BE760:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001BE778:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE6ACu | kUnwind; return; } goto L_001BE6AC; } }
    c.budget -= 1;
L_001BE798:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001BE79C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001BE7F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 160u)));
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001BE7D4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], 0u - 1u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE820; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_001BE7D4:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[22].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE7ECu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 54u, depth + 1u); else { c.pc = 0x001C0870u; return; } if (c.pc != 0x001BE7ECu) [[unlikely]] return; }
L_001BE7EC:
    mmi::paddub(c.r[30], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE67Cu | kUnwind; return; } goto L_001BE67C; } }
L_001BE7F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[23].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
L_001BE820:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001BE850:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    set32(c.r[6], c.r[8].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[17], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[21], c.r[3].w[0] + 3u);
    mmi::paddub(c.r[16], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[1].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_001BE950; } }
L_001BE8BC:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001BE8E8; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001BE8E8:
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BE904; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BE908; } }
L_001BE904:
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001BE908:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE918u); st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 243u, depth + 1u); else { c.pc = 0x001BE980u; return; } if (c.pc != 0x001BE918u) [[unlikely]] return; }
L_001BE918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_001BE934; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[19].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 6u);  if (t) { goto L_001BE950; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_001BE934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BE93Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BE93Cu) [[unlikely]] return; }
L_001BE93C:
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE8BCu | kUnwind; return; } goto L_001BE8BC; } }
    c.budget -= 1;
L_001BE950:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BE980:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BE9E4; } }
L_001BE98C:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[4].w[0] + 6u);  goto L_001BE9D4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BE9D0; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_001BE9C8; }
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001BE9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BE9E4; } }
L_001BE9D0:
    set32(c.r[4], c.r[4].w[0] + 6u);
    c.budget -= 1;
L_001BE9D4:
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE98Cu | kUnwind; return; } goto L_001BE98C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BE9E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BE9F0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[4], c.r[0]);  if (t) { goto L_001BEA24; } }
L_001BE9FC:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BEA20; } }
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BE9FCu | kUnwind; return; } goto L_001BE9FC; } }
    c.budget -= 1;
L_001BEA20:
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_001BEA24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BEA30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001BEA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BEB60; } }
L_001BEA64:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[6].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA78u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BEA78u) [[unlikely]] return; }
L_001BEA78:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEA98u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 254u, depth + 1u); else { c.pc = 0x001BEB80u; return; } if (c.pc != 0x001BEA98u) [[unlikely]] return; }
L_001BEA98:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAACu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 162u, depth + 1u); else { c.pc = 0x001C1B10u; return; } if (c.pc != 0x001BEAACu) [[unlikely]] return; }
L_001BEAAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_001BEAC4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001BEAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BEB60; } }
L_001BEAC4:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 204u), 0u);  if (t) { goto L_001BEAF8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    set32(c.r[7], c.r[29].w[0] + 204u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEAF4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BEAF4u) [[unlikely]] return; }
L_001BEAF4:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001BEAF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001BEB1C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[16].w[0] + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB18u); set32(c.r[7], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_002F(c, 239u, depth + 1u); else { c.pc = 0x001BE850u; return; } if (c.pc != 0x001BEB18u) [[unlikely]] return; }
L_001BEB18:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001BEB1C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 162u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 178u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEB30u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 160u)));  if (depth < kMaxDepth) unit_0030(c, 82u, depth + 1u); else { c.pc = 0x001C0CC0u; return; } if (c.pc != 0x001BEB30u) [[unlikely]] return; }
L_001BEB30:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001BEB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BEB60; } }
L_001BEB5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BEB60:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001BEB80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[5].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_001BEBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBC4u);  if (depth < kMaxDepth) unit_0030(c, 52u, depth + 1u); else { c.pc = 0x001C0740u; return; } if (c.pc != 0x001BEBC4u) [[unlikely]] return; }
L_001BEBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_001BEBE0; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BECC8; } }
L_001BEBDC:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_001BEBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBE8u);  if (depth < kMaxDepth) unit_0030(c, 54u, depth + 1u); else { c.pc = 0x001C0870u; return; } if (c.pc != 0x001BEBE8u) [[unlikely]] return; }
L_001BEBE8:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEBF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BEBF4u) [[unlikely]] return; }
L_001BEBF4:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_001BEC68; } }
L_001BEC00:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[18].w[0] + 3u);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEC1Cu); mmi::paddub(c.r[6], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BEC1Cu) [[unlikely]] return; }
L_001BEC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BEC34; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[19].d[0];  if (t) { goto L_001BEC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));  if (t) { goto L_001BEC50; } }
L_001BEC34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001BEC4C; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BECC8; } }
L_001BEC4C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 1;
L_001BEC50:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_001BEC68:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEC00u | kUnwind; return; } goto L_001BEC00; } }
    c.budget -= 1;
L_001BEC88:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BECB4; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BECC8; } }
L_001BECB4:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[18].w[0] - c.r[17].w[0]);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 5;
L_001BECC8:
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
L_001BECF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_001BED24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BEDCC; } }
L_001BED24:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED34u); set32(c.r[7], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0030(c, 84u, depth + 1u); else { c.pc = 0x001C0D80u; return; } if (c.pc != 0x001BED34u) [[unlikely]] return; }
L_001BED34:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001BED48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BEDCC; } }
L_001BED48:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 76u), c.r[4].w[0]);  if (t) { goto L_001BED7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED5Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BED5Cu) [[unlikely]] return; }
L_001BED5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    mmi::paddub(c.r[8], c.r[16], c.r[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED7Cu); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 266u, depth + 1u); else { c.pc = 0x001BEDF0u; return; } if (c.pc != 0x001BED7Cu) [[unlikely]] return; }
L_001BED7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001BEDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BED94u);  if (depth < kMaxDepth) unit_0030(c, 124u, depth + 1u); else { c.pc = 0x001C1440u; return; } if (c.pc != 0x001BED94u) [[unlikely]] return; }
L_001BED94:
    set32(c.r[7], c.r[29].w[0] + 76u);
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[8], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEDB0u); c.r[9].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_002F(c, 266u, depth + 1u); else { c.pc = 0x001BEDF0u; return; } if (c.pc != 0x001BEDB0u) [[unlikely]] return; }
L_001BEDB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BEDCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BEDCC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BEDCC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BEDF0:
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
    mmi::paddub(c.r[21], c.r[6], c.r[0]);
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[30], ld32((c.r[7].w[0])));
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[8], c.r[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    mmi::paddub(c.r[18], c.r[9], c.r[0]);
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[7], c.r[0]);  if (t) { goto L_001BEEE0; } }
L_001BEE64:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[6], c.r[0], c.r[0]);  goto L_001BEE8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_001BEE90; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BEE8C:
    c.budget -= 1;
L_001BEE90:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { mmi::paddub(c.r[5], c.r[16], c.r[0]);  goto L_001BEEC4; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[6].d[0];  if (t) { goto L_001BEEC0; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BEEC0; } }
    st32((c.r[20].w[0]), c.r[5].w[0]);
    mmi::paddub(c.r[17], c.r[3], c.r[0]);
    c.budget -= 3;
L_001BEEC0:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 1;
L_001BEEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEECCu);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BEECCu) [[unlikely]] return; }
L_001BEECC:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BEE64u | kUnwind; return; } goto L_001BEE64; } }
    c.budget -= 1;
L_001BEEE0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BEF08; } }
    set32(c.r[2], c.r[17].w[0] - c.r[23].w[0]);
    c.r[7].d[0] = c.r[18].d[0] | c.r[2].d[0];
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEF08u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 270u, depth + 1u); else { c.pc = 0x001BEF40u; return; } if (c.pc != 0x001BEF08u) [[unlikely]] return; }
L_001BEF08:
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
L_001BEF40:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 5u);  goto L_001BEF6C; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.budget -= 2;
L_001BEF6C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0030(c, 183u, depth); }
L_001BEF80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[8], c.r[0]);  if (t) { goto L_001BEFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BF06C; } }
L_001BEFBC:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFCCu); set32(c.r[7], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0030(c, 84u, depth + 1u); else { c.pc = 0x001C0D80u; return; } if (c.pc != 0x001BEFCCu) [[unlikely]] return; }
L_001BEFCC:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001BEFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BF06C; } }
L_001BEFE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_001BF01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BEFF8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BEFF8u) [[unlikely]] return; }
L_001BEFF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], c.r[29].w[0] + 88u);
    set32(c.r[8], c.r[29].w[0] + 92u);
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    mmi::paddub(c.r[9], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF01Cu); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 277u, depth + 1u); else { c.pc = 0x001BF090u; return; } if (c.pc != 0x001BF01Cu) [[unlikely]] return; }
L_001BF01C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001BF054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF034u);  if (depth < kMaxDepth) unit_0030(c, 124u, depth + 1u); else { c.pc = 0x001C1440u; return; } if (c.pc != 0x001BF034u) [[unlikely]] return; }
L_001BF034:
    set32(c.r[7], c.r[29].w[0] + 88u);
    set32(c.r[8], c.r[29].w[0] + 92u);
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    mmi::paddub(c.r[9], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF054u); c.r[10].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_002F(c, 277u, depth + 1u); else { c.pc = 0x001BF090u; return; } if (c.pc != 0x001BF054u) [[unlikely]] return; }
L_001BF054:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001BF068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BF06C; } }
L_001BF068:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BF06C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BF090:
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
    st32((c.r[29].w[0] + 172u), c.r[6].w[0]);
    mmi::paddub(c.r[30], c.r[5], c.r[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    mmi::paddub(c.r[22], c.r[7], c.r[0]);
    mmi::paddub(c.r[21], c.r[8], c.r[0]);
    st32((c.r[29].w[0] + 168u), c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 164u), c.r[10].w[0]);
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[23], c.r[4], c.r[0]);  if (t) { goto L_001BF1D0; } }
L_001BF104:
    c.r[19].d[0] = ld8((c.r[16].w[0] + 1u));
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[3], c.r[0], c.r[0]);  goto L_001BF12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001BF130; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001BF12C:
    c.budget -= 1;
L_001BF130:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001BF1B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BF1B0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF154u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 181u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x001BF154u) [[unlikely]] return; }
L_001BF154:
    set32(c.r[20], c.r[2].w[0] + 6u);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF168; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001BF168:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[21].w[0])));
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF17Cu); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 283u, depth + 1u); else { c.pc = 0x001BF200u; return; } if (c.pc != 0x001BF17Cu) [[unlikely]] return; }
L_001BF17C:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[18].w[0] - c.r[23].w[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF198u); c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_002F(c, 270u, depth + 1u); else { c.pc = 0x001BEF40u; return; } if (c.pc != 0x001BF198u) [[unlikely]] return; }
L_001BF198:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_001BF1B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001BF1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF1BCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BF1BCu) [[unlikely]] return; }
L_001BF1BC:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF104u | kUnwind; return; } goto L_001BF104; } }
    c.budget -= 1;
L_001BF1D0:
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
L_001BF200:
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001BF26C; } }
L_001BF210:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF268; } }
    set32(c.r[4], c.r[4].w[0] + 5u);
    c.budget -= 2;
L_001BF228:
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF228u | kUnwind; return; } goto L_001BF228; } }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001BF25C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001BF25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF210u | kUnwind; return; } goto L_001BF210; } }
    c.budget -= 1;
L_001BF268:
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001BF26C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[4], c.r[0]);  if (t) { goto L_001BF2A4; } }
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF2A0; } }
L_001BF284:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF284u | kUnwind; return; } goto L_001BF284; } }
L_001BF2A0:
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_001BF2A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF2B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25484u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[19], c.r[7], c.r[0]);  if (t) { goto L_001BF2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BF4A4; } }
L_001BF2E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 16;  goto L_001BF304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BF4A4; } }
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.budget -= 1;
L_001BF304:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 100u);  if (t) { goto L_001BF35C; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001BF358; } }
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BF358; } }
    st32((c.r[28].w[0] - 25480u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF340u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 304u, depth + 1u); else { c.pc = 0x001BF560u; return; } if (c.pc != 0x001BF340u) [[unlikely]] return; }
L_001BF340:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF350u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 87u, depth + 1u); else { c.pc = 0x001C0E60u; return; } if (c.pc != 0x001BF350u) [[unlikely]] return; }
L_001BF350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BF4A4; } }
L_001BF358:
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 1;
L_001BF35C:
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF368u); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0030(c, 84u, depth + 1u); else { c.pc = 0x001C0D80u; return; } if (c.pc != 0x001BF368u) [[unlikely]] return; }
L_001BF368:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_001BF380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BF4A4; } }
    c.r[17].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_001BF380:
    c.r[18].d[0] = c.r[17].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001BF3B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001BF3A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BF4A4; } }
L_001BF3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3A8u);  if (depth < kMaxDepth) unit_0030(c, 124u, depth + 1u); else { c.pc = 0x001C1440u; return; } if (c.pc != 0x001BF3A8u) [[unlikely]] return; }
L_001BF3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_001BF3D8; } }
L_001BF3B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_001BF3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BF4A4; } }
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 1;
L_001BF3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3D0u);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BF3D0u) [[unlikely]] return; }
L_001BF3D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001BF3D8:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF3E4u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 85u, depth + 1u); else { c.pc = 0x001C0DF0u; return; } if (c.pc != 0x001BF3E4u) [[unlikely]] return; }
L_001BF3E4:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BF43C; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF43C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BF434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF428u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_0030(c, 167u, depth + 1u); else { c.pc = 0x001C1C20u; return; } if (c.pc != 0x001BF428u) [[unlikely]] return; }
L_001BF428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF430u);  if (depth < kMaxDepth) unit_0030(c, 174u, depth + 1u); else { c.pc = 0x001C1D40u; return; } if (c.pc != 0x001BF430u) [[unlikely]] return; }
L_001BF430:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BF434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_001BF4A8; } }
L_001BF43C:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_001BF464; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF45Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 304u, depth + 1u); else { c.pc = 0x001BF560u; return; } if (c.pc != 0x001BF45Cu) [[unlikely]] return; }
L_001BF45C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_001BF464:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001BF488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF478u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_0030(c, 167u, depth + 1u); else { c.pc = 0x001C1C20u; return; } if (c.pc != 0x001BF478u) [[unlikely]] return; }
L_001BF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF480u);  if (depth < kMaxDepth) unit_0030(c, 174u, depth + 1u); else { c.pc = 0x001C1D40u; return; } if (c.pc != 0x001BF480u) [[unlikely]] return; }
L_001BF480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 108u)));  if (t) { goto L_001BF494; } }
L_001BF488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF490u);  if (depth < kMaxDepth) unit_0030(c, 76u, depth + 1u); else { c.pc = 0x001C0C30u; return; } if (c.pc != 0x001BF490u) [[unlikely]] return; }
L_001BF490:
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_001BF494:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF4A0u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 87u, depth + 1u); else { c.pc = 0x001C0E60u; return; } if (c.pc != 0x001BF4A0u) [[unlikely]] return; }
L_001BF4A0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BF4A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001BF4A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BF4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BF548; } }
L_001BF50C:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (t) { goto L_001BF52C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 2;
L_001BF52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF534u);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BF534u) [[unlikely]] return; }
L_001BF534:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF50Cu | kUnwind; return; } goto L_001BF50C; } }
    c.budget -= 1;
L_001BF548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BF560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001BF608; } }
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 1;
L_001BF588:
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF59Cu); set32(c.r[7], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0030(c, 84u, depth + 1u); else { c.pc = 0x001C0D80u; return; } if (c.pc != 0x001BF59Cu) [[unlikely]] return; }
L_001BF59C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_001BF5F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001BF5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5BCu);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BF5BCu) [[unlikely]] return; }
L_001BF5BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 301u, depth + 1u); else { c.pc = 0x001BF4D0u; return; } if (c.pc != 0x001BF5C8u) [[unlikely]] return; }
L_001BF5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5D0u);  if (depth < kMaxDepth) unit_0030(c, 76u, depth + 1u); else { c.pc = 0x001C0C30u; return; } if (c.pc != 0x001BF5D0u) [[unlikely]] return; }
L_001BF5D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001BF5FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5E8u);  if (depth < kMaxDepth) unit_0030(c, 124u, depth + 1u); else { c.pc = 0x001C1440u; return; } if (c.pc != 0x001BF5E8u) [[unlikely]] return; }
L_001BF5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5F0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 301u, depth + 1u); else { c.pc = 0x001BF4D0u; return; } if (c.pc != 0x001BF5F0u) [[unlikely]] return; }
L_001BF5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF5F8u);  if (depth < kMaxDepth) unit_0030(c, 174u, depth + 1u); else { c.pc = 0x001C1D40u; return; } if (c.pc != 0x001BF5F8u) [[unlikely]] return; }
L_001BF5F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BF5FC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF588u | kUnwind; return; } goto L_001BF588; } }
L_001BF608:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BF620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001BF6B0; } }
L_001BF660:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 2u);  goto L_001BF67C; }
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 3;
L_001BF67C:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (t) { goto L_001BF694; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 2;
L_001BF694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF69Cu);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BF69Cu) [[unlikely]] return; }
L_001BF69C:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF660u | kUnwind; return; } goto L_001BF660; } }
    c.budget -= 1;
L_001BF6B0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001BF6D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_001BF70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BF8BC; } }
L_001BF70C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30308u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 6u);  if (t) { goto L_001BF8BC; } }
L_001BF724:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF734u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BF734u) [[unlikely]] return; }
L_001BF734:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF748u); st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 54u, depth + 1u); else { c.pc = 0x001C0870u; return; } if (c.pc != 0x001BF748u) [[unlikely]] return; }
L_001BF748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF750u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BF750u) [[unlikely]] return; }
L_001BF750:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF75Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 333u, depth + 1u); else { c.pc = 0x001BF8E0u; return; } if (c.pc != 0x001BF75Cu) [[unlikely]] return; }
L_001BF75C:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[16], c.r[0]);  if (t) { goto L_001BF7D8; } }
L_001BF76C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[4], c.r[17].w[0] + 3u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF788u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BF788u) [[unlikely]] return; }
L_001BF788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BF7A4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001BF7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_001BF7D8; } }
L_001BF7A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001BF7D8; } }
    c.budget -= 1;
L_001BF7B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF76Cu | kUnwind; return; } goto L_001BF76C; } }
    c.budget -= 1;
L_001BF7D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_001BF7F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7E8u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 136u, depth + 1u); else { c.pc = 0x001C1620u; return; } if (c.pc != 0x001BF7E8u) [[unlikely]] return; }
L_001BF7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_001BF800; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_001BF7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF7FCu);  if (depth < kMaxDepth) unit_0030(c, 138u, depth + 1u); else { c.pc = 0x001C1690u; return; } if (c.pc != 0x001BF7FCu) [[unlikely]] return; }
L_001BF7FC:
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 1;
L_001BF800:
    set32(c.r[2], c.r[16].w[0] + 1022u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BF81C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 5u);  if (t) { goto L_001BF8BC; } }
L_001BF81C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001BF868; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF834u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 335u, depth + 1u); else { c.pc = 0x001BF920u; return; } if (c.pc != 0x001BF834u) [[unlikely]] return; }
L_001BF834:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF848u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 140u, depth + 1u); else { c.pc = 0x001C16F0u; return; } if (c.pc != 0x001BF848u) [[unlikely]] return; }
L_001BF848:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BF8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF860u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0030(c, 53u, depth + 1u); else { c.pc = 0x001C07E0u; return; } if (c.pc != 0x001BF860u) [[unlikely]] return; }
L_001BF860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF8A8; } }
L_001BF868:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], c.r[18].w[0] + 2u);
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF88Cu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 335u, depth + 1u); else { c.pc = 0x001BF920u; return; } if (c.pc != 0x001BF88Cu) [[unlikely]] return; }
L_001BF88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF894u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 313u, depth + 1u); else { c.pc = 0x001BF620u; return; } if (c.pc != 0x001BF894u) [[unlikely]] return; }
L_001BF894:
    set32(c.r[7], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8A8u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 143u, depth + 1u); else { c.pc = 0x001C17C0u; return; } if (c.pc != 0x001BF8A8u) [[unlikely]] return; }
L_001BF8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8B0u);  if (depth < kMaxDepth) unit_0030(c, 80u, depth + 1u); else { c.pc = 0x001C0C90u; return; } if (c.pc != 0x001BF8B0u) [[unlikely]] return; }
L_001BF8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BF8B8u);  if (depth < kMaxDepth) unit_0030(c, 76u, depth + 1u); else { c.pc = 0x001C0C30u; return; } if (c.pc != 0x001BF8B8u) [[unlikely]] return; }
L_001BF8B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BF8BC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001BF8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));  if (t) { goto L_001BF8F4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001BF8EC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 2;
L_001BF8F4:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF8ECu | kUnwind; return; } goto L_001BF8EC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::paddub(c.r[2], c.r[4], c.r[0]);  c.pc = t; return; }
L_001BF920:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_001BF95C; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BF990; } }
L_001BF938:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF938u | kUnwind; return; } goto L_001BF938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BF990; } }
L_001BF95C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_001BF990; } }
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BF990; } }
L_001BF970:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BF970u | kUnwind; return; } goto L_001BF970; } }
    c.budget -= 1;
L_001BF990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BF9A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_001BF9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BFB40; } }
L_001BF9D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30308u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BF9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 6u);  if (t) { goto L_001BFB40; } }
L_001BF9F0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA00u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BFA00u) [[unlikely]] return; }
L_001BFA00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA14u); st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 54u, depth + 1u); else { c.pc = 0x001C0870u; return; } if (c.pc != 0x001BFA14u) [[unlikely]] return; }
L_001BFA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA1Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 72u, depth + 1u); else { c.pc = 0x001C0B70u; return; } if (c.pc != 0x001BFA1Cu) [[unlikely]] return; }
L_001BFA1C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 333u, depth + 1u); else { c.pc = 0x001BF8E0u; return; } if (c.pc != 0x001BFA28u) [[unlikely]] return; }
L_001BFA28:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BFAA0; } }
L_001BFA38:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], c.r[16].w[0] + 3u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFA54u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BFA54u) [[unlikely]] return; }
L_001BFA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BFA70; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001BFA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_001BFAA0; } }
L_001BFA70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001BFAA0; } }
L_001BFA78:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFA38u | kUnwind; return; } goto L_001BFA38; } }
    c.budget -= 1;
L_001BFAA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (t) { goto L_001BFAB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BFB40; } }
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 1;
L_001BFAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFABCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 350u, depth + 1u); else { c.pc = 0x001BFB60u; return; } if (c.pc != 0x001BFABCu) [[unlikely]] return; }
L_001BFABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001BFAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BFB40; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001BFAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001BFB04; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFAFCu); set32(c.r[6], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 335u, depth + 1u); else { c.pc = 0x001BF920u; return; } if (c.pc != 0x001BFAFCu) [[unlikely]] return; }
L_001BFAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFB2C; } }
L_001BFB04:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[6], 0u - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB2Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 335u, depth + 1u); else { c.pc = 0x001BF920u; return; } if (c.pc != 0x001BFB2Cu) [[unlikely]] return; }
L_001BFB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB34u);  if (depth < kMaxDepth) unit_0030(c, 80u, depth + 1u); else { c.pc = 0x001C0C90u; return; } if (c.pc != 0x001BFB34u) [[unlikely]] return; }
L_001BFB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB3Cu);  if (depth < kMaxDepth) unit_0030(c, 76u, depth + 1u); else { c.pc = 0x001C0C30u; return; } if (c.pc != 0x001BFB3Cu) [[unlikely]] return; }
L_001BFB3C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BFB40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001BFB60:
    set32(c.r[29], c.r[29].w[0] - 272u);
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
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFB9Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0030(c, 178u, depth + 1u); else { c.pc = 0x001C1DC0u; return; } if (c.pc != 0x001BFB9Cu) [[unlikely]] return; }
L_001BFB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFBA4u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0030(c, 175u, depth + 1u); else { c.pc = 0x001C1D50u; return; } if (c.pc != 0x001BFBA4u) [[unlikely]] return; }
L_001BFBA4:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[22].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 2u));
    mmi::paddub(c.r[23], c.r[22], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[22].w[0] + c.r[20].w[0]);
    set32(c.r[22], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[22], c.r[0]);  if (t) { goto L_001BFC50; } }
L_001BFBE4:
    set32(c.r[22], c.r[22].w[0] + 2u);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001BFC04; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
L_001BFC04:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC10u); mmi::paddub(c.r[17], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 245u, depth + 1u); else { c.pc = 0x001BE9F0u; return; } if (c.pc != 0x001BFC10u) [[unlikely]] return; }
L_001BFC10:
    mmi::paddub(c.r[22], c.r[2], c.r[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 7u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[22].w[0] - c.r[17].w[0]);  if (t) { goto L_001BFC40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[19].d[0]; c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_001BFC44; } }
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC38u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 22u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001BFC38u) [[unlikely]] return; }
L_001BFC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[22].w[0] - c.r[18].w[0]);  if (t) { goto L_001BFC54; } }
L_001BFC40:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001BFC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[22], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFBE4u | kUnwind; return; } goto L_001BFBE4; } }
    c.budget -= 1;
L_001BFC50:
    set32(c.r[17], c.r[22].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_001BFC54:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_001BFCC4; } }
    c.r[2].d[0] = ld8((c.r[23].w[0] + 2u));
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (t) { goto L_001BFC84; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[16].d[0];  if (t) { goto L_001BFC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001BFCC4; } }
L_001BFC80:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_001BFC84:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFC90u); set32(c.r[6], 0u - c.r[17].w[0]);  if (depth < kMaxDepth) unit_002F(c, 335u, depth + 1u); else { c.pc = 0x001BF920u; return; } if (c.pc != 0x001BFC90u) [[unlikely]] return; }
L_001BFC90:
    set32(c.r[20], c.r[20].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[2].d[0] = c.r[20].d[0] & 255ull;  if (t) { goto L_001BFCA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BFCA8; } }
    set32(c.r[2], c.r[2].w[0] - 256u);
    c.budget -= 1;
L_001BFCA8:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 8));  if (t) { goto L_001BFCBC; } }
    set32(c.r[2], c.r[20].w[0] + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_001BFCBC:
    st8((c.r[23].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 2;
L_001BFCC4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001BFCF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25484u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001BFD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BFD7C; } }
L_001BFD10:
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BFD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BFD7C; } }
L_001BFD28:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD38u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BFD38u) [[unlikely]] return; }
L_001BFD38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 39u);  if (t) { goto L_001BFD58; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BFD5C; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 1;
L_001BFD58:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001BFD5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFD78u); st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 144u, depth + 1u); else { c.pc = 0x001C1850u; return; } if (c.pc != 0x001BFD78u) [[unlikely]] return; }
L_001BFD78:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BFD7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001BFD90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25484u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001BFDC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001BFE64; } }
L_001BFDC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BFDDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BFE64; } }
L_001BFDDC:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFDECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x001BFDECu) [[unlikely]] return; }
L_001BFDEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE00u); st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 367u, depth + 1u); else { c.pc = 0x001BFE80u; return; } if (c.pc != 0x001BFE00u) [[unlikely]] return; }
L_001BFE00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001BFE14; } }
    set32(c.r[2], 0u + 31u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_001BFE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE1Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 85u, depth + 1u); else { c.pc = 0x001C0DF0u; return; } if (c.pc != 0x001BFE1Cu) [[unlikely]] return; }
L_001BFE1C:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001BFE44; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE3Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 304u, depth + 1u); else { c.pc = 0x001BF560u; return; } if (c.pc != 0x001BFE3Cu) [[unlikely]] return; }
L_001BFE3C:
    set32(c.r[19], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_001BFE44:
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE50u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 144u, depth + 1u); else { c.pc = 0x001C1850u; return; } if (c.pc != 0x001BFE50u) [[unlikely]] return; }
L_001BFE50:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFE60u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0030(c, 87u, depth + 1u); else { c.pc = 0x001C0E60u; return; } if (c.pc != 0x001BFE60u) [[unlikely]] return; }
L_001BFE60:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001BFE64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001BFE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001BFEBC; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001BFE8C:
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001BFEAC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_001BFEB8; }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_001BFEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BFEC8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001BFEB8:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_001BFEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BFE8Cu | kUnwind; return; } goto L_001BFE8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BFEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001BFED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFEE0u);  if (depth < kMaxDepth) unit_0030(c, 89u, depth + 1u); else { c.pc = 0x001C0EC0u; return; } if (c.pc != 0x001BFEE0u) [[unlikely]] return; }
L_001BFEE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BFEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 25484u)));  c.pc = t; return; }
L_001BFF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30312u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001BFF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_001BFF5C; } }
L_001BFF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF3Cu); set32(c.r[7], ld32((c.r[28].w[0] - 25480u)));  if (depth < kMaxDepth) unit_002F(c, 375u, depth + 1u); else { c.pc = 0x001BFF80u; return; } if (c.pc != 0x001BFF3Cu) [[unlikely]] return; }
L_001BFF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BFF5C; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BFF58u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002F(c, 375u, depth + 1u); else { c.pc = 0x001BFF80u; return; } if (c.pc != 0x001BFF58u) [[unlikely]] return; }
L_001BFF58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BFF5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BFF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_001BFF88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001BFFAC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BFFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0030(c, 16u, depth); } }
L_001BFFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 4232u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[12], c.r[2].w[0] + c.r[3].w[0]);
    c.r[13].d[0] = c.r[5].d[0] << 48;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[6].w[0] + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 4232u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    mmi::paddub(c.r[9], c.r[8], c.r[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0030(c, 15u, depth); } }
    set32(c.r[11], c.r[4].w[0] + c.r[10].w[0]);
    c.budget -= 1;
L_001BFFF4:
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[24], c.r[11].w[0] - 48u);  if (t) { [[clang::musttail]] return unit_0030(c, 8u, depth); } }
    [[clang::musttail]] return unit_0030(c, 2u, depth);
}

}
