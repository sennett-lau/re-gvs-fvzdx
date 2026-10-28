#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0084[4096] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 7,
    0, 8, 0, 0, 9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40,
    0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72,
    0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97,
    0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0,
    0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189,
    0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 313, 0, 0, 0, 0, 0,
    314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0,
    324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0084(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00310000;
    case 2u: goto L_00310010;
    case 3u: goto L_00310014;
    case 4u: goto L_00310030;
    case 5u: goto L_00310070;
    case 6u: goto L_00310074;
    case 7u: goto L_0031007C;
    case 8u: goto L_00310084;
    case 9u: goto L_00310090;
    case 10u: goto L_00310094;
    case 11u: goto L_00310098;
    case 12u: goto L_003100D0;
    case 13u: goto L_0031012C;
    case 14u: goto L_00310134;
    case 15u: goto L_00310148;
    case 16u: goto L_00310150;
    case 17u: goto L_00310158;
    case 18u: goto L_00310168;
    case 19u: goto L_00310170;
    case 20u: goto L_00310188;
    case 21u: goto L_00310234;
    case 22u: goto L_00310244;
    case 23u: goto L_003102B0;
    case 24u: goto L_003102C0;
    case 25u: goto L_003102D8;
    case 26u: goto L_003102E0;
    case 27u: goto L_003102EC;
    case 28u: goto L_003102F4;
    case 29u: goto L_00310300;
    case 30u: goto L_00310310;
    case 31u: goto L_0031033C;
    case 32u: goto L_00310344;
    case 33u: goto L_00310350;
    case 34u: goto L_00310358;
    case 35u: goto L_00310364;
    case 36u: goto L_00310374;
    case 37u: goto L_003103AC;
    case 38u: goto L_003103BC;
    case 39u: goto L_003103F4;
    case 40u: goto L_003103FC;
    case 41u: goto L_00310408;
    case 42u: goto L_00310410;
    case 43u: goto L_0031041C;
    case 44u: goto L_0031051C;
    case 45u: goto L_00310524;
    case 46u: goto L_00310578;
    case 47u: goto L_0031060C;
    case 48u: goto L_0031061C;
    case 49u: goto L_00310628;
    case 50u: goto L_00310650;
    case 51u: goto L_00310658;
    case 52u: goto L_00310664;
    case 53u: goto L_0031066C;
    case 54u: goto L_00310678;
    case 55u: goto L_00310688;
    case 56u: goto L_003106B8;
    case 57u: goto L_003106C0;
    case 58u: goto L_003106CC;
    case 59u: goto L_003106D4;
    case 60u: goto L_003106E0;
    case 61u: goto L_00310810;
    case 62u: goto L_00310818;
    case 63u: goto L_00310860;
    case 64u: goto L_0031087C;
    case 65u: goto L_00310888;
    case 66u: goto L_00310890;
    case 67u: goto L_003108A0;
    case 68u: goto L_00310910;
    case 69u: goto L_00310934;
    case 70u: goto L_00310940;
    case 71u: goto L_0031096C;
    case 72u: goto L_0031097C;
    case 73u: goto L_00310988;
    case 74u: goto L_00310990;
    case 75u: goto L_0031099C;
    case 76u: goto L_003109D8;
    case 77u: goto L_003109EC;
    case 78u: goto L_003109F4;
    case 79u: goto L_00310A18;
    case 80u: goto L_00310A28;
    case 81u: goto L_00310A34;
    case 82u: goto L_00310A3C;
    case 83u: goto L_00310A48;
    case 84u: goto L_00310A58;
    case 85u: goto L_00310A68;
    case 86u: goto L_00310AB0;
    case 87u: goto L_00310AB8;
    case 88u: goto L_00310ADC;
    case 89u: goto L_00310AFC;
    case 90u: goto L_00310B0C;
    case 91u: goto L_00310B18;
    case 92u: goto L_00310B20;
    case 93u: goto L_00310B2C;
    case 94u: goto L_00310B3C;
    case 95u: goto L_00310B50;
    case 96u: goto L_00310B68;
    case 97u: goto L_00310B7C;
    case 98u: goto L_00310B88;
    case 99u: goto L_00310B90;
    case 100u: goto L_00310BA0;
    case 101u: goto L_00310BC0;
    case 102u: goto L_00310BC8;
    case 103u: goto L_00310BE8;
    case 104u: goto L_00310C20;
    case 105u: goto L_00310C30;
    case 106u: goto L_00310C3C;
    case 107u: goto L_00310C44;
    case 108u: goto L_00310C50;
    case 109u: goto L_00310D30;
    case 110u: goto L_00310D8C;
    case 111u: goto L_00310DB0;
    case 112u: goto L_00310DF8;
    case 113u: goto L_00310E14;
    case 114u: goto L_00310EB0;
    case 115u: goto L_00310ED0;
    case 116u: goto L_00310EFC;
    case 117u: goto L_00310F10;
    case 118u: goto L_00310F48;
    case 119u: goto L_00310F74;
    case 120u: goto L_00310F88;
    case 121u: goto L_00310FAC;
    case 122u: goto L_00310FCC;
    case 123u: goto L_00310FE0;
    case 124u: goto L_00311004;
    case 125u: goto L_00311030;
    case 126u: goto L_00311044;
    case 127u: goto L_00311058;
    case 128u: goto L_003110A0;
    case 129u: goto L_003110AC;
    case 130u: goto L_003110D0;
    case 131u: goto L_003110EC;
    case 132u: goto L_00311110;
    case 133u: goto L_0031113C;
    case 134u: goto L_00311150;
    case 135u: goto L_0031116C;
    case 136u: goto L_00311184;
    case 137u: goto L_00311194;
    case 138u: goto L_003111A0;
    case 139u: goto L_003111A8;
    case 140u: goto L_003111B8;
    case 141u: goto L_003111CC;
    case 142u: goto L_003111F0;
    case 143u: goto L_003111F8;
    case 144u: goto L_00311218;
    case 145u: goto L_00311258;
    case 146u: goto L_003112A0;
    case 147u: goto L_003112AC;
    case 148u: goto L_003112D0;
    case 149u: goto L_00311330;
    case 150u: goto L_00311374;
    case 151u: goto L_00311384;
    case 152u: goto L_00311390;
    case 153u: goto L_00311398;
    case 154u: goto L_003113B0;
    case 155u: goto L_003113B8;
    case 156u: goto L_003113D4;
    case 157u: goto L_00311410;
    case 158u: goto L_003114B4;
    case 159u: goto L_003114C4;
    case 160u: goto L_0031151C;
    case 161u: goto L_00311524;
    case 162u: goto L_00311534;
    case 163u: goto L_00311540;
    case 164u: goto L_00311548;
    case 165u: goto L_00311554;
    case 166u: goto L_00311570;
    case 167u: goto L_00311578;
    case 168u: goto L_00311588;
    case 169u: goto L_00311590;
    case 170u: goto L_003115AC;
    case 171u: goto L_003115F0;
    case 172u: goto L_00311620;
    case 173u: goto L_0031167C;
    case 174u: goto L_00311684;
    case 175u: goto L_0031168C;
    case 176u: goto L_00311694;
    case 177u: goto L_0031169C;
    case 178u: goto L_003116A4;
    case 179u: goto L_003116AC;
    case 180u: goto L_003116B4;
    case 181u: goto L_003116BC;
    case 182u: goto L_003116C4;
    case 183u: goto L_003116CC;
    case 184u: goto L_003116D4;
    case 185u: goto L_003116DC;
    case 186u: goto L_003116E4;
    case 187u: goto L_003116EC;
    case 188u: goto L_003116F4;
    case 189u: goto L_003116FC;
    case 190u: goto L_00311704;
    case 191u: goto L_0031170C;
    case 192u: goto L_00311714;
    case 193u: goto L_0031171C;
    case 194u: goto L_00311724;
    case 195u: goto L_0031172C;
    case 196u: goto L_00311734;
    case 197u: goto L_0031173C;
    case 198u: goto L_00311744;
    case 199u: goto L_0031174C;
    case 200u: goto L_00311754;
    case 201u: goto L_00311770;
    case 202u: goto L_00311858;
    case 203u: goto L_00311864;
    case 204u: goto L_003118A8;
    case 205u: goto L_003118B4;
    case 206u: goto L_003118C8;
    case 207u: goto L_003118D4;
    case 208u: goto L_003119C0;
    case 209u: goto L_00311A0C;
    case 210u: goto L_00311A24;
    case 211u: goto L_00311A5C;
    case 212u: goto L_00311A74;
    case 213u: goto L_00311A88;
    case 214u: goto L_00311AE8;
    case 215u: goto L_00311B40;
    case 216u: goto L_00311B54;
    case 217u: goto L_00311B6C;
    case 218u: goto L_00311B84;
    case 219u: goto L_00311B9C;
    case 220u: goto L_00311BB0;
    case 221u: goto L_00311BE8;
    case 222u: goto L_00311C00;
    case 223u: goto L_00311C9C;
    case 224u: goto L_00311CE0;
    case 225u: goto L_00311CF0;
    case 226u: goto L_00311D50;
    case 227u: goto L_00311D68;
    case 228u: goto L_00311DA0;
    case 229u: goto L_00311DB4;
    case 230u: goto L_00311DC8;
    case 231u: goto L_00311DF8;
    case 232u: goto L_00311EF0;
    case 233u: goto L_00311F4C;
    case 234u: goto L_00311FE8;
    case 235u: goto L_00312000;
    case 236u: goto L_00312128;
    case 237u: goto L_00312184;
    case 238u: goto L_003121C0;
    case 239u: goto L_003121FC;
    case 240u: goto L_003122D8;
    case 241u: goto L_0031236C;
    case 242u: goto L_0031237C;
    case 243u: goto L_003123EC;
    case 244u: goto L_00312430;
    case 245u: goto L_00312440;
    case 246u: goto L_003124A0;
    case 247u: goto L_003124B8;
    case 248u: goto L_003124F0;
    case 249u: goto L_00312508;
    case 250u: goto L_0031251C;
    case 251u: goto L_00312574;
    case 252u: goto L_003125AC;
    case 253u: goto L_00312604;
    case 254u: goto L_0031261C;
    case 255u: goto L_003127E4;
    case 256u: goto L_00312820;
    case 257u: goto L_00312874;
    case 258u: goto L_0031288C;
    case 259u: goto L_003128C4;
    case 260u: goto L_003128DC;
    case 261u: goto L_003128F0;
    case 262u: goto L_00312904;
    case 263u: goto L_00312960;
    case 264u: goto L_00312998;
    case 265u: goto L_003129F0;
    case 266u: goto L_00312A08;
    case 267u: goto L_00312B28;
    case 268u: goto L_00312B60;
    case 269u: goto L_00312B70;
    case 270u: goto L_00312B80;
    case 271u: goto L_00312BCC;
    case 272u: goto L_00312BE4;
    case 273u: goto L_00312C1C;
    case 274u: goto L_00312C34;
    case 275u: goto L_00312C48;
    case 276u: goto L_00312CA0;
    case 277u: goto L_00312CC8;
    case 278u: goto L_00312D5C;
    case 279u: goto L_00312D74;
    case 280u: goto L_00312E00;
    case 281u: goto L_00312E40;
    case 282u: goto L_00312E50;
    case 283u: goto L_00312E9C;
    case 284u: goto L_00312EB4;
    case 285u: goto L_00312EEC;
    case 286u: goto L_00312F04;
    case 287u: goto L_00312F18;
    case 288u: goto L_00312F70;
    case 289u: goto L_00312F98;
    case 290u: goto L_0031302C;
    case 291u: goto L_00313044;
    case 292u: goto L_003130D0;
    case 293u: goto L_00313110;
    case 294u: goto L_00313128;
    case 295u: goto L_00313130;
    case 296u: goto L_00313138;
    case 297u: goto L_00313148;
    case 298u: goto L_00313154;
    case 299u: goto L_0031315C;
    case 300u: goto L_00313168;
    case 301u: goto L_00313210;
    case 302u: goto L_00313240;
    case 303u: goto L_00313290;
    case 304u: goto L_003132B8;
    case 305u: goto L_003132C0;
    case 306u: goto L_00313310;
    case 307u: goto L_00313340;
    case 308u: goto L_0031338C;
    case 309u: goto L_003133B4;
    case 310u: goto L_003133BC;
    case 311u: goto L_00313410;
    case 312u: goto L_00313464;
    case 313u: goto L_00313468;
    case 314u: goto L_00313480;
    case 315u: goto L_00313488;
    case 316u: goto L_0031349C;
    case 317u: goto L_003135A0;
    case 318u: goto L_003135F4;
    case 319u: goto L_00313618;
    case 320u: goto L_00313644;
    case 321u: goto L_00313654;
    case 322u: goto L_00313660;
    case 323u: goto L_00313668;
    case 324u: goto L_00313680;
    case 325u: goto L_00313688;
    case 326u: goto L_003136A4;
    case 327u: goto L_003136E0;
    case 328u: goto L_00313770;
    case 329u: goto L_003137DC;
    case 330u: goto L_00313840;
    case 331u: goto L_003138BC;
    case 332u: goto L_003138D8;
    case 333u: goto L_003138F4;
    case 334u: goto L_00313910;
    case 335u: goto L_00313A10;
    case 336u: goto L_00313A20;
    case 337u: goto L_00313A30;
    case 338u: goto L_00313B38;
    case 339u: goto L_00313B48;
    case 340u: goto L_00313B58;
    case 341u: goto L_00313B60;
    case 342u: goto L_00313C64;
    case 343u: goto L_00313C74;
    case 344u: goto L_00313C80;
    case 345u: goto L_00313D00;
    case 346u: goto L_00313D10;
    case 347u: goto L_00313D28;
    case 348u: goto L_00313D64;
    case 349u: goto L_00313D70;
    case 350u: goto L_00313E14;
    case 351u: goto L_00313E40;
    case 352u: goto L_00313E48;
    case 353u: goto L_00313E54;
    case 354u: goto L_00313E60;
    case 355u: goto L_00313E6C;
    case 356u: goto L_00313E88;
    case 357u: goto L_00313EA0;
    case 358u: goto L_00313EE0;
    case 359u: goto L_00313FD0;
    default: bad_entry(c, 0x00310000u); return;
    }
