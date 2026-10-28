#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 0,
    56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0,
    0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348,
    0, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0,
    0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0,
    0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8074;
    case 3u: goto L_002E80A0;
    case 4u: goto L_002E80B0;
    case 5u: goto L_002E80DC;
    case 6u: goto L_002E80E4;
    case 7u: goto L_002E80E8;
    case 8u: goto L_002E8110;
    case 9u: goto L_002E8148;
    case 10u: goto L_002E81BC;
    case 11u: goto L_002E81C8;
    case 12u: goto L_002E81D8;
    case 13u: goto L_002E81F0;
    case 14u: goto L_002E8238;
    case 15u: goto L_002E82AC;
    case 16u: goto L_002E82E8;
    case 17u: goto L_002E82F8;
    case 18u: goto L_002E8320;
    case 19u: goto L_002E8340;
    case 20u: goto L_002E83EC;
    case 21u: goto L_002E840C;
    case 22u: goto L_002E8428;
    case 23u: goto L_002E8448;
    case 24u: goto L_002E845C;
    case 25u: goto L_002E8488;
    case 26u: goto L_002E8490;
    case 27u: goto L_002E8498;
    case 28u: goto L_002E84A0;
    case 29u: goto L_002E84AC;
    case 30u: goto L_002E84B8;
    case 31u: goto L_002E84DC;
    case 32u: goto L_002E84E4;
    case 33u: goto L_002E84EC;
    case 34u: goto L_002E84F4;
    case 35u: goto L_002E84FC;
    case 36u: goto L_002E8504;
    case 37u: goto L_002E8514;
    case 38u: goto L_002E8524;
    case 39u: goto L_002E8564;
    case 40u: goto L_002E8574;
    case 41u: goto L_002E857C;
    case 42u: goto L_002E8588;
    case 43u: goto L_002E8598;
    case 44u: goto L_002E85A4;
    case 45u: goto L_002E85C0;
    case 46u: goto L_002E8614;
    case 47u: goto L_002E866C;
    case 48u: goto L_002E869C;
    case 49u: goto L_002E86B8;
    case 50u: goto L_002E86C0;
    case 51u: goto L_002E86C8;
    case 52u: goto L_002E86D8;
    case 53u: goto L_002E86E0;
    case 54u: goto L_002E86E8;
    case 55u: goto L_002E86F8;
    case 56u: goto L_002E8700;
    case 57u: goto L_002E8708;
    case 58u: goto L_002E87B8;
    case 59u: goto L_002E87FC;
    case 60u: goto L_002E8824;
    case 61u: goto L_002E88A4;
    case 62u: goto L_002E88C0;
    case 63u: goto L_002E88E0;
    case 64u: goto L_002E895C;
    case 65u: goto L_002E8988;
    case 66u: goto L_002E8990;
    case 67u: goto L_002E8998;
    case 68u: goto L_002E89A8;
    case 69u: goto L_002E89B0;
    case 70u: goto L_002E89B8;
    case 71u: goto L_002E89C8;
    case 72u: goto L_002E89D0;
    case 73u: goto L_002E89D8;
    case 74u: goto L_002E8A60;
    case 75u: goto L_002E8A70;
    case 76u: goto L_002E8A80;
    case 77u: goto L_002E8ABC;
    case 78u: goto L_002E8ACC;
    case 79u: goto L_002E8ADC;
    case 80u: goto L_002E8AE8;
    case 81u: goto L_002E8AF4;
    case 82u: goto L_002E8B04;
    case 83u: goto L_002E8B0C;
    case 84u: goto L_002E8B1C;
    case 85u: goto L_002E8B24;
    case 86u: goto L_002E8B8C;
    case 87u: goto L_002E8BB0;
    case 88u: goto L_002E8BB8;
    case 89u: goto L_002E8BD0;
    case 90u: goto L_002E8CA0;
    case 91u: goto L_002E8CB0;
    case 92u: goto L_002E8CBC;
    case 93u: goto L_002E8CC8;
    case 94u: goto L_002E8CD8;
    case 95u: goto L_002E8CE8;
    case 96u: goto L_002E8D08;
    case 97u: goto L_002E8D14;
    case 98u: goto L_002E8D30;
    case 99u: goto L_002E8DA0;
    case 100u: goto L_002E8DF0;
    case 101u: goto L_002E8E44;
    case 102u: goto L_002E8E54;
    case 103u: goto L_002E8E90;
    case 104u: goto L_002E8EB8;
    case 105u: goto L_002E8F04;
    case 106u: goto L_002E8F20;
    case 107u: goto L_002E8F50;
    case 108u: goto L_002E8FC0;
    case 109u: goto L_002E8FD8;
    case 110u: goto L_002E8FE8;
    case 111u: goto L_002E8FF0;
    case 112u: goto L_002E8FF8;
    case 113u: goto L_002E9004;
    case 114u: goto L_002E9018;
    case 115u: goto L_002E9024;
    case 116u: goto L_002E9034;
    case 117u: goto L_002E909C;
    case 118u: goto L_002E90BC;
    case 119u: goto L_002E90E0;
    case 120u: goto L_002E9168;
    case 121u: goto L_002E9180;
    case 122u: goto L_002E9194;
    case 123u: goto L_002E9200;
    case 124u: goto L_002E9210;
    case 125u: goto L_002E9218;
    case 126u: goto L_002E9220;
    case 127u: goto L_002E9228;
    case 128u: goto L_002E9250;
    case 129u: goto L_002E9298;
    case 130u: goto L_002E92A8;
    case 131u: goto L_002E92B0;
    case 132u: goto L_002E92B8;
    case 133u: goto L_002E92C0;
    case 134u: goto L_002E9300;
    case 135u: goto L_002E9310;
    case 136u: goto L_002E9354;
    case 137u: goto L_002E9384;
    case 138u: goto L_002E938C;
    case 139u: goto L_002E9394;
    case 140u: goto L_002E93A4;
    case 141u: goto L_002E93AC;
    case 142u: goto L_002E93B4;
    case 143u: goto L_002E93B8;
    case 144u: goto L_002E93CC;
    case 145u: goto L_002E93DC;
    case 146u: goto L_002E93E4;
    case 147u: goto L_002E9408;
    case 148u: goto L_002E9428;
    case 149u: goto L_002E9448;
    case 150u: goto L_002E9498;
    case 151u: goto L_002E9514;
    case 152u: goto L_002E9528;
    case 153u: goto L_002E9550;
    case 154u: goto L_002E9568;
    case 155u: goto L_002E9570;
    case 156u: goto L_002E95A0;
    case 157u: goto L_002E95CC;
    case 158u: goto L_002E95E0;
    case 159u: goto L_002E9620;
    case 160u: goto L_002E9638;
    case 161u: goto L_002E9680;
    case 162u: goto L_002E969C;
    case 163u: goto L_002E96C0;
    case 164u: goto L_002E9864;
    case 165u: goto L_002E9880;
    case 166u: goto L_002E98AC;
    case 167u: goto L_002E9900;
    case 168u: goto L_002E992C;
    case 169u: goto L_002E994C;
    case 170u: goto L_002E9970;
    case 171u: goto L_002E9990;
    case 172u: goto L_002E9A40;
    case 173u: goto L_002E9A90;
    case 174u: goto L_002E9AA4;
    case 175u: goto L_002E9AB0;
    case 176u: goto L_002E9ABC;
    case 177u: goto L_002E9AC4;
    case 178u: goto L_002E9ACC;
    case 179u: goto L_002E9AD4;
    case 180u: goto L_002E9ADC;
    case 181u: goto L_002E9AE4;
    case 182u: goto L_002E9AEC;
    case 183u: goto L_002E9B08;
    case 184u: goto L_002E9B20;
    case 185u: goto L_002E9B30;
    case 186u: goto L_002E9B3C;
    case 187u: goto L_002E9B5C;
    case 188u: goto L_002E9B80;
    case 189u: goto L_002E9C2C;
    case 190u: goto L_002E9C54;
    case 191u: goto L_002E9CD4;
    case 192u: goto L_002E9CDC;
    case 193u: goto L_002E9D00;
    case 194u: goto L_002E9D14;
    case 195u: goto L_002E9D58;
    case 196u: goto L_002E9D6C;
    case 197u: goto L_002E9D8C;
    case 198u: goto L_002E9DAC;
    case 199u: goto L_002E9DB8;
    case 200u: goto L_002E9DFC;
    case 201u: goto L_002E9E0C;
    case 202u: goto L_002E9E14;
    case 203u: goto L_002E9E1C;
    case 204u: goto L_002E9E40;
    case 205u: goto L_002E9E50;
    case 206u: goto L_002E9E60;
    case 207u: goto L_002E9E98;
    case 208u: goto L_002E9F08;
    case 209u: goto L_002E9F14;
    case 210u: goto L_002E9F30;
    case 211u: goto L_002E9F60;
    case 212u: goto L_002E9FFC;
    case 213u: goto L_002EA010;
    case 214u: goto L_002EA020;
    case 215u: goto L_002EA03C;
    case 216u: goto L_002EA048;
    case 217u: goto L_002EA06C;
    case 218u: goto L_002EA094;
    case 219u: goto L_002EA0B4;
    case 220u: goto L_002EA0BC;
    case 221u: goto L_002EA0FC;
    case 222u: goto L_002EA108;
    case 223u: goto L_002EA110;
    case 224u: goto L_002EA118;
    case 225u: goto L_002EA120;
    case 226u: goto L_002EA150;
    case 227u: goto L_002EA190;
    case 228u: goto L_002EA1D8;
    case 229u: goto L_002EA1F0;
    case 230u: goto L_002EA208;
    case 231u: goto L_002EA230;
    case 232u: goto L_002EA248;
    case 233u: goto L_002EA260;
    case 234u: goto L_002EA288;
    case 235u: goto L_002EA2A0;
    case 236u: goto L_002EA2B8;
    case 237u: goto L_002EA2D0;
    case 238u: goto L_002EA2D8;
    case 239u: goto L_002EA2E0;
    case 240u: goto L_002EA2E8;
    case 241u: goto L_002EA310;
    case 242u: goto L_002EA320;
    case 243u: goto L_002EA330;
    case 244u: goto L_002EA3AC;
    case 245u: goto L_002EA438;
    case 246u: goto L_002EA450;
    case 247u: goto L_002EA52C;
    case 248u: goto L_002EA574;
    case 249u: goto L_002EA588;
    case 250u: goto L_002EA598;
    case 251u: goto L_002EA5B4;
    case 252u: goto L_002EA5C0;
    case 253u: goto L_002EA5CC;
    case 254u: goto L_002EA5D8;
    case 255u: goto L_002EA5E4;
    case 256u: goto L_002EA608;
    case 257u: goto L_002EA614;
    case 258u: goto L_002EA620;
    case 259u: goto L_002EA63C;
    case 260u: goto L_002EA650;
    case 261u: goto L_002EA690;
    case 262u: goto L_002EA6B8;
    case 263u: goto L_002EA6D0;
    case 264u: goto L_002EA780;
    case 265u: goto L_002EA784;
    case 266u: goto L_002EA960;
    case 267u: goto L_002EA984;
    case 268u: goto L_002EA9F0;
    case 269u: goto L_002EAA08;
    case 270u: goto L_002EAA20;
    case 271u: goto L_002EAA40;
    case 272u: goto L_002EAA4C;
    case 273u: goto L_002EAAB4;
    case 274u: goto L_002EAACC;
    case 275u: goto L_002EAB00;
    case 276u: goto L_002EAB20;
    case 277u: goto L_002EAB74;
    case 278u: goto L_002EAB94;
    case 279u: goto L_002EABB4;
    case 280u: goto L_002EABD8;
    case 281u: goto L_002EABFC;
    case 282u: goto L_002EAC20;
    case 283u: goto L_002EAC28;
    case 284u: goto L_002EAC34;
    case 285u: goto L_002EAC6C;
    case 286u: goto L_002EAC9C;
    case 287u: goto L_002EACB0;
    case 288u: goto L_002EACCC;
    case 289u: goto L_002EACDC;
    case 290u: goto L_002EACF0;
    case 291u: goto L_002EAD3C;
    case 292u: goto L_002EAD64;
    case 293u: goto L_002EAD90;
    case 294u: goto L_002EADB0;
    case 295u: goto L_002EAE0C;
    case 296u: goto L_002EAE2C;
    case 297u: goto L_002EAE34;
    case 298u: goto L_002EAE3C;
    case 299u: goto L_002EAE80;
    case 300u: goto L_002EAE88;
    case 301u: goto L_002EAE90;
    case 302u: goto L_002EAF28;
    case 303u: goto L_002EAF60;
    case 304u: goto L_002EAF84;
    case 305u: goto L_002EAFAC;
    case 306u: goto L_002EAFE0;
    case 307u: goto L_002EAFE8;
    case 308u: goto L_002EB060;
    case 309u: goto L_002EB070;
    case 310u: goto L_002EB10C;
    case 311u: goto L_002EB12C;
    case 312u: goto L_002EB148;
    case 313u: goto L_002EB150;
    case 314u: goto L_002EB1C8;
    case 315u: goto L_002EB1D8;
    case 316u: goto L_002EB25C;
    case 317u: goto L_002EB26C;
    case 318u: goto L_002EB298;
    case 319u: goto L_002EB2B8;
    case 320u: goto L_002EB30C;
    case 321u: goto L_002EB334;
    case 322u: goto L_002EB360;
    case 323u: goto L_002EB380;
    case 324u: goto L_002EB3B8;
    case 325u: goto L_002EB3CC;
    case 326u: goto L_002EB3FC;
    case 327u: goto L_002EB418;
    case 328u: goto L_002EB428;
    case 329u: goto L_002EB454;
    case 330u: goto L_002EB4B0;
    case 331u: goto L_002EB4D8;
    case 332u: goto L_002EB504;
    case 333u: goto L_002EB524;
    case 334u: goto L_002EB544;
    case 335u: goto L_002EB574;
    case 336u: goto L_002EB5A0;
    case 337u: goto L_002EB5D4;
    case 338u: goto L_002EB62C;
    case 339u: goto L_002EB654;
    case 340u: goto L_002EB680;
    case 341u: goto L_002EB6A0;
    case 342u: goto L_002EB718;
    case 343u: goto L_002EB728;
    case 344u: goto L_002EB730;
    case 345u: goto L_002EB750;
    case 346u: goto L_002EB760;
    case 347u: goto L_002EB770;
    case 348u: goto L_002EB7FC;
    case 349u: goto L_002EB80C;
    case 350u: goto L_002EB814;
    case 351u: goto L_002EB81C;
    case 352u: goto L_002EB824;
    case 353u: goto L_002EB840;
    case 354u: goto L_002EB89C;
    case 355u: goto L_002EB8AC;
    case 356u: goto L_002EB8B4;
    case 357u: goto L_002EB8BC;
    case 358u: goto L_002EB8C4;
    case 359u: goto L_002EB8CC;
    case 360u: goto L_002EB8E0;
    case 361u: goto L_002EB904;
    case 362u: goto L_002EB918;
    case 363u: goto L_002EB924;
    case 364u: goto L_002EB97C;
    case 365u: goto L_002EB9C0;
    case 366u: goto L_002EB9E0;
    case 367u: goto L_002EBA20;
    case 368u: goto L_002EBAE8;
    case 369u: goto L_002EBB00;
    case 370u: goto L_002EBB08;
    case 371u: goto L_002EBB14;
    case 372u: goto L_002EBB38;
    case 373u: goto L_002EBB40;
    case 374u: goto L_002EBB48;
    case 375u: goto L_002EBB50;
    case 376u: goto L_002EBB58;
    case 377u: goto L_002EBB60;
    case 378u: goto L_002EBB68;
    case 379u: goto L_002EBB78;
    case 380u: goto L_002EBB88;
    case 381u: goto L_002EBB98;
    case 382u: goto L_002EBBC0;
    case 383u: goto L_002EBC1C;
    case 384u: goto L_002EBCA4;
    case 385u: goto L_002EBCAC;
    case 386u: goto L_002EBCB4;
    case 387u: goto L_002EBCC4;
    case 388u: goto L_002EBCCC;
    case 389u: goto L_002EBCD4;
    case 390u: goto L_002EBCE4;
    case 391u: goto L_002EBCEC;
    case 392u: goto L_002EBCF4;
    case 393u: goto L_002EBD0C;
    case 394u: goto L_002EBD70;
    case 395u: goto L_002EBE00;
    case 396u: goto L_002EBE10;
    case 397u: goto L_002EBE4C;
    case 398u: goto L_002EBE5C;
    case 399u: goto L_002EBE6C;
    case 400u: goto L_002EBE78;
    case 401u: goto L_002EBE84;
    case 402u: goto L_002EBE94;
    case 403u: goto L_002EBE9C;
    case 404u: goto L_002EBEAC;
    case 405u: goto L_002EBEB4;
    case 406u: goto L_002EBF08;
    case 407u: goto L_002EBF48;
    case 408u: goto L_002EBF60;
    case 409u: goto L_002EBF8C;
    case 410u: goto L_002EBFE0;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[4] = fp::mul(c.f[2], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::mul(c.f[5], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 20u, c.f[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E8064; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002E8064:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E80A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8074u);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E8074u) [[unlikely]] return; }
