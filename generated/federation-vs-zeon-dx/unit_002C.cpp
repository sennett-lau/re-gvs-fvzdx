#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207,
    0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0,
    0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0,
    0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317,
    0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0,
    0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B0000;
    case 2u: goto L_001B001C;
    case 3u: goto L_001B002C;
    case 4u: goto L_001B003C;
    case 5u: goto L_001B0040;
    case 6u: goto L_001B0044;
    case 7u: goto L_001B0078;
    case 8u: goto L_001B0088;
    case 9u: goto L_001B009C;
    case 10u: goto L_001B00F0;
    case 11u: goto L_001B0124;
    case 12u: goto L_001B014C;
    case 13u: goto L_001B0198;
    case 14u: goto L_001B01D0;
    case 15u: goto L_001B01E4;
    case 16u: goto L_001B01F0;
    case 17u: goto L_001B01F8;
    case 18u: goto L_001B01FC;
    case 19u: goto L_001B0230;
    case 20u: goto L_001B0274;
    case 21u: goto L_001B0284;
    case 22u: goto L_001B03FC;
    case 23u: goto L_001B042C;
    case 24u: goto L_001B0438;
    case 25u: goto L_001B0444;
    case 26u: goto L_001B0488;
    case 27u: goto L_001B04F8;
    case 28u: goto L_001B058C;
    case 29u: goto L_001B0598;
    case 30u: goto L_001B05C8;
    case 31u: goto L_001B05D4;
    case 32u: goto L_001B06A4;
    case 33u: goto L_001B06B8;
    case 34u: goto L_001B06F0;
    case 35u: goto L_001B0728;
    case 36u: goto L_001B073C;
    case 37u: goto L_001B0790;
    case 38u: goto L_001B07D4;
    case 39u: goto L_001B07EC;
    case 40u: goto L_001B0814;
    case 41u: goto L_001B0834;
    case 42u: goto L_001B0848;
    case 43u: goto L_001B086C;
    case 44u: goto L_001B0898;
    case 45u: goto L_001B08A0;
    case 46u: goto L_001B08AC;
    case 47u: goto L_001B08E0;
    case 48u: goto L_001B08F8;
    case 49u: goto L_001B0914;
    case 50u: goto L_001B0920;
    case 51u: goto L_001B0984;
    case 52u: goto L_001B0990;
    case 53u: goto L_001B09E4;
    case 54u: goto L_001B0A0C;
    case 55u: goto L_001B0A20;
    case 56u: goto L_001B0A34;
    case 57u: goto L_001B0A54;
    case 58u: goto L_001B0A74;
    case 59u: goto L_001B0AA8;
    case 60u: goto L_001B0ABC;
    case 61u: goto L_001B0ADC;
    case 62u: goto L_001B0B10;
    case 63u: goto L_001B0B58;
    case 64u: goto L_001B0B68;
    case 65u: goto L_001B0B74;
    case 66u: goto L_001B0B84;
    case 67u: goto L_001B0BB0;
    case 68u: goto L_001B0BC0;
    case 69u: goto L_001B0BDC;
    case 70u: goto L_001B0C08;
    case 71u: goto L_001B0C64;
    case 72u: goto L_001B0C78;
    case 73u: goto L_001B0C8C;
    case 74u: goto L_001B0CC4;
    case 75u: goto L_001B0CD8;
    case 76u: goto L_001B0D34;
    case 77u: goto L_001B0D54;
    case 78u: goto L_001B0D88;
    case 79u: goto L_001B0E20;
    case 80u: goto L_001B0EE4;
    case 81u: goto L_001B0EF8;
    case 82u: goto L_001B0F24;
    case 83u: goto L_001B0FC8;
    case 84u: goto L_001B0FDC;
    case 85u: goto L_001B0FEC;
    case 86u: goto L_001B0FF4;
    case 87u: goto L_001B1000;
    case 88u: goto L_001B1030;
    case 89u: goto L_001B103C;
    case 90u: goto L_001B109C;
    case 91u: goto L_001B10A8;
    case 92u: goto L_001B1118;
    case 93u: goto L_001B1204;
    case 94u: goto L_001B1224;
    case 95u: goto L_001B1258;
    case 96u: goto L_001B1294;
    case 97u: goto L_001B12C4;
    case 98u: goto L_001B12D8;
    case 99u: goto L_001B12EC;
    case 100u: goto L_001B1350;
    case 101u: goto L_001B1384;
    case 102u: goto L_001B1390;
    case 103u: goto L_001B13BC;
    case 104u: goto L_001B13C8;
    case 105u: goto L_001B1428;
    case 106u: goto L_001B1434;
    case 107u: goto L_001B14A4;
    case 108u: goto L_001B14DC;
    case 109u: goto L_001B14E4;
    case 110u: goto L_001B14F8;
    case 111u: goto L_001B150C;
    case 112u: goto L_001B1540;
    case 113u: goto L_001B158C;
    case 114u: goto L_001B1630;
    case 115u: goto L_001B1684;
    case 116u: goto L_001B1690;
    case 117u: goto L_001B16C0;
    case 118u: goto L_001B16CC;
    case 119u: goto L_001B1748;
    case 120u: goto L_001B1754;
    case 121u: goto L_001B1790;
    case 122u: goto L_001B17B4;
    case 123u: goto L_001B17C4;
    case 124u: goto L_001B17DC;
    case 125u: goto L_001B17E8;
    case 126u: goto L_001B1820;
    case 127u: goto L_001B1844;
    case 128u: goto L_001B1854;
    case 129u: goto L_001B18B8;
    case 130u: goto L_001B18D4;
    case 131u: goto L_001B18F0;
    case 132u: goto L_001B190C;
    case 133u: goto L_001B1950;
    case 134u: goto L_001B19E0;
    case 135u: goto L_001B19F8;
    case 136u: goto L_001B1A00;
    case 137u: goto L_001B1A24;
    case 138u: goto L_001B1A74;
    case 139u: goto L_001B1A8C;
    case 140u: goto L_001B1A94;
    case 141u: goto L_001B1AB8;
    case 142u: goto L_001B1ACC;
    case 143u: goto L_001B1AFC;
    case 144u: goto L_001B1B0C;
    case 145u: goto L_001B1B1C;
    case 146u: goto L_001B1B34;
    case 147u: goto L_001B1B3C;
    case 148u: goto L_001B1B54;
    case 149u: goto L_001B1B6C;
    case 150u: goto L_001B1B7C;
    case 151u: goto L_001B1B8C;
    case 152u: goto L_001B1B98;
    case 153u: goto L_001B1BA4;
    case 154u: goto L_001B1BAC;
    case 155u: goto L_001B1BC0;
    case 156u: goto L_001B1C04;
    case 157u: goto L_001B1C1C;
    case 158u: goto L_001B1C3C;
    case 159u: goto L_001B1C60;
    case 160u: goto L_001B1CC0;
    case 161u: goto L_001B1CD8;
    case 162u: goto L_001B1CE0;
    case 163u: goto L_001B1D20;
    case 164u: goto L_001B1D38;
    case 165u: goto L_001B1D40;
    case 166u: goto L_001B1DB4;
    case 167u: goto L_001B1DE0;
    case 168u: goto L_001B1E10;
    case 169u: goto L_001B1E48;
    case 170u: goto L_001B1E58;
    case 171u: goto L_001B1E68;
    case 172u: goto L_001B1E80;
    case 173u: goto L_001B1EA8;
    case 174u: goto L_001B1EB0;
    case 175u: goto L_001B1EC4;
    case 176u: goto L_001B1EF0;
    case 177u: goto L_001B1F20;
    case 178u: goto L_001B1F4C;
    case 179u: goto L_001B1F5C;
    case 180u: goto L_001B1F64;
    case 181u: goto L_001B1F70;
    case 182u: goto L_001B1F80;
    case 183u: goto L_001B1F8C;
    case 184u: goto L_001B1F9C;
    case 185u: goto L_001B1FAC;
    case 186u: goto L_001B1FB8;
    case 187u: goto L_001B2004;
    case 188u: goto L_001B2010;
    case 189u: goto L_001B2064;
    case 190u: goto L_001B2098;
    case 191u: goto L_001B20AC;
    case 192u: goto L_001B20E0;
    case 193u: goto L_001B2110;
    case 194u: goto L_001B2128;
    case 195u: goto L_001B2158;
    case 196u: goto L_001B216C;
    case 197u: goto L_001B21A0;
    case 198u: goto L_001B21CC;
    case 199u: goto L_001B225C;
    case 200u: goto L_001B2294;
    case 201u: goto L_001B22A0;
    case 202u: goto L_001B22AC;
    case 203u: goto L_001B22C0;
    case 204u: goto L_001B22C8;
    case 205u: goto L_001B22E4;
    case 206u: goto L_001B22F0;
    case 207u: goto L_001B22FC;
    case 208u: goto L_001B2308;
    case 209u: goto L_001B2314;
    case 210u: goto L_001B2340;
    case 211u: goto L_001B23DC;
    case 212u: goto L_001B23EC;
    case 213u: goto L_001B2450;
    case 214u: goto L_001B2458;
    case 215u: goto L_001B2464;
    case 216u: goto L_001B2470;
    case 217u: goto L_001B2484;
    case 218u: goto L_001B248C;
    case 219u: goto L_001B24A4;
    case 220u: goto L_001B24AC;
    case 221u: goto L_001B24BC;
    case 222u: goto L_001B24C8;
    case 223u: goto L_001B24D4;
    case 224u: goto L_001B24E0;
    case 225u: goto L_001B24EC;
    case 226u: goto L_001B2510;
    case 227u: goto L_001B2560;
    case 228u: goto L_001B25A8;
    case 229u: goto L_001B25E4;
    case 230u: goto L_001B2600;
    case 231u: goto L_001B2628;
    case 232u: goto L_001B2648;
    case 233u: goto L_001B2690;
    case 234u: goto L_001B26C8;
    case 235u: goto L_001B26D8;
    case 236u: goto L_001B2720;
    case 237u: goto L_001B272C;
    case 238u: goto L_001B2758;
    case 239u: goto L_001B276C;
    case 240u: goto L_001B277C;
    case 241u: goto L_001B27A0;
    case 242u: goto L_001B27CC;
    case 243u: goto L_001B27FC;
    case 244u: goto L_001B2814;
    case 245u: goto L_001B2850;
    case 246u: goto L_001B2884;
    case 247u: goto L_001B2894;
    case 248u: goto L_001B28D4;
    case 249u: goto L_001B28E0;
    case 250u: goto L_001B2914;
    case 251u: goto L_001B29A8;
    case 252u: goto L_001B29B8;
    case 253u: goto L_001B29CC;
    case 254u: goto L_001B29E0;
    case 255u: goto L_001B29F0;
    case 256u: goto L_001B2A30;
    case 257u: goto L_001B2A3C;
    case 258u: goto L_001B2A70;
    case 259u: goto L_001B2B04;
    case 260u: goto L_001B2B14;
    case 261u: goto L_001B2B28;
    case 262u: goto L_001B2B60;
    case 263u: goto L_001B2BAC;
    case 264u: goto L_001B2BF0;
    case 265u: goto L_001B2C30;
    case 266u: goto L_001B2C64;
    case 267u: goto L_001B2C74;
    case 268u: goto L_001B2CBC;
    case 269u: goto L_001B2CC8;
    case 270u: goto L_001B2CF4;
    case 271u: goto L_001B2D08;
    case 272u: goto L_001B2D54;
    case 273u: goto L_001B2D64;
    case 274u: goto L_001B2D78;
    case 275u: goto L_001B2D84;
    case 276u: goto L_001B2D90;
    case 277u: goto L_001B2DA4;
    case 278u: goto L_001B2DF0;
    case 279u: goto L_001B2E00;
    case 280u: goto L_001B2E14;
    case 281u: goto L_001B2E40;
    case 282u: goto L_001B2E7C;
    case 283u: goto L_001B2E8C;
    case 284u: goto L_001B2EB8;
    case 285u: goto L_001B2F2C;
    case 286u: goto L_001B2F4C;
    case 287u: goto L_001B2F54;
    case 288u: goto L_001B2F60;
    case 289u: goto L_001B2F8C;
    case 290u: goto L_001B2FB4;
    case 291u: goto L_001B2FD0;
    case 292u: goto L_001B2FF0;
    case 293u: goto L_001B3024;
    case 294u: goto L_001B3034;
    case 295u: goto L_001B3048;
    case 296u: goto L_001B3060;
    case 297u: goto L_001B3094;
    case 298u: goto L_001B30A4;
    case 299u: goto L_001B30B8;
    case 300u: goto L_001B30D0;
    case 301u: goto L_001B3118;
    case 302u: goto L_001B312C;
    case 303u: goto L_001B3140;
    case 304u: goto L_001B314C;
    case 305u: goto L_001B3178;
    case 306u: goto L_001B3184;
    case 307u: goto L_001B31EC;
    case 308u: goto L_001B3224;
    case 309u: goto L_001B3248;
    case 310u: goto L_001B3258;
    case 311u: goto L_001B326C;
    case 312u: goto L_001B32A4;
    case 313u: goto L_001B32C8;
    case 314u: goto L_001B32D8;
    case 315u: goto L_001B3310;
    case 316u: goto L_001B336C;
    case 317u: goto L_001B337C;
    case 318u: goto L_001B3388;
    case 319u: goto L_001B3394;
    case 320u: goto L_001B33B0;
    case 321u: goto L_001B33FC;
    case 322u: goto L_001B3424;
    case 323u: goto L_001B3438;
    case 324u: goto L_001B3458;
    case 325u: goto L_001B34A0;
    case 326u: goto L_001B34A8;
    case 327u: goto L_001B34B8;
    case 328u: goto L_001B34C4;
    case 329u: goto L_001B34D0;
    case 330u: goto L_001B34D8;
    case 331u: goto L_001B34F8;
    case 332u: goto L_001B3514;
    case 333u: goto L_001B3524;
    case 334u: goto L_001B3530;
    case 335u: goto L_001B35B4;
    case 336u: goto L_001B35E4;
    case 337u: goto L_001B3614;
    case 338u: goto L_001B3704;
    case 339u: goto L_001B3710;
    case 340u: goto L_001B371C;
    case 341u: goto L_001B372C;
    case 342u: goto L_001B373C;
    case 343u: goto L_001B3748;
    case 344u: goto L_001B3790;
    case 345u: goto L_001B379C;
    case 346u: goto L_001B37E4;
    case 347u: goto L_001B37F0;
    case 348u: goto L_001B3838;
    case 349u: goto L_001B3844;
    case 350u: goto L_001B38D0;
    case 351u: goto L_001B38DC;
    case 352u: goto L_001B38EC;
    case 353u: goto L_001B38F8;
    case 354u: goto L_001B3908;
    case 355u: goto L_001B3918;
    case 356u: goto L_001B3924;
    case 357u: goto L_001B3948;
    case 358u: goto L_001B3994;
    case 359u: goto L_001B39A0;
    case 360u: goto L_001B39B0;
    case 361u: goto L_001B39BC;
    case 362u: goto L_001B39CC;
    case 363u: goto L_001B39DC;
    case 364u: goto L_001B39E8;
    case 365u: goto L_001B3A0C;
    case 366u: goto L_001B3A80;
    case 367u: goto L_001B3AE0;
    case 368u: goto L_001B3B80;
    case 369u: goto L_001B3BB8;
    case 370u: goto L_001B3BC8;
    case 371u: goto L_001B3BD4;
    case 372u: goto L_001B3C00;
    case 373u: goto L_001B3C0C;
    case 374u: goto L_001B3C48;
    case 375u: goto L_001B3C58;
    case 376u: goto L_001B3C64;
    case 377u: goto L_001B3C90;
    case 378u: goto L_001B3C9C;
    case 379u: goto L_001B3CDC;
    case 380u: goto L_001B3CEC;
    case 381u: goto L_001B3DD0;
    default: bad_entry(c, 0x001B0000u); return;
    }