L_00310000:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310070; } }
L_00310010:
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_00310040; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031003C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.budget -= 1;
L_00310030:
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310070; } }
L_0031003C:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310040:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00310064; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310064; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310070; } }
L_00310064:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00310070:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00310074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031007Cu);  if (depth < kMaxDepth) unit_0083(c, 164u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0031007Cu) [[unlikely]] return; }
L_0031007C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310084u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00310084u) [[unlikely]] return; }
L_00310084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00310098; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00310090:
    st16((c.r[19].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00310094:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00310098:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003100D0:
    set32(c.r[29], c.r[29].w[0] - 336u);
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
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1832u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00310820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031012Cu);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x0031012Cu) [[unlikely]] return; }
L_0031012C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310134u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310134u) [[unlikely]] return; }
L_00310134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310148u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310148u) [[unlikely]] return; }
L_00310148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310150u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00310150u) [[unlikely]] return; }
L_00310150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310158u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310158u) [[unlikely]] return; }
L_00310158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310168u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310168u) [[unlikely]] return; }
L_00310168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310170u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00310170u) [[unlikely]] return; }
L_00310170:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310560; } }
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00310538; } }
L_00310188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 4u);  goto L_00310530; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031052C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031052C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0031052C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0031052C; } }
    c.f[1] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[23], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 84u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310234u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00310234u) [[unlikely]] return; }