L_002E8074:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80A0u);  if (depth < kMaxDepth) unit_000E(c, 287u, depth + 1u); else { c.pc = 0x0013B450u; return; } if (c.pc != 0x002E80A0u) [[unlikely]] return; }
L_002E80A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E80DC; } }
L_002E80A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80B0u);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E80B0u) [[unlikely]] return; }
L_002E80B0:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80DCu);  if (depth < kMaxDepth) unit_000E(c, 287u, depth + 1u); else { c.pc = 0x0013B450u; return; } if (c.pc != 0x002E80DCu) [[unlikely]] return; }
L_002E80DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002E80EC; } }
L_002E80E4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E80E8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E80EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002E8110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002E81D0; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8148u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E8148u) [[unlikely]] return; }
L_002E8148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E81D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] - 31968u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 30080u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8096u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81BCu); set32(c.r[5], c.r[2].w[0] - 11344u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E81BCu) [[unlikely]] return; }
L_002E81BC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81C8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E81C8u) [[unlikely]] return; }
L_002E81C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002E81DC; } }
L_002E81D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81D8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007B(c, 192u, depth + 1u); else { c.pc = 0x002EDDC0u; return; } if (c.pc != 0x002E81D8u) [[unlikely]] return; }
L_002E81D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E81DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E81F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[7], c.r[0]);  if (t) { goto L_002E82F0; } }
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8238u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E8238u) [[unlikely]] return; }
L_002E8238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E82F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[2].w[0] - 31968u);
    st32((c.r[16].w[0] + 28u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 30080u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8096u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82ACu); set32(c.r[5], c.r[2].w[0] - 11344u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E82ACu) [[unlikely]] return; }
