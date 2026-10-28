#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0039[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12,
    0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48,
    0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142,
    0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0,
    0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0,
    0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0,
    0, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0,
};

void unit_0039(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E40D8;
    case 3u: goto L_001E40E8;
    case 4u: goto L_001E40F4;
    case 5u: goto L_001E4110;
    case 6u: goto L_001E4138;
    case 7u: goto L_001E4144;
    case 8u: goto L_001E4154;
    case 9u: goto L_001E4164;
    case 10u: goto L_001E41EC;
    case 11u: goto L_001E41F4;
    case 12u: goto L_001E41FC;
    case 13u: goto L_001E4208;
    case 14u: goto L_001E4210;
    case 15u: goto L_001E4264;
    case 16u: goto L_001E4274;
    case 17u: goto L_001E4280;
    case 18u: goto L_001E42A0;
    case 19u: goto L_001E42C0;
    case 20u: goto L_001E4310;
    case 21u: goto L_001E4320;
    case 22u: goto L_001E4328;
    case 23u: goto L_001E4330;
    case 24u: goto L_001E433C;
    case 25u: goto L_001E4344;
    case 26u: goto L_001E434C;
    case 27u: goto L_001E4360;
    case 28u: goto L_001E437C;
    case 29u: goto L_001E43A0;
    case 30u: goto L_001E43B8;
    case 31u: goto L_001E43D4;
    case 32u: goto L_001E43DC;
    case 33u: goto L_001E43E4;
    case 34u: goto L_001E4400;
    case 35u: goto L_001E4420;
    case 36u: goto L_001E44C0;
    case 37u: goto L_001E44D0;
    case 38u: goto L_001E44E0;
    case 39u: goto L_001E44FC;
    case 40u: goto L_001E4520;
    case 41u: goto L_001E4540;
    case 42u: goto L_001E458C;
    case 43u: goto L_001E4594;
    case 44u: goto L_001E45B0;
    case 45u: goto L_001E45E4;
    case 46u: goto L_001E45EC;
    case 47u: goto L_001E45F4;
    case 48u: goto L_001E45FC;
    case 49u: goto L_001E4604;
    case 50u: goto L_001E460C;
    case 51u: goto L_001E4614;
    case 52u: goto L_001E4640;
    case 53u: goto L_001E4648;
    case 54u: goto L_001E4660;
    case 55u: goto L_001E4680;
    case 56u: goto L_001E46F4;
    case 57u: goto L_001E4708;
    case 58u: goto L_001E4710;
    case 59u: goto L_001E4720;
    case 60u: goto L_001E47A8;
    case 61u: goto L_001E4848;
    case 62u: goto L_001E4860;
    case 63u: goto L_001E4880;
    case 64u: goto L_001E4998;
    case 65u: goto L_001E4A90;
    case 66u: goto L_001E4B44;
    case 67u: goto L_001E4B60;
    case 68u: goto L_001E4B84;
    case 69u: goto L_001E4C04;
    case 70u: goto L_001E4C0C;
    case 71u: goto L_001E4C14;
    case 72u: goto L_001E4C24;
    case 73u: goto L_001E4C2C;
    case 74u: goto L_001E4C40;
    case 75u: goto L_001E4C60;
    case 76u: goto L_001E4C80;
    case 77u: goto L_001E4CE0;
    case 78u: goto L_001E4CE8;
    case 79u: goto L_001E4D00;
    case 80u: goto L_001E4D54;
    case 81u: goto L_001E4F18;
    case 82u: goto L_001E4F80;
    case 83u: goto L_001E4FA8;
    case 84u: goto L_001E4FC0;
    case 85u: goto L_001E4FCC;
    case 86u: goto L_001E4FD8;
    case 87u: goto L_001E4FEC;
    case 88u: goto L_001E4FF4;
    case 89u: goto L_001E5004;
    case 90u: goto L_001E5024;
    case 91u: goto L_001E5030;
    case 92u: goto L_001E5038;
    case 93u: goto L_001E5048;
    case 94u: goto L_001E5050;
    case 95u: goto L_001E5058;
    case 96u: goto L_001E506C;
    case 97u: goto L_001E5078;
    case 98u: goto L_001E5090;
    case 99u: goto L_001E50B0;
    case 100u: goto L_001E50D0;
    case 101u: goto L_001E5134;
    case 102u: goto L_001E5180;
    case 103u: goto L_001E5194;
    case 104u: goto L_001E51A8;
    case 105u: goto L_001E51B0;
    case 106u: goto L_001E51D0;
    case 107u: goto L_001E51F0;
    case 108u: goto L_001E5430;
    case 109u: goto L_001E5494;
    case 110u: goto L_001E549C;
    case 111u: goto L_001E54A4;
    case 112u: goto L_001E54B0;
    case 113u: goto L_001E54B8;
    case 114u: goto L_001E54E0;
    case 115u: goto L_001E5508;
    case 116u: goto L_001E5520;
    case 117u: goto L_001E552C;
    case 118u: goto L_001E5538;
    case 119u: goto L_001E554C;
    case 120u: goto L_001E5554;
    case 121u: goto L_001E5564;
    case 122u: goto L_001E5584;
    case 123u: goto L_001E5590;
    case 124u: goto L_001E5598;
    case 125u: goto L_001E55A8;
    case 126u: goto L_001E55B0;
    case 127u: goto L_001E55B8;
    case 128u: goto L_001E55CC;
    case 129u: goto L_001E55DC;
    case 130u: goto L_001E55F8;
    case 131u: goto L_001E5620;
    case 132u: goto L_001E5640;
    case 133u: goto L_001E56A0;
    case 134u: goto L_001E56D0;
    case 135u: goto L_001E56F0;
    case 136u: goto L_001E56F8;
    case 137u: goto L_001E5990;
    case 138u: goto L_001E59B8;
    case 139u: goto L_001E59D0;
    case 140u: goto L_001E59DC;
    case 141u: goto L_001E59E8;
    case 142u: goto L_001E59FC;
    case 143u: goto L_001E5A04;
    case 144u: goto L_001E5A14;
    case 145u: goto L_001E5A34;
    case 146u: goto L_001E5A40;
    case 147u: goto L_001E5A48;
    case 148u: goto L_001E5A58;
    case 149u: goto L_001E5A60;
    case 150u: goto L_001E5A74;
    case 151u: goto L_001E5A80;
    case 152u: goto L_001E5A98;
    case 153u: goto L_001E5AC0;
    case 154u: goto L_001E5AE0;
    case 155u: goto L_001E5B48;
    case 156u: goto L_001E5B58;
    case 157u: goto L_001E5B84;
    case 158u: goto L_001E5BA0;
    case 159u: goto L_001E5C64;
    case 160u: goto L_001E5C84;
    case 161u: goto L_001E5C8C;
    case 162u: goto L_001E5C94;
    case 163u: goto L_001E5CA0;
    case 164u: goto L_001E5CA8;
    case 165u: goto L_001E5D04;
    case 166u: goto L_001E5D0C;
    case 167u: goto L_001E5D14;
    case 168u: goto L_001E5D20;
    case 169u: goto L_001E5D28;
    case 170u: goto L_001E5D50;
    case 171u: goto L_001E5D78;
    case 172u: goto L_001E5D8C;
    case 173u: goto L_001E5D9C;
    case 174u: goto L_001E5DB8;
    case 175u: goto L_001E5DC4;
    case 176u: goto L_001E5DD0;
    case 177u: goto L_001E5DD8;
    case 178u: goto L_001E5DE8;
    case 179u: goto L_001E5DF4;
    case 180u: goto L_001E5E14;
    case 181u: goto L_001E5E1C;
    case 182u: goto L_001E5E2C;
    case 183u: goto L_001E5E34;
    case 184u: goto L_001E5E3C;
    case 185u: goto L_001E5E50;
    case 186u: goto L_001E5E5C;
    case 187u: goto L_001E5E74;
    case 188u: goto L_001E5EA0;
    case 189u: goto L_001E5EC0;
    case 190u: goto L_001E5F08;
    case 191u: goto L_001E5F44;
    case 192u: goto L_001E5F60;
    case 193u: goto L_001E5F9C;
    case 194u: goto L_001E5FC4;
    case 195u: goto L_001E5FCC;
    case 196u: goto L_001E5FD4;
    case 197u: goto L_001E5FDC;
    case 198u: goto L_001E6280;
    case 199u: goto L_001E62A8;
    case 200u: goto L_001E62C0;
    case 201u: goto L_001E62CC;
    case 202u: goto L_001E62D8;
    case 203u: goto L_001E62EC;
    case 204u: goto L_001E62F4;
    case 205u: goto L_001E6304;
    case 206u: goto L_001E6324;
    case 207u: goto L_001E6330;
    case 208u: goto L_001E6338;
    case 209u: goto L_001E6348;
    case 210u: goto L_001E6350;
    case 211u: goto L_001E6364;
    case 212u: goto L_001E6370;
    case 213u: goto L_001E6388;
    case 214u: goto L_001E63B0;
    case 215u: goto L_001E63D0;
    case 216u: goto L_001E6448;
    case 217u: goto L_001E6460;
    case 218u: goto L_001E6490;
    case 219u: goto L_001E64B0;
    case 220u: goto L_001E64C8;
    case 221u: goto L_001E64D0;
    case 222u: goto L_001E64D8;
    case 223u: goto L_001E6514;
    case 224u: goto L_001E653C;
    case 225u: goto L_001E6548;
    case 226u: goto L_001E6560;
    case 227u: goto L_001E6580;
    case 228u: goto L_001E65E0;
    case 229u: goto L_001E6608;
    case 230u: goto L_001E6610;
    case 231u: goto L_001E6620;
    case 232u: goto L_001E663C;
    case 233u: goto L_001E6650;
    case 234u: goto L_001E66E4;
    case 235u: goto L_001E6758;
    case 236u: goto L_001E677C;
    case 237u: goto L_001E6790;
    case 238u: goto L_001E67B0;
    case 239u: goto L_001E6800;
    case 240u: goto L_001E68C0;
    case 241u: goto L_001E68E0;
    case 242u: goto L_001E6938;
    case 243u: goto L_001E6990;
    case 244u: goto L_001E6998;
    case 245u: goto L_001E69A0;
    case 246u: goto L_001E69B0;
    case 247u: goto L_001E69D8;
    case 248u: goto L_001E69E0;
    case 249u: goto L_001E69E8;
    case 250u: goto L_001E69FC;
    case 251u: goto L_001E6A10;
    case 252u: goto L_001E6A30;
    case 253u: goto L_001E6A70;
    case 254u: goto L_001E6A78;
    case 255u: goto L_001E6A90;
    case 256u: goto L_001E6AEC;
    case 257u: goto L_001E6B04;
    case 258u: goto L_001E6B20;
    case 259u: goto L_001E6B40;
    case 260u: goto L_001E6B5C;
    case 261u: goto L_001E6B80;
    case 262u: goto L_001E6B88;
    case 263u: goto L_001E6B90;
    case 264u: goto L_001E6BDC;
    case 265u: goto L_001E6BE4;
    case 266u: goto L_001E6C00;
    case 267u: goto L_001E6C64;
    case 268u: goto L_001E6C74;
    case 269u: goto L_001E6C8C;
    case 270u: goto L_001E6C94;
    case 271u: goto L_001E6C9C;
    case 272u: goto L_001E6CA8;
    case 273u: goto L_001E6CB0;
    case 274u: goto L_001E6CC4;
    case 275u: goto L_001E6CD0;
    case 276u: goto L_001E6CD8;
    case 277u: goto L_001E6CE0;
    case 278u: goto L_001E6CE8;
    case 279u: goto L_001E6CF8;
    case 280u: goto L_001E6D04;
    case 281u: goto L_001E6D10;
    case 282u: goto L_001E6D30;
    case 283u: goto L_001E6D50;
    case 284u: goto L_001E6DD8;
    case 285u: goto L_001E6DEC;
    case 286u: goto L_001E6DF4;
    case 287u: goto L_001E6E10;
    case 288u: goto L_001E6E3C;
    case 289u: goto L_001E6E50;
    case 290u: goto L_001E6E70;
    case 291u: goto L_001E6E90;
    case 292u: goto L_001E6ECC;
    case 293u: goto L_001E6ED4;
    case 294u: goto L_001E6EF0;
    case 295u: goto L_001E6F24;
    case 296u: goto L_001E6F40;
    case 297u: goto L_001E6F60;
    case 298u: goto L_001E6FE0;
    case 299u: goto L_001E6FE8;
    case 300u: goto L_001E7000;
    case 301u: goto L_001E7070;
    case 302u: goto L_001E7090;
    case 303u: goto L_001E70B0;
    case 304u: goto L_001E7120;
    case 305u: goto L_001E7188;
    case 306u: goto L_001E7198;
    case 307u: goto L_001E72D4;
    case 308u: goto L_001E73B0;
    case 309u: goto L_001E73D0;
    case 310u: goto L_001E7420;
    case 311u: goto L_001E74B0;
    case 312u: goto L_001E74D4;
    case 313u: goto L_001E7594;
    case 314u: goto L_001E75F0;
    case 315u: goto L_001E75F8;
    case 316u: goto L_001E7608;
    case 317u: goto L_001E7610;
    case 318u: goto L_001E7620;
    case 319u: goto L_001E7640;
    case 320u: goto L_001E7660;
    case 321u: goto L_001E776C;
    case 322u: goto L_001E7774;
    case 323u: goto L_001E777C;
    case 324u: goto L_001E7790;
    case 325u: goto L_001E77D4;
    case 326u: goto L_001E783C;
    case 327u: goto L_001E78B4;
    case 328u: goto L_001E78F0;
    case 329u: goto L_001E793C;
    case 330u: goto L_001E7968;
    case 331u: goto L_001E79B8;
    case 332u: goto L_001E79F8;
    case 333u: goto L_001E7A0C;
    case 334u: goto L_001E7A18;
    case 335u: goto L_001E7A38;
    case 336u: goto L_001E7A48;
    case 337u: goto L_001E7A68;
    case 338u: goto L_001E7A78;
    case 339u: goto L_001E7A8C;
    case 340u: goto L_001E7AB0;
    case 341u: goto L_001E7AF0;
    case 342u: goto L_001E7AF8;
    case 343u: goto L_001E7B14;
    case 344u: goto L_001E7B1C;
    case 345u: goto L_001E7B24;
    case 346u: goto L_001E7B80;
    case 347u: goto L_001E7BE4;
    case 348u: goto L_001E7C00;
    case 349u: goto L_001E7C08;
    case 350u: goto L_001E7C24;
    case 351u: goto L_001E7C2C;
    case 352u: goto L_001E7C34;
    case 353u: goto L_001E7C98;
    case 354u: goto L_001E7CC0;
    case 355u: goto L_001E7CE0;
    case 356u: goto L_001E7D30;
    case 357u: goto L_001E7D70;
    case 358u: goto L_001E7D90;
    case 359u: goto L_001E7DE8;
    case 360u: goto L_001E7E40;
    case 361u: goto L_001E7E48;
    case 362u: goto L_001E7E50;
    case 363u: goto L_001E7E60;
    case 364u: goto L_001E7E88;
    case 365u: goto L_001E7E90;
    case 366u: goto L_001E7E98;
    case 367u: goto L_001E7EAC;
    case 368u: goto L_001E7EC0;
    case 369u: goto L_001E7EE0;
    case 370u: goto L_001E7F10;
    case 371u: goto L_001E7FBC;
    case 372u: goto L_001E7FDC;
    case 373u: goto L_001E7FF0;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 128u);  if (t) { goto L_001E40D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E40CC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4074; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 7;
L_001E4074:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBC40000u);
    c.r[3].d[0] = c.r[2].d[0] | 39846ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E40AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 5;
