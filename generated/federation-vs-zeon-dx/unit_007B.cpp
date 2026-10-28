#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94,
    0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0,
    114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 130,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 239,
    0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0,
    0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335,
    0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0,
    0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC004;
    case 3u: goto L_002EC00C;
    case 4u: goto L_002EC024;
    case 5u: goto L_002EC040;
    case 6u: goto L_002EC060;
    case 7u: goto L_002EC0CC;
    case 8u: goto L_002EC108;
    case 9u: goto L_002EC110;
    case 10u: goto L_002EC12C;
    case 11u: goto L_002EC134;
    case 12u: goto L_002EC13C;
    case 13u: goto L_002EC144;
    case 14u: goto L_002EC158;
    case 15u: goto L_002EC194;
    case 16u: goto L_002EC19C;
    case 17u: goto L_002EC1B8;
    case 18u: goto L_002EC1C0;
    case 19u: goto L_002EC1C8;
    case 20u: goto L_002EC1D0;
    case 21u: goto L_002EC1D8;
    case 22u: goto L_002EC1F4;
    case 23u: goto L_002EC214;
    case 24u: goto L_002EC230;
    case 25u: goto L_002EC2BC;
    case 26u: goto L_002EC31C;
    case 27u: goto L_002EC330;
    case 28u: goto L_002EC38C;
    case 29u: goto L_002EC3A0;
    case 30u: goto L_002EC3C0;
    case 31u: goto L_002EC3E0;
    case 32u: goto L_002EC3EC;
    case 33u: goto L_002EC430;
    case 34u: goto L_002EC440;
    case 35u: goto L_002EC448;
    case 36u: goto L_002EC450;
    case 37u: goto L_002EC470;
    case 38u: goto L_002EC480;
    case 39u: goto L_002EC490;
    case 40u: goto L_002EC4B8;
    case 41u: goto L_002EC500;
    case 42u: goto L_002EC520;
    case 43u: goto L_002EC540;
    case 44u: goto L_002EC5A0;
    case 45u: goto L_002EC5C4;
    case 46u: goto L_002EC5D8;
    case 47u: goto L_002EC5F4;
    case 48u: goto L_002EC5FC;
    case 49u: goto L_002EC604;
    case 50u: goto L_002EC640;
    case 51u: goto L_002EC710;
    case 52u: goto L_002EC724;
    case 53u: goto L_002EC738;
    case 54u: goto L_002EC740;
    case 55u: goto L_002EC748;
    case 56u: goto L_002EC768;
    case 57u: goto L_002EC780;
    case 58u: goto L_002EC790;
    case 59u: goto L_002EC7B0;
    case 60u: goto L_002EC7C0;
    case 61u: goto L_002EC7D0;
    case 62u: goto L_002EC7F8;
    case 63u: goto L_002EC844;
    case 64u: goto L_002EC860;
    case 65u: goto L_002EC880;
    case 66u: goto L_002EC91C;
    case 67u: goto L_002EC93C;
    case 68u: goto L_002EC958;
    case 69u: goto L_002EC978;
    case 70u: goto L_002EC98C;
    case 71u: goto L_002EC998;
    case 72u: goto L_002EC9A4;
    case 73u: goto L_002EC9C8;
    case 74u: goto L_002EC9D0;
    case 75u: goto L_002EC9D8;
    case 76u: goto L_002EC9E0;
    case 77u: goto L_002EC9E8;
    case 78u: goto L_002EC9F8;
    case 79u: goto L_002ECA08;
    case 80u: goto L_002ECA2C;
    case 81u: goto L_002ECA4C;
    case 82u: goto L_002ECA50;
    case 83u: goto L_002ECA58;
    case 84u: goto L_002ECAF8;
    case 85u: goto L_002ECB10;
    case 86u: goto L_002ECB74;
    case 87u: goto L_002ECB84;
    case 88u: goto L_002ECC30;
    case 89u: goto L_002ECC4C;
    case 90u: goto L_002ECC54;
    case 91u: goto L_002ECC5C;
    case 92u: goto L_002ECC6C;
    case 93u: goto L_002ECC74;
    case 94u: goto L_002ECC7C;
    case 95u: goto L_002ECC8C;
    case 96u: goto L_002ECC94;
    case 97u: goto L_002ECC9C;
    case 98u: goto L_002ECCC0;
    case 99u: goto L_002ECD8C;
    case 100u: goto L_002ECDEC;
    case 101u: goto L_002ECE04;
    case 102u: goto L_002ECEC0;
    case 103u: goto L_002ECF78;
    case 104u: goto L_002ECFA0;
    case 105u: goto L_002ECFCC;
    case 106u: goto L_002ECFD4;
    case 107u: goto L_002ECFF0;
    case 108u: goto L_002ED028;
    case 109u: goto L_002ED0D0;
    case 110u: goto L_002ED0D8;
    case 111u: goto L_002ED0E0;
    case 112u: goto L_002ED0F0;
    case 113u: goto L_002ED0F8;
    case 114u: goto L_002ED100;
    case 115u: goto L_002ED110;
    case 116u: goto L_002ED118;
    case 117u: goto L_002ED120;
    case 118u: goto L_002ED170;
    case 119u: goto L_002ED1C0;
    case 120u: goto L_002ED1D0;
    case 121u: goto L_002ED218;
    case 122u: goto L_002ED220;
    case 123u: goto L_002ED230;
    case 124u: goto L_002ED240;
    case 125u: goto L_002ED24C;
    case 126u: goto L_002ED258;
    case 127u: goto L_002ED268;
    case 128u: goto L_002ED270;
    case 129u: goto L_002ED278;
    case 130u: goto L_002ED27C;
    case 131u: goto L_002ED29C;
    case 132u: goto L_002ED2A8;
    case 133u: goto L_002ED2C0;
    case 134u: goto L_002ED2E4;
    case 135u: goto L_002ED2EC;
    case 136u: goto L_002ED3C0;
    case 137u: goto L_002ED400;
    case 138u: goto L_002ED430;
    case 139u: goto L_002ED448;
    case 140u: goto L_002ED450;
    case 141u: goto L_002ED480;
    case 142u: goto L_002ED4C0;
    case 143u: goto L_002ED4EC;
    case 144u: goto L_002ED520;
    case 145u: goto L_002ED530;
    case 146u: goto L_002ED570;
    case 147u: goto L_002ED58C;
    case 148u: goto L_002ED5B0;
    case 149u: goto L_002ED5F0;
    case 150u: goto L_002ED778;
    case 151u: goto L_002ED790;
    case 152u: goto L_002ED82C;
    case 153u: goto L_002ED840;
    case 154u: goto L_002ED890;
    case 155u: goto L_002ED8A0;
    case 156u: goto L_002ED900;
    case 157u: goto L_002ED920;
    case 158u: goto L_002ED92C;
    case 159u: goto L_002ED984;
    case 160u: goto L_002ED99C;
    case 161u: goto L_002ED9D0;
    case 162u: goto L_002ED9F0;
    case 163u: goto L_002EDA30;
    case 164u: goto L_002EDA94;
    case 165u: goto L_002EDA9C;
    case 166u: goto L_002EDAB4;
    case 167u: goto L_002EDAC8;
    case 168u: goto L_002EDB04;
    case 169u: goto L_002EDB0C;
    case 170u: goto L_002EDB14;
    case 171u: goto L_002EDB50;
    case 172u: goto L_002EDB64;
    case 173u: goto L_002EDB80;
    case 174u: goto L_002EDB88;
    case 175u: goto L_002EDBA4;
    case 176u: goto L_002EDBCC;
    case 177u: goto L_002EDBDC;
    case 178u: goto L_002EDC5C;
    case 179u: goto L_002EDCAC;
    case 180u: goto L_002EDCB4;
    case 181u: goto L_002EDCC8;
    case 182u: goto L_002EDCD0;
    case 183u: goto L_002EDCEC;
    case 184u: goto L_002EDD50;
    case 185u: goto L_002EDD60;
    case 186u: goto L_002EDD68;
    case 187u: goto L_002EDD70;
    case 188u: goto L_002EDD78;
    case 189u: goto L_002EDD80;
    case 190u: goto L_002EDDA0;
    case 191u: goto L_002EDDB0;
    case 192u: goto L_002EDDC0;
    case 193u: goto L_002EDDF4;
    case 194u: goto L_002EDE58;
    case 195u: goto L_002EDE84;
    case 196u: goto L_002EDEC8;
    case 197u: goto L_002EDEF0;
    case 198u: goto L_002EDF30;
    case 199u: goto L_002EDF3C;
    case 200u: goto L_002EDFB4;
    case 201u: goto L_002EDFC0;
    case 202u: goto L_002EE000;
    case 203u: goto L_002EE03C;
    case 204u: goto L_002EE0BC;
    case 205u: goto L_002EE0F8;
    case 206u: goto L_002EE120;
    case 207u: goto L_002EE140;
    case 208u: goto L_002EE258;
    case 209u: goto L_002EE278;
    case 210u: goto L_002EE294;
    case 211u: goto L_002EE2B8;
    case 212u: goto L_002EE2CC;
    case 213u: goto L_002EE2D8;
    case 214u: goto L_002EE2E4;
    case 215u: goto L_002EE308;
    case 216u: goto L_002EE310;
    case 217u: goto L_002EE318;
    case 218u: goto L_002EE320;
    case 219u: goto L_002EE328;
    case 220u: goto L_002EE330;
    case 221u: goto L_002EE340;
    case 222u: goto L_002EE350;
    case 223u: goto L_002EE390;
    case 224u: goto L_002EE3A0;
    case 225u: goto L_002EE3A8;
    case 226u: goto L_002EE3B4;
    case 227u: goto L_002EE3C4;
    case 228u: goto L_002EE3FC;
    case 229u: goto L_002EE408;
    case 230u: goto L_002EE420;
    case 231u: goto L_002EE4B4;
    case 232u: goto L_002EE4C4;
    case 233u: goto L_002EE590;
    case 234u: goto L_002EE5B8;
    case 235u: goto L_002EE5D0;
    case 236u: goto L_002EE5DC;
    case 237u: goto L_002EE5E4;
    case 238u: goto L_002EE5F4;
    case 239u: goto L_002EE5FC;
    case 240u: goto L_002EE604;
    case 241u: goto L_002EE614;
    case 242u: goto L_002EE61C;
    case 243u: goto L_002EE624;
    case 244u: goto L_002EE6D8;
    case 245u: goto L_002EE78C;
    case 246u: goto L_002EE79C;
    case 247u: goto L_002EE7A4;
    case 248u: goto L_002EE830;
    case 249u: goto L_002EE880;
    case 250u: goto L_002EE8A0;
    case 251u: goto L_002EE918;
    case 252u: goto L_002EE9E8;
    case 253u: goto L_002EEA00;
    case 254u: goto L_002EEA0C;
    case 255u: goto L_002EEA14;
    case 256u: goto L_002EEA24;
    case 257u: goto L_002EEA2C;
    case 258u: goto L_002EEA34;
    case 259u: goto L_002EEA44;
    case 260u: goto L_002EEA4C;
    case 261u: goto L_002EEA54;
    case 262u: goto L_002EEAF0;
    case 263u: goto L_002EEBA0;
    case 264u: goto L_002EEBB0;
    case 265u: goto L_002EEBD0;
    case 266u: goto L_002EEC10;
    case 267u: goto L_002EEC18;
    case 268u: goto L_002EEC28;
    case 269u: goto L_002EEC38;
    case 270u: goto L_002EEC44;
    case 271u: goto L_002EEC50;
    case 272u: goto L_002EEC60;
    case 273u: goto L_002EEC68;
    case 274u: goto L_002EEC78;
    case 275u: goto L_002EEC80;
    case 276u: goto L_002EECD4;
    case 277u: goto L_002EED14;
    case 278u: goto L_002EED30;
    case 279u: goto L_002EEDB8;
    case 280u: goto L_002EEDC0;
    case 281u: goto L_002EEDD0;
    case 282u: goto L_002EEDE0;
    case 283u: goto L_002EEDEC;
    case 284u: goto L_002EEDF8;
    case 285u: goto L_002EEE08;
    case 286u: goto L_002EEE10;
    case 287u: goto L_002EEE20;
    case 288u: goto L_002EEE28;
    case 289u: goto L_002EEE98;
    case 290u: goto L_002EEEC4;
    case 291u: goto L_002EEEE0;
    case 292u: goto L_002EEF20;
    case 293u: goto L_002EEF28;
    case 294u: goto L_002EEF38;
    case 295u: goto L_002EEF48;
    case 296u: goto L_002EEF54;
    case 297u: goto L_002EEF60;
    case 298u: goto L_002EEF70;
    case 299u: goto L_002EEF78;
    case 300u: goto L_002EEF88;
    case 301u: goto L_002EEF90;
    case 302u: goto L_002EEFF8;
    case 303u: goto L_002EF01C;
    case 304u: goto L_002EF024;
    case 305u: goto L_002EF040;
    case 306u: goto L_002EF118;
    case 307u: goto L_002EF128;
    case 308u: goto L_002EF134;
    case 309u: goto L_002EF140;
    case 310u: goto L_002EF150;
    case 311u: goto L_002EF170;
    case 312u: goto L_002EF1D8;
    case 313u: goto L_002EF1E8;
    case 314u: goto L_002EF250;
    case 315u: goto L_002EF274;
    case 316u: goto L_002EF2C8;
    case 317u: goto L_002EF2DC;
    case 318u: goto L_002EF2F0;
    case 319u: goto L_002EF30C;
    case 320u: goto L_002EF318;
    case 321u: goto L_002EF374;
    case 322u: goto L_002EF3A0;
    case 323u: goto L_002EF3C0;
    case 324u: goto L_002EF44C;
    case 325u: goto L_002EF470;
    case 326u: goto L_002EF714;
    case 327u: goto L_002EF71C;
    case 328u: goto L_002EF730;
    case 329u: goto L_002EF7A0;
    case 330u: goto L_002EF7B4;
    case 331u: goto L_002EF7C0;
    case 332u: goto L_002EF924;
    case 333u: goto L_002EF958;
    case 334u: goto L_002EF9E8;
    case 335u: goto L_002EF9FC;
    case 336u: goto L_002EFA0C;
    case 337u: goto L_002EFA14;
    case 338u: goto L_002EFA1C;
    case 339u: goto L_002EFA24;
    case 340u: goto L_002EFA2C;
    case 341u: goto L_002EFA34;
    case 342u: goto L_002EFA60;
    case 343u: goto L_002EFA70;
    case 344u: goto L_002EFA80;
    case 345u: goto L_002EFAC8;
    case 346u: goto L_002EFAD0;
    case 347u: goto L_002EFADC;
    case 348u: goto L_002EFAF0;
    case 349u: goto L_002EFB48;
    case 350u: goto L_002EFB70;
    case 351u: goto L_002EFB78;
    case 352u: goto L_002EFB8C;
    case 353u: goto L_002EFC54;
    case 354u: goto L_002EFC60;
    case 355u: goto L_002EFC6C;
    case 356u: goto L_002EFC78;
    case 357u: goto L_002EFC84;
    case 358u: goto L_002EFC90;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_002EC004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002EC028; } }