L_001B0000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 7;
L_001B001C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B002Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B002Cu) [[unlikely]] return; }
L_001B002C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B00A4; } }
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_001B003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0044u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B0044u) [[unlikely]] return; }
    goto L_001B0044;
L_001B0040:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 1;
L_001B0044:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001B006C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B00D0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001B006C:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0078u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0078u) [[unlikely]] return; }
L_001B0078:
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0088u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B0088u) [[unlikely]] return; }
L_001B0088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B009Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B009Cu) [[unlikely]] return; }
L_001B009C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B00D0; } }
L_001B00A4:
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 28704u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
L_001B00D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B00F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0124u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0124u) [[unlikely]] return; }
L_001B0124:
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B014Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001B014Cu) [[unlikely]] return; }
L_001B014C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B01A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0198u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0198u) [[unlikely]] return; }
L_001B0198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0204; } }
L_001B01A0:
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[20] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B0204; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01D0u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B01D0u) [[unlikely]] return; }
L_001B01D0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B01E4u) [[unlikely]] return; }
L_001B01E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
L_001B01F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B01F8u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 210u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B01F8u) [[unlikely]] return; }
L_001B01F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0204; } }
    goto L_001B0200;
L_001B01FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B0200:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0204:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B0230:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0274u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001B0274u) [[unlikely]] return; }
L_001B0274:
    set32(c.r[16], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0284u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B0284u) [[unlikely]] return; }