L_001E40AC:
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_001E40CC:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 1;
L_001E40D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40D8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E40D8u) [[unlikely]] return; }
L_001E40D8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40E8u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E40E8u) [[unlikely]] return; }
L_001E40E8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E40F4u) [[unlikely]] return; }
L_001E40F4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] + 4624u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4138u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E4138u) [[unlikely]] return; }
L_001E4138:
    c.f[13] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4144u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E4144u) [[unlikely]] return; }
L_001E4144:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4154u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E4154u) [[unlikely]] return; }
L_001E4154:
    set32(c.r[17], c.r[2].w[0] - c.r[17].w[0]);
    c.f[0] = c.r[17].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4164u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001E4164u) [[unlikely]] return; }
L_001E4164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4184; } }
    set32(c.r[17], 0u - 14u);
    c.budget -= 1;
L_001E4184:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < -16383ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E41A8; } }
    set32(c.r[2], 0u - 16384u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_001E41A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001E41E4; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x391D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 18770ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
L_001E41E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41ECu);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E41ECu) [[unlikely]] return; }
L_001E41EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41F4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E41F4u) [[unlikely]] return; }
L_001E41F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41FCu); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E41FCu) [[unlikely]] return; }
L_001E41FC:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4208u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E4208u) [[unlikely]] return; }
L_001E4208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4210u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E4210u) [[unlikely]] return; }
L_001E4210:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 6u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].sd[0] < -30719ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E4234; } }
    set32(c.r[2], 0u - 30720u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_001E4234:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 128u);  if (t) { goto L_001E425C; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
L_001E425C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4264u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E4264u) [[unlikely]] return; }
L_001E4264:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4274u); set32(c.r[6], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E4274u) [[unlikely]] return; }
L_001E4274:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4280u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E4280u) [[unlikely]] return; }
L_001E4280:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E42A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23504u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E42C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC56B0000u);
    c.r[5].d[0] = c.r[2].d[0] | 40960ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], 0u + 10349u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17312u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4310u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E4310u) [[unlikely]] return; }