L_002EC00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 81u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC024u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EC024u) [[unlikely]] return; }
L_002EC024:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002EC028:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EC040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], 0u + 96u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_002EC0C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 45u);  if (t) { goto L_002EC150; } }
L_002EC0C0:
    set32(c.r[5], 0u + 47u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0CCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EC0CCu) [[unlikely]] return; }
L_002EC0CC:
    set32(c.r[2], 0u + 150u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 25u);
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40360000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4096u);
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC108u); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC108u) [[unlikely]] return; }
L_002EC108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC110u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC110u) [[unlikely]] return; }
L_002EC110:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC12Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EC12Cu) [[unlikely]] return; }
L_002EC12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC134u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EC134u) [[unlikely]] return; }
L_002EC134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC13Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EC13Cu) [[unlikely]] return; }
L_002EC13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC144u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC144u) [[unlikely]] return; }
L_002EC144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002EC1DC; } }
    set32(c.r[5], 0u + 45u);
    c.budget -= 1;
L_002EC150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC158u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EC158u) [[unlikely]] return; }
L_002EC158:
    set32(c.r[2], 0u + 145u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 50u);
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4096u);
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    set32(c.r[4], c.r[16].w[0] + 1984u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC194u); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC194u) [[unlikely]] return; }
L_002EC194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC19Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC19Cu) [[unlikely]] return; }
L_002EC19C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EC1B8u) [[unlikely]] return; }
L_002EC1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1C0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EC1C0u) [[unlikely]] return; }
L_002EC1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EC1C8u) [[unlikely]] return; }
L_002EC1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1D0u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EC1D0u) [[unlikely]] return; }
L_002EC1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC1D8u) [[unlikely]] return; }
L_002EC1D8:
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 1;
L_002EC1DC:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1F4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EC1F4u) [[unlikely]] return; }
L_002EC1F4:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC214u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007B(c, 24u, depth + 1u); else { c.pc = 0x002EC230u; return; } if (c.pc != 0x002EC214u) [[unlikely]] return; }
L_002EC214:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EC230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002EC2A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EC2A4; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC2A4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002EC2B4; } }
L_002EC2A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
L_002EC2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2BCu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EC2BCu) [[unlikely]] return; }
L_002EC2BC:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EC308; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC308; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002EC328; } }
L_002EC308:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC31Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EC31Cu) [[unlikely]] return; }
L_002EC31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002EC45C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002EC328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC330u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x002EC330u) [[unlikely]] return; }
L_002EC330:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC340; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002EC340:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC358; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002EC3FC; } }
L_002EC358:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC3FC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002EC3F8; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC38Cu); set32(c.r[4], ld32((c.r[17].w[0] + 520u)));  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002EC38Cu) [[unlikely]] return; }
L_002EC38C:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3A0u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002EC3A0u) [[unlikely]] return; }
L_002EC3A0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EC3FC; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3C0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002EC3C0u) [[unlikely]] return; }
L_002EC3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC3FC; } }
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3E0u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC3E0u) [[unlikely]] return; }
L_002EC3E0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC3ECu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EC3ECu) [[unlikely]] return; }
L_002EC3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 48u));  if (t) { goto L_002EC400; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002EC3F8:
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002EC3FC:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_002EC400:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC430u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EC430u) [[unlikely]] return; }
L_002EC430:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC440u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EC440u) [[unlikely]] return; }
L_002EC440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC448u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EC448u) [[unlikely]] return; }
L_002EC448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC450u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC450u) [[unlikely]] return; }
L_002EC450:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002EC45C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EC470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EC480:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EC490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[16].w[0] + 320u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4B8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EC4B8u) [[unlikely]] return; }
L_002EC4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_002EC500; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 15072u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC500u); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EC500u) [[unlikely]] return; }
L_002EC500:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] + 18304u);
    set32(c.r[2], 0u + 66u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 224u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] << 5);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EC5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5A0u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EC5A0u) [[unlikely]] return; }