L_00310234:
    c.f[1] = ld32((c.r[23].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310244u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00310244u) [[unlikely]] return; }
L_00310244:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031052C; } }
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 184u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x003102B0u) [[unlikely]] return; }
L_003102B0:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102C0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x003102C0u) [[unlikely]] return; }
L_003102C0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031052C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102D8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003102D8u) [[unlikely]] return; }
L_003102D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102E0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003102E0u) [[unlikely]] return; }
L_003102E0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x003102ECu) [[unlikely]] return; }
L_003102EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102F4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003102F4u) [[unlikely]] return; }
L_003102F4:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310300u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310300u) [[unlikely]] return; }
L_00310300:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310310u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00310310u) [[unlikely]] return; }
L_00310310:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_0031052C; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031052C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031033Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0031033Cu) [[unlikely]] return; }
L_0031033C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310344u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310344u) [[unlikely]] return; }
L_00310344:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310350u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00310350u) [[unlikely]] return; }
L_00310350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310358u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310358u) [[unlikely]] return; }
L_00310358:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310364u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310364u) [[unlikely]] return; }
L_00310364:
    c.f[13] = ld32((c.r[22].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310374u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310374u) [[unlikely]] return; }
L_00310374:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003103A0; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031052C; } }
L_003103A0:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103ACu); c.f[13] = ld32((c.r[23].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x003103ACu) [[unlikely]] return; }
L_003103AC:
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103BCu); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x003103BCu) [[unlikely]] return; }
L_003103BC:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_003103EC; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031052C; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_003103EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103F4u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003103F4u) [[unlikely]] return; }
L_003103F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103FCu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003103FCu) [[unlikely]] return; }
L_003103FC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310408u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00310408u) [[unlikely]] return; }
L_00310408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310410u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310410u) [[unlikely]] return; }
L_00310410:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031041Cu); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0031041Cu) [[unlikely]] return; }
L_0031041C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_00310448; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_00310470; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_00310448:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00310464; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00310464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_003104B4; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003104B0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_003104A8; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_003104A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
L_003104B0:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_003104B4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003104F4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003104F0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_003104E8; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_003104E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
L_003104F0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_003104F4:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_00310510; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310514; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_00310510:
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00310514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031051Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 165u, depth + 1u); else { c.pc = 0x0030EE10u; return; } if (c.pc != 0x0031051Cu) [[unlikely]] return; }
L_0031051C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310524u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00310524u) [[unlikely]] return; }
L_00310524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031082C; } }
L_0031052C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00310530:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_00310538:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310188u | kUnwind; return; } goto L_00310188; } }
    c.budget -= 1;
L_00310560:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0031082C; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_00310578:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_0031059C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310578u | kUnwind; return; } goto L_00310578; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_0031059C:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031060Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031060Cu) [[unlikely]] return; }
L_0031060C:
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031061Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0031061Cu) [[unlikely]] return; }
L_0031061C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310628u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x00310628u) [[unlikely]] return; }
L_00310628:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00310828; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310650u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310650u) [[unlikely]] return; }
L_00310650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310658u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310658u) [[unlikely]] return; }
L_00310658:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310664u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00310664u) [[unlikely]] return; }
L_00310664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031066Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0031066Cu) [[unlikely]] return; }
L_0031066C:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310678u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310678u) [[unlikely]] return; }
L_00310678:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310688u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00310688u) [[unlikely]] return; }
L_00310688:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00310828; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00310828; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106B8u); st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003106B8u) [[unlikely]] return; }
L_003106B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106C0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003106C0u) [[unlikely]] return; }
L_003106C0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x003106CCu) [[unlikely]] return; }
L_003106CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106D4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003106D4u) [[unlikely]] return; }
L_003106D4:
    c.f[13] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106E0u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x003106E0u) [[unlikely]] return; }
L_003106E0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00310704; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031071C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 53248ull;  if (t) { goto L_00310730; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031072C; } }
L_0031071C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310778; } }
L_0031072C:
    c.r[2].d[0] = 0ull | 53248ull;
    c.budget -= 1;
L_00310730:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_00310750; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031076C; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00310750:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0031077C; } }
    c.r[1].d[0] = 0ull | 45056ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310778; } }
L_0031076C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00310778:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0031077C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_00310794; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003107B0; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 1;
L_00310794:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003107C4; } }
    c.r[1].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003107C0; } }
L_003107B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310804; } }
L_003107C0:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 1;
L_003107C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_003107DC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003107F8; } }
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_003107DC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_00310808; } }
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310804; } }
L_003107F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[19].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00310804:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_00310808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310810u);  if (depth < kMaxDepth) unit_0083(c, 165u, depth + 1u); else { c.pc = 0x0030EE10u; return; } if (c.pc != 0x00310810u) [[unlikely]] return; }
L_00310810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310818u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00310818u) [[unlikely]] return; }
L_00310818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031082C; } }
L_00310820:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00310828:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031082C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00310860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    set32(c.r[4], c.r[4].w[0] + 8320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031087Cu); st32((c.r[29].w[0] + 24u), c.f[12]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031087Cu) [[unlikely]] return; }
L_0031087C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310888u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310888u) [[unlikely]] return; }
L_00310888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310890u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00310890u) [[unlikely]] return; }
L_00310890:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003108A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1839u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_003108F0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00310D04; } }
L_003108F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1844u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_003109AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310910u); st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310910u) [[unlikely]] return; }
L_00310910:
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310934u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310934u) [[unlikely]] return; }
L_00310934:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.budget -= 3;
L_00310940:
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[19].w[0] + 1768u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1760u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1764u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1768u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031096Cu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031096Cu) [[unlikely]] return; }
L_0031096C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031097Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0031097Cu) [[unlikely]] return; }
L_0031097C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310988u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310988u) [[unlikely]] return; }
L_00310988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310990u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310990u) [[unlikely]] return; }
L_00310990:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031099Cu); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0031099Cu) [[unlikely]] return; }
L_0031099C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00310C5C; } }
L_003109AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 12289ll ? 1ull : 0ull;  if (t) { goto L_00310C60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003109D8:
    set32(c.r[5], ld32((c.r[19].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00310C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109ECu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x003109ECu) [[unlikely]] return; }
L_003109EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109F4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 157u, depth + 1u); else { c.pc = 0x00311410u; return; } if (c.pc != 0x003109F4u) [[unlikely]] return; }
L_003109F4:
    c.f[0] = ld32((c.r[19].w[0] + 1760u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1764u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1768u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A18u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310A18u) [[unlikely]] return; }