L_002E82AC:
    c.f[0] = ld32((c.r[18].w[0]));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82E8u); st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E82E8u) [[unlikely]] return; }
L_002E82E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002E82FC; } }
L_002E82F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82F8u);  if (depth < kMaxDepth) unit_007B(c, 202u, depth + 1u); else { c.pc = 0x002EE000u; return; } if (c.pc != 0x002E82F8u) [[unlikely]] return; }
L_002E82F8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E82FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E8320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 8096u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
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
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 37;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002E8428; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002E83F8; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83ECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E83ECu) [[unlikely]] return; }
L_002E83EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_002E842C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002E83F8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002E8418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E840Cu);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E840Cu) [[unlikely]] return; }
L_002E840C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E8428; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002E8418:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8428u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E8428u) [[unlikely]] return; }
L_002E8428:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002E842C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E8450; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8448u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E8448u) [[unlikely]] return; }
L_002E8448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  if (t) { goto L_002E8460; } }
L_002E8450:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E845Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E845Cu) [[unlikely]] return; }
L_002E845C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 1;
L_002E8460:
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8478; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002E84A4; } }
L_002E8478:
    c.f[13] = ld32((c.r[18].w[0] + 52u));
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8488u); c.f[12] = ld32((c.r[18].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E8488u) [[unlikely]] return; }
L_002E8488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8490u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E8490u) [[unlikely]] return; }
L_002E8490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8498u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E8498u) [[unlikely]] return; }
L_002E8498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84A0u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E84A0u) [[unlikely]] return; }
L_002E84A0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E84A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84ACu);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E84ACu) [[unlikely]] return; }
L_002E84AC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84B8u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E84B8u) [[unlikely]] return; }
L_002E84B8:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84DCu); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E84DCu) [[unlikely]] return; }
L_002E84DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E84E4u) [[unlikely]] return; }
L_002E84E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84ECu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E84ECu) [[unlikely]] return; }
L_002E84EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84F4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 30u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E84F4u) [[unlikely]] return; }
L_002E84F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84FCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E84FCu) [[unlikely]] return; }
L_002E84FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8504u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E8504u) [[unlikely]] return; }
L_002E8504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 14048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8514u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E8514u) [[unlikely]] return; }
L_002E8514:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8524u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002E8524u) [[unlikely]] return; }
L_002E8524:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E859C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8598; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8564u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E8564u) [[unlikely]] return; }
L_002E8564:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8574u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E8574u) [[unlikely]] return; }
L_002E8574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E857Cu); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E857Cu) [[unlikely]] return; }
L_002E857C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8588u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E8588u) [[unlikely]] return; }
L_002E8588:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8598u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 133u, depth + 1u); else { c.pc = 0x002DD760u; return; } if (c.pc != 0x002E8598u) [[unlikely]] return; }
L_002E8598:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002E859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85A4u);  if (depth < kMaxDepth) unit_007A(c, 45u, depth + 1u); else { c.pc = 0x002E85C0u; return; } if (c.pc != 0x002E85A4u) [[unlikely]] return; }
L_002E85A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E85C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002E8614; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8614; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8614u);  if (depth < kMaxDepth) unit_007A(c, 89u, depth + 1u); else { c.pc = 0x002E8BD0u; return; } if (c.pc != 0x002E8614u) [[unlikely]] return; }
L_002E8614:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E866Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E866Cu) [[unlikely]] return; }
L_002E866C:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_002E86AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E869Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 100u, depth + 1u); else { c.pc = 0x002E8DF0u; return; } if (c.pc != 0x002E869Cu) [[unlikely]] return; }
L_002E869C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E86A8; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E86A8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002E86AC:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86B8u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E86B8u) [[unlikely]] return; }
L_002E86B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E86C0u) [[unlikely]] return; }
L_002E86C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86C8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E86C8u) [[unlikely]] return; }
L_002E86C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 14048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86D8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E86D8u) [[unlikely]] return; }
L_002E86D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E86E0u) [[unlikely]] return; }
L_002E86E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86E8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E86E8u) [[unlikely]] return; }
L_002E86E8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86F8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E86F8u) [[unlikely]] return; }
L_002E86F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8700u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E8700u) [[unlikely]] return; }
L_002E8700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8708u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E8708u) [[unlikely]] return; }
L_002E8708:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8730; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E88A4; } }
L_002E8730:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8790; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44E70000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E8790; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8790; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002E87B0; } }
L_002E8790:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E88A4; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002E87B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87B8u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E87B8u) [[unlikely]] return; }
L_002E87B8:
    set32(c.r[16], c.r[29].w[0] + 52u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E882C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87FCu); st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002E87FCu) [[unlikely]] return; }