L_002EC5A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EC5CC; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC5C4u) [[unlikely]] return; }
L_002EC5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_002EC5DC; } }
L_002EC5CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5D8u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC5D8u) [[unlikely]] return; }
L_002EC5D8:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002EC5DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5F4u); c.f[14] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EC5F4u) [[unlikely]] return; }
L_002EC5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5FCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002EC5FCu) [[unlikely]] return; }
L_002EC5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC604u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC604u) [[unlikely]] return; }
L_002EC604:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18304u);
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[3] = c.r[2].w[0];
    st32((c.r[4].w[0] + 144u), c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    st32((c.r[4].w[0] + 148u), c.f[4]);
    st32((c.r[4].w[0] + 152u), c.f[2]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.f[20] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 324u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EC6EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.f[20] = c.f[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002EC6EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EC718; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC710u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC710u) [[unlikely]] return; }
L_002EC710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_002EC728; } }
L_002EC718:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC724u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC724u) [[unlikely]] return; }
L_002EC724:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002EC728:
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC738u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EC738u) [[unlikely]] return; }
L_002EC738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC740u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002EC740u) [[unlikely]] return; }
L_002EC740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC748u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC748u) [[unlikely]] return; }
L_002EC748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EC790; } }
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC768u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002EC768u) [[unlikely]] return; }
L_002EC768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC790; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC780u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EC780u) [[unlikely]] return; }
L_002EC780:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 531u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC790u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0047(c, 264u, depth + 1u); else { c.pc = 0x0021FC70u; return; } if (c.pc != 0x002EC790u) [[unlikely]] return; }
L_002EC790:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EC7B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0081(c, 9u, depth); }
L_002EC7C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EC7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7F8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EC7F8u) [[unlikely]] return; }
L_002EC7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_002EC844; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 14240u);
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC844u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EC844u) [[unlikely]] return; }
L_002EC844:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EC860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] + 18352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] << 6);
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[16], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], 0u + 74u);
    set32(c.r[3], 0u + 224u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 33;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EC958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002EC928; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC91Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002EC91Cu) [[unlikely]] return; }
L_002EC91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002EC95C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002EC928:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002EC948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC93Cu);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EC93Cu) [[unlikely]] return; }
L_002EC93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC958; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002EC948:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EC958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC958u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EC958u) [[unlikely]] return; }
L_002EC958:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002EC95C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002EC980; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC978u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC978u) [[unlikely]] return; }
L_002EC978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_002EC990; } }
L_002EC980:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC98Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EC98Cu) [[unlikely]] return; }
L_002EC98C:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_002EC990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC998u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EC998u) [[unlikely]] return; }
L_002EC998:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9A4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EC9A4u) [[unlikely]] return; }
L_002EC9A4:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9C8u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EC9C8u) [[unlikely]] return; }
L_002EC9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9D0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EC9D0u) [[unlikely]] return; }
L_002EC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9D8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EC9D8u) [[unlikely]] return; }
L_002EC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EC9E0u) [[unlikely]] return; }
L_002EC9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9E8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EC9E8u) [[unlikely]] return; }
L_002EC9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 18416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9F8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EC9F8u) [[unlikely]] return; }
L_002EC9F8:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA08u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002ECA08u) [[unlikely]] return; }
L_002ECA08:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002ECA44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECA40; } }
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA2Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002ECA2Cu) [[unlikely]] return; }
L_002ECA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECA40; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 520u), 0u);
    c.budget -= 3;