L_001E4310:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4320u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E4320u) [[unlikely]] return; }
L_001E4320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4328u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E4328u) [[unlikely]] return; }
L_001E4328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4330u); set32(c.r[4], 0u + 10349u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E4330u) [[unlikely]] return; }
L_001E4330:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E433Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E433Cu) [[unlikely]] return; }
L_001E433C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4344u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E4344u) [[unlikely]] return; }
L_001E4344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E434Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4360u; return; } if (c.pc != 0x001E434Cu) [[unlikely]] return; }
L_001E434C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E437Cu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x001E437Cu) [[unlikely]] return; }
L_001E437C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E43A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43B8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E43B8u) [[unlikely]] return; }
L_001E43B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43D4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E43D4u) [[unlikely]] return; }
L_001E43D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43DCu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x001E43DCu) [[unlikely]] return; }
L_001E43DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E43E4u) [[unlikely]] return; }
L_001E43E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4400:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[2].w[0] + 4640u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], c.r[2].w[0] + 4704u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[7], c.r[2].w[0] - 32640u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 4720u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44C0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E44C0u) [[unlikely]] return; }
L_001E44C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44D0u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 38u, depth + 1u); else { c.pc = 0x001E44E0u; return; } if (c.pc != 0x001E44D0u) [[unlikely]] return; }
L_001E44D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E44E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E44FCu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x001E44FCu) [[unlikely]] return; }
L_001E44FC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[5], 0u - 1024u);
    set32(c.r[3], 0u - 12800u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E458Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E458Cu) [[unlikely]] return; }
L_001E458C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4594u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 44u, depth + 1u); else { c.pc = 0x001E45B0u; return; } if (c.pc != 0x001E4594u) [[unlikely]] return; }
L_001E4594:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E45B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45E4u); set32(c.r[4], c.r[2].w[0] + 2368u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E45E4u) [[unlikely]] return; }
L_001E45E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45ECu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x001E45ECu) [[unlikely]] return; }
L_001E45EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45F4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E45F4u) [[unlikely]] return; }
L_001E45F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45FCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E45FCu) [[unlikely]] return; }
L_001E45FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4604u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001E4604u) [[unlikely]] return; }
L_001E4604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E460Cu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001E460Cu) [[unlikely]] return; }
L_001E460C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4614u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E4614u) [[unlikely]] return; }
L_001E4614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF350000u);
    c.r[2].d[0] = c.r[2].d[0] | 14575ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 50332ull;
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[2].d[0] = c.r[2].d[0] | 61866ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4640u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E4640u) [[unlikely]] return; }
L_001E4640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4648u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E4648u) [[unlikely]] return; }
L_001E4648:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA60000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC27C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.r[2].d[0] = c.r[2].d[0] | 19504ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16384u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 14192u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46F4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E46F4u) [[unlikely]] return; }
L_001E46F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4708u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E4708u) [[unlikely]] return; }
L_001E4708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4710u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 59u, depth + 1u); else { c.pc = 0x001E4720u; return; } if (c.pc != 0x001E4710u) [[unlikely]] return; }
L_001E4710:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E4748; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E4850; } }
L_001E4748:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 90u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E47A8; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E47A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E47A8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E47A8u) [[unlikely]] return; }
L_001E47A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26487u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4814; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E47EC; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 7;
L_001E47EC:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E4814; } }
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_001E4814:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 9344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4848u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E4848u) [[unlikely]] return; }
L_001E4848:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E4850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4880:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBDA50000u);
    c.r[7].d[0] = c.r[5].d[0] | 58196ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE4D0000u);
    c.r[6].d[0] = c.r[5].d[0] | 315ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x39510000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 46871ull;
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[5], c.r[5].w[0] + 19296u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 22;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001E48E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[5].w[0] + 5120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[5].w[0]);  if (t) { goto L_001E48F0; } }
L_001E48E8:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 2;
L_001E48F0:
    set32(c.r[7], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], 0u - 1u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[5].d[0]; set32(c.r[8], c.r[9].w[0] << 1);  if (t) { goto L_001E4918; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E4A80; } }
    set32(c.r[8], c.r[9].w[0] << 1);
    c.budget -= 1;