L_00310A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A28u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310A28u) [[unlikely]] return; }
L_00310A28:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A34u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310A34u) [[unlikely]] return; }
L_00310A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A3Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310A3Cu) [[unlikely]] return; }
L_00310A3C:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A48u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310A48u) [[unlikely]] return; }
L_00310A48:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00310C5C; } }
L_00310A58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_00310A68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00310A8C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00310A88; } }
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 2;
L_00310A88:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00310A8C:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310A68u | kUnwind; return; } goto L_00310A68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00310C5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[4].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310AB0u); st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310AB0u) [[unlikely]] return; }
L_00310AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310AB8u); set32(c.r[4], ld32((c.r[19].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00310AB8u) [[unlikely]] return; }
L_00310AB8:
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310ADCu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310ADCu) [[unlikely]] return; }
L_00310ADC:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310AFCu); st32((c.r[19].w[0] + 1768u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310AFCu) [[unlikely]] return; }
L_00310AFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310B0Cu) [[unlikely]] return; }
L_00310B0C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B18u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310B18u) [[unlikely]] return; }
L_00310B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B20u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310B20u) [[unlikely]] return; }
L_00310B20:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B2Cu); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310B2Cu) [[unlikely]] return; }
L_00310B2C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00310C5C; } }
L_00310B3C:
    set32(c.r[20], ld32((c.r[19].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00310C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B50u);  if (depth < kMaxDepth) unit_0052(c, 202u, depth + 1u); else { c.pc = 0x0024ABE0u; return; } if (c.pc != 0x00310B50u) [[unlikely]] return; }
L_00310B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[2], c.r[0]);  if (t) { goto L_00310C5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[18].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B68u); st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310B68u) [[unlikely]] return; }
L_00310B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B7Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310B7Cu) [[unlikely]] return; }
L_00310B7C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B88u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310B88u) [[unlikely]] return; }
L_00310B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310B90u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310B90u) [[unlikely]] return; }
L_00310B90:
    set32(c.r[20], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310BA0u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310BA0u) [[unlikely]] return; }
L_00310BA0:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[19].w[0] + 1748u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[18].w[0] + 8320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310BC0u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310BC0u) [[unlikely]] return; }
L_00310BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310BC8u); c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00310BC8u) [[unlikely]] return; }
L_00310BC8:
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310BE8u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310BE8u) [[unlikely]] return; }
L_00310BE8:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[16].w[0] + 144u);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[19].w[0] + 1768u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1760u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1764u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1768u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C20u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310C20u) [[unlikely]] return; }
L_00310C20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C30u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00310C30u) [[unlikely]] return; }
L_00310C30:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C3Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310C3Cu) [[unlikely]] return; }
L_00310C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C44u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00310C44u) [[unlikely]] return; }
L_00310C44:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310C50u); c.f[13] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00310C50u) [[unlikely]] return; }
L_00310C50:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
L_00310C5C:
    c.r[1].d[0] = c.r[17].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310C60:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00310C78; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00310C8C; } }
L_00310C78:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310CB0; } }
    c.r[3].d[0] = c.r[17].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310C8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00310CB4; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310CB0; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00310CB0:
    c.r[3].d[0] = c.r[17].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00310CB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_00310CDC; } }
    c.r[1].d[0] = c.r[17].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310CD8; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00310D04; } }
L_00310CD8:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_00310CDC:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00310D04; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00310D04; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[19].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00310D04:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00310D30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00310DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[4], c.r[5].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310D8Cu); st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00310D8Cu) [[unlikely]] return; }
L_00310D8C:
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[17], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310DB0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00310DB0u) [[unlikely]] return; }
L_00310DB0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1768u), c.f[0]);  if (t) { goto L_00311304; } }
L_00310DCC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311238; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310DF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00310F08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00310F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E14u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00310E14u) [[unlikely]] return; }
L_00310E14:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[20].w[0] + 1740u), c.f[0]);
    c.f[0] = c.f[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 17u);
    st32((c.r[20].w[0] + 1740u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_00310E78; } }
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1740u), c.f[0]);  if (t) { goto L_00310E98; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00310E78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310E98; } }
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 1740u), c.f[0]);
    c.budget -= 6;
L_00310E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00310EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310EB0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00310EB0u) [[unlikely]] return; }
L_00310EB0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (t) { goto L_00310EF0; } }
L_00310EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310ED0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00310ED0u) [[unlikely]] return; }
L_00310ED0:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1748u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.budget -= 8;
L_00310EF0:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310EFCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x00310EFCu) [[unlikely]] return; }
L_00310EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310F04:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00310F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310F10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00310F80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00310F7C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 13584u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F48u); st32((c.r[20].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00310F48u) [[unlikely]] return; }
L_00310F48:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1748u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F74u); st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x00310F74u) [[unlikely]] return; }
L_00310F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310F7C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00310F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310F88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00310FD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00310FD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FACu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00310FACu) [[unlikely]] return; }
L_00310FAC:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FCCu); st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x00310FCCu) [[unlikely]] return; }
L_00310FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310FD4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00310FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00310FE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0031103C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311004u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00311004u) [[unlikely]] return; }
L_00311004:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1748u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311030u); st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x00311030u) [[unlikely]] return; }
L_00311030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00311038:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0031103C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00311044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
L_00311058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0031107C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311078; } }
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 2;
L_00311078:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0031107C:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311058u | kUnwind; return; } goto L_00311058; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[4].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110A0u); st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003110A0u) [[unlikely]] return; }
L_003110A0:
    st32((c.r[20].w[0] + 1748u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110ACu); set32(c.r[4], ld32((c.r[20].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003110ACu) [[unlikely]] return; }
L_003110AC:
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110D0u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003110D0u) [[unlikely]] return; }
L_003110D0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1768u), c.f[0]);  if (t) { goto L_00311238; } }
L_003110EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00311148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311110u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00311110u) [[unlikely]] return; }
L_00311110:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1748u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 1748u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031113Cu); st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00311330u; return; } if (c.pc != 0x0031113Cu) [[unlikely]] return; }
L_0031113C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00311144:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00311148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311238; } }
L_00311150:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00311238; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031116Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 202u, depth + 1u); else { c.pc = 0x0024ABE0u; return; } if (c.pc != 0x0031116Cu) [[unlikely]] return; }
L_0031116C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (t) { goto L_00311238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    set32(c.r[4], c.r[19].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311184u); st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00311184u) [[unlikely]] return; }
L_00311184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311194u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00311194u) [[unlikely]] return; }
L_00311194:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111A0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003111A0u) [[unlikely]] return; }
L_003111A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111A8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x003111A8u) [[unlikely]] return; }
L_003111A8:
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111B8u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x003111B8u) [[unlikely]] return; }
L_003111B8:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111CCu); c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x003111CCu) [[unlikely]] return; }
L_003111CC:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1748u)));
    set32(c.r[4], c.r[19].w[0] + 8320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111F0u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003111F0u) [[unlikely]] return; }
L_003111F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111F8u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003111F8u) [[unlikely]] return; }
L_003111F8:
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311218u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00311218u) [[unlikely]] return; }
L_00311218:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1768u), c.f[0]);  if (t) { goto L_00311238; } }
L_00311234:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00311238:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00311304; } }
    set32(c.r[3], 0u + 60u);
    st16((c.r[20].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
L_00311258:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0031127C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311278; } }
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 2;
L_00311278:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0031127C:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311258u | kUnwind; return; } goto L_00311258; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003112EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[4].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112A0u); st32((c.r[20].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003112A0u) [[unlikely]] return; }
L_003112A0:
    st32((c.r[20].w[0] + 1748u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112ACu); set32(c.r[4], ld32((c.r[20].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003112ACu) [[unlikely]] return; }
L_003112AC:
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[17], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112D0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003112D0u) [[unlikely]] return; }
L_003112D0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1768u), c.f[0]);  if (t) { goto L_00311304; } }
L_003112EC:
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[20].w[0] + 1768u), c.f[0]);
    c.budget -= 6;
L_00311304:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00311330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003113EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311374u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00311374u) [[unlikely]] return; }
L_00311374:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311384u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00311384u) [[unlikely]] return; }
L_00311384:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311390u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00311390u) [[unlikely]] return; }
L_00311390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311398u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00311398u) [[unlikely]] return; }
L_00311398:
    set32(c.r[16], c.r[29].w[0] + 68u);
    set32(c.r[18], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[14] = ld32((c.r[18].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003113B0u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x003113B0u) [[unlikely]] return; }
L_003113B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003113B8u); set32(c.r[4], ld32((c.r[17].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003113B8u) [[unlikely]] return; }
L_003113B8:
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1740u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003113D4u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003113D4u) [[unlikely]] return; }
L_003113D4:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 1768u), c.f[0]);
    c.budget -= 6;