L_002ECA40:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002ECA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA4Cu);  if (depth < kMaxDepth) unit_007B(c, 138u, depth + 1u); else { c.pc = 0x002ED430u; return; } if (c.pc != 0x002ECA4Cu) [[unlikely]] return; }
L_002ECA4C:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECA58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 144u, depth + 1u); else { c.pc = 0x002ED520u; return; } if (c.pc != 0x002ECA58u) [[unlikely]] return; }
L_002ECA58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002ECAE4; }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] + 18512u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 18512u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 33;
L_002ECAE4:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECA50u | kUnwind; return; } goto L_002ECA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECAF8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 85u, depth + 1u); else { c.pc = 0x002ECB10u; return; } if (c.pc != 0x002ECAF8u) [[unlikely]] return; }
L_002ECAF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ECB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] <= 0; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002ECB74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECB74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB74u);  if (depth < kMaxDepth) unit_007B(c, 151u, depth + 1u); else { c.pc = 0x002ED790u; return; } if (c.pc != 0x002ECB74u) [[unlikely]] return; }
L_002ECB74:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECB84u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002ECB84u) [[unlikely]] return; }
L_002ECB84:
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
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002ECBE8; } }
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002ECBE8:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1];  goto L_002ECC00; }
L_002ECC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[17].w[0] + 72u), c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_002ECC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 153u, depth + 1u); else { c.pc = 0x002ED840u; return; } if (c.pc != 0x002ECC30u) [[unlikely]] return; }
L_002ECC30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECC3C; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002ECC3C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002ECC40:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC4Cu); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002ECC4Cu) [[unlikely]] return; }
L_002ECC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC54u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002ECC54u) [[unlikely]] return; }
L_002ECC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC5Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002ECC5Cu) [[unlikely]] return; }
L_002ECC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 18416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC6Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002ECC6Cu) [[unlikely]] return; }
L_002ECC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC74u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ECC74u) [[unlikely]] return; }
L_002ECC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC7Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002ECC7Cu) [[unlikely]] return; }
L_002ECC7C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC8Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002ECC8Cu) [[unlikely]] return; }
L_002ECC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC94u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002ECC94u) [[unlikely]] return; }
L_002ECC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECC9Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ECC9Cu) [[unlikely]] return; }
L_002ECC9C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = c.r[2].d[0] & 166ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 592u);  if (t) { goto L_002ECD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECCC0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002ECCC0u) [[unlikely]] return; }
L_002ECCC0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002ECCD8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECCD8:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_002ECD00; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECD28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002ECD28; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECD54; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECD54; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECD54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002ECDAC; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_002ECDAC; } }
L_002ECD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECD8Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002ECD8Cu) [[unlikely]] return; }
L_002ECD8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002ECDAC; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ECDAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECE7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_002ECE2C; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECDECu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002ECDECu) [[unlikely]] return; }
L_002ECDEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECE2C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE04u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0047(c, 268u, depth + 1u); else { c.pc = 0x0021FEB0u; return; } if (c.pc != 0x002ECE04u) [[unlikely]] return; }
L_002ECE04:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.f[0]);  if (t) { goto L_002ECE4C; } }
L_002ECE2C:
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = ld32((c.r[17].w[0] + 156u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002ECE4C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.f[0]);  if (t) { goto L_002ECE9C; } }
L_002ECE7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ECE9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002ECE9C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002ECF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 144u, depth + 1u); else { c.pc = 0x002ED520u; return; } if (c.pc != 0x002ECEC0u) [[unlikely]] return; }
L_002ECEC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002ECF68; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[3].w[0] + 18512u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[3].w[0] + 18512u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 40;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002ECF6C; } }
L_002ECF68:
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002ECF6C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002ECF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF78u);  if (depth < kMaxDepth) unit_007B(c, 141u, depth + 1u); else { c.pc = 0x002ED480u; return; } if (c.pc != 0x002ECF78u) [[unlikely]] return; }
L_002ECF78:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ECFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECFCCu) [[unlikely]] return; }
L_002ECFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 141u, depth + 1u); else { c.pc = 0x002ED480u; return; } if (c.pc != 0x002ECFD4u) [[unlikely]] return; }
L_002ECFD4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ECFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] + 18352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED028u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002ED028u) [[unlikely]] return; }
L_002ED028:
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
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_002ED08C; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002ED08C:
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_002ED0B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_002ED0B4; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002ED0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_002ED0B4:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0D0u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002ED0D0u) [[unlikely]] return; }
L_002ED0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0D8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002ED0D8u) [[unlikely]] return; }
L_002ED0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0E0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002ED0E0u) [[unlikely]] return; }
L_002ED0E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + 18416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0F0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002ED0F0u) [[unlikely]] return; }
L_002ED0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0F8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ED0F8u) [[unlikely]] return; }
L_002ED0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED100u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002ED100u) [[unlikely]] return; }
L_002ED100:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED110u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002ED110u) [[unlikely]] return; }
L_002ED110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED118u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002ED118u) [[unlikely]] return; }
L_002ED118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED120u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ED120u) [[unlikely]] return; }
L_002ED120:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_002ED15C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002ED15C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ED170:
    c.f[3] = ld32((c.r[4].w[0] + 104u));
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_002ED1B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002ED1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED1C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002ED1D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[18], c.r[19].w[0] + 320u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED218u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002ED218u) [[unlikely]] return; }
L_002ED218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED220u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002ED220u) [[unlikely]] return; }
L_002ED220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED230u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002ED230u) [[unlikely]] return; }
L_002ED230:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED240u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002ED240u) [[unlikely]] return; }
L_002ED240:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED24Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002ED24Cu) [[unlikely]] return; }
L_002ED24C:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED258u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002ED258u) [[unlikely]] return; }
L_002ED258:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED268u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002ED268u) [[unlikely]] return; }
L_002ED268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED270u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002ED270u) [[unlikely]] return; }
L_002ED270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED278u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ED278u) [[unlikely]] return; }
L_002ED278:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ED27C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002ED404; }
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED29Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002ED29Cu) [[unlikely]] return; }
L_002ED29C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2A8u); st8((c.r[28].w[0] - 28405u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002ED2A8u) [[unlikely]] return; }
L_002ED2A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2C0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002ED2C0u) [[unlikely]] return; }
L_002ED2C0:
    c.f[3] = ld32((c.r[19].w[0] + 112u));
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2E4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002ED2E4u) [[unlikely]] return; }
L_002ED2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2ECu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002ED2ECu) [[unlikely]] return; }
L_002ED2EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED34C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED338; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED338; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 160u);  if (t) { goto L_002ED3A4; } }
L_002ED324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002ED3A0; } }
L_002ED338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 19184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002ED3A0; } }
L_002ED34C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED38C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED38C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED3A0; } }
L_002ED378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 19824u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002ED3A0; } }
L_002ED38C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 20464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);
    c.budget -= 5;
L_002ED3A0:
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_002ED3A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED3C0u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002ED3C0u) [[unlikely]] return; }
L_002ED3C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED400u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002ED400u) [[unlikely]] return; }
L_002ED400:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002ED404:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED27Cu | kUnwind; return; } goto L_002ED27C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002ED430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_002ED448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED450u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 146u, depth + 1u); else { c.pc = 0x002ED570u; return; } if (c.pc != 0x002ED450u) [[unlikely]] return; }
L_002ED450:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED448u | kUnwind; return; } goto L_002ED448; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002ED480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[3], c.r[19].w[0] + 320u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002ED500; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002ED4C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002ED4F4; }
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 21104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED4ECu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED4ECu) [[unlikely]] return; }
L_002ED4EC:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_002ED4F4:
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED4C0u | kUnwind; return; } goto L_002ED4C0; } }
L_002ED500:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002ED520:
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002ED550; } }
L_002ED530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] + 20u);  goto L_002ED54C; }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.budget -= 4;
L_002ED54C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002ED550:
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ED568; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED530u | kUnwind; return; } goto L_002ED530; } }
    c.budget -= 1;