L_001E4918:
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], c.r[8].w[0] + 4736u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[2] = ld32((c.r[8].w[0]));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 5040u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    set32(c.r[9], c.r[8].w[0] + 5040u);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[10], c.r[8].w[0] + 4992u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[11], c.r[8].w[0] + 4992u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[9], c.r[8].w[0] + 4992u);
    set32(c.r[8], c.r[12].w[0] << 3);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001E4A08; } }
    c.r[8].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E4998:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);  if (t) { goto L_001E49B0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001E4A08; } }
    set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);
    c.budget -= 1;
L_001E49B0:
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.r[8].d[0] = c.r[10].d[0] & 128ull;
    c.budget -= 11;
    if (c.r[8].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001E4A04; }
    set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 10;
L_001E4A04:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001E4A08:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[8].d[0] = c.r[10].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4998u | kUnwind; return; } goto L_001E4998; } }
    c.r[5].d[0] = c.r[10].d[0] & 1ull;
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001E4A78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E4A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4A80; } }
L_001E4A40:
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.f[0]);  if (t) { goto L_001E4A80; } }
L_001E4A78:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 2;
L_001E4A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E4A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DA50000u);
    c.r[3].d[0] = c.r[3].d[0] | 58196ull;
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[16].w[0] + 320u);  if (t) { goto L_001E4AF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001E4AF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E4B48; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 56992ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4B44; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B44u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0038(c, 311u, depth + 1u); else { c.pc = 0x001E3970u; return; } if (c.pc != 0x001E4B44u) [[unlikely]] return; }
L_001E4B44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E4B48:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4B60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B84u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00A2(c, 43u, depth + 1u); else { c.pc = 0x003895E0u; return; } if (c.pc != 0x001E4B84u) [[unlikely]] return; }
L_001E4B84:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E4C40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.f[3] = ld32((c.r[17].w[0] + 112u));
    c.f[2] = ld32((c.r[17].w[0] + 116u));
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 5040u);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 4992u);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C04u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E4C04u) [[unlikely]] return; }
L_001E4C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C0Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E4C0Cu) [[unlikely]] return; }
L_001E4C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C14u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E4C14u) [[unlikely]] return; }
L_001E4C14:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = c.f[12];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C24u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E4C24u) [[unlikely]] return; }
L_001E4C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C2Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E4C2Cu) [[unlikely]] return; }
L_001E4C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C40u); set32(c.r[6], c.r[2].w[0] + 12592u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E4C40u) [[unlikely]] return; }
L_001E4C40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E4C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC53D0000u);
    c.r[5].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC3EB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20352u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CE0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E4CE0u) [[unlikely]] return; }
L_001E4CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 79u, depth + 1u); else { c.pc = 0x001E4D00u; return; } if (c.pc != 0x001E4CE8u) [[unlikely]] return; }
L_001E4CE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E4D00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_001E4D48; } }
    c.f[1] = ld32((c.r[19].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BC40000u);
    c.r[3].d[0] = c.r[3].d[0] | 39846ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 160u), c.f[0]);
    c.budget -= 7;
L_001E4D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[17], c.r[3].w[0] + 10896u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E4D54:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[17].w[0] + 48u);  if (t) { goto L_001E4E50; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_001E4DC8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001E4D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (t) { goto L_001E4E54; } }
L_001E4D80:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4E50; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001E4E50; } }
L_001E4DC8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4DF8; } }
    set32(c.r[6], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001E4E50; } }
L_001E4DF8:
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 22;
L_001E4E50:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_001E4E54:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[6].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E4F34; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_001E4EB4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001E4E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4F30; } }
L_001E4E7C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4F30; } }
    set32(c.r[6], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E4F30; } }
L_001E4EB4:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4EDC; } }
    set32(c.r[6], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E4F30; } }
L_001E4EDC:
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F18u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E4F18u) [[unlikely]] return; }
L_001E4F18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001E4F30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E4F34:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4D54u | kUnwind; return; } goto L_001E4D54; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4F80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FA8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E4FA8u) [[unlikely]] return; }
L_001E4FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FC0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E4FC0u) [[unlikely]] return; }
L_001E4FC0:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FCCu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E4FCCu) [[unlikely]] return; }
L_001E4FCC:
    set32(c.r[18], c.r[16].w[0] + 320u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E4FD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001E507C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FECu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E4FECu) [[unlikely]] return; }
L_001E4FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FF4u); c.f[12] = ld32((c.r[16].w[0] + 40u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E4FF4u) [[unlikely]] return; }
L_001E4FF4:
    c.f[0] = c.r[20].w[0];
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5004u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5004u) [[unlikely]] return; }
L_001E5004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5024u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E5024u) [[unlikely]] return; }
L_001E5024:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5030u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001E5030u) [[unlikely]] return; }
L_001E5030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5038u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001E5038u) [[unlikely]] return; }
L_001E5038:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5048u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E5048u) [[unlikely]] return; }
L_001E5048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5050u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E5050u) [[unlikely]] return; }
L_001E5050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5058u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001E5058u) [[unlikely]] return; }
L_001E5058:
    c.f[13] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E506Cu); c.f[12] = ld32((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E506Cu) [[unlikely]] return; }
L_001E506C:
    c.f[12] = ld32((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5078u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x001E3A10u; return; } if (c.pc != 0x001E5078u) [[unlikely]] return; }
L_001E5078:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E507C:
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4FD8u | kUnwind; return; } goto L_001E4FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5090u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5090u) [[unlikely]] return; }
L_001E5090:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E50B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E50D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3FC0000u);
    c.r[5].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC5620000u);
    c.r[3].d[0] = c.r[2].d[0] | 24535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    set32(c.r[2], c.r[2].w[0] + 21728u);
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5134u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E5134u) [[unlikely]] return; }
L_001E5134:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 11216u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 11344u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 11472u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5180u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E5180u) [[unlikely]] return; }
L_001E5180:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5194u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E5194u) [[unlikely]] return; }
L_001E5194:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u + 9u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51A8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E51A8u) [[unlikely]] return; }
L_001E51A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 106u, depth + 1u); else { c.pc = 0x001E51D0u; return; } if (c.pc != 0x001E51B0u) [[unlikely]] return; }
L_001E51B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E51D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_001E51F0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001E5340; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001E5270; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_001E5270; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001E5228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (t) { goto L_001E537C; } }
L_001E5228:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5378; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_001E5378; } }
L_001E5270:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E52E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001E52AC; } }
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_001E52C0; } }
L_001E52AC:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 5;
L_001E52C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E5378; } }
L_001E52E0:
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_001E5378; } }
L_001E5340:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001E5378; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001E536C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E40000u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001E5378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_001E536C:
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
L_001E5378:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_001E537C:
    set32(c.r[7], c.r[2].w[0] + 48u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E5444; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001E53F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E53A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5440; } }