L_001B0284:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_001B02E4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B02E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0300; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0300; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0350; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0328; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0344; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0344; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0350; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001B0350:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B03A0; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0378; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0394; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0394; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B03A0; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_001B03A0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; mmi::paddub(c.r[2], c.r[22], c.r[0]);  if (t) { goto L_001B0AE0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[29].w[0] + 192u);  if (t) { goto L_001B03F0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B03EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B03EC; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B03EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B0AE0; } }
L_001B03EC:
    set32(c.r[19], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B03F0:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[20], c.r[0]);
    c.budget -= 3;
L_001B03FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B042Cu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B042Cu) [[unlikely]] return; }
L_001B042C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0438u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0438u) [[unlikely]] return; }
L_001B0438:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0444u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B0444u) [[unlikely]] return; }
L_001B0444:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0468; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_001B0468:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001B04AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0488u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B0488u) [[unlikely]] return; }
L_001B0488:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B04A8; } }
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_001B04A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B04AC:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B03FCu | kUnwind; return; } goto L_001B03FC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B0A4C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B0840; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B075C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[29].w[0] + 256u);  if (t) { goto L_001B04F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0ADC; } }
    set32(c.r[18], c.r[29].w[0] + 256u);
    c.budget -= 1;
L_001B04F0:
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[20], c.r[0]);
    c.budget -= 2;
L_001B04F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] >> 31);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[21].w[0] + 16u));
    c.f[2] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B058Cu); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B058Cu) [[unlikely]] return; }
L_001B058C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0598u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0598u) [[unlikely]] return; }
L_001B0598:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001B05B8; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_001B05B8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05C8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B05C8u) [[unlikely]] return; }
L_001B05C8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05D4u); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B05D4u) [[unlikely]] return; }
L_001B05D4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001B05F0; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001B05F0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001B06C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B067C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B0630; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B0628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001B0748; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_001B0AE4; } }
L_001B0630:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B0744; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0744; } }
    st8((c.r[4].w[0] + 538u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0674; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8385u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_001B0674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0AE0; } }
L_001B067C:
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06A4u); c.f[12] = c.f[20] ^ fp::kSign;  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B06A4u) [[unlikely]] return; }
L_001B06A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06B8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B06B8u) [[unlikely]] return; }
L_001B06B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0AE0; } }
L_001B06C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0700; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001B0700; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[6], c.r[20].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06F0u); set32(c.r[7], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 39u, depth + 1u); else { c.pc = 0x001B4A60u; return; } if (c.pc != 0x001B06F0u) [[unlikely]] return; }
L_001B06F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0AE0; } }
L_001B0700:
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.f[21] = fp::add(c.f[21], c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0728u); c.f[12] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0728u) [[unlikely]] return; }
L_001B0728:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B073Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B073Cu) [[unlikely]] return; }
L_001B073C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0AE0; } }
L_001B0744:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001B0748:
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B04F8u | kUnwind; return; } goto L_001B04F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_001B0ADC; } }
L_001B075C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0798; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0798; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[6], c.r[20].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0790u); set32(c.r[7], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 39u, depth + 1u); else { c.pc = 0x001B4A60u; return; } if (c.pc != 0x001B0790u) [[unlikely]] return; }
L_001B0790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0ADC; } }
L_001B0798:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07D4u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B07D4u) [[unlikely]] return; }
L_001B07D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07ECu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B07ECu) [[unlikely]] return; }
L_001B07EC:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 176u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0814u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0814u) [[unlikely]] return; }
L_001B0814:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0834u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B0834u) [[unlikely]] return; }
L_001B0834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0ADC; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B0840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0848u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001B0848u) [[unlikely]] return; }
L_001B0848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0ADC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B086Cu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B086Cu) [[unlikely]] return; }
L_001B086C:
    set32(c.r[16], c.r[29].w[0] + 284u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0898u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0898u) [[unlikely]] return; }
L_001B0898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08A0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B08A0u) [[unlikely]] return; }
L_001B08A0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08ACu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B08ACu) [[unlikely]] return; }
L_001B08AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001B08D4; } }
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_001B08D4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08E0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B08E0u) [[unlikely]] return; }
L_001B08E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B08F8u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B08F8u) [[unlikely]] return; }
L_001B08F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0914u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0914u) [[unlikely]] return; }
L_001B0914:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0920u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0920u) [[unlikely]] return; }
L_001B0920:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0968; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_001B0968:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0984u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0984u) [[unlikely]] return; }
L_001B0984:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0990u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0990u) [[unlikely]] return; }
L_001B0990:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_001B09DC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 13;
L_001B09DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B09E4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B09E4u) [[unlikely]] return; }
L_001B09E4:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B0A40; } }
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A0Cu); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0A0Cu) [[unlikely]] return; }
L_001B0A0C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0A20u) [[unlikely]] return; }
L_001B0A20:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A34u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 210u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B0A34u) [[unlikely]] return; }
L_001B0A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0AE0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B0A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0AE0; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B0A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A54u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B45F0u; return; } if (c.pc != 0x001B0A54u) [[unlikely]] return; }
L_001B0A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0ADC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0A74u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B0A74u) [[unlikely]] return; }
L_001B0A74:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B0ADC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AA8u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0AA8u) [[unlikely]] return; }
L_001B0AA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0ABCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0ABCu) [[unlikely]] return; }
L_001B0ABC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0ADCu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 210u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B0ADCu) [[unlikely]] return; }
L_001B0ADC:
    mmi::paddub(c.r[2], c.r[22], c.r[0]);
    c.budget -= 1;
L_001B0AE0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B0AE4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001B0B10:
    set32(c.r[29], c.r[29].w[0] - 320u);
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
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[22], c.r[0]);
    mmi::paddub(c.r[19], c.r[22], c.r[0]);
    c.budget -= 18;
L_001B0B58:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B68u); set32(c.r[6], c.r[22].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0B68u) [[unlikely]] return; }
L_001B0B68:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B74u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0B74u) [[unlikely]] return; }
L_001B0B74:
    c.f[20] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B84u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B0B84u) [[unlikely]] return; }
L_001B0B84:
    c.f[2] = ld32((c.r[21].w[0] + 48u));
    c.f[1] = ld32((c.r[22].w[0] + 192u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_001B0BCC; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BB0u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B0BB0u) [[unlikely]] return; }