L_002E87FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E88A8; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8824u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004A(c, 197u, depth + 1u); else { c.pc = 0x0022B140u; return; } if (c.pc != 0x002E8824u) [[unlikely]] return; }
L_002E8824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E88A4; } }
L_002E882C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_002E8860; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E8884; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
L_002E8860:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E88A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E88A4; } }
L_002E8884:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88A4u); st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004A(c, 197u, depth + 1u); else { c.pc = 0x0022B140u; return; } if (c.pc != 0x002E88A4u) [[unlikely]] return; }
L_002E88A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E88A8:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E88C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E88E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
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
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E895Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E895Cu) [[unlikely]] return; }
L_002E895C:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8988u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E8988u) [[unlikely]] return; }
L_002E8988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8990u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E8990u) [[unlikely]] return; }
L_002E8990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8998u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E8998u) [[unlikely]] return; }
L_002E8998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 14048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89A8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002E89A8u) [[unlikely]] return; }
L_002E89A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E89B0u) [[unlikely]] return; }
L_002E89B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E89B8u) [[unlikely]] return; }
L_002E89B8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89C8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E89C8u) [[unlikely]] return; }
L_002E89C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E89D0u) [[unlikely]] return; }
L_002E89D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89D8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E89D8u) [[unlikely]] return; }
L_002E89D8:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_002E8A28; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_002E8A34; } }
L_002E8A28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E8A34:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E8A60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E8A70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E8A80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8ABCu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002E8ABCu) [[unlikely]] return; }
L_002E8ABC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8ACCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002E8ACCu) [[unlikely]] return; }
L_002E8ACC:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8ADCu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E8ADCu) [[unlikely]] return; }
L_002E8ADC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AE8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E8AE8u) [[unlikely]] return; }
L_002E8AE8:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AF4u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E8AF4u) [[unlikely]] return; }
L_002E8AF4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B04u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E8B04u) [[unlikely]] return; }
L_002E8B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E8B0Cu) [[unlikely]] return; }
L_002E8B0C:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B1Cu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002E8B1Cu) [[unlikely]] return; }
L_002E8B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B24u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E8B24u) [[unlikely]] return; }
L_002E8B24:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14160u);
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
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B8Cu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002E8B8Cu) [[unlikely]] return; }
L_002E8B8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BB0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00172FD0u; return; } if (c.pc != 0x002E8BB0u) [[unlikely]] return; }
L_002E8BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002E8BB8u) [[unlikely]] return; }
L_002E8BB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E8BD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002E8DD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 8096u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E8C60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E8C64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E8C74; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E8C74; } }
L_002E8C60:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E8C64:
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 520u), 0u);  if (t) { goto L_002E8DD0; } }
L_002E8C74:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CA0u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E8CA0u) [[unlikely]] return; }
L_002E8CA0:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CB0u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E8CB0u) [[unlikely]] return; }
L_002E8CB0:
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CBCu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E8CBCu) [[unlikely]] return; }
L_002E8CBC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CC8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E8CC8u) [[unlikely]] return; }
L_002E8CC8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CD8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 133u, depth + 1u); else { c.pc = 0x002DD760u; return; } if (c.pc != 0x002E8CD8u) [[unlikely]] return; }
L_002E8CD8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CE8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E8CE8u) [[unlikely]] return; }
L_002E8CE8:
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.f[21] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0]), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D08u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E8D08u) [[unlikely]] return; }
L_002E8D08:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D14u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002E8D14u) [[unlikely]] return; }
L_002E8D14:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D30u);  if (depth < kMaxDepth) unit_000E(c, 294u, depth + 1u); else { c.pc = 0x0013B520u; return; } if (c.pc != 0x002E8D30u) [[unlikely]] return; }
L_002E8D30:
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E8D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[4];  if (t) { goto L_002E8D90; } }
L_002E8D78:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8D90; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002E8D90:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002E8DA0u) [[unlikely]] return; }
L_002E8DA0:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E8DC4; } }
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
L_002E8DC4:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.budget -= 3;
L_002E8DD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E8DF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[16], ld32((c.r[4].w[0] + 520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 8096u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[18].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E8E6C; } }
    c.f[12] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002E8E44u) [[unlikely]] return; }
L_002E8E44:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E54u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E8E54u) [[unlikely]] return; }
L_002E8E54:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E8E68; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E8E68:
    c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002E8E6C:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E8E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EB8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E8EB8u) [[unlikely]] return; }
L_002E8EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_002E8F04; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 28896u);
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F04u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E8F04u) [[unlikely]] return; }
L_002E8F04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E8F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14496u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E8F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] + 14176u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 64u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 224u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002E8FC0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FC0u); c.r[6].d[0] = c.r[3].d[0] & 127ull;  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E8FC0u) [[unlikely]] return; }
L_002E8FC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FD8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E8FD8u) [[unlikely]] return; }
L_002E8FD8:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FE8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E8FE8u) [[unlikely]] return; }
L_002E8FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FF0u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E8FF0u) [[unlikely]] return; }
L_002E8FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FF8u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E8FF8u) [[unlikely]] return; }
L_002E8FF8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9004u); st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E9004u) [[unlikely]] return; }
L_002E9004:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    st16((c.r[20].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9018u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 153u, depth + 1u); else { c.pc = 0x002E9550u; return; } if (c.pc != 0x002E9018u) [[unlikely]] return; }
L_002E9018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], c.r[2].w[0] + 14464u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002E9024:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9034u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 159u, depth + 1u); else { c.pc = 0x002E9620u; return; } if (c.pc != 0x002E9034u) [[unlikely]] return; }
L_002E9034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E90A0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 22;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002E90A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E909Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E909Cu) [[unlikely]] return; }
L_002E909C:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E90A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9024u | kUnwind; return; } goto L_002E9024; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90BCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 119u, depth + 1u); else { c.pc = 0x002E90E0u; return; } if (c.pc != 0x002E90BCu) [[unlikely]] return; }
L_002E90BC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E90E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + 14176u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_002E9144; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E91E8; } }
L_002E9144:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E91E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9168u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E9168u) [[unlikely]] return; }
L_002E9168:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9180u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 159u, depth + 1u); else { c.pc = 0x002E9620u; return; } if (c.pc != 0x002E9180u) [[unlikely]] return; }
L_002E9180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002E91E8; } }
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9194u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E9194u) [[unlikely]] return; }
L_002E9194:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 14472u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 14472u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 21;
L_002E91E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9200u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9200u) [[unlikely]] return; }
L_002E9200:
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9210u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E9210u) [[unlikely]] return; }
L_002E9210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9218u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E9218u) [[unlikely]] return; }
L_002E9218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9220u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E9220u) [[unlikely]] return; }
L_002E9220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9228u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 156u, depth + 1u); else { c.pc = 0x002E95A0u; return; } if (c.pc != 0x002E9228u) [[unlikely]] return; }
L_002E9228:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E9250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 14176u);
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[18], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9298u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9298u) [[unlikely]] return; }
L_002E9298:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92A8u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E92A8u) [[unlikely]] return; }
L_002E92A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92B0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002E92B0u) [[unlikely]] return; }
L_002E92B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92B8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E92B8u) [[unlikely]] return; }
L_002E92B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 156u, depth + 1u); else { c.pc = 0x002E95A0u; return; } if (c.pc != 0x002E92C0u) [[unlikely]] return; }
L_002E92C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E92DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E92E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E92DC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E92E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9300:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E9310:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], c.r[28].w[0] - 28456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9354u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002E9354u) [[unlikely]] return; }
L_002E9354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9384u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E9384u) [[unlikely]] return; }
L_002E9384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E938Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E938Cu) [[unlikely]] return; }
L_002E938C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9394u);  if (depth < kMaxDepth) unit_000E(c, 325u, depth + 1u); else { c.pc = 0x0013BD20u; return; } if (c.pc != 0x002E9394u) [[unlikely]] return; }
L_002E9394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002E93A4u) [[unlikely]] return; }
L_002E93A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93ACu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x002E93ACu) [[unlikely]] return; }
L_002E93AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002E93B4u) [[unlikely]] return; }
L_002E93B4:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E93B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002E952C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93CCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E93CCu) [[unlikely]] return; }
L_002E93CC:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93DCu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E93DCu) [[unlikely]] return; }
L_002E93DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93E4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E93E4u) [[unlikely]] return; }
L_002E93E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] + 14672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9408u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E9408u) [[unlikely]] return; }
L_002E9408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9434; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9428u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x002E9428u) [[unlikely]] return; }
L_002E9428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20372u), c.f[0]);  if (t) { goto L_002E9440; } }
L_002E9434:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.budget -= 3;
L_002E9440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9448u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E9448u) [[unlikely]] return; }
L_002E9448:
    c.f[3] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9498u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002E9498u) [[unlikely]] return; }