L_001E53A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5440; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E5440; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E5440; } }
L_001E53F8:
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5430u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001E5430u) [[unlikely]] return; }
L_001E5430:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_001E5440:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E5444:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E51F0u | kUnwind; return; } goto L_001E51F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001E548C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
L_001E548C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5494u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5494u) [[unlikely]] return; }
L_001E5494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E549Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E549Cu) [[unlikely]] return; }
L_001E549C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54A4u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E54A4u) [[unlikely]] return; }
L_001E54A4:
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54B0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E54B0u) [[unlikely]] return; }
L_001E54B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E54B8u) [[unlikely]] return; }
L_001E54B8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E54E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5508u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5508u) [[unlikely]] return; }
L_001E5508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5520u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E5520u) [[unlikely]] return; }
L_001E5520:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E552Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E552Cu) [[unlikely]] return; }
L_001E552C:
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E5538:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001E55E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E554Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E554Cu) [[unlikely]] return; }
L_001E554C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5554u); c.f[12] = ld32((c.r[19].w[0] + 40u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5554u) [[unlikely]] return; }
L_001E5554:
    c.f[0] = c.r[18].w[0];
    mmi::paddub(c.r[20], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5564u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5564u) [[unlikely]] return; }
L_001E5564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5584u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E5584u) [[unlikely]] return; }
L_001E5584:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5590u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001E5590u) [[unlikely]] return; }
L_001E5590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5598u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001E5598u) [[unlikely]] return; }
L_001E5598:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55A8u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E55A8u) [[unlikely]] return; }
L_001E55A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E55B0u) [[unlikely]] return; }
L_001E55B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55B8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001E55B8u) [[unlikely]] return; }
L_001E55B8:
    c.f[13] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55CCu); c.f[12] = ld32((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E55CCu) [[unlikely]] return; }
L_001E55CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55DCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x001E3A10u; return; } if (c.pc != 0x001E55DCu) [[unlikely]] return; }
L_001E55DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001E55E4:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5538u | kUnwind; return; } goto L_001E5538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E55F8u) [[unlikely]] return; }
L_001E55F8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E5620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E5640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC53D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3EB0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    set32(c.r[2], c.r[2].w[0] + 22928u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56A0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E56A0u) [[unlikely]] return; }
L_001E56A0:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 11600u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 11664u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56D0u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 135u, depth + 1u); else { c.pc = 0x001E56F0u; return; } if (c.pc != 0x001E56D0u) [[unlikely]] return; }
L_001E56D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E56F0:
    set32(c.r[3], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 2;
L_001E56F8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[7].d[0]; set32(c.r[6], ld32((c.r[3].w[0] + 20u)));  if (t) { goto L_001E5858; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_001E5778; } }
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_001E5778; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001E5730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));  if (t) { goto L_001E586C; } }
L_001E5730:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5868; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001E5868; } }
L_001E5778:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E57F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_001E57A4; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    if (c.r[10].d[0] != c.r[7].d[0]) { set32(c.r[6], c.r[6].w[0] + 64u);  goto L_001E57C0; }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_001E57A4:
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001E57D8; } }
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 1;
L_001E57C0:
    st32((c.r[3].w[0] + 20u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 6;
L_001E57D8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001E5868; } }
L_001E57F8:
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_001E5868; } }
L_001E5858:
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_001E5868:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 1;
L_001E586C:
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[9], c.r[6].w[0] + 48u);  if (t) { goto L_001E5940; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_001E58F0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001E5898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001E5944; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001E5898:
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5940; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E5940; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001E5940; } }
L_001E58F0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E5914; } }
    set32(c.r[6], c.r[8].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), 0u);  if (t) { goto L_001E5940; } }
L_001E5914:
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 11;
L_001E5940:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001E5944:
    c.r[6].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E56F8u | kUnwind; return; } goto L_001E56F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E5980; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5984; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E5980:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E5984:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E5990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59B8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E59B8u) [[unlikely]] return; }
L_001E59B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59D0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E59D0u) [[unlikely]] return; }
L_001E59D0:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59DCu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E59DCu) [[unlikely]] return; }
L_001E59DC:
    set32(c.r[18], c.r[16].w[0] + 320u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E59E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001E5A84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59FCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E59FCu) [[unlikely]] return; }
L_001E59FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A04u); c.f[12] = ld32((c.r[16].w[0] + 40u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5A04u) [[unlikely]] return; }
L_001E5A04:
    c.f[0] = c.r[20].w[0];
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A14u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5A14u) [[unlikely]] return; }
L_001E5A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A34u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E5A34u) [[unlikely]] return; }
L_001E5A34:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A40u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001E5A40u) [[unlikely]] return; }
L_001E5A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A48u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001E5A48u) [[unlikely]] return; }
L_001E5A48:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A58u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E5A58u) [[unlikely]] return; }
L_001E5A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A60u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E5A60u) [[unlikely]] return; }
L_001E5A60:
    c.f[13] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A74u); c.f[12] = ld32((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E5A74u) [[unlikely]] return; }
L_001E5A74:
    c.f[12] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A80u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x001E3A10u; return; } if (c.pc != 0x001E5A80u) [[unlikely]] return; }
L_001E5A80:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E5A84:
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E59E8u | kUnwind; return; } goto L_001E59E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5A98u) [[unlikely]] return; }
L_001E5A98:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E5AC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E5AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3D70000u);
    c.r[5].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC53D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28631ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 23888u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B48u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E5B48u) [[unlikely]] return; }
L_001E5B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[2].w[0] + 11792u);
    set32(c.r[3], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_001E5B58:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 20u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5B58u | kUnwind; return; } goto L_001E5B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 158u, depth + 1u); else { c.pc = 0x001E5BA0u; return; } if (c.pc != 0x001E5B84u) [[unlikely]] return; }
L_001E5B84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5BA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001E5BF8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 1820u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_001E5BEC; } }
    set32(c.r[3], c.r[3].w[0] + 63u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 2;
L_001E5BEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
L_001E5BF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5C24; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.budget -= 7;
L_001E5C24:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[1] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E5C58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E5D30; } }
L_001E5C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[18], c.r[2].w[0] + 11792u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E5C64:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[20], c.r[29].w[0] + 100u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C84u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5C84u) [[unlikely]] return; }
L_001E5C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C8Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E5C8Cu) [[unlikely]] return; }
L_001E5C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C94u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001E5C94u) [[unlikely]] return; }
L_001E5C94:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CA0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E5CA0u) [[unlikely]] return; }
L_001E5CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5CA8u) [[unlikely]] return; }
L_001E5CA8:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5C64u | kUnwind; return; } goto L_001E5C64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001E5CFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
L_001E5CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D04u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5D04u) [[unlikely]] return; }
L_001E5D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D0Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E5D0Cu) [[unlikely]] return; }
L_001E5D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D14u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E5D14u) [[unlikely]] return; }
L_001E5D14:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D20u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001E5D20u) [[unlikely]] return; }
L_001E5D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5D28u) [[unlikely]] return; }
L_001E5D28:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E5D30:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E5D50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5D78u) [[unlikely]] return; }
L_001E5D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[2].w[0] - 28432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D8Cu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E5D8Cu) [[unlikely]] return; }
L_001E5D8C:
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D9Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E5D9Cu) [[unlikely]] return; }
L_001E5D9C:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[19].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DB8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001E5DB8u) [[unlikely]] return; }
L_001E5DB8:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DC4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E5DC4u) [[unlikely]] return; }
L_001E5DC4:
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E5DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DD8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E5DD8u) [[unlikely]] return; }
L_001E5DD8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DE8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E5DE8u) [[unlikely]] return; }
L_001E5DE8:
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DF4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E5DF4u) [[unlikely]] return; }
L_001E5DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E14u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E5E14u) [[unlikely]] return; }
L_001E5E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E1Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001E5E1Cu) [[unlikely]] return; }
L_001E5E1C:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.f[13] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E2Cu); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E5E2Cu) [[unlikely]] return; }
L_001E5E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E34u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E5E34u) [[unlikely]] return; }
L_001E5E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E3Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001E5E3Cu) [[unlikely]] return; }
L_001E5E3C:
    c.f[13] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E50u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E5E50u) [[unlikely]] return; }