L_001B0BB0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BC0u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0BC0u) [[unlikely]] return; }
L_001B0BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B0BFC; } }
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_001B0BCC:
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[22].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BDCu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_002C(c, 300u, depth + 1u); else { c.pc = 0x001B30D0u; return; } if (c.pc != 0x001B0BDCu) [[unlikely]] return; }
L_001B0BDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001B0F08; }
    set32(c.r[2], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[17], 0u + 1u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 6;
L_001B0BFC:
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C08u); set32(c.r[6], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 7u, depth + 1u); else { c.pc = 0x001B4450u; return; } if (c.pc != 0x001B0C08u) [[unlikely]] return; }
L_001B0C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0F04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0CE4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B0C94; } }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C64u); c.f[20] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B0C64u) [[unlikely]] return; }
L_001B0C64:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C78u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0C78u) [[unlikely]] return; }
L_001B0C78:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C8Cu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B0C8Cu) [[unlikely]] return; }
L_001B0C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0CDC; } }
L_001B0C94:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CC4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0CC4u) [[unlikely]] return; }
L_001B0CC4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CD8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B0CD8u) [[unlikely]] return; }
L_001B0CD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B0CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);  if (t) { goto L_001B1318; } }
L_001B0CE4:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0E2C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B0D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001B0D14:
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = ld16((c.r[18].w[0] + 536u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0D94; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D34u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0D34u) [[unlikely]] return; }
L_001B0D34:
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D54u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001B0D54u) [[unlikely]] return; }
L_001B0D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[20];  if (t) { goto L_001B0D94; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D88u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B0D88u) [[unlikely]] return; }
L_001B0D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0D94; } }
    c.f[0] = c.f[20];
    c.budget -= 1;
L_001B0D94:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0EFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001B0E08; } }
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st8((c.r[18].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[21].w[0] + 16u), c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    st32((c.r[21].w[0] + 28u), c.f[0]);
    c.budget -= 20;
L_001B0E08:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    c.f[12] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[6], c.r[22].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E20u); set32(c.r[7], c.r[22].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 39u, depth + 1u); else { c.pc = 0x001B4A60u; return; } if (c.pc != 0x001B0E20u) [[unlikely]] return; }
L_001B0E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B0EF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B0E2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001B0EB4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001B0E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1314; } }
L_001B0E4C:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 224u);  if (t) { goto L_001B0E64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1314; } }
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_001B0E64:
    c.f[20] = 0u;
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[21].w[0] + 16u), c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[2]);
    st32((c.r[21].w[0] + 24u), c.f[1]);
    st32((c.r[21].w[0] + 28u), c.f[0]);
    c.budget -= 20;
L_001B0EB4:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0EE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B0EE4u) [[unlikely]] return; }
L_001B0EE4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0EF8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 197u, depth + 1u); else { c.pc = 0x001B21A0u; return; } if (c.pc != 0x001B0EF8u) [[unlikely]] return; }
L_001B0EF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B0EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1314; } }
L_001B0F04:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B0F08:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0B58u | kUnwind; return; } goto L_001B0B58; } }
    mmi::paddub(c.r[30], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[22], c.r[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 3;
L_001B0F24:
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.f[20] = c.r[2].w[0];
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 64u));
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = ld32((c.r[19].w[0] + 76u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 80u));
    c.f[2] = ld32((c.r[19].w[0] + 84u));
    c.f[1] = ld32((c.r[19].w[0] + 88u));
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 41;
L_001B0FC8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FDCu); mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0FDCu) [[unlikely]] return; }
L_001B0FDC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FECu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B0FECu) [[unlikely]] return; }
L_001B0FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FF4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B0FF4u) [[unlikely]] return; }
L_001B0FF4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1000u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1000u) [[unlikely]] return; }
L_001B1000:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_001B1024; } }
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
L_001B1024:
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1030u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1030u) [[unlikely]] return; }
L_001B1030:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B103Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B103Cu) [[unlikely]] return; }
L_001B103C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001B1058; } }
    c.r[20].d[0] = c.r[20].d[0] | 2ull;
    c.budget -= 1;
L_001B1058:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1104; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001B10D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001B10B0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001B1090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 16u);  if (t) { goto L_001B1110; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001B1090:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B109Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B109Cu) [[unlikely]] return; }
L_001B109C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10A8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B10A8u) [[unlikely]] return; }
L_001B10A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B110C; } }
L_001B10B0:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B110C; } }
L_001B10D8:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B110C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1314; } }
L_001B110C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_001B1110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1118u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B1118u) [[unlikely]] return; }
L_001B1118:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001B1144; }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.f[20] = c.f[0];
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 304u);
    mmi::paddub(c.r[23], c.r[18], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 7;
L_001B1144:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0FC8u | kUnwind; return; } goto L_001B0FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B12F4; } }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[22].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B12F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B12A4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B12A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_001B11C8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_001B12A4; } }
L_001B11C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B11E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1314; } }
L_001B11E0:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 536u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1264; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1204u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1204u) [[unlikely]] return; }
L_001B1204:
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1224u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001B1224u) [[unlikely]] return; }
L_001B1224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[21];  if (t) { goto L_001B1264; } }
    set32(c.r[2], c.r[30].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1258u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1258u) [[unlikely]] return; }
L_001B1258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1264; } }
    c.f[0] = c.f[21];
    c.budget -= 1;
L_001B1264:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B12A4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    c.f[12] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[6], c.r[22].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1294u); set32(c.r[7], c.r[22].w[0] + 144u);  if (depth < kMaxDepth) unit_002D(c, 39u, depth + 1u); else { c.pc = 0x001B4A60u; return; } if (c.pc != 0x001B1294u) [[unlikely]] return; }
L_001B1294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B12A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1314; } }
L_001B12A4:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[22].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12C4u); c.f[20] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B12C4u) [[unlikely]] return; }
L_001B12C4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B12D8u) [[unlikely]] return; }
L_001B12D8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12ECu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 210u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B12ECu) [[unlikely]] return; }
L_001B12EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1314; } }
L_001B12F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0F24u | kUnwind; return; } goto L_001B0F24; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1314:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B1318:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001B1350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1384u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1384u) [[unlikely]] return; }
L_001B1384:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1390u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1390u) [[unlikely]] return; }
L_001B1390:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B13B0; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_001B13B0:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13BCu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B13BCu) [[unlikely]] return; }
L_001B13BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13C8u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B13C8u) [[unlikely]] return; }
L_001B13C8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_001B13E8; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001B13E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1490; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B1464; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001B143C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B141C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001B149C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001B141C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1428u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1428u) [[unlikely]] return; }
L_001B1428:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1434u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B1434u) [[unlikely]] return; }
L_001B1434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1498; } }
L_001B143C:
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B1498; } }
L_001B1464:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B1498; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001B151C; } }
L_001B1498:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001B149C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14A4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B14A4u) [[unlikely]] return; }
L_001B14A4:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1518; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14DCu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B14DCu) [[unlikely]] return; }
L_001B14DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14E4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B14E4u) [[unlikely]] return; }
L_001B14E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B14F8u) [[unlikely]] return; }
L_001B14F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B150Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 210u, depth + 1u); else { c.pc = 0x001B2340u; return; } if (c.pc != 0x001B150Cu) [[unlikely]] return; }
L_001B150C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1518; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1518:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B151C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B1540:
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
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[19], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 19;
L_001B158C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B158Cu | kUnwind; return; } goto L_001B158C; } }
    c.f[3] = ld32((c.r[22].w[0] + 48u));
    c.f[2] = ld32((c.r[22].w[0] + 52u));
    c.f[1] = ld32((c.r[22].w[0] + 56u));
    c.f[0] = ld32((c.r[22].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[22].w[0] + 64u));
    c.f[2] = ld32((c.r[22].w[0] + 68u));
    c.f[1] = ld32((c.r[22].w[0] + 72u));
    c.f[0] = ld32((c.r[22].w[0] + 76u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[30], c.r[29].w[0] + 268u);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[22].w[0] + 16u));
    c.f[2] = ld32((c.r[22].w[0] + 20u));
    c.f[1] = ld32((c.r[22].w[0] + 24u));
    c.f[0] = ld32((c.r[22].w[0] + 28u));
    mmi::paddub(c.r[18], c.r[23], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 34;
L_001B1630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    set32(c.r[3], c.r[21].w[0] >> 31);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 272u));
    c.f[2] = ld32((c.r[2].w[0] + 276u));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[2].w[0] + 284u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1684u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1684u) [[unlikely]] return; }