L_002E9498:
    st8((c.r[28].w[0] - 28453u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 14512u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 14640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E9508; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E951C; } }
L_002E9508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9514u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 64u, depth + 1u); else { c.pc = 0x00171620u; return; } if (c.pc != 0x002E9514u) [[unlikely]] return; }
L_002E9514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E9528; } }
L_002E951C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9528u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002E9528u) [[unlikely]] return; }
L_002E9528:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E952C:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E93B8u | kUnwind; return; } goto L_002E93B8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E9550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_002E9568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9570u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 161u, depth + 1u); else { c.pc = 0x002E9680u; return; } if (c.pc != 0x002E9570u) [[unlikely]] return; }
L_002E9570:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9568u | kUnwind; return; } goto L_002E9568; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E95A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002E95F8; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002E95CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002E95EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95E0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 163u, depth + 1u); else { c.pc = 0x002E96C0u; return; } if (c.pc != 0x002E95E0u) [[unlikely]] return; }
L_002E95E0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_002E95EC:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E95CCu | kUnwind; return; } goto L_002E95CC; } }
L_002E95F8:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9620:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002E9670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_002E9658; } }
L_002E9638:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], c.r[4].w[0] + 16u);  goto L_002E9654; }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 4;
L_002E9654:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002E9658:
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E9670; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E9638u | kUnwind; return; } goto L_002E9638; } }
    c.budget -= 1;
L_002E9670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E9680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E969Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002E969Cu) [[unlikely]] return; }
L_002E969C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E96C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] + 14464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 14480u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[8], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[5].w[0] + c.r[2].w[0]);
    c.f[4] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E97DC; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[4] = ld32((c.r[9].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 26;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002E97AC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002E97C4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_002E97AC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002E97C4:
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E97DC; } }
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_002E97DC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E9820; } }
    c.r[7].d[0] = c.r[6].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[7].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 11;
L_002E9820:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E985C; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E985C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E9868; } }
L_002E985C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9864u);  if (depth < kMaxDepth) unit_007A(c, 161u, depth + 1u); else { c.pc = 0x002E9680u; return; } if (c.pc != 0x002E9864u) [[unlikely]] return; }
L_002E9864:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E9868:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E9880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E98ACu) [[unlikely]] return; }
L_002E98AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E994C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26256u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9900u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E9900u) [[unlikely]] return; }
L_002E9900:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E9914; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002E9934; } }
L_002E9914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E992Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E992Cu) [[unlikely]] return; }
L_002E992C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002E9950; } }
L_002E9934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E994Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E994Cu) [[unlikely]] return; }
L_002E994C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E9950:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E9970:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15264u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E9990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002E99D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E9A00; } }
L_002E99D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] + 30u);
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002E9A00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 32u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9A40; } }
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E9A40u) [[unlikely]] return; }
L_002E9A40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    st16((c.r[16].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002E9A98; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A90u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9A90u) [[unlikely]] return; }
L_002E9A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002E9AA8; } }
L_002E9A98:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AA4u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9AA4u) [[unlikely]] return; }
L_002E9AA4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E9AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AB0u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E9AB0u) [[unlikely]] return; }
L_002E9AB0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9ABCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E9ABCu) [[unlikely]] return; }
L_002E9ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AC4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E9AC4u) [[unlikely]] return; }
L_002E9AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9ACCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002E9ACCu) [[unlikely]] return; }
L_002E9ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AD4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E9AD4u) [[unlikely]] return; }
L_002E9AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9ADCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E9ADCu) [[unlikely]] return; }
L_002E9ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AE4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E9AE4u) [[unlikely]] return; }
L_002E9AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E9AECu) [[unlikely]] return; }
L_002E9AEC:
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B08u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E9B08u) [[unlikely]] return; }
L_002E9B08:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E9B40; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B20u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002E9B20u) [[unlikely]] return; }
L_002E9B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9B30u) [[unlikely]] return; }
L_002E9B30:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B3Cu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E9B3Cu) [[unlikely]] return; }
L_002E9B3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E9B40:
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B5Cu); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 188u, depth + 1u); else { c.pc = 0x002E9B80u; return; } if (c.pc != 0x002E9B5Cu) [[unlikely]] return; }
L_002E9B5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E9B80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002E9C48; } }
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9C10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E9C10; } }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9C10; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002E9C24; } }
L_002E9C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E9E24; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002E9C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C2Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E9C2Cu) [[unlikely]] return; }
L_002E9C2C:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E9C9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002E9C9C; } }
L_002E9C48:
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C54u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E9C54u) [[unlikely]] return; }
L_002E9C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9C80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E9E24; } }
L_002E9C80:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 78u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 78u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9C9C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002E9C9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002E9CBC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9CBC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E9D0C; } }
L_002E9CBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CD4u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002E9CD4u) [[unlikely]] return; }
L_002E9CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CDCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E9CDCu) [[unlikely]] return; }
L_002E9CDC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E9E24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D00u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002E9D00u) [[unlikely]] return; }
L_002E9D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E9E28; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002E9D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D14u);  if (depth < kMaxDepth) unit_004D(c, 91u, depth + 1u); else { c.pc = 0x00234DE0u; return; } if (c.pc != 0x002E9D14u) [[unlikely]] return; }
L_002E9D14:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E9D24; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E9D24:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9DC8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002E9DC4; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D58u); set32(c.r[4], ld32((c.r[18].w[0] + 520u)));  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002E9D58u) [[unlikely]] return; }
L_002E9D58:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D6Cu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E9D6Cu) [[unlikely]] return; }
L_002E9D6C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E9DC8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D8Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002E9D8Cu) [[unlikely]] return; }
L_002E9D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9DC8; } }
    st32((c.r[29].w[0] + 80u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DACu); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E9DACu) [[unlikely]] return; }