L_002ED568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 20u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED58Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x002ED58Cu) [[unlikely]] return; }
L_002ED58C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002ED5B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002ED5E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED5E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002ED5E0:
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002ED5E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_002ED5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 18512u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 25;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::paddub(c.r[4], c.r[5], c.r[0]);  goto L_002ED770; }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED76C; } }
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[2].w[0] + 20u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED704; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002ED704:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 8u), c.f[1]);  if (t) { goto L_002ED760; } }
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 1;
L_002ED760:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002ED764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002ED780; } }
L_002ED76C:
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_002ED770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED778u);  if (depth < kMaxDepth) unit_007B(c, 146u, depth + 1u); else { c.pc = 0x002ED570u; return; } if (c.pc != 0x002ED778u) [[unlikely]] return; }
L_002ED778:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_002ED780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED82C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[6], ld32((c.r[4].w[0] + 520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 18352u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 33u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002ED808; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002ED80C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002ED81C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED81C; } }
L_002ED808:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002ED80C:
    st8((c.r[4].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 520u), 0u);  if (t) { goto L_002ED82C; } }
L_002ED81C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 34u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED82Cu); set32(c.r[5], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002ED82Cu) [[unlikely]] return; }
L_002ED82C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002ED840:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[18], ld32((c.r[4].w[0] + 520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 18352u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[19].d[0] = c.r[18].d[0] ^ 0ull;
    c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002ED8D8; } }
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED890u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002ED890u) [[unlikely]] return; }
L_002ED890:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED8A0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002ED8A0u) [[unlikely]] return; }
L_002ED8A0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED8B4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ED8B4:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002ED8D4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002ED8D4:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002ED8D8:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002ED900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
L_002ED920:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED92Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002ED92Cu) [[unlikely]] return; }
L_002ED92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002ED9A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9776u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED984u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002ED984u) [[unlikely]] return; }
L_002ED984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 84u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED99Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002ED99Cu) [[unlikely]] return; }
L_002ED99C:
    c.budget -= 1;
L_002ED9A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED920u | kUnwind; return; } goto L_002ED920; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002ED9D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 21216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002ED9F0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[2], 0u + 16384u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 88u), 0u);
    st16((c.r[4].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { st16((c.r[4].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));  goto L_002EDA30; }
L_002EDA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EDBE4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EDA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002EDD8C; } }
L_002EDA64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDA9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA94u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EDA94u) [[unlikely]] return; }
L_002EDA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDA9Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EDA9Cu) [[unlikely]] return; }
L_002EDA9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2432u);  if (t) { goto L_002EDAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAB4u); set32(c.r[4], c.r[16].w[0] + 2176u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDAB4u) [[unlikely]] return; }
L_002EDAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (t) { goto L_002EDACC; } }
    set32(c.r[4], c.r[16].w[0] + 2432u);
    c.budget -= 1;
L_002EDAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDAC8u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDAC8u) [[unlikely]] return; }
L_002EDAC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_002EDACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + 21120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 21124u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 21128u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB04u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EDB04u) [[unlikely]] return; }
L_002EDB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB0Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EDB0Cu) [[unlikely]] return; }
L_002EDB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB14u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EDB14u) [[unlikely]] return; }
L_002EDB14:
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], c.r[16].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 18u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDD88; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2432u);  if (t) { goto L_002EDB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB50u); set32(c.r[4], c.r[16].w[0] + 2176u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDB50u) [[unlikely]] return; }
L_002EDB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (t) { goto L_002EDB68; } }
    set32(c.r[4], c.r[16].w[0] + 2432u);
    c.budget -= 1;
L_002EDB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB64u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDB64u) [[unlikely]] return; }
L_002EDB64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_002EDB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 21120u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB80u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EDB80u) [[unlikely]] return; }
L_002EDB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDB88u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDB88u) [[unlikely]] return; }
L_002EDB88:
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBA4u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EDBA4u) [[unlikely]] return; }
L_002EDBA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBCCu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EDBCCu) [[unlikely]] return; }
L_002EDBCC:
    set32(c.r[5], 0u + 71u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBDCu); st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EDBDCu) [[unlikely]] return; }
L_002EDBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDD88; } }
L_002EDBE4:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDC44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDC44; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDC44; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002EDC54; } }
L_002EDC44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
L_002EDC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC5Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002EDC5Cu) [[unlikely]] return; }
L_002EDC5C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDC88; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDC88; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002EDCC0; } }
L_002EDC88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCACu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002EDCACu) [[unlikely]] return; }
L_002EDCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002EDCB4u) [[unlikely]] return; }
L_002EDCB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDD88; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002EDCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCC8u);  if (depth < kMaxDepth) unit_004D(c, 91u, depth + 1u); else { c.pc = 0x00234DE0u; return; } if (c.pc != 0x002EDCC8u) [[unlikely]] return; }
L_002EDCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCD0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EDCD0u) [[unlikely]] return; }
L_002EDCD0:
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCECu); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EDCECu) [[unlikely]] return; }
L_002EDCEC:
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
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 64u);  if (t) { goto L_002EDD3C; } }
    set32(c.r[2], 0u + 20480u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002EDD48; } }
    set32(c.r[2], c.r[3].w[0] + 64u);
    c.budget -= 1;
L_002EDD3C:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_002EDD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD50u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EDD50u) [[unlikely]] return; }
L_002EDD50:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD60u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EDD60u) [[unlikely]] return; }
L_002EDD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD68u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EDD68u) [[unlikely]] return; }
L_002EDD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD70u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EDD70u) [[unlikely]] return; }
L_002EDD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD78u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EDD78u) [[unlikely]] return; }
L_002EDD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD80u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EDD80u) [[unlikely]] return; }
L_002EDD80:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EDD88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002EDD8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EDDA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EDDB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EDDC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EDDF4u) [[unlikely]] return; }
L_002EDDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002EDEC8; } }
    c.r[3].d[0] = ld64((c.r[28].w[0] - 28400u));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 13u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[2].w[0] - 7904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 5200u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE58u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EDE58u) [[unlikely]] return; }
L_002EDE58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EDE8C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE84u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EDE84u) [[unlikely]] return; }
L_002EDE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002EDECC; } }
L_002EDE8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 14784u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEC8u); set32(c.r[5], c.r[2].w[0] - 11344u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EDEC8u) [[unlikely]] return; }
L_002EDEC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002EDECC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EDEF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 1u);
    c.budget -= 16;
L_002EDF30:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF3Cu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EDF3Cu) [[unlikely]] return; }
L_002EDF3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002EDFC8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st32((c.r[16].w[0] + 28u), c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] - 7904u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 5200u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 14780u)));
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFB4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EDFB4u) [[unlikely]] return; }
L_002EDFB4:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDFC0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EDFC0u) [[unlikely]] return; }
L_002EDFC0:
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 2;
L_002EDFC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EDF30u | kUnwind; return; } goto L_002EDF30; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EE000:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE03Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EE03Cu) [[unlikely]] return; }
L_002EE03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002EE0F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st32((c.r[16].w[0] + 28u), c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 7904u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 5200u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 14776u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EE0BCu) [[unlikely]] return; }
L_002EE0BC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0F8u); st32((c.r[16].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EE0F8u) [[unlikely]] return; }
L_002EE0F8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EE120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 14752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EE140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[2].w[0] - 14784u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002EE1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.f[1]);  if (t) { goto L_002EE1C4; } }
L_002EE1B8:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[18].w[0] + 116u), c.f[1]);
    c.budget -= 3;
L_002EE1C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 68u)));
    set32(c.r[3], 0u + 64u);
    set32(c.r[2], 0u + 224u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[18].w[0] + 104u), c.f[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE20C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EE20C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE228; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[18].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002EE228:
    st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002EE294; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002EE264; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE258u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002EE258u) [[unlikely]] return; }