L_001B1684:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1690u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1690u) [[unlikely]] return; }
L_001B1690:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001B16B0; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_001B16B0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16C0u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B16C0u) [[unlikely]] return; }
L_001B16C0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16CCu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B16CCu) [[unlikely]] return; }
L_001B16CC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = c.f[0];  if (t) { goto L_001B16E8; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001B16E8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001B1864; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001B17D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001B173C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001B1720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1860; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B1720:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { goto L_001B1860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1918; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001B173C:
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1748u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1748u) [[unlikely]] return; }
L_001B1748:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1754u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1754u) [[unlikely]] return; }
L_001B1754:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001B1784; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B1798; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_001B1784:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1790u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1790u) [[unlikely]] return; }
L_001B1790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 240u);  if (t) { goto L_001B17BC; } }
L_001B1798:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17B4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B17B4u) [[unlikely]] return; }
L_001B17B4:
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 2;
L_001B17BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17C4u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B17C4u) [[unlikely]] return; }
L_001B17C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_001B1860; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001B17D0:
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17DCu); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B17DCu) [[unlikely]] return; }
L_001B17DC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17E8u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B17E8u) [[unlikely]] return; }
L_001B17E8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_001B1814; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B1828; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_001B1814:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1820u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1820u) [[unlikely]] return; }
L_001B1820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_001B184C; } }
L_001B1828:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1844u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1844u) [[unlikely]] return; }
L_001B1844:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_001B184C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1854u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B1854u) [[unlikely]] return; }
L_001B1854:
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 3;
L_001B1860:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001B1864:
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1630u | kUnwind; return; } goto L_001B1630; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001B18FC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001B18E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001B18C4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[6], c.r[29].w[0] + 176u);  if (t) { goto L_001B18A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1918; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001B18A8:
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18B8u); mmi::paddub(c.r[7], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 133u, depth + 1u); else { c.pc = 0x001B1950u; return; } if (c.pc != 0x001B18B8u) [[unlikely]] return; }
L_001B18B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);  if (t) { goto L_001B191C; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001B18C4:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18D4u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 159u, depth + 1u); else { c.pc = 0x001B1C60u; return; } if (c.pc != 0x001B18D4u) [[unlikely]] return; }
L_001B18D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1918; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001B18E0:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B18F0u); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 167u, depth + 1u); else { c.pc = 0x001B1DE0u; return; } if (c.pc != 0x001B18F0u) [[unlikely]] return; }
L_001B18F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1918; } }
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_001B18FC:
    set32(c.r[7], c.r[29].w[0] + 256u);
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B190Cu); mmi::paddub(c.r[5], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 176u, depth + 1u); else { c.pc = 0x001B1EF0u; return; } if (c.pc != 0x001B190Cu) [[unlikely]] return; }
L_001B190C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1918; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1918:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B191C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_001B1950:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], 0u - 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_001B1998; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001B199C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1C40; } }
L_001B1998:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001B199C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B1A30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B1A2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19E0u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B19E0u) [[unlikely]] return; }
L_001B19E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19F8u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B19F8u) [[unlikely]] return; }
L_001B19F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A00u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B1A00u) [[unlikely]] return; }
L_001B1A00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A24u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1A24u) [[unlikely]] return; }
L_001B1A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1C40; } }
L_001B1A2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B1A30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 344u);  if (t) { goto L_001B1AC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B1AC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A74u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1A74u) [[unlikely]] return; }
L_001B1A74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A8Cu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1A8Cu) [[unlikely]] return; }
L_001B1A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A94u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B1A94u) [[unlikely]] return; }
L_001B1A94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AB8u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1AB8u) [[unlikely]] return; }
L_001B1AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1C3C; } }
L_001B1AC0:
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 1;
L_001B1AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1ACCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001B1ACCu) [[unlikely]] return; }
L_001B1ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1BC8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AFCu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B1AFCu) [[unlikely]] return; }
L_001B1AFC:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B1B0Cu) [[unlikely]] return; }
L_001B1B0C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B1Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B1B1Cu) [[unlikely]] return; }
L_001B1B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B1B60; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B34u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1B34u) [[unlikely]] return; }
L_001B1B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001B1B3Cu) [[unlikely]] return; }
L_001B1B3C:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B54u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1B54u) [[unlikely]] return; }
L_001B1B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1C3C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001B1B60:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B6Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1B6Cu) [[unlikely]] return; }
L_001B1B6C:
    set32(c.r[16], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B7Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1B7Cu) [[unlikely]] return; }
L_001B1B7C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B8Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1B8Cu) [[unlikely]] return; }
L_001B1B8C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B98u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B1B98u) [[unlikely]] return; }
L_001B1B98:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BA4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B1BA4u) [[unlikely]] return; }
L_001B1BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BACu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001B1BACu) [[unlikely]] return; }
L_001B1BAC:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BC0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1BC0u) [[unlikely]] return; }
L_001B1BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B1C3C; } }
L_001B1BC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C04u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1C04u) [[unlikely]] return; }
L_001B1C04:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C1Cu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1C1Cu) [[unlikely]] return; }
L_001B1C1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C3Cu); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1C3Cu) [[unlikely]] return; }
L_001B1C3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B1C40:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001B1C60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 272u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CC0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1CC0u) [[unlikely]] return; }
L_001B1CC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CD8u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1CD8u) [[unlikely]] return; }
L_001B1CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1CE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B1CE0u) [[unlikely]] return; }
L_001B1CE0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D20u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1D20u) [[unlikely]] return; }
L_001B1D20:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D38u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1D38u) [[unlikely]] return; }
L_001B1D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D40u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B1D40u) [[unlikely]] return; }
L_001B1D40:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);  if (t) { goto L_001B1D58; } }
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.budget -= 2;
L_001B1D58:
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B1D78; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_001B1D78:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B1D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1DB8; } }
L_001B1D94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DB4u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1DB4u) [[unlikely]] return; }
L_001B1DB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B1DB8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B1DE0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 328u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E10u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B4550u; return; } if (c.pc != 0x001B1E10u) [[unlikely]] return; }
L_001B1E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1ED0; } }
L_001B1E20:
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E48u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B1E48u) [[unlikely]] return; }
L_001B1E48:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 315u, depth + 1u); else { c.pc = 0x001B3310u; return; } if (c.pc != 0x001B1E58u) [[unlikely]] return; }
L_001B1E58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E68u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B1E68u) [[unlikely]] return; }
L_001B1E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B1ED0; } }
    set32(c.r[16], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E80u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B1E80u) [[unlikely]] return; }
L_001B1E80:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B1ECC; } }
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EA8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1EA8u) [[unlikely]] return; }
L_001B1EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EB0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B1EB0u) [[unlikely]] return; }
L_001B1EB0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EC4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B1EC4u) [[unlikely]] return; }
L_001B1EC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B1ED0; } }
L_001B1ECC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B1ED0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001B1EF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 140u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F20u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002D(c, 17u, depth + 1u); else { c.pc = 0x001B45F0u; return; } if (c.pc != 0x001B1F20u) [[unlikely]] return; }
L_001B1F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B20B8; } }
L_001B1F30:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F4Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1F4Cu) [[unlikely]] return; }
L_001B1F4C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F5Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1F5Cu) [[unlikely]] return; }
L_001B1F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F64u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B1F64u) [[unlikely]] return; }
L_001B1F64:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F70u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1F70u) [[unlikely]] return; }
L_001B1F70:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B1F80u) [[unlikely]] return; }
L_001B1F80:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F8Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B1F8Cu) [[unlikely]] return; }
L_001B1F8C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F9Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1F9Cu) [[unlikely]] return; }
L_001B1F9C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FACu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B1FACu) [[unlikely]] return; }
L_001B1FAC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FB8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B1FB8u) [[unlikely]] return; }
L_001B1FB8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B1FF8; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 10;
L_001B1FF8:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2004u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2004u) [[unlikely]] return; }
L_001B2004:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2010u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B2010u) [[unlikely]] return; }
L_001B2010:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B204C; } }
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 112u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001B204C:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2064u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2064u) [[unlikely]] return; }
L_001B2064:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B20B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2098u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2098u) [[unlikely]] return; }
L_001B2098:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20ACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B20ACu) [[unlikely]] return; }
L_001B20AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B20B8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B20B8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B20E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2110u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002C(c, 320u, depth + 1u); else { c.pc = 0x001B33B0u; return; } if (c.pc != 0x001B2110u) [[unlikely]] return; }
L_001B2110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2178; } }
    set32(c.r[16], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2128u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2128u) [[unlikely]] return; }