L_001E5E50:
    c.f[12] = ld32((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E5Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x001E3A10u; return; } if (c.pc != 0x001E5E5Cu) [[unlikely]] return; }
L_001E5E5C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5DD0u | kUnwind; return; } goto L_001E5DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5E74u) [[unlikely]] return; }
L_001E5E74:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E5EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E5EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[2].w[0] + 25216u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 1u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F08u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E5F08u) [[unlikely]] return; }
L_001E5F08:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 11888u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 12272u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F44u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 192u, depth + 1u); else { c.pc = 0x001E5F60u; return; } if (c.pc != 0x001E5F44u) [[unlikely]] return; }
L_001E5F44:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001E5F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6264; } }
L_001E5F90:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5F9Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E5F9Cu) [[unlikely]] return; }
L_001E5F9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FC4u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E5FC4u) [[unlikely]] return; }
L_001E5FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FCCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x001E5FCCu) [[unlikely]] return; }
L_001E5FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5FD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E5FD4u) [[unlikely]] return; }
L_001E5FD4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 2;
L_001E5FDC:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[6].d[0]; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_001E6140; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_001E6068; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_001E6068; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_001E6068; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001E6020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (t) { goto L_001E614C; } }
L_001E6020:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6148; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001E6148; } }
L_001E6068:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E60E0; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 64u);  goto L_001E60A8; }
    set32(c.r[6], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001E60C0; } }
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 1;
L_001E60A8:
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 6;
L_001E60C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_001E6148; } }
L_001E60E0:
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_001E6148; } }
L_001E6140:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001E6148:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_001E614C:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[8], c.r[5].w[0] + 48u);  if (t) { goto L_001E6220; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_001E61D0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001E6178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (t) { goto L_001E6224; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001E6178:
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E6220; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E6220; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001E6220; } }
L_001E61D0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E61F4; } }
    set32(c.r[5], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_001E6220; } }
L_001E61F4:
    c.f[2] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 11;
L_001E6220:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_001E6224:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5FDCu | kUnwind; return; } goto L_001E5FDC; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001E625C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6264; } }
L_001E625C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6264:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6280:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E62A8u) [[unlikely]] return; }
L_001E62A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62C0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E62C0u) [[unlikely]] return; }
L_001E62C0:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62CCu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E62CCu) [[unlikely]] return; }
L_001E62CC:
    set32(c.r[18], c.r[16].w[0] + 320u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 3;
L_001E62D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_001E6374; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62ECu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E62ECu) [[unlikely]] return; }
L_001E62EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62F4u); c.f[12] = ld32((c.r[16].w[0] + 40u));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E62F4u) [[unlikely]] return; }
L_001E62F4:
    c.f[0] = c.r[20].w[0];
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6304u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001E6304u) [[unlikely]] return; }
L_001E6304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 43516ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6324u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001E6324u) [[unlikely]] return; }
L_001E6324:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6330u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001E6330u) [[unlikely]] return; }
L_001E6330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6338u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001E6338u) [[unlikely]] return; }
L_001E6338:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6348u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E6348u) [[unlikely]] return; }
L_001E6348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6350u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E6350u) [[unlikely]] return; }
L_001E6350:
    c.f[13] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6364u); c.f[12] = ld32((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E6364u) [[unlikely]] return; }
L_001E6364:
    c.f[12] = ld32((c.r[18].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6370u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  if (depth < kMaxDepth) unit_0038(c, 313u, depth + 1u); else { c.pc = 0x001E3A10u; return; } if (c.pc != 0x001E6370u) [[unlikely]] return; }
L_001E6370:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001E6374:
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E62D8u | kUnwind; return; } goto L_001E62D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6388u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E6388u) [[unlikely]] return; }
L_001E6388:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E63B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E63D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD830000u);
    c.r[5].d[0] = c.r[3].d[0] | 4719ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 25776u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 90u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6448; } }
L_001E6440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6448u);  if (depth < kMaxDepth) unit_0039(c, 217u, depth + 1u); else { c.pc = 0x001E6460u; return; } if (c.pc != 0x001E6448u) [[unlikely]] return; }
L_001E6448:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E6460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA370000u);
    c.r[2].d[0] = c.r[2].d[0] | 32820ull;
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6490u); st32((c.r[4].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x001E6490u) [[unlikely]] return; }
L_001E6490:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E64B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E64C8u) [[unlikely]] return; }
L_001E64C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64D0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E64D0u) [[unlikely]] return; }
L_001E64D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64D8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E64D8u) [[unlikely]] return; }
L_001E64D8:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDE10000u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 18350ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E6540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6514u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E6514u) [[unlikely]] return; }
L_001E6514:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[2].w[0] - 25364u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E653Cu); set32(c.r[6], c.r[2].w[0] + 12592u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E653Cu) [[unlikely]] return; }
L_001E653C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001E6540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6548u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E6548u) [[unlikely]] return; }
L_001E6548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E6560:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], 0u + 10349u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11600u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E65E0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E65E0u) [[unlikely]] return; }
L_001E65E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001E6634; } }
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6608u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E6608u) [[unlikely]] return; }
L_001E6608:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 16u);
    c.budget -= 2;
L_001E6610:
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6620u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E6620u) [[unlikely]] return; }
L_001E6620:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6610u | kUnwind; return; } goto L_001E6610; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001E6634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E663Cu);  if (depth < kMaxDepth) unit_0039(c, 233u, depth + 1u); else { c.pc = 0x001E6650u; return; } if (c.pc != 0x001E663Cu) [[unlikely]] return; }
L_001E663C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E66CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E6690; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_001E66CC; } }
L_001E6690:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E66C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26488u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E66CC; } }
L_001E66C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_001E66CC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66E4u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x001E66E4u) [[unlikely]] return; }
L_001E66E4:
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001E677C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001E6718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001E6780; } }
L_001E6718:
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 12464u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_001E677C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001E677C; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6758u); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001E6758u) [[unlikely]] return; }
L_001E6758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E677C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E677Cu); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001E677Cu) [[unlikely]] return; }
L_001E677C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E6780:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E6790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E67B0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C930000u);
    c.r[6].d[0] = c.r[3].d[0] | 29884ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[3], 0u + 436u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 26816u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 12544u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 336u), c.r[3].w[0]);  c.pc = t; return; }