L_002E9DAC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DB8u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002E9DB8u) [[unlikely]] return; }
L_002E9DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 48u));  if (t) { goto L_002E9DCC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002E9DC4:
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E9DC8:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.budget -= 1;
L_002E9DCC:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DFCu); st32((c.r[18].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E9DFCu) [[unlikely]] return; }
L_002E9DFC:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E0Cu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E9E0Cu) [[unlikely]] return; }
L_002E9E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E9E14u) [[unlikely]] return; }
L_002E9E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E1Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E9E1Cu) [[unlikely]] return; }
L_002E9E1C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E9E24:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E9E28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E9E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E9E50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E9E60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 1u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E98u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E9E98u) [[unlikely]] return; }
L_002E9E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_002E9F14; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 6u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[5].w[0] + 160u), c.f[20]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[2].w[0] - 23760u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 24784u);
    st32((c.r[5].w[0] + 32u), c.f[3]);
    st32((c.r[5].w[0] + 36u), c.f[2]);
    st32((c.r[5].w[0] + 40u), c.f[1]);
    st32((c.r[5].w[0] + 44u), c.f[0]);
    st32((c.r[5].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F08u); st32((c.r[5].w[0] + 28u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E9F08u) [[unlikely]] return; }
L_002E9F08:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x002E9F14u) [[unlikely]] return; }
L_002E9F14:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E9F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E9F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 68u);
    set32(c.r[3], 0u + 224u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 144u), 0u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002EA020; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 270u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA018; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[19], c.r[0]);  goto L_002EA008; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA004; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_002E9FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002EA024; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 1;
L_002E9FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FFCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E9FFCu) [[unlikely]] return; }
L_002E9FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA020; } }
L_002EA004:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002EA008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA010u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EA010u) [[unlikely]] return; }
L_002EA010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA020; } }
L_002EA018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA020u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EA020u) [[unlikely]] return; }
L_002EA020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_002EA024:
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA03Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 109u, depth + 1u); else { c.pc = 0x001B5870u; return; } if (c.pc != 0x002EA03Cu) [[unlikely]] return; }
L_002EA03C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_002EA048:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA048u | kUnwind; return; } goto L_002EA048; } }
    set32(c.r[16], c.r[19].w[0] + 128u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_002EA06C:
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA06Cu | kUnwind; return; } goto L_002EA06C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002EA0B4; } }
L_002EA094:
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA094u | kUnwind; return; } goto L_002EA094; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002EA0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0BCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002EA0BCu) [[unlikely]] return; }
L_002EA0BC:
    set32(c.r[7], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[5], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA0B4u | kUnwind; return; } goto L_002EA0B4; } }
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA0FCu) [[unlikely]] return; }
L_002EA0FC:
    c.f[12] = ld32((c.r[19].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA108u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0093(c, 168u, depth + 1u); else { c.pc = 0x0034E750u; return; } if (c.pc != 0x002EA108u) [[unlikely]] return; }
L_002EA108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA110u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EA110u) [[unlikely]] return; }
L_002EA110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA118u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002EA118u) [[unlikely]] return; }
L_002EA118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA120u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EA120u) [[unlikely]] return; }
L_002EA120:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EA150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA190u); st32((c.r[4].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 264u, depth + 1u); else { c.pc = 0x002EA780u; return; } if (c.pc != 0x002EA190u) [[unlikely]] return; }
L_002EA190:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EA1B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EA2F0; } }
L_002EA1B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 128u);  if (t) { goto L_002EA208; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1D8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA1D8u) [[unlikely]] return; }
L_002EA1D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1F0u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA1F0u) [[unlikely]] return; }
L_002EA1F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA208u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA208u) [[unlikely]] return; }
L_002EA208:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA230u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA230u) [[unlikely]] return; }
L_002EA230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA248u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA248u) [[unlikely]] return; }
L_002EA248:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA260u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA260u) [[unlikely]] return; }
L_002EA260:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA2B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA288u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA288u) [[unlikely]] return; }
L_002EA288:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2A0u); set32(c.r[6], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA2A0u) [[unlikely]] return; }
L_002EA2A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2B8u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_007A(c, 261u, depth + 1u); else { c.pc = 0x002EA690u; return; } if (c.pc != 0x002EA2B8u) [[unlikely]] return; }
L_002EA2B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2D0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EA2D0u) [[unlikely]] return; }
L_002EA2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2D8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EA2D8u) [[unlikely]] return; }
L_002EA2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2E0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002EA2E0u) [[unlikely]] return; }
L_002EA2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2E8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EA2E8u) [[unlikely]] return; }
L_002EA2E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EA2F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EA320:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EA330:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 156u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[17], c.r[19].w[0] + 320u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 31;
L_002EA3AC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002EA654; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 15440u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 16176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA438u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002EA438u) [[unlikely]] return; }
L_002EA438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA450u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x002EA450u) [[unlikely]] return; }
L_002EA450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[2].w[0] + 16216u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 16216u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA4F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002EA560; } }
L_002EA4F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA52Cu);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002EA52Cu) [[unlikely]] return; }
L_002EA52C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] << 56;  goto L_002EA544; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_002EA544:
    set32(c.r[3], 0u + 128u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002EA560:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA574u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002EA574u) [[unlikely]] return; }
L_002EA574:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA588u); st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EA588u) [[unlikely]] return; }
L_002EA588:
    set32(c.r[20], c.r[29].w[0] + 136u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA598u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EA598u) [[unlikely]] return; }
L_002EA598:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EA5B4u) [[unlikely]] return; }
L_002EA5B4:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EA5C0u) [[unlikely]] return; }
L_002EA5C0:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5CCu); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EA5CCu) [[unlikely]] return; }
L_002EA5CC:
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5D8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EA5D8u) [[unlikely]] return; }
L_002EA5D8:
    c.r[4].d[0] = c.r[20].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5E4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EA5E4u) [[unlikely]] return; }
L_002EA5E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 15936u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA608u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002EA608u) [[unlikely]] return; }
L_002EA608:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA614u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EA614u) [[unlikely]] return; }
L_002EA614:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA620u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002EA620u) [[unlikely]] return; }
L_002EA620:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EA644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA63Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 64u, depth + 1u); else { c.pc = 0x00171620u; return; } if (c.pc != 0x002EA63Cu) [[unlikely]] return; }
L_002EA63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA650; } }
L_002EA644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA650u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002EA650u) [[unlikely]] return; }
L_002EA650:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002EA654:
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA3ACu | kUnwind; return; } goto L_002EA3AC; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002EA690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 10;
L_002EA6B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002EA758; }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6D0u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002EA6D0u) [[unlikely]] return; }
L_002EA6D0:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15728u);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15888u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] + 16216u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EA74C; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EA768; } }
L_002EA74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EA768; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002EA758:
    c.r[3].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA6B8u | kUnwind; return; } goto L_002EA6B8; } }
    c.budget -= 1;
L_002EA768:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EA780:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_002EA784:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002EA944; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15728u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 15888u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[9].sd[0] < 0; set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_002EA800; } }
    set32(c.r[7], ld32((c.r[3].w[0] - 8u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[7], c.r[9].w[0] - c.r[7].w[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_002EA800:
    set32(c.r[9], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_002EA838; } }
    set32(c.r[7], ld32((c.r[8].w[0] - 8u)));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[7], c.r[9].w[0] - c.r[7].w[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 11;
L_002EA838:
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_002EA868; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[7].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002EA868; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
L_002EA868:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_002EA890; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[7].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002EA890; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_002EA890:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[7].w[0] + 16216u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002EA8C0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_002EA8C0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_002EA91C; } }
    c.r[1].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EA91C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EA940; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_002EA908; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EA940; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002EA908:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EA940; } }
L_002EA91C:
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002EA940; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002EA940:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002EA944:
    c.r[3].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA784u | kUnwind; return; } goto L_002EA784; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EA960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA984u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EA984u) [[unlikely]] return; }