L_001B2128:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2174; } }
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2158u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2158u) [[unlikely]] return; }
L_001B2158:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B216Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B216Cu) [[unlikely]] return; }
L_001B216C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2178; } }
L_001B2174:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B2178:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B21A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B21CCu) [[unlikely]] return; }
L_001B21CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_001B231C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B231C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001B21F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001B2320; } }
L_001B21F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B231C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B231C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B231C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u + 4104u);
    c.r[4].d[0] = c.r[4].d[0] & 4104ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B231C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B231C; } }
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B225Cu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B225Cu) [[unlikely]] return; }
L_001B225C:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B231C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2294u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001B2294u) [[unlikely]] return; }
L_001B2294:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22A0u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x001B22A0u) [[unlikely]] return; }
L_001B22A0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22ACu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001B22ACu) [[unlikely]] return; }
L_001B22AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B22C0u) [[unlikely]] return; }
L_001B22C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22C8u); set32(c.r[4], c.r[16].w[0] + 1472u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B22C8u) [[unlikely]] return; }
L_001B22C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 757u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B231C; } }
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22E4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B22E4u) [[unlikely]] return; }
L_001B22E4:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22F0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B22F0u) [[unlikely]] return; }
L_001B22F0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22FCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 34u, depth + 1u); else { c.pc = 0x002208C0u; return; } if (c.pc != 0x001B22FCu) [[unlikely]] return; }
L_001B22FC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2308u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x001B2308u) [[unlikely]] return; }
L_001B2308:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001B2314u) [[unlikely]] return; }
L_001B2314:
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B231C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B2320:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B2340:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_001B24F4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B24F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B2388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001B24F8; } }
L_001B2388:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B24F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B24F4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u + 4104u);
    c.r[4].d[0] = c.r[4].d[0] & 4104ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B24F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001B24F4; } }
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23DCu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B23DCu) [[unlikely]] return; }
L_001B23DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23ECu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B23ECu) [[unlikely]] return; }
L_001B23EC:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[3] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B24F4; } }
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B24F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2450u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B2450u) [[unlikely]] return; }
L_001B2450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2458u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001B2458u) [[unlikely]] return; }
L_001B2458:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2464u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x001B2464u) [[unlikely]] return; }
L_001B2464:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2470u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001B2470u) [[unlikely]] return; }
L_001B2470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2484u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B2484u) [[unlikely]] return; }
L_001B2484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B248Cu); set32(c.r[4], c.r[16].w[0] + 1472u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B248Cu) [[unlikely]] return; }
L_001B248C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 757u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001B24F4; } }
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24A4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B24A4u) [[unlikely]] return; }
L_001B24A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24ACu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B24ACu) [[unlikely]] return; }
L_001B24AC:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24BCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B24BCu) [[unlikely]] return; }
L_001B24BC:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24C8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B24C8u) [[unlikely]] return; }
L_001B24C8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24D4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0048(c, 34u, depth + 1u); else { c.pc = 0x002208C0u; return; } if (c.pc != 0x001B24D4u) [[unlikely]] return; }
L_001B24D4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24E0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x001B24E0u) [[unlikely]] return; }
L_001B24E0:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001B24ECu) [[unlikely]] return; }
L_001B24EC:
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B24F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B24F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B2510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 588u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2670; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B2670; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 5920u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B2650; } }
L_001B2560:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001B264C; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2648; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 532u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B2648; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 575u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B2648; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25A8u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 5u, depth + 1u); else { c.pc = 0x001B4270u; return; } if (c.pc != 0x001B25A8u) [[unlikely]] return; }
L_001B25A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2648; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001B25EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B25D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001B260C; } }
L_001B25D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25E4u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 233u, depth + 1u); else { c.pc = 0x001B2690u; return; } if (c.pc != 0x001B25E4u) [[unlikely]] return; }
L_001B25E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_001B2610; } }
L_001B25EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2600u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 245u, depth + 1u); else { c.pc = 0x001B2850u; return; } if (c.pc != 0x001B2600u) [[unlikely]] return; }
L_001B2600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_001B2610; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B260C:
    c.budget -= 1;
L_001B2610:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001B2634; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2628u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 42u, depth + 1u); else { c.pc = 0x001AC840u; return; } if (c.pc != 0x001B2628u) [[unlikely]] return; }
L_001B2628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2648; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001B2634:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B2648; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2648u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002B(c, 42u, depth + 1u); else { c.pc = 0x001AC840u; return; } if (c.pc != 0x001B2648u) [[unlikely]] return; }
L_001B2648:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001B264C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001B2650:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26440u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2560u | kUnwind; return; } goto L_001B2560; } }
L_001B2670:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B2690:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26C8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B26C8u) [[unlikely]] return; }
L_001B26C8:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26D8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B26D8u) [[unlikely]] return; }
L_001B26D8:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2820; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B281C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2720u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2720u) [[unlikely]] return; }
L_001B2720:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B272Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001B272Cu) [[unlikely]] return; }
L_001B272C:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_001B2764; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2760; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2758u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 281u, depth + 1u); else { c.pc = 0x001B2E40u; return; } if (c.pc != 0x001B2758u) [[unlikely]] return; }
L_001B2758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001B2824; } }
L_001B2760:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_001B2764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B276Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B276Cu) [[unlikely]] return; }
L_001B276C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.f[22] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B277Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B277Cu) [[unlikely]] return; }
L_001B277C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B27A8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002C(c, 292u, depth + 1u); else { c.pc = 0x001B2FF0u; return; } if (c.pc != 0x001B27A0u) [[unlikely]] return; }
L_001B27A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2820; } }
L_001B27A8:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::sub(c.f[1], c.f[22]);  goto L_001B27D8; }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27CCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_002C(c, 296u, depth + 1u); else { c.pc = 0x001B3060u; return; } if (c.pc != 0x001B27CCu) [[unlikely]] return; }
L_001B27CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B2820; } }
    c.f[1] = fp::sub(c.f[1], c.f[22]);
    c.budget -= 1;
L_001B27D8:
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_001B2808; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_002C(c, 292u, depth + 1u); else { c.pc = 0x001B2FF0u; return; } if (c.pc != 0x001B27FCu) [[unlikely]] return; }
L_001B27FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2820; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_001B2808:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2814u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_002C(c, 296u, depth + 1u); else { c.pc = 0x001B3060u; return; } if (c.pc != 0x001B2814u) [[unlikely]] return; }
L_001B2814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B2820; } }
L_001B281C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B2820:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B2824:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2850:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2884u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2884u) [[unlikely]] return; }
L_001B2884:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2894u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2894u) [[unlikely]] return; }
L_001B2894:
    c.f[21] = c.f[0];
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_001B29D8; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B29D4; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28D4u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B28D4u) [[unlikely]] return; }
L_001B28D4:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28E0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001B28E0u) [[unlikely]] return; }
L_001B28E0:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_001B2908; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2B34; } }
L_001B2904:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_001B2908:
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2914u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 366u, depth + 1u); else { c.pc = 0x001B3A80u; return; } if (c.pc != 0x001B2914u) [[unlikely]] return; }
L_001B2914:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B2950; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001B2938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B29D4; } }
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 1;
L_001B2938:
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[4].w[0] - 28704u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001B2B34; } }
L_001B2950:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B299C; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B299C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29A8u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B29A8u) [[unlikely]] return; }
L_001B29A8:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29B8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B29B8u) [[unlikely]] return; }
L_001B29B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29CCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B29CCu) [[unlikely]] return; }
L_001B29CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2B34; } }
L_001B29D4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_001B29D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29E0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B29E0u) [[unlikely]] return; }
L_001B29E0:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29F0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B29F0u) [[unlikely]] return; }
L_001B29F0:
    c.f[21] = c.f[0];
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2B34; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2B30; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A30u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2A30u) [[unlikely]] return; }
L_001B2A30:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A3Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001B2A3Cu) [[unlikely]] return; }
L_001B2A3C:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_001B2A64; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2B34; } }
L_001B2A60:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_001B2A64:
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A70u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 366u, depth + 1u); else { c.pc = 0x001B3A80u; return; } if (c.pc != 0x001B2A70u) [[unlikely]] return; }
L_001B2A70:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B2AAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_001B2A94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2B30; } }
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 1;
L_001B2A94:
    set32(c.r[3], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[4].w[0] - 28704u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001B2B34; } }