L_003113EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00311410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_003115C4; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003115C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[0] = ld32((c.r[20].w[0] + 1760u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[1] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = ld32((c.r[20].w[0] + 1764u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = ld32((c.r[20].w[0] + 1768u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x003114B4u) [[unlikely]] return; }
L_003114B4:
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x003114C4u) [[unlikely]] return; }
L_003114C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003115C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[0] = ld32((c.r[20].w[0] + 1760u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[2].w[0] + 592u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 596u));
    c.f[0] = ld32((c.r[20].w[0] + 1764u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[0] = ld32((c.r[20].w[0] + 1768u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031151Cu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0031151Cu) [[unlikely]] return; }
L_0031151C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311524u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00311524u) [[unlikely]] return; }
L_00311524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311534u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00311534u) [[unlikely]] return; }
L_00311534:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311540u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00311540u) [[unlikely]] return; }
L_00311540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311548u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00311548u) [[unlikely]] return; }
L_00311548:
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311554u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00311554u) [[unlikely]] return; }
L_00311554:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311570u); st32((c.r[20].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00311570u) [[unlikely]] return; }
L_00311570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311578u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00311578u) [[unlikely]] return; }
L_00311578:
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[14] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311588u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00311588u) [[unlikely]] return; }
L_00311588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311590u); set32(c.r[4], ld32((c.r[20].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00311590u) [[unlikely]] return; }
L_00311590:
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 1740u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003115ACu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003115ACu) [[unlikely]] return; }
L_003115AC:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[20].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[20].w[0] + 1768u), c.f[0]);
    c.budget -= 6;
L_003115C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003115F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00311618; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00311628; } }
L_00311618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311620u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0082(c, 128u, depth + 1u); else { c.pc = 0x0030B2A0u; return; } if (c.pc != 0x00311620u) [[unlikely]] return; }
L_00311620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00311758; } }
L_00311628:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00311754; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311754; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 27408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0031167C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311684u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 208u, depth + 1u); else { c.pc = 0x003119C0u; return; } if (c.pc != 0x00311684u) [[unlikely]] return; }
L_00311684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031168Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x0031168Cu) [[unlikely]] return; }
L_0031168C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_00311694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031169Cu);  if (depth < kMaxDepth) unit_0084(c, 224u, depth + 1u); else { c.pc = 0x00311CE0u; return; } if (c.pc != 0x0031169Cu) [[unlikely]] return; }
L_0031169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_003116A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116ACu);  if (depth < kMaxDepth) unit_0084(c, 225u, depth + 1u); else { c.pc = 0x00311CF0u; return; } if (c.pc != 0x003116ACu) [[unlikely]] return; }
L_003116AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x003116B4u) [[unlikely]] return; }
L_003116B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_003116BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116C4u);  if (depth < kMaxDepth) unit_0084(c, 244u, depth + 1u); else { c.pc = 0x00312430u; return; } if (c.pc != 0x003116C4u) [[unlikely]] return; }
L_003116C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_003116CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116D4u);  if (depth < kMaxDepth) unit_0084(c, 245u, depth + 1u); else { c.pc = 0x00312440u; return; } if (c.pc != 0x003116D4u) [[unlikely]] return; }
L_003116D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x003116DCu) [[unlikely]] return; }
L_003116DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_003116E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116ECu);  if (depth < kMaxDepth) unit_0084(c, 256u, depth + 1u); else { c.pc = 0x00312820u; return; } if (c.pc != 0x003116ECu) [[unlikely]] return; }
L_003116EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003116F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x003116F4u) [[unlikely]] return; }
L_003116F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_003116FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311704u);  if (depth < kMaxDepth) unit_0084(c, 268u, depth + 1u); else { c.pc = 0x00312B60u; return; } if (c.pc != 0x00311704u) [[unlikely]] return; }
L_00311704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_0031170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311714u);  if (depth < kMaxDepth) unit_0084(c, 269u, depth + 1u); else { c.pc = 0x00312B70u; return; } if (c.pc != 0x00311714u) [[unlikely]] return; }
L_00311714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_0031171C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311724u);  if (depth < kMaxDepth) unit_0084(c, 270u, depth + 1u); else { c.pc = 0x00312B80u; return; } if (c.pc != 0x00311724u) [[unlikely]] return; }
L_00311724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031172Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x0031172Cu) [[unlikely]] return; }
L_0031172C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_00311734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031173Cu);  if (depth < kMaxDepth) unit_0084(c, 281u, depth + 1u); else { c.pc = 0x00312E40u; return; } if (c.pc != 0x0031173Cu) [[unlikely]] return; }
L_0031173C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311754; } }
L_00311744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031174Cu);  if (depth < kMaxDepth) unit_0084(c, 282u, depth + 1u); else { c.pc = 0x00312E50u; return; } if (c.pc != 0x0031174Cu) [[unlikely]] return; }
L_0031174C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311754u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 201u, depth + 1u); else { c.pc = 0x00311770u; return; } if (c.pc != 0x00311754u) [[unlikely]] return; }
L_00311754:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00311758:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00311770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003119A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003119A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1000u);  goto L_0031181C; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1852u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003117C8; } }
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1845u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1846u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003119A0; } }
L_003117C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003117EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003117EC; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003117EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003119A0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1862u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003119A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1852u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003119A0; } }
    set32(c.r[2], 0u + 1000u);
    c.budget -= 1;
L_0031181C:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 1828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.f[4] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[5] = ld32((c.r[2].w[0] + 592u));
    c.f[1] = ld32((c.r[2].w[0] + 600u));
    c.f[3] = ld32((c.r[2].w[0] + 596u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311858u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00311858u) [[unlikely]] return; }
L_00311858:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311864u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00311864u) [[unlikely]] return; }
L_00311864:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031193C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 33u);  if (t) { goto L_003118C0; } }
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x003118A8u) [[unlikely]] return; }
L_003118A8:
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x003118B4u) [[unlikely]] return; }
L_003118B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));  if (t) { goto L_003118D8; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 1;
L_003118C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x003118C8u) [[unlikely]] return; }
L_003118C8:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003118D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x003118D4u) [[unlikely]] return; }
L_003118D4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.budget -= 1;
L_003118D8:
    set32(c.r[4], 0u - 29184u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[4].d[0] = c.r[4].d[0] | 20480ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003119A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003119A0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003119A0; } }
L_0031193C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003119A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003119A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003119A0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003119A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003119C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00311C08; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00311A2C; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00311A00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_00311C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00311A00:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A0Cu);  if (depth < kMaxDepth) unit_0084(c, 301u, depth + 1u); else { c.pc = 0x00313210u; return; } if (c.pc != 0x00311A0Cu) [[unlikely]] return; }
L_00311A0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00311A24u) [[unlikely]] return; }
L_00311A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311C88; } }
L_00311A2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00311A40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x00311A5Cu) [[unlikely]] return; }
L_00311A5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311A74; } }
L_00311A64:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A74u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00311A74u) [[unlikely]] return; }
L_00311A74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00311BDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311A88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00311A88u) [[unlikely]] return; }
L_00311A88:
    set32(c.r[4], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311C88; } }
    c.f[1] = ld32((c.r[4].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00311C88; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311C88; } }
    st32((c.r[16].w[0] + 1824u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00311ADC; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00311ADC:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311AE8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00311AE8u) [[unlikely]] return; }