L_002EE258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_002EE298; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002EE264:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002EE284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE278u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EE278u) [[unlikely]] return; }
L_002EE278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE294; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_002EE284:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EE294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE294u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002EE294u) [[unlikely]] return; }
L_002EE294:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_002EE298:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EE2C0; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2B8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EE2B8u) [[unlikely]] return; }
L_002EE2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 192u);  if (t) { goto L_002EE2D0; } }
L_002EE2C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2CCu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EE2CCu) [[unlikely]] return; }
L_002EE2CC:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 1;
L_002EE2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2D8u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EE2D8u) [[unlikely]] return; }
L_002EE2D8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE2E4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EE2E4u) [[unlikely]] return; }
L_002EE2E4:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE308u); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EE308u) [[unlikely]] return; }
L_002EE308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE310u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EE310u) [[unlikely]] return; }
L_002EE310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE318u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EE318u) [[unlikely]] return; }
L_002EE318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE320u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EE320u) [[unlikely]] return; }
L_002EE320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE328u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EE328u) [[unlikely]] return; }
L_002EE328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE330u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EE330u) [[unlikely]] return; }
L_002EE330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 14768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE340u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EE340u) [[unlikely]] return; }
L_002EE340:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE350u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002EE350u) [[unlikely]] return; }
L_002EE350:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE3E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE3E4; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE390u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EE390u) [[unlikely]] return; }
L_002EE390:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3A0u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EE3A0u) [[unlikely]] return; }
L_002EE3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3A8u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EE3A8u) [[unlikely]] return; }
L_002EE3A8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EE3B4u) [[unlikely]] return; }
L_002EE3B4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3C4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002EE3C4u) [[unlikely]] return; }
L_002EE3C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EE3E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE3E4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 3;
L_002EE3E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002EE400; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 531u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3FCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004A(c, 77u, depth + 1u); else { c.pc = 0x00229990u; return; } if (c.pc != 0x002EE3FCu) [[unlikely]] return; }
L_002EE3FC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002EE400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE408u);  if (depth < kMaxDepth) unit_007B(c, 230u, depth + 1u); else { c.pc = 0x002EE420u; return; } if (c.pc != 0x002EE408u) [[unlikely]] return; }
L_002EE408:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EE420:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 14784u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_002EE4B4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4B4u);  if (depth < kMaxDepth) unit_007B(c, 305u, depth + 1u); else { c.pc = 0x002EF040u; return; } if (c.pc != 0x002EE4B4u) [[unlikely]] return; }
L_002EE4B4:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE4C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002EE4C4u) [[unlikely]] return; }
L_002EE4C4:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_002EE528; } }
    st32((c.r[19].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002EE528:
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE57C; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_002EE564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002EE568; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002EE564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002EE568:
    c.f[0] = c.r[2].w[0];
    st32((c.r[19].w[0] + 72u), c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 5;
L_002EE57C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EE59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE590u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 311u, depth + 1u); else { c.pc = 0x002EF170u; return; } if (c.pc != 0x002EE590u) [[unlikely]] return; }
L_002EE590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE59C; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002EE59C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002EE5C4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5B8u); set32(c.r[6], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EE5B8u) [[unlikely]] return; }
L_002EE5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002EE5D4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002EE5C4:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5D0u); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EE5D0u) [[unlikely]] return; }
L_002EE5D0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002EE5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5DCu);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002EE5DCu) [[unlikely]] return; }
L_002EE5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5E4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EE5E4u) [[unlikely]] return; }
L_002EE5E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 14768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5F4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002EE5F4u) [[unlikely]] return; }
L_002EE5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EE5FCu) [[unlikely]] return; }
L_002EE5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE604u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EE604u) [[unlikely]] return; }
L_002EE604:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE614u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EE614u) [[unlikely]] return; }
L_002EE614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE61Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EE61Cu) [[unlikely]] return; }
L_002EE61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE624u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EE624u) [[unlikely]] return; }
L_002EE624:
    set32(c.r[18], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002EE734; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 575u));  if (t) { goto L_002EE644; } }
    c.r[3].d[0] = c.r[4].d[0] & 166ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_002EE644:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EE6C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[19].w[0] + 192u);  if (t) { goto L_002EE82C; } }
    c.f[4] = ld32((c.r[19].w[0] + 144u));
    c.f[3] = ld32((c.r[19].w[0] + 148u));
    c.f[2] = ld32((c.r[19].w[0] + 152u));
    c.f[1] = ld32((c.r[19].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 32u), c.f[4]);
    st32((c.r[19].w[0] + 36u), c.f[3]);
    st32((c.r[19].w[0] + 40u), c.f[2]);
    st32((c.r[19].w[0] + 44u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 116u), c.f[0]);  if (t) { goto L_002EE828; } }
L_002EE6C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE6D8u); set32(c.r[4], c.r[2].w[0] + 592u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002EE6D8u) [[unlikely]] return; }
L_002EE6D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE718; } }
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE828; } }
L_002EE718:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE828; } }
L_002EE734:
    c.f[4] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[5] = c.r[2].w[0];
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 20u, c.f[4], c.f[5]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 21u, c.f[2], c.f[5]);
    fpu_div(c, 22u, c.f[0], c.f[5]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE78Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EE78Cu) [[unlikely]] return; }
L_002EE78C:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE79Cu); c.f[14] = c.f[22];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EE79Cu) [[unlikely]] return; }
L_002EE79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7A4u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EE7A4u) [[unlikely]] return; }
L_002EE7A4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EE828; } }
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EE828; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE828; } }
    c.f[4] = ld32((c.r[19].w[0] + 144u));
    c.f[3] = ld32((c.r[19].w[0] + 148u));
    c.f[2] = ld32((c.r[19].w[0] + 152u));
    c.f[1] = ld32((c.r[19].w[0] + 156u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 32u), c.f[4]);
    st32((c.r[19].w[0] + 36u), c.f[3]);
    st32((c.r[19].w[0] + 40u), c.f[2]);
    st32((c.r[19].w[0] + 44u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 16;
L_002EE828:
    set32(c.r[6], c.r[19].w[0] + 192u);
    c.budget -= 1;
L_002EE82C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002EE830:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE830u | kUnwind; return; } goto L_002EE830; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002EE880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EE8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 14784u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE918u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002EE918u) [[unlikely]] return; }
L_002EE918:
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
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002EE97C; } }
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_002EE97C:
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EE9CC; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = c.f[0];  goto L_002EE9B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002EE9BC; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002EE9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002EE9BC:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_002EE9CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002EE9F4; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9E8u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EE9E8u) [[unlikely]] return; }
L_002EE9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002EEA04; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002EE9F4:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA00u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EEA00u) [[unlikely]] return; }
L_002EEA00:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002EEA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA0Cu);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002EEA0Cu) [[unlikely]] return; }
L_002EEA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA14u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EEA14u) [[unlikely]] return; }
L_002EEA14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] - 14768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA24u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 15u, depth + 1u); else { c.pc = 0x0013C690u; return; } if (c.pc != 0x002EEA24u) [[unlikely]] return; }
L_002EEA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EEA2Cu) [[unlikely]] return; }
L_002EEA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA34u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EEA34u) [[unlikely]] return; }
L_002EEA34:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA44u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EEA44u) [[unlikely]] return; }
L_002EEA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EEA4Cu) [[unlikely]] return; }
L_002EEA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EEA54u) [[unlikely]] return; }
L_002EEA54:
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_002EEAA4; } }
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_002EEAB0; } }
L_002EEAA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EEAB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EEAC8; } }
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_002EEAC8:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002EEAF0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] - 14784u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.f[3] = 0u;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEB80; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_002EEB74; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EEB74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EEB8C; } }
L_002EEB80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002EEB8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EEBA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EEBB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 14736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EEBD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC10u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EEC10u) [[unlikely]] return; }
L_002EEC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EEC18u) [[unlikely]] return; }
L_002EEC18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC28u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002EEC28u) [[unlikely]] return; }
L_002EEC28:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC38u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EEC38u) [[unlikely]] return; }
L_002EEC38:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC44u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EEC44u) [[unlikely]] return; }
L_002EEC44:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC50u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EEC50u) [[unlikely]] return; }
L_002EEC50:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EEC60u) [[unlikely]] return; }
L_002EEC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC68u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EEC68u) [[unlikely]] return; }
L_002EEC68:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC78u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002EEC78u) [[unlikely]] return; }
L_002EEC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC80u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EEC80u) [[unlikely]] return; }
L_002EEC80:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EECA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 12544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (t) { goto L_002EECB4; } }
L_002EECA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 14720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);
    c.budget -= 4;