L_001B2AAC:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001B2AF8; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B2AF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B04u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B2B04u) [[unlikely]] return; }
L_001B2B04:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B14u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B2B14u) [[unlikely]] return; }
L_001B2B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B28u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B2B28u) [[unlikely]] return; }
L_001B2B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2B34; } }
L_001B2B30:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B2B34:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 588u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2C18; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B2C18; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001B2BF8; } }
L_001B2BAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001B2BF4; }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2BF0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B2BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2BF0; } }
L_001B2BDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BF0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_002C(c, 265u, depth + 1u); else { c.pc = 0x001B2C30u; return; } if (c.pc != 0x001B2BF0u) [[unlikely]] return; }
L_001B2BF0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B2BF4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001B2BF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[3], c.r[28].w[0] - 26448u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B2BACu | kUnwind; return; } goto L_001B2BAC; } }
L_001B2C18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B2C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C64u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2C64u) [[unlikely]] return; }
L_001B2C64:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C74u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2C74u) [[unlikely]] return; }
L_001B2C74:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2E20; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B2E1C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CBCu); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2CBCu) [[unlikely]] return; }
L_001B2CBC:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CC8u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001B2CC8u) [[unlikely]] return; }
L_001B2CC8:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001B2D00; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2CFC; } }
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CF4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_002C(c, 281u, depth + 1u); else { c.pc = 0x001B2E40u; return; } if (c.pc != 0x001B2CF4u) [[unlikely]] return; }
L_001B2CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001B2E24; } }
L_001B2CFC:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001B2D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D08u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2D08u) [[unlikely]] return; }
L_001B2D08:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001B2D9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2E20; } }
L_001B2D38:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D54u); c.f[20] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2D54u) [[unlikely]] return; }
L_001B2D54:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D64u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B2D64u) [[unlikely]] return; }
L_001B2D64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D78u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B2D78u) [[unlikely]] return; }
L_001B2D78:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B2D84u) [[unlikely]] return; }
L_001B2D84:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2D90u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B2D90u) [[unlikely]] return; }
L_001B2D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2E20; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001B2D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DA4u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B2DA4u) [[unlikely]] return; }
L_001B2DA4:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2E1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2E20; } }
L_001B2DD4:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DF0u); c.f[21] = fp::sub(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2DF0u) [[unlikely]] return; }
L_001B2DF0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E00u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B2E00u) [[unlikely]] return; }
L_001B2E00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E14u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B2E14u) [[unlikely]] return; }
L_001B2E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2E20; } }
L_001B2E1C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B2E20:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B2E24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2E40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[6], c.r[5].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E7Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B2E7Cu) [[unlikely]] return; }
L_001B2E7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E8Cu); set32(c.r[5], c.r[2].w[0] - 11536u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B2E8Cu) [[unlikely]] return; }
L_001B2E8C:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2EA8; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001B2EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2EB8u); set32(c.r[5], c.r[2].w[0] - 11520u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B2EB8u) [[unlikely]] return; }
L_001B2EB8:
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_001B2ED8; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001B2ED8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B2F34; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] - 1u);  if (t) { goto L_001B2F04; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001B2F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B2F98; } }
L_001B2F00:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_001B2F04:
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 11536u);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F2Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B2F2Cu) [[unlikely]] return; }
L_001B2F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2FA0; } }
L_001B2F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[2].w[0] - 11536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F4Cu); set32(c.r[6], c.r[2].w[0] - 11520u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B2F4Cu) [[unlikely]] return; }
L_001B2F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F54u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B2F54u) [[unlikely]] return; }
L_001B2F54:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F60u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B2F60u) [[unlikely]] return; }
L_001B2F60:
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B2F94; } }
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F8Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B2F8Cu) [[unlikely]] return; }
L_001B2F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2FA0; } }
L_001B2F94:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B2F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001B2FD8; } }
L_001B2FA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B2FBC; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FB4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B2FB4u) [[unlikely]] return; }
L_001B2FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2FD4; } }
L_001B2FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FD0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B2FD0u) [[unlikely]] return; }
L_001B2FD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B2FD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001B2FD8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B2FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3024u); c.f[20] = fp::sub(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3024u) [[unlikely]] return; }
L_001B3024:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3034u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B3034u) [[unlikely]] return; }
L_001B3034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3048u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B3048u) [[unlikely]] return; }
L_001B3048:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B3060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[5].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3094u); c.f[20] = fp::sub(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3094u) [[unlikely]] return; }
L_001B3094:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001B30A4u) [[unlikely]] return; }
L_001B30A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30B8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B30B8u) [[unlikely]] return; }
L_001B30B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B30D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[21], c.r[6], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3118u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3118u) [[unlikely]] return; }
L_001B3118:
    set32(c.r[19], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B312Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B312Cu) [[unlikely]] return; }
L_001B312C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3140u); mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3140u) [[unlikely]] return; }
L_001B3140:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B314Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B314Cu) [[unlikely]] return; }
L_001B314C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_001B3168; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_001B3168:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3178u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3178u) [[unlikely]] return; }
L_001B3178:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3184u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3184u) [[unlikely]] return; }
L_001B3184:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001B31A0; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 1;
L_001B31A0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B3264; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_001B31E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[18], c.r[0], c.r[0]);  goto L_001B31D8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B31D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[18], c.r[0]);  if (t) { goto L_001B32DC; } }
L_001B31D4:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001B31D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B32D8; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_001B31E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B31ECu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B31ECu) [[unlikely]] return; }
L_001B31EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001B3218; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B322C; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001B3218:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3224u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3224u) [[unlikely]] return; }
L_001B3224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 160u);  if (t) { goto L_001B324C; } }
L_001B322C:
    fpu_div(c, 12u, c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3248u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3248u) [[unlikely]] return; }
L_001B3248:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001B324C:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3258u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3258u) [[unlikely]] return; }
L_001B3258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B32D8; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001B3264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B326Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B326Cu) [[unlikely]] return; }
L_001B326C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001B3298; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B32AC; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001B3298:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32A4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B32A4u) [[unlikely]] return; }
L_001B32A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 16u);  if (t) { goto L_001B32CC; } }
L_001B32AC:
    fpu_div(c, 12u, c.f[21], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32C8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B32C8u) [[unlikely]] return; }
L_001B32C8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001B32CC:
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B32D8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B32D8u) [[unlikely]] return; }
L_001B32D8:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    c.budget -= 1;
L_001B32DC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B3310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[6].w[0] + 16u), c.f[3]);
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B336Cu); st32((c.r[6].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B336Cu) [[unlikely]] return; }
L_001B336C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B337Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B337Cu) [[unlikely]] return; }
L_001B337C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3388u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001B3388u) [[unlikely]] return; }
L_001B3388:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3394u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x001B3394u) [[unlikely]] return; }
L_001B3394:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B33B0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B33FCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B33FCu) [[unlikely]] return; }
L_001B33FC:
    set32(c.r[17], c.r[29].w[0] + 132u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3424u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001B3424u) [[unlikely]] return; }
L_001B3424:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3438u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3438u) [[unlikely]] return; }
L_001B3438:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3458u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001B3458u) [[unlikely]] return; }
L_001B3458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[21].w[0] + 32u);  if (t) { goto L_001B3494; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B3490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B3A4C; } }
L_001B3490:
    set32(c.r[4], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_001B3494:
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34A0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001B34A0u) [[unlikely]] return; }
L_001B34A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34A8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001B34A8u) [[unlikely]] return; }
L_001B34A8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34B8u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B34B8u) [[unlikely]] return; }
L_001B34B8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34C4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B34C4u) [[unlikely]] return; }
L_001B34C4:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34D0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B34D0u) [[unlikely]] return; }
L_001B34D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34D8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001B34D8u) [[unlikely]] return; }
L_001B34D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[5].d[0] = c.r[5].d[0] | 25165ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 54001ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B34F8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 37u, depth + 1u); else { c.pc = 0x00100130u; return; } if (c.pc != 0x001B34F8u) [[unlikely]] return; }
L_001B34F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 160u);  if (t) { goto L_001B3508; } }
    c.f[21] = 0u;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_001B3508:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3514u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3514u) [[unlikely]] return; }