L_00311AE8:
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12208u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_00311BC4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00311B40:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00311BC0; } }
L_00311B54:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8192u);
    c.r[4].d[0] = c.r[4].d[0] | 8448ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311BC0; } }
L_00311B6C:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 1024u);
    c.r[4].d[0] = c.r[4].d[0] | 1280ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311BC0; } }
L_00311B84:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 2048u);
    c.r[4].d[0] = c.r[4].d[0] | 2304ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311BC0; } }
L_00311B9C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00311BC0; } }
L_00311BB0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00311BC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00311BC4:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00311C88; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00311BDC:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x00311BE8u) [[unlikely]] return; }
L_00311BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00311C00u) [[unlikely]] return; }
L_00311C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311C88; } }
L_00311C08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00311C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00311C88; } }
L_00311C28:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00311C54; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00311C88; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00311C54:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00311C88; } }
L_00311C70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311C88; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00311C88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_00311C8C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00311CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00311C9Cu) [[unlikely]] return; }
L_00311C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311CC4; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311CC4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00311CB4:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00311CC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00311CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00311CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_003120FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00312088; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00311D70; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00311D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1858u)));  if (t) { goto L_003123DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00311D44:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D50u);  if (depth < kMaxDepth) unit_0084(c, 306u, depth + 1u); else { c.pc = 0x00313310u; return; } if (c.pc != 0x00311D50u) [[unlikely]] return; }
L_00311D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D68u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00311D68u) [[unlikely]] return; }
L_00311D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003123D8; } }
L_00311D70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311D84; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00311D84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00311DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DA0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x00311DA0u) [[unlikely]] return; }
L_00311DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311DB4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00311DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DB4u); st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00311DB4u) [[unlikely]] return; }
L_00311DB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00311FD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DC8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00311DC8u) [[unlikely]] return; }
L_00311DC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00311E08; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311DF8u); st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00311DF8u) [[unlikely]] return; }
L_00311DF8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00311E08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00311E70; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00311E60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00311E50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));  if (t) { goto L_00311E80; } }
L_00311E40:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311E7C; } }
L_00311E50:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311E7C; } }
L_00311E60:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00311E7C; } }
L_00311E70:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00311E7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 1;
L_00311E80:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00311EA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003123D8; } }
    c.f[1] = ld32((c.r[4].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003123D8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003123D8; } }
    st32((c.r[18].w[0] + 1824u), c.r[4].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00311F18; } }
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00311EF0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00311F0C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_00311F0C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
L_00311F18:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311EF0u | kUnwind; return; } goto L_00311EF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00311F40; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00311F40:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311F4Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00311F4Cu) [[unlikely]] return; }
L_00311F4C:
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12080u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00311F94; } }
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00311FBC; } }
L_00311F94:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00311FBC:
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003123D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00311FD0:
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00312008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FE8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x00311FE8u) [[unlikely]] return; }
L_00311FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312000u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00312000u) [[unlikely]] return; }
L_00312000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003123D8; } }
L_00312008:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312078; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312068; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312058; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003123D8; } }
L_00312048:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312058:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312068:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312078:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8448ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003120E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003120A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003123D8; } }
L_003120A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003120C4; }
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003123D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003120C4:
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003123D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003123D8; } }
L_003120E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003123D8; } }
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003123D8; } }
L_003120FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003123D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 27488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00312128:
    set32(c.r[3], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00312164; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0031215C; }
    set32(c.r[3], 0u + 45u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0031215C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312164:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    c.r[5].d[0] = c.r[5].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312184:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003121A0; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003121A0:
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003123D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_003121C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003123D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003121F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003123D8; } }
L_003121F0:
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003123D8; } }
L_003121FC:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312230; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312230; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312230:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312264; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312264; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312264:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312298; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312298; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_00312298:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_003122D0; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003122CC; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_003122CC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_003122D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_003122D8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312300; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312300; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0031235C; } }
L_00312300:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312328; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312328; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0031235C; } }
L_00312328:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00312350; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00312350; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0031235C; } }
L_00312350:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0031235C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003123D8; } }
L_0031236C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_003123A8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0031237C:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0031239C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 5;
L_0031239C:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_003123A8:
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031237Cu | kUnwind; return; } goto L_0031237C; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003123D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003123D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1858u)));
    c.budget -= 1;
L_003123DC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003123ECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x003123ECu) [[unlikely]] return; }
L_003123EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312414; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00312414; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312404:
    st16((c.r[18].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00312414:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00312430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031272C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003126B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00312624; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003124C0; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00312494; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_003127D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00312494:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003124A0u);  if (depth < kMaxDepth) unit_0084(c, 301u, depth + 1u); else { c.pc = 0x00313210u; return; } if (c.pc != 0x003124A0u) [[unlikely]] return; }
L_003124A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003124B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x003124B8u) [[unlikely]] return; }
L_003124B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127D0; } }
L_003124C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003124D4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003124D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003124F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003124F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x003124F0u) [[unlikely]] return; }
L_003124F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312508; } }
L_003124F8:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312508u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00312508u) [[unlikely]] return; }
L_00312508:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003125F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031251Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x0031251Cu) [[unlikely]] return; }
L_0031251C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003125FC; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003125F8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003125F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43110000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 24576u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312574u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x00312574u) [[unlikely]] return; }
L_00312574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_00312598; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003125E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.budget -= 1;
L_00312598:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12288u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003125ACu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x003125ACu) [[unlikely]] return; }
L_003125AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003125D0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003125E0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003125D0:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003125E0:
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003125F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003125F4:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003125F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003125FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312604u);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x00312604u) [[unlikely]] return; }
L_00312604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031261Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x0031261Cu) [[unlikely]] return; }
L_0031261C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127D0; } }
L_00312624:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312684; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127D0; } }
L_00312644:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312660; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312660:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003127D0; } }
    set32(c.r[3], 0u + 64u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003127D0; } }
L_00312684:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003126B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003127D0; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003126B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003127D0; } }
L_003126B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312710; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003126D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127D0; } }
L_003126D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003126F4; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003126F4:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003127D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003127D0; } }
L_00312710:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003127D0; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
L_0031272C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312788; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031274C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003127D0; } }
L_0031274C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312768; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312768:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003127D0; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003127D0; } }
L_00312788:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003127A4; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003127D0; } }
L_003127A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003127CC; }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003127D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003127CC:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003127D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_003127D4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003127FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x003127E4u) [[unlikely]] return; }
L_003127E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031280C; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0031280C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003127FC:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0031280C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00312820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00312A84; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00312A10; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00312894; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00312868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_00312B18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00312868:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312874u);  if (depth < kMaxDepth) unit_0084(c, 301u, depth + 1u); else { c.pc = 0x00313210u; return; } if (c.pc != 0x00312874u) [[unlikely]] return; }
L_00312874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031288Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x0031288Cu) [[unlikely]] return; }
L_0031288C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312B14; } }
L_00312894:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003128A8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003128A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003128CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x003128C4u) [[unlikely]] return; }
L_003128C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003128DC; } }
L_003128CC:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128DCu); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x003128DCu) [[unlikely]] return; }
L_003128DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003129E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x003128F0u) [[unlikely]] return; }
L_003128F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003129E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312904u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0083(c, 217u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x00312904u) [[unlikely]] return; }
L_00312904:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003129E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003129E4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003129E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312960u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x00312960u) [[unlikely]] return; }
L_00312960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_00312984; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003129CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.budget -= 1;
L_00312984:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 16384u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312998u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x00312998u) [[unlikely]] return; }
L_00312998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003129B8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003129CC; } }
L_003129B8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003129CC:
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003129E4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003129E0:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003129E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003129E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129F0u);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x003129F0u) [[unlikely]] return; }
L_003129F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00312A08u) [[unlikely]] return; }
L_00312A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312B14; } }
L_00312A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312A68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312B14; } }
L_00312A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312A4C; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312B14; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312A4C:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00312B14; } }
L_00312A68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00312B14; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312B14; } }
L_00312A84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312AE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312B14; } }
L_00312AA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312AC0; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312B14; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312AC0:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312B14; } }
    set32(c.r[3], 0u + 64u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00312B14; } }