L_001E6800:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E6898; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E6868; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E6838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E68AC; } }
L_001E6838:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E68A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E68A8; } }
L_001E6868:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E687C; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E687C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E68A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E68A8; } }
L_001E6898:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E68B0; } }
L_001E68A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E68AC:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E68B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E68C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68E0u); set32(c.r[5], c.r[2].w[0] + 12592u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001E68E0u) [[unlikely]] return; }
L_001E68E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6938u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A2(c, 43u, depth + 1u); else { c.pc = 0x003895E0u; return; } if (c.pc != 0x001E6938u) [[unlikely]] return; }
L_001E6938:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E69B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[3].w[0]), c.f[5]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6990u); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E6990u) [[unlikely]] return; }
L_001E6990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6998u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E6998u) [[unlikely]] return; }
L_001E6998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E69A0u) [[unlikely]] return; }
L_001E69A0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69B0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E69B0u) [[unlikely]] return; }
L_001E69B0:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C8C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56992ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69D8u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E69D8u) [[unlikely]] return; }
L_001E69D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69E0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E69E0u) [[unlikely]] return; }
L_001E69E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E69E8u) [[unlikely]] return; }
L_001E69E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 25356u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E69FCu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E69FCu) [[unlikely]] return; }
L_001E69FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001E6A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], c.r[2].w[0] - 32640u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6A70u); set32(c.r[7], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E6A70u) [[unlikely]] return; }
L_001E6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6A78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E6A90u; return; } if (c.pc != 0x001E6A78u) [[unlikely]] return; }
L_001E6A78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E6AB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6B0C; } }
L_001E6AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E6AF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26487u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E6AF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6AECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E6AECu) [[unlikely]] return; }
L_001E6AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001E6B10; } }
L_001E6AF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B04u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E6B04u) [[unlikely]] return; }
L_001E6B04:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6B0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E6B10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B5Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E6B5Cu) [[unlikely]] return; }
L_001E6B5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B80u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001E6B80u) [[unlikely]] return; }
L_001E6B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B88u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x001E6B88u) [[unlikely]] return; }
L_001E6B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6B90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E6B90u) [[unlikely]] return; }
L_001E6B90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C750000u);
    c.r[3].d[0] = c.r[2].d[0] | 49807ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[7], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BDCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E6BDCu) [[unlikely]] return; }
L_001E6BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6BE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 266u, depth + 1u); else { c.pc = 0x001E6C00u; return; } if (c.pc != 0x001E6BE4u) [[unlikely]] return; }
L_001E6BE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6C00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E6C2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6D18; } }
L_001E6C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9344u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C64u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E6C64u) [[unlikely]] return; }
L_001E6C64:
    set32(c.r[17], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C74u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E6C74u) [[unlikely]] return; }
L_001E6C74:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[2].w[0] + 12576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C8Cu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E6C8Cu) [[unlikely]] return; }
L_001E6C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C94u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001E6C94u) [[unlikely]] return; }
L_001E6C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6C9Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E6C9Cu) [[unlikely]] return; }
L_001E6C9C:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CA8u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E6CA8u) [[unlikely]] return; }
L_001E6CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CB0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001E6CB0u) [[unlikely]] return; }
L_001E6CB0:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CC4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001E6CC4u) [[unlikely]] return; }
L_001E6CC4:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CD0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001E6CD0u) [[unlikely]] return; }
L_001E6CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CD8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001E6CD8u) [[unlikely]] return; }
L_001E6CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CE0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001E6CE0u) [[unlikely]] return; }
L_001E6CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CE8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001E6CE8u) [[unlikely]] return; }
L_001E6CE8:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6CF8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001E6CF8u) [[unlikely]] return; }
L_001E6CF8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D04u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E6D04u) [[unlikely]] return; }
L_001E6D04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6D10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E6D10u) [[unlikely]] return; }
L_001E6D10:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6D18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E6D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400E0000u);
    set32(c.r[5], 0u - 3072u);
    set32(c.r[3], 0u - 1024u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0120000u);
    c.r[2].d[0] = c.r[2].d[0] | 36281ull;
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41540000u);
    c.r[2].d[0] = c.r[2].d[0] | 42153ull;
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 14192u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DD8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E6DD8u) [[unlikely]] return; }
L_001E6DD8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 17u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E6DECu) [[unlikely]] return; }
L_001E6DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6DF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 287u, depth + 1u); else { c.pc = 0x001E6E10u; return; } if (c.pc != 0x001E6DF4u) [[unlikely]] return; }
L_001E6DF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E6E38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6E58; } }
L_001E6E38:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 1;
L_001E6E3C:
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6E50u); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E6E50u) [[unlikely]] return; }
L_001E6E50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6E58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], c.r[2].w[0] - 32640u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6ECCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E6ECCu) [[unlikely]] return; }
L_001E6ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6ED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 294u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001E6ED4u) [[unlikely]] return; }
L_001E6ED4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E6F18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E6F2C; } }
L_001E6F18:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6F24u); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E6F24u) [[unlikely]] return; }
L_001E6F24:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E6F2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E6F40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23776u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E6F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C20000u);
    c.r[3].d[0] = c.r[2].d[0] | 36700ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FB70000u);
    set32(c.r[5], 0u + 16384u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2621ull;
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41560000u);
    c.r[2].d[0] = c.r[2].d[0] | 15938ull;
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    st32((c.r[4].w[0] + 52u), 0u);
    set32(c.r[2], c.r[2].w[0] - 32640u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 10864u);
    set32(c.r[7], 0u + 7u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FE0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001E6FE0u) [[unlikely]] return; }
L_001E6FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6FE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0039(c, 300u, depth + 1u); else { c.pc = 0x001E7000u; return; } if (c.pc != 0x001E6FE8u) [[unlikely]] return; }
L_001E6FE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26486u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E7028; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7078; } }
L_001E7028:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26485u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001E7068; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E7054; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC05A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_001E7054:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
L_001E7068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7070u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x001E7070u) [[unlikely]] return; }
L_001E7070:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E7078:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E70B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4D0000u);
    c.r[5].d[0] = c.r[2].d[0] | 315ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 168u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_001E7104; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16560u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001E7110; } }
L_001E7104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_001E7110:
    c.budget -= 2;
    {  goto L_001E7120; }
L_001E7120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_001E7394; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7178; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7394; } }
L_001E7178:
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), 0u);  if (t) { goto L_001E7358; } }
L_001E7188:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7198u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001E7198u) [[unlikely]] return; }
L_001E7198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E7358; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 15104u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7228; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[3].w[0] + 22592u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22592u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.f[0]);  if (t) { goto L_001E7260; } }
L_001E7228:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[3].w[0] + 15728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15728u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.budget -= 14;
L_001E7260:
    c.f[3] = ld32((c.r[18].w[0] + 112u));
    c.f[2] = ld32((c.r[18].w[0] + 116u));
    c.f[1] = ld32((c.r[18].w[0] + 120u));
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[3].w[0] + 4736u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 56992ull;
    st32((c.r[2].w[0] + 112u), c.f[3]);
    st32((c.r[2].w[0] + 116u), c.f[2]);
    st32((c.r[2].w[0] + 120u), c.f[1]);
    st32((c.r[2].w[0] + 124u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_001E72F0; } }
    c.r[3].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E72D4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001E72EC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_001E72F0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E72EC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001E72F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E72D4u | kUnwind; return; } goto L_001E72D4; } }
    set32(c.r[3], 0u + 129u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7318; } }
    set32(c.r[6], c.r[6].w[0] + 25u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001E7318:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], 0u + 131u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E734C; } }
    set32(c.r[3], 0u + 130u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E7340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[6].w[0] + 25u);  if (t) { goto L_001E7354; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001E7340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7350; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001E734C:
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7350:
    set32(c.r[17], c.r[6].w[0] + 25u);
    c.budget -= 1;
L_001E7354:
    c.budget -= 1;
L_001E7358:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7188u | kUnwind; return; } goto L_001E7188; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[17].w[0] + 25u);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 11;
L_001E7394:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E73B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E73D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 315ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[2], c.r[2].w[0] + 29872u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[4].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 164u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
    { st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));  goto L_001E7420; }