L_001B3514:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3524u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B3524u) [[unlikely]] return; }
L_001B3524:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3530u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001B3530u) [[unlikely]] return; }
L_001B3530:
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[23] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35B4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B35B4u) [[unlikely]] return; }
L_001B35B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[22];  if (t) { goto L_001B35DC; } }
    set32(c.r[16], 0u + 1u);
    c.f[12] = c.f[22];
    c.budget -= 2;
L_001B35DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35E4u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B35E4u) [[unlikely]] return; }
L_001B35E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[23];  if (t) { goto L_001B360C; } }
    set32(c.r[16], 0u + 2u);
    c.f[12] = c.f[23];
    c.budget -= 2;
L_001B360C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3614u);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001B3614u) [[unlikely]] return; }
L_001B3614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B363C; } }
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001B363C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B36D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B36A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001B3678; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B366C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B36EC; } }
L_001B366C:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B36EC; } }
L_001B3678:
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 20u, c.f[0], c.f[21]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B36EC; } }
L_001B36A4:
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 20u, c.f[0], c.f[22]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B36EC; } }
L_001B36D0:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    fpu_div(c, 20u, c.f[0], c.f[23]);
    c.budget -= 7;
L_001B36EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B3880; } }
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3704u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3704u) [[unlikely]] return; }
L_001B3704:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3710u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B3710u) [[unlikely]] return; }
L_001B3710:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B371Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B371Cu) [[unlikely]] return; }
L_001B371C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B372Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B372Cu) [[unlikely]] return; }
L_001B372C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B373Cu); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B373Cu) [[unlikely]] return; }
L_001B373C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3748u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3748u) [[unlikely]] return; }
L_001B3748:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B3784; } }
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 9;
L_001B3784:
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3790u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3790u) [[unlikely]] return; }
L_001B3790:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B379Cu); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B379Cu) [[unlikely]] return; }
L_001B379C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B37D8; } }
    c.f[3] = ld32((c.r[21].w[0] + 16u));
    c.f[2] = ld32((c.r[21].w[0] + 20u));
    c.f[1] = ld32((c.r[21].w[0] + 24u));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 9;
L_001B37D8:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37E4u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B37E4u) [[unlikely]] return; }
L_001B37E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37F0u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B37F0u) [[unlikely]] return; }
L_001B37F0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001B382C; } }
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 9;
L_001B382C:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3838u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3838u) [[unlikely]] return; }
L_001B3838:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3844u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3844u) [[unlikely]] return; }
L_001B3844:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001B38C4; } }
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.f[0]);  if (t) { goto L_001B38C0; } }
L_001B3880:
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.f[0] = ld32((c.r[21].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.budget -= 16;
L_001B38C0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001B38C4:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38D0u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B38D0u) [[unlikely]] return; }
L_001B38D0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38DCu); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B38DCu) [[unlikely]] return; }
L_001B38DC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38ECu); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B38ECu) [[unlikely]] return; }
L_001B38EC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38F8u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B38F8u) [[unlikely]] return; }
L_001B38F8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3908u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3908u) [[unlikely]] return; }
L_001B3908:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3918u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3918u) [[unlikely]] return; }
L_001B3918:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3924u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3924u) [[unlikely]] return; }
L_001B3924:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001B3988; } }
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3948u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3948u) [[unlikely]] return; }
L_001B3948:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3984; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001B3984:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001B3988:
    set32(c.r[6], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3994u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3994u) [[unlikely]] return; }
L_001B3994:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39A0u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B39A0u) [[unlikely]] return; }
L_001B39A0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39B0u); set32(c.r[5], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B39B0u) [[unlikely]] return; }
L_001B39B0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39BCu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001B39BCu) [[unlikely]] return; }
L_001B39BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39CCu); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B39CCu) [[unlikely]] return; }
L_001B39CC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39DCu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B39DCu) [[unlikely]] return; }
L_001B39DC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39E8u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B39E8u) [[unlikely]] return; }
L_001B39E8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B3A4C; } }
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3A0Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3A0Cu) [[unlikely]] return; }
L_001B3A0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B3A48; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[19].w[0] + 16u), c.f[3]);
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.budget -= 9;
L_001B3A48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B3A4C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001B3A80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 64u));
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3AE0u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3AE0u) [[unlikely]] return; }
L_001B3AE0:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[4] = ld32((c.r[29].w[0] + 84u));
    c.f[7] = ld32((c.r[29].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = ld32((c.r[29].w[0] + 100u));
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = fp::mul(c.f[0], c.f[0]);
    c.f[8] = ld32((c.r[29].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[9] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[7]);
    c.f[1] = fp::mul(c.f[4], c.f[6]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[5], c.f[8]));
    c.f[10] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[10], c.f[1]);
    c.facc = fp::mul(c.f[7], c.f[7]);
    c.f[1] = fp::mul(c.f[8], c.f[8]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[9], c.f[9]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B3B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001B3DAC; } }
L_001B3B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3B80u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0013B4E0u; return; } if (c.pc != 0x001B3B80u) [[unlikely]] return; }
L_001B3B80:
    c.f[21] = c.f[21] ^ fp::kSign;
    c.f[1] = fp::add(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[22] = c.f[0];
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[20] = fp::mul(c.f[0], c.f[20]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    fpu_div(c, 12u, c.f[1], c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BB8u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3BB8u) [[unlikely]] return; }
L_001B3BB8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BC8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B3BC8u) [[unlikely]] return; }
L_001B3BC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BD4u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3BD4u) [[unlikely]] return; }
L_001B3BD4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B3BF4; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_001B3BF4:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C00u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3C00u) [[unlikely]] return; }
L_001B3C00:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C0Cu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3C0Cu) [[unlikely]] return; }
L_001B3C0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::sub(c.f[21], c.f[22]);  if (t) { goto L_001B3C2C; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.f[0] = fp::sub(c.f[21], c.f[22]);
    c.budget -= 2;
L_001B3C2C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001B3C48u) [[unlikely]] return; }
L_001B3C48:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C58u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001B3C58u) [[unlikely]] return; }
L_001B3C58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C64u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3C64u) [[unlikely]] return; }
L_001B3C64:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001B3C84; } }
    c.r[18].d[0] = c.r[18].d[0] | 4ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_001B3C84:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C90u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001B3C90u) [[unlikely]] return; }
L_001B3C90:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C9Cu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x001B3C9Cu) [[unlikely]] return; }
L_001B3C9C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[18].d[0] & 3ull;  if (t) { goto L_001B3CBC; } }
    c.r[18].d[0] = c.r[18].d[0] | 8ull;
    c.r[2].d[0] = c.r[18].d[0] & 3ull;
    c.budget -= 2;
L_001B3CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] & 12ull;  if (t) { goto L_001B3D54; } }
    c.r[2].d[0] = c.r[18].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3D50; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CDCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B3CDCu) [[unlikely]] return; }
L_001B3CDC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3CECu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001B3CECu) [[unlikely]] return; }
L_001B3CEC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 96u);  if (t) { goto L_001B3D28; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001B3D48; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_001B3D28:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B3D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B3DAC; } }
L_001B3D50:
    c.r[2].d[0] = c.r[18].d[0] & 12ull;
    c.budget -= 1;
L_001B3D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 112u);  if (t) { goto L_001B3D88; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001B3DA8; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001B3D88:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_001B3DA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B3DAC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001B3DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_001B3E1C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[28].w[0] - 25552u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B3E1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 4u, depth); } }
L_001B3E1C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_001B3FBC; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001B3FAC; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_001B3F9C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001B3F34; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001B3ED0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B3E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001B3FCC; } }
L_001B3E6C:
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27804u);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 27808u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_001B3FD0; } }
L_001B3ED0:
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27884u);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 27888u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_001B3FD0; } }
L_001B3F34:
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] - 27916u);
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 27920u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_001B3FD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 1;
L_001B3F9C:
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));  if (t) { goto L_001B3FD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_001B3FAC:
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3FD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.budget -= 1;
L_001B3FBC:
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B3FD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001B3FCC:
    c.f[20] = c.r[3].w[0];
    c.budget -= 1;
L_001B3FD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 1;
L_001B3FD4:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 2u, depth); } }
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 8;
    [[clang::musttail]] return unit_002D(c, 1u, depth);
}

}