L_00312AE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312B10; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00312B14; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312B14; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312B10:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00312B14:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_00312B18:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312B40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00312B28u) [[unlikely]] return; }
L_00312B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312B50; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00312B50; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312B40:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00312B50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00312B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00312D7C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00312BEC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00312BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_00312DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00312BC0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312BCCu);  if (depth < kMaxDepth) unit_0084(c, 301u, depth + 1u); else { c.pc = 0x00313210u; return; } if (c.pc != 0x00312BCCu) [[unlikely]] return; }
L_00312BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312BE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00312BE4u) [[unlikely]] return; }
L_00312BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312DEC; } }
L_00312BEC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C00; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00312C00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x00312C1Cu) [[unlikely]] return; }
L_00312C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C34; } }
L_00312C24:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C34u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00312C34u) [[unlikely]] return; }
L_00312C34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00312D4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00312C48u) [[unlikely]] return; }
L_00312C48:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00312D54; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00312D50; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CA0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x00312CA0u) [[unlikely]] return; }
L_00312CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312D50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00312CBC; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00312CBC:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CC8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00312CC8u) [[unlikely]] return; }
L_00312CC8:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11696u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312D24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00312D34; } }
L_00312D14:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00312D30; } }
L_00312D24:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00312D30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00312D34:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00312D50; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00312D4C:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00312D50:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00312D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D5Cu);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x00312D5Cu) [[unlikely]] return; }
L_00312D5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00312D74u) [[unlikely]] return; }
L_00312D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312DEC; } }
L_00312D7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00312DD4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312DEC; } }
L_00312D9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312DB8; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00312DEC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312DB8:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312DEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00312DEC; } }
L_00312DD4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00312DEC; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00312DEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_00312DF0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00312E18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00312E00u) [[unlikely]] return; }
L_00312E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E28; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00312E28; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00312E18:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00312E28:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00312E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00312E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031304C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00312EBC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00312E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_003130C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00312E90:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E9Cu);  if (depth < kMaxDepth) unit_0084(c, 301u, depth + 1u); else { c.pc = 0x00313210u; return; } if (c.pc != 0x00312E9Cu) [[unlikely]] return; }
L_00312E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00312EB4u) [[unlikely]] return; }
L_00312EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003130BC; } }
L_00312EBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312ED0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00312ED0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312EF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 35u, depth + 1u); else { c.pc = 0x0024CA50u; return; } if (c.pc != 0x00312EECu) [[unlikely]] return; }
L_00312EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312F04; } }
L_00312EF4:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F04u); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x00312F04u) [[unlikely]] return; }
L_00312F04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0031301C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00312F18u) [[unlikely]] return; }
L_00312F18:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00313024; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00313020; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 8192u);
    st32((c.r[16].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F70u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 8u, depth + 1u); else { c.pc = 0x0024C2C0u; return; } if (c.pc != 0x00312F70u) [[unlikely]] return; }
L_00312F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313020; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00312F8C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00312F8C:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F98u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00312F98u) [[unlikely]] return; }
L_00312F98:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312FF4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00312FE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00313004; } }
L_00312FE4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00313000; } }
L_00312FF4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00313000:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00313004:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313020; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0031301C:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00313020:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00313024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031302Cu);  if (depth < kMaxDepth) unit_0084(c, 293u, depth + 1u); else { c.pc = 0x00313110u; return; } if (c.pc != 0x0031302Cu) [[unlikely]] return; }
L_0031302C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313044u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 311u, depth + 1u); else { c.pc = 0x00313410u; return; } if (c.pc != 0x00313044u) [[unlikely]] return; }
L_00313044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003130BC; } }
L_0031304C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003130A4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031306C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003130BC; } }
L_0031306C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00313088; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003130BC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00313088:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003130BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003130BC; } }
L_003130A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003130BC; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003130BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_003130C0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_003130E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003130D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x003130D0u) [[unlikely]] return; }
L_003130D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003130F8; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003130F8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_003130E8:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003130F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1824u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313128u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 317u, depth + 1u); else { c.pc = 0x003135A0u; return; } if (c.pc != 0x00313128u) [[unlikely]] return; }
L_00313128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313130u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 157u, depth + 1u); else { c.pc = 0x00311410u; return; } if (c.pc != 0x00313130u) [[unlikely]] return; }
L_00313130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313138u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00313138u) [[unlikely]] return; }
L_00313138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313148u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00313148u) [[unlikely]] return; }
L_00313148:
    set32(c.r[4], c.r[16].w[0] + 1760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313154u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00313154u) [[unlikely]] return; }
L_00313154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031315Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0031315Cu) [[unlikely]] return; }
L_0031315C:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313168u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00313168u) [[unlikely]] return; }
L_00313168:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00313190; } }
    c.r[3].d[0] = 0ull | 61440ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003131CC; } }
L_00313190:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003131F4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003131F4; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003131F4; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_003131CC:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003131E8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003131F4; } }
L_003131E8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003131F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1732u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003132D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313240u);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x00313240u) [[unlikely]] return; }
L_00313240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003132CC; } }
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 1824u)));
    st32((c.r[16].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313290u); st32((c.r[16].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00313290u) [[unlikely]] return; }
L_00313290:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1748u));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132B8u); st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 317u, depth + 1u); else { c.pc = 0x003135A0u; return; } if (c.pc != 0x003132B8u) [[unlikely]] return; }
L_003132B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 157u, depth + 1u); else { c.pc = 0x00311410u; return; } if (c.pc != 0x003132C0u) [[unlikely]] return; }
L_003132C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_003132FC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003132CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003132F8; } }
L_003132D4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003132F8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003132F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003132FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1732u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.f[20] = c.f[12];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003133D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313340u);  if (depth < kMaxDepth) unit_0052(c, 180u, depth + 1u); else { c.pc = 0x0024A530u; return; } if (c.pc != 0x00313340u) [[unlikely]] return; }
L_00313340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003133C8; } }
    st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 1824u)));
    st32((c.r[16].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031338Cu); st32((c.r[16].w[0] + 1740u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0031338Cu) [[unlikely]] return; }
L_0031338C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1748u));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133B4u); st32((c.r[16].w[0] + 1748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 317u, depth + 1u); else { c.pc = 0x003135A0u; return; } if (c.pc != 0x003133B4u) [[unlikely]] return; }
L_003133B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 157u, depth + 1u); else { c.pc = 0x00311410u; return; } if (c.pc != 0x003133BCu) [[unlikely]] return; }
L_003133BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_003133F8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003133C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003133F4; } }
L_003133D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1732u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1732u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003133F4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003133F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003133F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00313410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1728u)));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_003134E8; } }
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313464u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00313464u) [[unlikely]] return; }
L_00313464:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00313468:
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313480u); st32((c.r[29].w[0] + 72u), c.f[21]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00313480u) [[unlikely]] return; }
L_00313480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313488u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00313488u) [[unlikely]] return; }
L_00313488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003134DC; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031349Cu); st16((c.r[17].w[0] + 1728u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0031349Cu) [[unlikely]] return; }
L_0031349C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003134BC; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003134D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003134BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003134D4; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003134D8; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003134D4:
    st16((c.r[17].w[0] + 1856u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003134D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003134DC:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313468u | kUnwind; return; } goto L_00313468; } }