L_001E7420:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E744C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E749C; } }
L_001E744C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001E7480; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 1u);  goto L_001E7478; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E7494; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001E7478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7494; } }
L_001E7480:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001E7498; }
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7494:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E7498:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E749C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E74B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E74D4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00A2(c, 43u, depth + 1u); else { c.pc = 0x003895E0u; return; } if (c.pc != 0x001E74D4u) [[unlikely]] return; }
L_001E74D4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7620; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[2].w[0] + 4736u);
    c.f[4] = ld32((c.r[16].w[0] + 112u));
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E7578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E7550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_001E758C; } }
L_001E7550:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_001E7588; } }
L_001E7578:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 4;
L_001E7588:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001E758C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7594u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E7594u) [[unlikely]] return; }
L_001E7594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[4] = ld32((c.r[1].w[0] + 12592u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[3] = ld32((c.r[1].w[0] + 12596u));
    st32((c.r[29].w[0] + 160u), c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[2] = ld32((c.r[1].w[0] + 12600u));
    st32((c.r[29].w[0] + 164u), c.f[3]);
    st32((c.r[29].w[0] + 168u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[1] = ld32((c.r[1].w[0] + 12604u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75F0u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E75F0u) [[unlikely]] return; }
L_001E75F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E75F8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E75F8u) [[unlikely]] return; }
L_001E75F8:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.f[13] = c.f[12];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7608u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E7608u) [[unlikely]] return; }
L_001E7608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7610u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E7610u) [[unlikely]] return; }
L_001E7610:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7620u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7620u) [[unlikely]] return; }
L_001E7620:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001E7640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E7660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[2].w[0] + 31408u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E76F0; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_001E7714; } }
L_001E76F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_001E7714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 320u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 336u), c.r[5].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E776Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_001F(c, 62u, depth + 1u); else { c.pc = 0x0017CA90u; return; } if (c.pc != 0x001E776Cu) [[unlikely]] return; }
L_001E776C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7774u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E7774u) [[unlikely]] return; }
L_001E7774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E777Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E777Cu) [[unlikely]] return; }
L_001E777C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E7790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001E7A94; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 24608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E77D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7808; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.f[0]);  if (t) { goto L_001E7834; } }
L_001E7808:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 148u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 11;
L_001E7834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001E7AA0; } }
L_001E783C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7860; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.f[0]);  if (t) { goto L_001E788C; } }
L_001E7860:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = ld32((c.r[4].w[0] + 148u));
    c.f[1] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = ld32((c.r[4].w[0] + 156u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 11;
L_001E788C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7A98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 44u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E7A94; } }
L_001E78B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7A94; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], 0u + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_001E7A94; } }
L_001E78F0:
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7A94; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001E7A94; } }
L_001E793C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7A94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7A94; } }
L_001E7968:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], 0u + 967u);
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E79B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E79B8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[7], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E79B8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0038(c, 309u, depth + 1u); else { c.pc = 0x001E38F0u; return; } if (c.pc != 0x001E79B8u) [[unlikely]] return; }
L_001E79B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 969ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E7A94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E79F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001E79F8u) [[unlikely]] return; }
L_001E79F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A0Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001E7A0Cu) [[unlikely]] return; }
L_001E7A0C:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), 0u);  if (t) { goto L_001E7A94; } }
L_001E7A18:
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A38u); st32((c.r[16].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001E7A38u) [[unlikely]] return; }
L_001E7A38:
    set32(c.r[4], c.r[16].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A48u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E7A48u) [[unlikely]] return; }
L_001E7A48:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1033u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7A94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7A9C; } }
L_001E7A68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7A9C; } }
L_001E7A78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7A8Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_001F(c, 64u, depth + 1u); else { c.pc = 0x0017CB00u; return; } if (c.pc != 0x001E7A8Cu) [[unlikely]] return; }
L_001E7A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A9C; } }
L_001E7A94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E7A98:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001E7A9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E7AA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E7AB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_001E7BEC; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], c.r[20].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AF0u); set32(c.r[16], c.r[20].w[0] + 320u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E7AF0u) [[unlikely]] return; }
L_001E7AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7AF8u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E7AF8u) [[unlikely]] return; }
L_001E7AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B14u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E7B14u) [[unlikely]] return; }
L_001E7B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B1Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E7B1Cu) [[unlikely]] return; }
L_001E7B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B24u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E7B24u) [[unlikely]] return; }
L_001E7B24:
    c.f[0] = ld32((c.r[20].w[0] + 140u));
    set32(c.r[17], c.r[29].w[0] + 184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[18], c.r[29].w[0] + 180u);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[19], c.r[29].w[0] + 188u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 16192u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7B80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7B80u) [[unlikely]] return; }
L_001E7B80:
    c.f[1] = ld32((c.r[20].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_001E7BC8; } }
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001E7BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7BE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7BE4u) [[unlikely]] return; }
L_001E7BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_001E7C9C; } }
L_001E7BEC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], c.r[20].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C00u); set32(c.r[16], c.r[20].w[0] + 320u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001E7C00u) [[unlikely]] return; }
L_001E7C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C08u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001E7C08u) [[unlikely]] return; }
L_001E7C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C24u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001E7C24u) [[unlikely]] return; }
L_001E7C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C2Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E7C2Cu) [[unlikely]] return; }
L_001E7C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C34u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E7C34u) [[unlikely]] return; }
L_001E7C34:
    c.f[1] = ld32((c.r[20].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_001E7C7C; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001E7C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7C98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7C98u) [[unlikely]] return; }
L_001E7C98:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001E7C9C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E7CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E7CE0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C930000u);
    c.r[6].d[0] = c.r[3].d[0] | 29884ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32112u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22944u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 336u), c.r[3].w[0]);  c.pc = t; return; }
L_001E7D30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E7D5C; } }
    set32(c.r[3], 0u + 128u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_001E7D5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E7D70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7D90u); set32(c.r[5], c.r[2].w[0] + 12592u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001E7D90u) [[unlikely]] return; }
L_001E7D90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7DE8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00A2(c, 43u, depth + 1u); else { c.pc = 0x003895E0u; return; } if (c.pc != 0x001E7DE8u) [[unlikely]] return; }
L_001E7DE8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E7E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[3].w[0]), c.f[5]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E40u); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E7E40u) [[unlikely]] return; }
L_001E7E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E48u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E7E48u) [[unlikely]] return; }
L_001E7E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E50u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E7E50u) [[unlikely]] return; }
L_001E7E50:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E60u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7E60u) [[unlikely]] return; }
L_001E7E60:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C8C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 56992ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E88u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001E7E88u) [[unlikely]] return; }
L_001E7E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E90u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001E7E90u) [[unlikely]] return; }
L_001E7E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7E98u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001E7E98u) [[unlikely]] return; }
L_001E7E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 25352u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7EACu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001E7EACu) [[unlikely]] return; }
L_001E7EAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001E7EC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E7EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[1].w[0] + 22976u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_001E7F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 22976u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[4].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] & 192ull;
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  [[clang::musttail]] return unit_003A(c, 3u, depth); }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_001E7FE8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001E7FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_003A(c, 6u, depth); } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001E7FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7FBCu);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001E7FBCu) [[unlikely]] return; }
L_001E7FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[6], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7FDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001E7FDCu) [[unlikely]] return; }
L_001E7FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001E7FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E7FF0u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x001E7FF0u) [[unlikely]] return; }
L_001E7FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 5u, depth); } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_003A(c, 1u, depth);
}

}