L_002EECB4:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EECD4u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002EECD4u) [[unlikely]] return; }
L_002EECD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 34u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED14u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x002EED14u) [[unlikely]] return; }
L_002EED14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002EED30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[5], c.r[2].w[0] - 28448u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14780u)));
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[19], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 68u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002EEDA0; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002EEDA0:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EEDB0; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_002EEDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDB8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EEDB8u) [[unlikely]] return; }
L_002EEDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EEDC0u) [[unlikely]] return; }
L_002EEDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDD0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002EEDD0u) [[unlikely]] return; }
L_002EEDD0:
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDE0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EEDE0u) [[unlikely]] return; }
L_002EEDE0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EEDECu) [[unlikely]] return; }
L_002EEDEC:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEDF8u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EEDF8u) [[unlikely]] return; }
L_002EEDF8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EEE08u) [[unlikely]] return; }
L_002EEE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE10u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EEE10u) [[unlikely]] return; }
L_002EEE10:
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = ld32((c.r[18].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE20u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002EEE20u) [[unlikely]] return; }
L_002EEE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE28u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EEE28u) [[unlikely]] return; }
L_002EEE28:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10368u);
    set32(c.r[3], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
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
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE98u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002EEE98u) [[unlikely]] return; }
L_002EEE98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10176u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEC4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00172FD0u; return; } if (c.pc != 0x002EEEC4u) [[unlikely]] return; }
L_002EEEC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002EEEE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF20u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EEF20u) [[unlikely]] return; }
L_002EEF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002EEF28u) [[unlikely]] return; }
L_002EEF28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF38u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002EEF38u) [[unlikely]] return; }
L_002EEF38:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF48u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002EEF48u) [[unlikely]] return; }
L_002EEF48:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF54u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EEF54u) [[unlikely]] return; }
L_002EEF54:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF60u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002EEF60u) [[unlikely]] return; }
L_002EEF60:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EEF70u) [[unlikely]] return; }
L_002EEF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF78u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EEF78u) [[unlikely]] return; }
L_002EEF78:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF88u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002EEF88u) [[unlikely]] return; }
L_002EEF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEF90u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EEF90u) [[unlikely]] return; }
L_002EEF90:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10032u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFF8u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002EEFF8u) [[unlikely]] return; }
L_002EEFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 10048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF01Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00172FD0u; return; } if (c.pc != 0x002EF01Cu) [[unlikely]] return; }
L_002EF01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF024u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002EF024u) [[unlikely]] return; }
L_002EF024:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002EF040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002EF150; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[3], c.r[3].w[0] - 14784u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002EF0D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002EF0DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002EF0EC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF0EC; } }
L_002EF0D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002EF0DC:
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 520u), 0u);  if (t) { goto L_002EF150; } }
L_002EF0EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF118u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EF118u) [[unlikely]] return; }
L_002EF118:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF128u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EF128u) [[unlikely]] return; }
L_002EF128:
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF134u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002EF134u) [[unlikely]] return; }
L_002EF134:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF140u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002EF140u) [[unlikely]] return; }
L_002EF140:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 70u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF150u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 130u, depth + 1u); else { c.pc = 0x002DD720u; return; } if (c.pc != 0x002EF150u) [[unlikely]] return; }
L_002EF150:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EF170:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] - 14784u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[19].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002EF220; } }
    c.f[12] = ld32((c.r[18].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002EF1D8u) [[unlikely]] return; }
L_002EF1D8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF1E8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002EF1E8u) [[unlikely]] return; }
L_002EF1E8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002EF1FC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002EF1FC:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002EF21C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002EF21C:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002EF220:
    mmi::paddub(c.r[2], c.r[19], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002EF250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF274u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EF274u) [[unlikely]] return; }
L_002EF274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002EF2DC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 3168u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] - 1408u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2C8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EF2C8u) [[unlikely]] return; }
L_002EF2C8:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002EF2DCu) [[unlikely]] return; }
L_002EF2DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EF2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
L_002EF30C:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF318u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002EF318u) [[unlikely]] return; }
L_002EF318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_002EF378; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[2].w[0] + 3840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[2], c.r[2].w[0] + 4288u);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF374u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002EF374u) [[unlikely]] return; }
L_002EF374:
    c.budget -= 1;
L_002EF378:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF30Cu | kUnwind; return; } goto L_002EF30C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EF3A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 9856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EF3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 33u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].d[0] = 0ull | 32768ull;
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[5], c.r[5].w[0] - 10016u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[3], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[3], c.r[0]);
    st32((c.r[4].w[0] + 320u), c.f[3]);
    st32((c.r[4].w[0] + 324u), c.f[2]);
    st32((c.r[4].w[0] + 328u), c.f[1]);
    st32((c.r[4].w[0] + 332u), c.f[0]);
    st32((c.r[4].w[0] + 400u), 0u);
    c.budget -= 35;
L_002EF44C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF44Cu | kUnwind; return; } goto L_002EF44C; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 2;
L_002EF470:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[7].w[0] - 5248u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[7].w[0] - 5600u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[7].w[0] - 5952u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[12], c.r[7].w[0] - 6304u);
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[11], c.r[7].w[0] - 6656u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[7].w[0] - 7008u);
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[7].w[0] - 7360u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[7].w[0] - 7712u);
    set32(c.r[7], c.r[13].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[25], c.r[7].w[0] - 8064u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[24], c.r[7].w[0] - 8416u);
    set32(c.r[7], c.r[12].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[15], c.r[7].w[0] - 8768u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[14], c.r[7].w[0] - 9120u);
    set32(c.r[7], c.r[11].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[13], c.r[7].w[0] - 9472u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[12], c.r[7].w[0] - 9824u);
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[11], c.r[7].w[0] - 10176u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[7].w[0] - 10528u);
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[7].w[0] - 10880u);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[7].w[0] - 11232u);
    set32(c.r[7], c.r[31].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[31].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[25].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[31].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    c.r[7].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[25], c.r[31].w[0] << 4);
    set32(c.r[25], c.r[25].w[0] + c.r[31].w[0]);
    set32(c.r[25], c.r[25].w[0] << 2);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], c.r[5].w[0] + c.r[24].w[0]);
    st32((c.r[24].w[0]), 0u);
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[24], c.r[25].w[0] << 4);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    set32(c.r[24], c.r[24].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[5].w[0] + c.r[15].w[0]);
    st32((c.r[15].w[0]), 0u);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[15], c.r[24].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[5].w[0] + c.r[14].w[0]);
    st32((c.r[14].w[0]), 0u);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[14], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[5].w[0] + c.r[13].w[0]);
    st32((c.r[13].w[0]), 0u);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[13], c.r[14].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);
    st32((c.r[12].w[0]), 0u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[12], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), 0u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), 0u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8384u)));
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 166;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[8].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF470u | kUnwind; return; } goto L_002EF470; } }
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF714u); st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007B(c, 328u, depth + 1u); else { c.pc = 0x002EF730u; return; } if (c.pc != 0x002EF714u) [[unlikely]] return; }
L_002EF714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF71Cu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002EF71Cu) [[unlikely]] return; }
L_002EF71C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002EF730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[7], c.r[16].w[0] + 320u);  if (t) { goto L_002EF92C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002EF89C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EF7E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));  if (t) { goto L_002EF9EC; } }
L_002EF788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF7C0; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7A0u); st32((c.r[18].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002EF7A0u) [[unlikely]] return; }
L_002EF7A0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7B4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 29u, depth + 1u); else { c.pc = 0x002F0DB0u; return; } if (c.pc != 0x002EF7B4u) [[unlikely]] return; }
L_002EF7B4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7C0u); st8((c.r[18].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007B(c, 318u, depth + 1u); else { c.pc = 0x002EF2F0u; return; } if (c.pc != 0x002EF7C0u) [[unlikely]] return; }
L_002EF7C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EF9E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF9E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF7E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF7FC:
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF84C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF84C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 592u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF84C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002EF84C; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002EF84C:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF87C; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF87C:
    c.f[0] = ld32((c.r[16].w[0] + 7740u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.f[0]);  if (t) { goto L_002EF9E8; } }
L_002EF89C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF8B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EF8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF8C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002EF8F0; } }
    set32(c.r[2], 0u + 16384u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EF8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002EF918; } }