L_003134E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1728u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00313578; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 1728u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1856u)));
    set32(c.r[2], 0u + 4096u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0031352C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031356C; } }
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00313568; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_0031352C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313550; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313568; } }
    c.r[2].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00313568; } }
L_00313550:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313568; } }
    c.r[2].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[17].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00313568:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031356C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0031357C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00313578:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031357C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003135A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 28448u);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00313634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135F4u); st32((c.r[17].w[0] + 1740u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003135F4u) [[unlikely]] return; }
L_003135F4:
    set32(c.r[16], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1740u));
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313618u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00313618u) [[unlikely]] return; }
L_00313618:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1768u), c.f[0]);  if (t) { goto L_003136BC; } }
L_00313634:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003136BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313644u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00313644u) [[unlikely]] return; }
L_00313644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313654u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00313654u) [[unlikely]] return; }
L_00313654:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313660u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00313660u) [[unlikely]] return; }
L_00313660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313668u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00313668u) [[unlikely]] return; }
L_00313668:
    set32(c.r[16], c.r[29].w[0] + 68u);
    set32(c.r[18], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[14] = ld32((c.r[18].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313680u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00313680u) [[unlikely]] return; }
L_00313680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313688u); set32(c.r[4], ld32((c.r[17].w[0] + 1748u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00313688u) [[unlikely]] return; }
L_00313688:
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1740u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136A4u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x003136A4u) [[unlikely]] return; }
L_003136A4:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 1764u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 1768u), c.f[0]);
    c.budget -= 6;
L_003136BC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003136E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313830; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313830; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[6], c.r[3].w[0] + 25952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313720; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2068u)));
    set32(c.r[3], 0u + 62u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00313740; } }
L_00313720:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2070u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00313830; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2068u)));
    set32(c.r[3], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00313830; } }
L_00313740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1864u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003137C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00313760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313830; } }
L_00313760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[8], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
L_00313770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_003137B4; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003137B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_003137B0; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_003137B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003137B0; } }
    st8((c.r[4].w[0] + 1864u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_003137B0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003137B4:
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313770u | kUnwind; return; } goto L_00313770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313830; } }
L_003137C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[2], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 5;
L_003137DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00313824; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00313820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00313820; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 531u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00313820; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8438u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313820; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_00313820:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00313824:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003137DCu | kUnwind; return; } goto L_003137DC; } }
L_00313830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00313840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00313860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003138F8; } }
L_00313860:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003138F8; } }
L_00313878:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031388C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003138F8; } }
L_0031388C:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003138B4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003138B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003138F8; } }
L_003138B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003138B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138BCu);  if (depth < kMaxDepth) unit_0084(c, 341u, depth + 1u); else { c.pc = 0x00313B60u; return; } if (c.pc != 0x003138BCu) [[unlikely]] return; }
L_003138BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003138D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003138F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003138D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138D8u);  if (depth < kMaxDepth) unit_0084(c, 337u, depth + 1u); else { c.pc = 0x00313A30u; return; } if (c.pc != 0x003138D8u) [[unlikely]] return; }
L_003138D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003138EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003138F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003138EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003138F4u);  if (depth < kMaxDepth) unit_0084(c, 334u, depth + 1u); else { c.pc = 0x00313910u; return; } if (c.pc != 0x003138F4u) [[unlikely]] return; }
L_003138F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003138F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00313910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313A20; } }
L_00313930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003139A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313990; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0031396C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313974; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0031396C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00313A24; } }
L_00313974:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00313A20; } }
L_00313990:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003139A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313A20; } }
L_003139A4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003139C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_003139E0; } }
L_003139C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003139E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313A20; } }
L_003139E0:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00313A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A10u);  if (depth < kMaxDepth) unit_0084(c, 344u, depth + 1u); else { c.pc = 0x00313C80u; return; } if (c.pc != 0x00313A10u) [[unlikely]] return; }
L_00313A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313A20; } }
L_00313A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A20u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00313D70u; return; } if (c.pc != 0x00313A20u) [[unlikely]] return; }
L_00313A20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00313A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00313A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313B48; } }
L_00313A50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313AC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313AB4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313A8C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 18ull;  if (t) { goto L_00313A98; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00313A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00313B4C; } }
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 1;
L_00313A98:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00313B48; } }
L_00313AB4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313B48; } }
L_00313AC8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313AEC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_00313B04; } }
L_00313AEC:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00313B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313B48; } }
L_00313B04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00313B08:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00313B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B38u);  if (depth < kMaxDepth) unit_0084(c, 344u, depth + 1u); else { c.pc = 0x00313C80u; return; } if (c.pc != 0x00313B38u) [[unlikely]] return; }
L_00313B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313B48; } }
L_00313B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313B48u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00313D70u; return; } if (c.pc != 0x00313B48u) [[unlikely]] return; }
L_00313B48:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00313B4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00313B58:
    c.budget -= 2;
L_00313B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313C74; } }
L_00313B80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313BF4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313BE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313BBC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313BC4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00313BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00313C78; } }
L_00313BC4:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00313C74; } }
L_00313BE0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313BF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313C74; } }
L_00313BF4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313C18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_00313C30; } }
L_00313C18:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00313C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313C74; } }
L_00313C30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00313C34:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00313C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C64u);  if (depth < kMaxDepth) unit_0084(c, 344u, depth + 1u); else { c.pc = 0x00313C80u; return; } if (c.pc != 0x00313C64u) [[unlikely]] return; }
L_00313C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313C74; } }
L_00313C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C74u);  if (depth < kMaxDepth) unit_0084(c, 349u, depth + 1u); else { c.pc = 0x00313D70u; return; } if (c.pc != 0x00313C74u) [[unlikely]] return; }
L_00313C74:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00313C78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00313C80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00313CC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313D48; } }
L_00313CC8:
    set32(c.r[16], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D00u); st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x00313D00u) [[unlikely]] return; }
L_00313D00:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D10u); st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0084(c, 358u, depth + 1u); else { c.pc = 0x00313EE0u; return; } if (c.pc != 0x00313D10u) [[unlikely]] return; }
L_00313D10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D28u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 245u, depth + 1u); else { c.pc = 0x0034AF10u; return; } if (c.pc != 0x00313D28u) [[unlikely]] return; }
L_00313D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00313D48; } }
L_00313D30:
    st32((c.r[20].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00313D48:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00313D64:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 1;
    c.pc = 0x00313D68u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00313D70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 33u);
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 747u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1300u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1308u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1304u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00313E04; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313E04; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313DFC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313E08; } }
L_00313DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313E08; } }
L_00313E04:
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00313E08:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E14u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00313E14u) [[unlikely]] return; }
L_00313E14:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313E78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0084[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00313E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313E7C; } }
L_00313E48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313E7C; } }
L_00313E54:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313E7C; } }
L_00313E60:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313E7C; } }
L_00313E6C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00313E7C; } }
L_00313E78:
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00313E7C:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E88u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 358u, depth + 1u); else { c.pc = 0x00313EE0u; return; } if (c.pc != 0x00313E88u) [[unlikely]] return; }
L_00313E88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313EA0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 245u, depth + 1u); else { c.pc = 0x0034AF10u; return; } if (c.pc != 0x00313EA0u) [[unlikely]] return; }
L_00313EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00313EC0; } }
L_00313EA8:
    st32((c.r[20].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00313EC0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00313EE0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 746u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313FC4; } }
L_00313F18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 810u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00313F74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00313F74; } }
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 784u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00313F74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00313FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_00313FA8; } }
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u - 2u);
    c.budget -= 2;
L_00313FA8:
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 732u), 0u);  if (t) { goto L_00313FC0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00313FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313FC4; } }
L_00313FC0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00313FC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00313FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00314000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00314000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0085(c, 1u, depth);
}

}