L_002EA984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002EAA08; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21760u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7744u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st16((c.r[16].w[0] + 404u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7746u)));
    st16((c.r[16].w[0] + 406u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA9F0u); st8((c.r[16].w[0] + 408u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EA9F0u) [[unlikely]] return; }
L_002EA9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA08u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EAA08u) [[unlikely]] return; }
L_002EAA08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EAA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
L_002EAA40:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA4Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EAA4Cu) [[unlikely]] return; }
L_002EAA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002EAAD0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[2].w[0] - 21760u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 408u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAB4u); st8((c.r[17].w[0] + 408u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EAAB4u) [[unlikely]] return; }
L_002EAAB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAACCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EAACCu) [[unlikely]] return; }
L_002EAACC:
    c.budget -= 1;
L_002EAAD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAA40u | kUnwind; return; } goto L_002EAA40; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EAB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EAB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 96u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EAB80; } }
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB74u); st8((c.r[17].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002EAB74u) [[unlikely]] return; }
L_002EAB74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002EAC84; } }
L_002EAB80:
    set32(c.r[2], 0u + 36u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[17].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB94u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002EAB94u) [[unlikely]] return; }
L_002EAB94:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABB4u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EABB4u) [[unlikely]] return; }
L_002EABB4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16264u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABD8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EABD8u) [[unlikely]] return; }
L_002EABD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16260u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABFCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EABFCu) [[unlikely]] return; }
L_002EABFC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16256u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC20u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EAC20u) [[unlikely]] return; }
L_002EAC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC28u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EAC28u) [[unlikely]] return; }
L_002EAC28:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC34u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EAC34u) [[unlikely]] return; }
L_002EAC34:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC6Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002EAC6Cu) [[unlikely]] return; }
L_002EAC6C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002EAC84:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC9Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 287u, depth + 1u); else { c.pc = 0x002EACB0u; return; } if (c.pc != 0x002EAC9Cu) [[unlikely]] return; }
L_002EAC9C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EACB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EACD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACCCu);  if (depth < kMaxDepth) unit_007A(c, 290u, depth + 1u); else { c.pc = 0x002EACF0u; return; } if (c.pc != 0x002EACCCu) [[unlikely]] return; }
L_002EACCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002EACE0; } }
L_002EACD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EACDCu);  if (depth < kMaxDepth) unit_007A(c, 336u, depth + 1u); else { c.pc = 0x002EB5A0u; return; } if (c.pc != 0x002EACDCu) [[unlikely]] return; }
L_002EACDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002EACE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EACF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 578u));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[19].w[0] + 320u);  if (t) { goto L_002EAD28; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EADB8; } }
L_002EAD28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD3Cu); st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EAD3Cu) [[unlikely]] return; }
L_002EAD3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002EAD70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD64u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EAD64u) [[unlikely]] return; }
L_002EAD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EADB0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002EAD70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EAD9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD90u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EAD90u) [[unlikely]] return; }
L_002EAD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EADB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002EAD9C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADB0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EADB0u) [[unlikely]] return; }
L_002EADB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002EB580; } }
L_002EADB8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002EB54C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002EB404; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_002EB3C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002EB248; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EADFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EB578; } }
L_002EADFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[18], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE0Cu); set32(c.r[4], c.r[2].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EAE0Cu) [[unlikely]] return; }
L_002EAE0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF940000u);
    c.r[2].d[0] = c.r[2].d[0] | 31457ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE2Cu);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EAE2Cu) [[unlikely]] return; }
L_002EAE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE34u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EAE34u) [[unlikely]] return; }
L_002EAE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE3Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EAE3Cu) [[unlikely]] return; }
L_002EAE3C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EB238; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 86u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7746u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EB238; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EB238; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EB574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE80u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EAE80u) [[unlikely]] return; }
L_002EAE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE88u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EAE88u) [[unlikely]] return; }
L_002EAE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EAE90u) [[unlikely]] return; }
L_002EAE90:
    c.f[0] = ld32((c.r[19].w[0] + 240u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 244u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 248u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    st32((c.r[19].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002EB0CC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EAF14; } }
    c.f[1] = ld32((c.r[2].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[1]);
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.f[1] = ld32((c.r[2].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_002EAFC4; } }
L_002EAF14:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EAF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF28u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002EAF28u) [[unlikely]] return; }
L_002EAF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF60u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002EAF60u) [[unlikely]] return; }
L_002EAF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_002EAFC4; } }
L_002EAF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF84u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002EAF84u) [[unlikely]] return; }
L_002EAF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFACu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002EAFACu) [[unlikely]] return; }
L_002EAFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_002EAFC4:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFE0u); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EAFE0u) [[unlikely]] return; }
L_002EAFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFE8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002EAFE8u) [[unlikely]] return; }
L_002EAFE8:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = c.f[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB060u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB060u) [[unlikely]] return; }
L_002EB060:
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB070u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB070u) [[unlikely]] return; }
L_002EB070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002EB094; } }
    c.f[0] = c.f[1];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_002EB094:
    c.f[2] = c.r[3].w[0];
    st32((c.r[17].w[0] + 64u), c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_002EB574; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002EB0CC:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8320u);  if (t) { goto L_002EB104; } }
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.f[0] = ld32((c.r[2].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_002EB12C; } }
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 1;
L_002EB104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB10Cu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EB10Cu) [[unlikely]] return; }
L_002EB10C:
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB12Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EB12Cu) [[unlikely]] return; }
L_002EB12C:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB148u); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EB148u) [[unlikely]] return; }
L_002EB148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB150u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002EB150u) [[unlikely]] return; }
L_002EB150:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 68u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = c.f[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1C8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB1C8u) [[unlikely]] return; }
L_002EB1C8:
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB1D8u) [[unlikely]] return; }
L_002EB1D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);  if (t) { goto L_002EB210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_002EB22C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.budget -= 1;
L_002EB210:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EB22C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_002EB22C:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { goto L_002EB574; } }
L_002EB238:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EB574; } }
L_002EB248:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB25Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB25Cu) [[unlikely]] return; }
L_002EB25C:
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB26Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB26Cu) [[unlikely]] return; }
L_002EB26C:
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002EB2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB298u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EB298u) [[unlikely]] return; }
L_002EB298:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB388; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002EB2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2B8u);  if (depth < kMaxDepth) unit_007A(c, 270u, depth + 1u); else { c.pc = 0x002EAA20u; return; } if (c.pc != 0x002EB2B8u) [[unlikely]] return; }
L_002EB2B8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[19].w[0] + 188u), c.r[5].w[0]);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB30Cu); st32((c.r[19].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EB30Cu) [[unlikely]] return; }
L_002EB30C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002EB340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB334u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB334u) [[unlikely]] return; }
L_002EB334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 80u));  if (t) { goto L_002EB398; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002EB340:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EB36C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB360u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB360u) [[unlikely]] return; }
L_002EB360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002EB36C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB380u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB380u) [[unlikely]] return; }
L_002EB380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB394; } }
L_002EB388:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EB394:
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.budget -= 1;
L_002EB398:
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 76u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3B8u); st32((c.r[19].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 347u, depth + 1u); else { c.pc = 0x002EB770u; return; } if (c.pc != 0x002EB3B8u) [[unlikely]] return; }
L_002EB3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB574; } }
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_002EB3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3CCu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EB3CCu) [[unlikely]] return; }
L_002EB3CC:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002EB3F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EB574; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002EB3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3FCu);  if (depth < kMaxDepth) unit_007A(c, 347u, depth + 1u); else { c.pc = 0x002EB770u; return; } if (c.pc != 0x002EB3FCu) [[unlikely]] return; }
L_002EB3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB574; } }
L_002EB404:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB418u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB418u) [[unlikely]] return; }
L_002EB418:
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB428u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002EB428u) [[unlikely]] return; }
L_002EB428:
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB454u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 270u, depth + 1u); else { c.pc = 0x002EAA20u; return; } if (c.pc != 0x002EB454u) [[unlikely]] return; }
L_002EB454:
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[19].w[0] + 188u), c.r[6].w[0]);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u + 10u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4B0u); st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EB4B0u) [[unlikely]] return; }
L_002EB4B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002EB4E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4D8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB4D8u) [[unlikely]] return; }
L_002EB4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002EB53C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002EB4E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002EB510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB504u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB504u) [[unlikely]] return; }
L_002EB504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002EB510:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB524u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB524u) [[unlikely]] return; }
L_002EB524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB538; } }
L_002EB52C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EB538:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002EB53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB544u);  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x002EB840u; return; } if (c.pc != 0x002EB544u) [[unlikely]] return; }
L_002EB544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB574; } }
L_002EB54C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_002EB56C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EB574; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002EB56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB574u); st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 353u, depth + 1u); else { c.pc = 0x002EB840u; return; } if (c.pc != 0x002EB574u) [[unlikely]] return; }
L_002EB574:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002EB578:
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002EB580:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EB5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002EB5EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5D4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EB5D4u) [[unlikely]] return; }
L_002EB5D4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB5EC; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002EB5EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002EB618; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB618; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB618; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002EB6AC; }
L_002EB618:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB62Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EB62Cu) [[unlikely]] return; }
L_002EB62C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 88u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002EB660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB654u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB654u) [[unlikely]] return; }
L_002EB654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002EB73C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002EB660:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002EB68C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB680u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB680u) [[unlikely]] return; }
L_002EB680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_002EB68C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB6A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EB6A0u) [[unlikely]] return; }
L_002EB6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB738; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002EB6AC:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EB6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002EB6E4; } }
L_002EB6D8:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_002EB6E4:
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
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB718u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EB718u) [[unlikely]] return; }
L_002EB718:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB728u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EB728u) [[unlikely]] return; }
L_002EB728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB730u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EB730u) [[unlikely]] return; }
L_002EB730:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EB738:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002EB73C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EB750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EB760:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EB770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002EB7A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002EB7B0; } }
L_002EB7A4:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_002EB7B0:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7FCu); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EB7FCu) [[unlikely]] return; }
L_002EB7FC:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB80Cu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EB80Cu) [[unlikely]] return; }
L_002EB80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB814u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EB814u) [[unlikely]] return; }
L_002EB814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB81Cu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EB81Cu) [[unlikely]] return; }
L_002EB81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB824u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EB824u) [[unlikely]] return; }
L_002EB824:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB89Cu); st32((c.r[4].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EB89Cu) [[unlikely]] return; }
L_002EB89C:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8ACu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EB8ACu) [[unlikely]] return; }
L_002EB8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8B4u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EB8B4u) [[unlikely]] return; }
L_002EB8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8BCu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EB8BCu) [[unlikely]] return; }
L_002EB8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8C4u); set32(c.r[4], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EB8C4u) [[unlikely]] return; }
L_002EB8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8CCu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EB8CCu) [[unlikely]] return; }
L_002EB8CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002EB8E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB904u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002EB904u) [[unlikely]] return; }
L_002EB904:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_002EB918:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB924u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EB924u) [[unlikely]] return; }
L_002EB924:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002EB984; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] - 17952u);
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] - 16880u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB97Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EB97Cu) [[unlikely]] return; }
L_002EB97C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002EB984:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB918u | kUnwind; return; } goto L_002EB918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16352u);
    set32(c.r[5], c.r[18].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16356u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[6], c.r[3].w[0] + 16u);
    set32(c.r[7], c.r[3].w[0] + 10u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9C0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 19u, depth + 1u); else { c.pc = 0x002387D0u; return; } if (c.pc != 0x002EB9C0u) [[unlikely]] return; }