L_002EF8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002EF918; } }
L_002EF8F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002EF91C; } }
    c.r[2].d[0] = 0ull | 49152ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EF914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002EF918; } }
L_002EF914:
    st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002EF918:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002EF91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF924u);  if (depth < kMaxDepth) unit_007C(c, 26u, depth + 1u); else { c.pc = 0x002F0CF0u; return; } if (c.pc != 0x002EF924u) [[unlikely]] return; }
L_002EF924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF9E8; } }
L_002EF92C:
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF99C; } }
    st32((c.r[17].w[0] + 80u), 0u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
L_002EF958:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EF958u | kUnwind; return; } goto L_002EF958; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002EF9E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EF9E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002EF9E8; } }
L_002EF99C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF9B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002EF9C4; } }
L_002EF9B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002EF9C4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002EF9C4:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F600000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9E8u); st32((c.r[17].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 26u, depth + 1u); else { c.pc = 0x002F0CF0u; return; } if (c.pc != 0x002EF9E8u) [[unlikely]] return; }
L_002EF9E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 1;
L_002EF9EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EFA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9FCu); set32(c.r[4], c.r[16].w[0] + 2560u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002EF9FCu) [[unlikely]] return; }
L_002EF9FC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA0Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002EFA0Cu) [[unlikely]] return; }
L_002EFA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA14u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EFA14u) [[unlikely]] return; }
L_002EFA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA1Cu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002EFA1Cu) [[unlikely]] return; }
L_002EFA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA24u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002EFA24u) [[unlikely]] return; }
L_002EFA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA2Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002EFA2Cu) [[unlikely]] return; }
L_002EFA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007B(c, 348u, depth + 1u); else { c.pc = 0x002EFAF0u; return; } if (c.pc != 0x002EFA34u) [[unlikely]] return; }
L_002EFA34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EFA48; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002EFA48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002EFA60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002EFA70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002EFA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002EFADC; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 26064u);
    set32(c.r[2], c.r[2].w[0] + 27600u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[5], c.r[16].w[0] + 192u);
    set32(c.r[6], 0u + 64u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAC8u); set32(c.r[4], c.r[2].w[0] + 20928u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x002EFAC8u) [[unlikely]] return; }
L_002EFAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007C(c, 20u, depth + 1u); else { c.pc = 0x002F0830u; return; } if (c.pc != 0x002EFAD0u) [[unlikely]] return; }
L_002EFAD0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFADCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016E040u; return; } if (c.pc != 0x002EFADCu) [[unlikely]] return; }
L_002EFADC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002EFAF0:
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
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.f[12] = ld32((c.r[4].w[0] + 400u));
    c.f[22] = 0u;
    set32(c.r[2], c.r[4].w[0] + 320u);
    c.f[20] = c.f[22];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB48u); c.f[21] = c.f[22];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002EFB48u) [[unlikely]] return; }
L_002EFB48:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u + 17u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[22].d[0] = c.r[2].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_002EFFE8; } }
L_002EFB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB78u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002EFB78u) [[unlikely]] return; }
L_002EFB78:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002EFBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB8Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002EFB8Cu) [[unlikely]] return; }
L_002EFB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x404B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19274ull;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002EFBB0; } }
L_002EFBA4:
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 3;
L_002EFBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE7D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DFD0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFA60000u);
    c.r[2].d[0] = c.r[2].d[0] | 18140ull;
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 260u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[23], c.r[29].w[0] + 264u);
    st32((c.r[30].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 18140ull;
    set32(c.r[20], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[21], c.r[29].w[0] + 280u);
    st32((c.r[20].w[0]), 0u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC54u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC54u) [[unlikely]] return; }
L_002EFC54:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC60u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC60u) [[unlikely]] return; }
L_002EFC60:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC6Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC6Cu) [[unlikely]] return; }
L_002EFC6C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC78u) [[unlikely]] return; }
L_002EFC78:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC84u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC84u) [[unlikely]] return; }
L_002EFC84:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC90u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002EFC90u) [[unlikely]] return; }
L_002EFC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 5248u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[2].w[0] - 5600u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[22]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 5952u);
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[6], c.r[2].w[0] - 6304u);
    c.f[0] = fp::add(c.f[3], c.f[20]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 6656u);
    c.f[0] = fp::add(c.f[4], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[2].w[0] - 7008u);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[10], c.r[3].w[0] - 7712u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[9], c.r[3].w[0] - 8064u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[8], c.r[3].w[0] - 8416u);
    c.f[1] = fp::add(c.f[3], c.f[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[3].w[0] - 8768u);
    c.f[0] = fp::add(c.f[4], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], c.r[3].w[0] - 9120u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[21]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[3].w[0] - 9472u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[3].w[0] - 9824u);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[22]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[2].w[0] - 10176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[1] = fp::add(c.f[3], c.f[1]);
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[20]);
    set32(c.r[10], c.r[19].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10528u);
    st32((c.r[10].w[0]), c.f[3]);
    set32(c.r[10], c.r[29].w[0] + 232u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[10].w[0]));
    set32(c.r[12], c.r[13].w[0] << 4);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[12].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[21]);
    set32(c.r[9], c.r[19].w[0] + c.r[9].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[9].w[0]), c.f[3]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[9].w[0];
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[9], c.r[16].w[0] + 1u);
    fpu_div(c, 2u, c.f[2], c.f[4]);
    c.r[16].d[0] = c.r[9].d[0] << 56;
    c.f[3] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[11], c.r[10].w[0] - 10880u);
    set32(c.r[9], c.r[12].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[19].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.f[3]);
    set32(c.r[8], c.r[29].w[0] + 244u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[8].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[10], c.r[10].w[0] - 11232u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.f[3]);
    set32(c.r[7], c.r[29].w[0] + 248u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[22] = fp::add(c.f[22], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.f[3]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.f[2]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[30].w[0]));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    fpu_div(c, 1u, c.f[1], c.f[4]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.f[2]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[23].w[0]));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[2]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[20] = fp::add(c.f[20], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 4u);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 214;
L_002EFFE8:
    c.r[20].d[0] = c.r[16].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[2].d[0] = c.r[20].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFB70u | kUnwind; return; } goto L_002EFB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0004u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007C(c, 2u, depth);
}

}