L_002EB9C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EB9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[2].w[0] + 16352u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EBA20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[9], c.r[2].w[0] + 16608u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[7].w[0] << 4);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[16], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 74u);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 224u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[5].w[0] + 64u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 47;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_002EBAE8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAE8u); c.r[6].d[0] = c.r[3].d[0] & 127ull;  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002EBAE8u) [[unlikely]] return; }
L_002EBAE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB00u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EBB00u) [[unlikely]] return; }
L_002EBB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB08u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EBB08u) [[unlikely]] return; }
L_002EBB08:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB14u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EBB14u) [[unlikely]] return; }
L_002EBB14:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[19].w[0] + 128u), c.f[3]);
    st32((c.r[19].w[0] + 132u), c.f[2]);
    st32((c.r[19].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB38u); st32((c.r[19].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EBB38u) [[unlikely]] return; }
L_002EBB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB40u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EBB40u) [[unlikely]] return; }
L_002EBB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EBB48u) [[unlikely]] return; }
L_002EBB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB50u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EBB50u) [[unlikely]] return; }
L_002EBB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB58u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EBB58u) [[unlikely]] return; }
L_002EBB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB60u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EBB60u) [[unlikely]] return; }
L_002EBB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB68u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EBB68u) [[unlikely]] return; }
L_002EBB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 16800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB78u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EBB78u) [[unlikely]] return; }
L_002EBB78:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB88u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002EBB88u) [[unlikely]] return; }
L_002EBB88:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB98u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 382u, depth + 1u); else { c.pc = 0x002EBBC0u; return; } if (c.pc != 0x002EBB98u) [[unlikely]] return; }
L_002EBB98:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EBBC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[18], c.r[2].w[0] + 32u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC1Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002EBC1Cu) [[unlikely]] return; }
L_002EBC1C:
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
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_002EBC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002EBC80; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002EBC7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002EBC80:
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 72u), c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCA4u); st32((c.r[17].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EBCA4u) [[unlikely]] return; }
L_002EBCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002EBCACu) [[unlikely]] return; }
L_002EBCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCB4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EBCB4u) [[unlikely]] return; }
L_002EBCB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 16800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCC4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002EBCC4u) [[unlikely]] return; }
L_002EBCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EBCCCu) [[unlikely]] return; }
L_002EBCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCD4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EBCD4u) [[unlikely]] return; }
L_002EBCD4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCE4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EBCE4u) [[unlikely]] return; }
L_002EBCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EBCECu) [[unlikely]] return; }
L_002EBCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCF4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EBCF4u) [[unlikely]] return; }
L_002EBCF4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 166ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EBD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD0Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EBD0Cu) [[unlikely]] return; }
L_002EBD0C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EBD38; } }
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EBD50; } }
L_002EBD38:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
L_002EBD50:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EBD70:
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 112u), c.f[1]);  if (t) { goto L_002EBDD4; } }
    c.f[1] = ld32((c.r[5].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002EBDE8; } }
L_002EBDD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EBDEC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002EBDE8:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002EBDEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EBE00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EBE10:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE4Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EBE4Cu) [[unlikely]] return; }
L_002EBE4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002EBE5Cu) [[unlikely]] return; }
L_002EBE5C:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE6Cu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EBE6Cu) [[unlikely]] return; }
L_002EBE6C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EBE78u) [[unlikely]] return; }
L_002EBE78:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE84u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EBE84u) [[unlikely]] return; }
L_002EBE84:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE94u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EBE94u) [[unlikely]] return; }
L_002EBE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EBE9Cu) [[unlikely]] return; }
L_002EBE9C:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEACu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002EBEACu) [[unlikely]] return; }
L_002EBEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEB4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EBEB4u) [[unlikely]] return; }
L_002EBEB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 17472u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002EBEE8; } }
L_002EBED8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 16832u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);
    c.budget -= 4;
L_002EBEE8:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28424u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF08u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002EBF08u) [[unlikely]] return; }
L_002EBF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF48u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002EBF48u) [[unlikely]] return; }
L_002EBF48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002EBF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EBF8Cu) [[unlikely]] return; }
L_002EBF8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { [[clang::musttail]] return unit_007B(c, 4u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16320u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFE0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EBFE0u) [[unlikely]] return; }
L_002EBFE0:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 83u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC004u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007B(c, 2u, depth);
}

}
